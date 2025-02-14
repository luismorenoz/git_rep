#include "Registration.h"
#include "Condition.h"
#include <iostream>
#include <fstream>

// Constructor vacío
Registration::Registration() {
    code = "";
    studentCode = "";
    stage = 0;
    year = "";
}

// Constructor con parámetros
Registration::Registration(string code, string studentCode, int stage, string year) {
    this->code = code;
    this->studentCode = studentCode;
    this->stage = stage;
    this->year = year;
}

// Setters
void Registration::setCode(string code) {
    this->code = code;
}

void Registration::setStudentCode(string studentCode) {
    this->studentCode = studentCode;
}

void Registration::setStage(int stage) {
    this->stage = stage;
}

void Registration::setYear(string year) {
    this->year = year;
}

// Getters
string Registration::getCode() {
    return code;
}

string Registration::getStudentCode() {
    return studentCode;
}

int Registration::getStage() {
    return stage;
}

string Registration::getYear() {
    return year;
}

void addRegistration(RegistrationNode*& head, string code, string studentCode, int stage, string year, Condition condition, vector<string> passedCourses) {
    if (!condition.canRegister(passedCourses)) {
        cout << "No puedes matricular este curso. No cumples con los requisitos." << endl;
        return;
    }

    Registration newRegistration(code, studentCode, stage, year, condition);
    RegistrationNode* newNode = new RegistrationNode(newRegistration);

    if (head == nullptr) {
        head = newNode;
    } else {
        RegistrationNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Matrícula de " << condition.getCourseToRegister() << " realizada con éxito." << endl;
}

// Ver detalles del registro de matrícula
void viewRegistration(RegistrationNode* head, string code) {
    RegistrationNode* temp = head;
    while (temp != nullptr) {
        if (temp->data.getCode() == code) {
            cout << "Matrícula encontrada: " << endl;
            cout << "Código: " << temp->data.getCode() << endl;
            cout << "Código de Estudiante: " << temp->data.getStudentCode() << endl;
            cout << "Semestre: " << temp->data.getStage() << endl;
            cout << "Año: " << temp->data.getYear() << endl;
            cout << "Curso registrado: " << temp->data.getCondition().getCourseToRegister() << endl;
            cout << "Cursos requisitos: ";
            for (const string& prereq : temp->data.getCondition().getPrerequisites()) {
                cout << prereq << " ";
            }
            cout << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "No se encontró la matrícula con el código: " << code << endl;
}
