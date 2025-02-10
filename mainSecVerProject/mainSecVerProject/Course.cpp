#include "Course.h"

Course::Course() {
    code = " ";
    name = " ";
    major = " ";
    credits = 0;
    level = 0;
    condition = " ";
}
Course::Course(string code, string name, string major, int credits, int level, string condition) {
    this->code = code;
    this->name = name;
    this->major = major;
    this->credits = credits;
    this->level = level;
    this->condition = condition;
}
void Course::setCode(string code) {
    this->code = code;
}
void Course::setName(string name) {
    this->name = name;
}
void Course::setMajor(string major) {
    this->major = major;
}
void Course::setCredits(int credits) {
    this->credits = credits;
}
void Course::setLevel(int level) {
    this->level = level;
}
void Course::setCondition(string condition) {
    this->condition = condition;
}
string Course::getCode() {
    return code;
}
string Course::getName() {
    return name;
}
string Course::getMajor() {
    return major;
}
int Course::getCredits() {
    return credits;
}
int Course::getLevel() {
    return level;
}
string Course::getCondition() {
    return condition;
}
