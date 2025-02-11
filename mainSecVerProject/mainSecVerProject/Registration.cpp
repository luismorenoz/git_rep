#include "Registration.h"
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

void addRegistration(RegistrationNode*& head, string code, string studentCode, int stage, string year) {
    cout << "Ingrese los datos solicitados: " << endl;

string fileName = "Registration.txt";

// Verificar si el archivo existe
ifstream checkFile(fileName);
bool fileExists = checkFile.good();
checkFile.close();

// Abrir el archivo en modo append
ofstream file(fileName, ios::app);
if (!file) {
	cerr << "Error al abrir el archivo." << std::endl;
	return;
}

// Si el archivo no existe, escribir la cabecera
if (!fileExists) {
    
    // PREGUNTAR!!!!!!
    
	file << "Codigo;CodigoEst;Ciclo;Year\n";
}
    Registration newRegistration(code, studentCode, stage, year);
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
}

// NECESITA REVISAR !!!!!!!!!!

	/*
	file << code << ";" << studentCode << ";" << ";" << stage << ";" << year << "\n";
	file.close();
	*/
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
            return;
        }
        temp = temp->next;
    }
    cout << "No se encontró la matrícula con el código: " << code << endl;
}

// Actualizar un registro de matrícula
void updateRegistration(RegistrationNode* head, string code, string newStudentCode, int newStage, string newYear) {
    RegistrationNode* temp = head;

    while (temp != nullptr) {
        if (temp->data.getCode() == code) {
            temp->data.setStudentCode(newStudentCode);
            temp->data.setStage(newStage);
            temp->data.setYear(newYear);

            cout << "Matrícula actualizada: " << endl;
            cout << "Código de Estudiante: " << temp->data.getStudentCode() << endl;
            cout << "Semestre: " << temp->data.getStage() << endl;
            cout << "Año: " << temp->data.getYear() << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "No se encontró la matrícula con el código: " << code << endl;
}

// Eliminar un registro de matrícula
void deleteRegistration(RegistrationNode*& head, string code) {
    RegistrationNode* temp = head;
    RegistrationNode* prev = nullptr;

    if (temp != nullptr && temp->data.getCode() == code) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data.getCode() != code) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "No se encontró la matrícula con el código: " << code << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}

