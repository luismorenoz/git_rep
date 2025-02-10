#include "Student.h"
#include <string>
#include <iostream>

using namespace std;


Student::Student() : Person() {  // Llama al constructor vacío de la clase base Person
    
}


Student::Student(string name, string id)
    : Person(name, id) {  // Llama al constructor de la clase base Person
   
}


void addStudent(StudentNode*& head, string name, string id) {

    Student newStudent(name, id);
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

void viewStudentDetails(StudentNode* head, string id) {

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

void updateStudentDetails(StudentNode* head, string id, string newName, string newId) {

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

void removeStudent(StudentNode*& head, string id) {



}