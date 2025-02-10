#pragma once


#include <string>
#include "Person.h"  // Incluir la clase Person

using namespace std;

class Student : public Person {  // Hereda de Person
public:
  
    Student();

    
    Student(string name, string id);

};

struct StudentNode {

    Student data;
    StudentNode* next;

    StudentNode(Student student) : data(student), next(nullptr) {}


};


void addStudent(StudentNode*& head, string name, string id);

void viewStudentDetails(StudentNode* head);

void updateStudentDetails(StudentNode* head, string id, string newName, string newId);

void removeStudent(StudentNode*& head, string id);



