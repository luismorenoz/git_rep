#include "Registration.h"

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
