#include "Student.h"
#include <iostream>
using namespace std;
// Constructor vacío

Student::Student() {
    name = "";
    id = "";
    major = Course();  
    level = Course();  
}

// Constructor con parámetros
Student::Student(string name, string id, Course major, Course level) {
    this->name = name;
    this->id = id;
    this->major = major;
    this->level = level;
}

// Setters
void Student::setName(string name) {
    this->name = name;
}

void Student::setId(string id) {
    this->id = id;
}

void Student::setMajor(Course major) {
    this->major = major;
}

void Student::setLevel(Course level) {
    this->level = level;
}

// Getters
string Student::getName() {
    return name;
}

string Student::getId() {
    return id;
}

Course Student::getMajor() {
    return major;
}

Course Student::getLevel() {
    return level;
}

void addStudent(StudentNode*& head, string name, string id, Course major, Course level) {

    Student newStudent(name, id, major, level);
    StudentNode* newNode = new StudentNode(newStudent);

    if (head == nullptr) {
        head = newNode;
    }
    else {

        StudentNode* temp = head;

        while (temp->next != nullptr) {

            temp = temp->next;

        }
        temp->next = newNode;
    }

}


void showStudent(StudentNode* head, string id) {

    StudentNode* temp = head;
    while (temp != nullptr) {
        if (temp->data.getId() == id) {

            cout << "Estudiante encontrado: " << endl;
            cout << "Nombre: " << temp->data.getName() << endl;
            cout << "ID: " << temp->data.getId() << endl;
            return;
        }
        temp = temp->next;

    }

    cout << "El estudiante con la ID: " << id << " no ha sido encontrado. " << endl;

}

void updateStudent(StudentNode* head, string id, string newName, string newId) {

    StudentNode* temp = head;

    while (temp != nullptr) {
        if (temp->data.getId() == id) {

            temp->data.setName(newName);
            temp->data.setId(newId);

            cout << "Estudiante actualizado: " << endl;
            cout << "Nombre: " << temp->data.getId() << endl;
            cout << "ID: " << temp->data.getId() << endl;

        }

    }

}
void deleteStudent(StudentNode*& head, string id) {
    if (!head) return;
    if (head->data.id == id) {
        StudentNode* temp = head;
        head = head->next;
        delete temp;
        cout << "Estudiante eliminado." << endl;
        return;
    }
    StudentNode* temp = head;
    while (temp->next && temp->next->data.id != id) {
        temp = temp->next;
    }
    if (temp->next) {
        StudentNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << "Estudiante eliminado." << endl;
    } else {
        cout << "Estudiante no encontrado." << endl;
    }
}

