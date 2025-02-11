#include "Schedule.h"
#include <iostream>
#include <fstream>

Schedule::Schedule() {
    code = " ";
    classroom = 0;
    classCode = " ";
}
Schedule::Schedule(string code, int classroom, string classCode) {
    this->code = code;
    this->classroom = classroom;
    this->classCode = classCode;
}
void Schedule::setCode(string code) {
    this->code = code;
}
void Schedule::setClassroom(int classroom) {
    this->classroom = classroom;
}
void Schedule::setClassCode(string classCode) {
    this->classCode = classCode;
}
string Schedule::getCode() {
    return code;
}
int Schedule::getClassroom() {
    return classroom;
}
string Schedule::getClassCode() {
    return classCode;
}
