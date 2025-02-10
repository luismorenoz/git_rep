#include "Registration.h"

using namespace std;


Registration::Registration() {
    code = "";
    student = "";
    stage = 0;
}


Registration::Registration(string code, string student, int stage) {
    this->code = code;
    this->student = student;
    this->stage = stage;
}



string Registration::getCode() const {
    return code;
}

void Registration::setCode(const string& code) {
    this->code = code;
}

string Registration::getStudent() const {
    return student;
}

void Registration::setStudent(const string& student) {
    this->student = student;
}

int Registration::getStage() const {
    return stage;
}

void Registration::setStage(int stage) {
    this->stage = stage;
}


