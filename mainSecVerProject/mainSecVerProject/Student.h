#pragma once
#include <string>
#include "Course.h"  // Aseg�rate de incluir la clase Course

using namespace std;

class Student {
private:
    string name;
    string id;
    Course major;
    Course level;

public:
    // Constructor vac�o
    Student();

    // Constructor con par�metros
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



