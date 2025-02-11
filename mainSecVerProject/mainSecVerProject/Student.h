#pragma once
#include <string>
#include "Course.h"  // Asegúrate de incluir la clase Course

using namespace std;

class Student {
private:
    string name;
    string id;
    Course major;
    Course level;

public:
    // Constructor vacío
    Student();

    // Constructor con parámetros
    Student(string name, string id, Course major, Course level);

    // Setters
    void setName(string name);
    void setId(string id);
    void setMajor(Course major);
    void setLevel(Course level);

    // Getters
    string getName();
    string getId();
    Course getMajor();
    Course getLevel();

 
};
struct StudentNode {

    Student data;
    StudentNode* next;

    StudentNode(Student student) {
        data = student;
        next = nullptr;

    }


};

void addStudent(StudentNode*& head, string name, string id, Course major, Course level);
void showStudent(StudentNode* head, string id);
void updateStudent(StudentNode* head, string id, string newName, string newId, Course newMajor, Course newLevel);
void deleteStudent(StudentNode* head, string id, string newName, string newId, Course newMajor, Course newLevel);
