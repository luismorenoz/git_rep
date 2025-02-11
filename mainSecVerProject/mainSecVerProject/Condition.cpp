#include "Condition.h"
#include <iostream>
Condition::Condition() {
    courseA = "";
    courseB = "";
}
Condition::Condition(string courseA, string courseB) {
    this->courseA = courseA;
    this->courseB = courseB;
}
void Condition::setCourseA(string courseA) {
    this->courseA = courseA;
}
void Condition::setCourseB(string courseB) {
    this->courseB = courseB;
}
string Condition::getCourseA() {
    return courseA;
}
string Condition::getCourseB() {
    return courseB;
}
