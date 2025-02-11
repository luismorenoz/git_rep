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



