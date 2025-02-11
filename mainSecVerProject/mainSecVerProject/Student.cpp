#include "Student.h"

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
