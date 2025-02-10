#include "Course.h"

using namespace std;

// Constructor vacío
Course::Course() {
    code = "";
    name = "";
    major = "";
    credits = 0;
    level = 0;
}

// Constructor con parámetros
Course::Course(string code, string name, string major, int credits, int level) {
    this->code = code;
    this->name = name;
    this->major = major;
    this->credits = credits;
    this->level = level;
}

// Getters y Setters

string Course::getCode() const {
    return code;
}

void Course::setCode(const string& code) {
    this->code = code;
}

string Course::getName() const {
    return name;
}

void Course::setName(const string& name) {
    this->name = name;
}

string Course::getMajor() const {
    return major;
}

void Course::setMajor(const string& major) {
    this->major = major;
}

int Course::getCredits() const {
    return credits;
}

void Course::setCredits(int credits) {
    this->credits = credits;
}

int Course::getLevel() const {
    return level;
}

void Course::setLevel(int level) {
    this->level = level;

}

void addCourse() {

}

void removeCourse() {


}

void viewCourseDetails() {


}

void viewCourseDetails() {


}