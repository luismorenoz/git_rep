#include "Professor.h"

Professor::Professor() {
    id = "";
    name = "";
    degree = "";
}

Professor::Professor(string id, string name, string degree) {
    this->id = id;
    this->name = name;
    this->degree = degree;
}
void Professor::setId(string id) {
    this->id = id;
}
void Professor::setName(string name) {
    this->name = name;
}
void Professor::setDegree(string degree) {
    this->degree = degree;
}
string Professor::getId() {
    return id;
}
string Professor::getName() {
    return name;
}
string Professor::getDegree() {
    return degree;
}

void addProfessor(ProfessorNode*& head, string id, string name, string degree) {
    Professor newProfessor(id, name, degree);
    ProfessorNode* newNode = new ProfessorNode(newProfessor);

    if (!head) {
        head = newNode;
    } else {
        ProfessorNode* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

void viewProfessorDetails(ProfessorNode* head, string id) {
    ProfessorNode* temp = head;
    while (temp) {
        if (temp->data.id == id) {
            cout << "Profesor: " << temp->data.name << ", ID: " << temp->data.id << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Profesor no encontrado." << endl;
}

void updateProfessorDetails(ProfessorNode* head, string id, string newName, string newDegree) {
    ProfessorNode* temp = head;
    while (temp) {
        if (temp->data.id == id) {
            temp->data.setName(newName);
            temp->data.setDegree(newDegree);
            cout << "Profesor actualizado." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Profesor no encontrado." << endl;
}

void removeProfessor(ProfessorNode*& head, string id) {
    if (!head) return;
    if (head->data.id == id) {
        ProfessorNode* temp = head;
        head = head->next;
        delete temp;
        cout << "Profesor eliminado." << endl;
        return;
    }
    ProfessorNode* temp = head;
    while (temp->next && temp->next->data.id != id) {
        temp = temp->next;
    }
    if (temp->next) {
        ProfessorNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << "Profesor eliminado." << endl;
    } else {
        cout << "Profesor no encontrado." << endl;
    }
}

