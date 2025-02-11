#include "Condition.h"
using namespace std;

Condition::Condition() {
    courseA = Registration();
    courseB = Registration();
}
Condition::Condition(Registration courseA, Registration courseB) {
    this->courseA = courseA;
    this->courseB = courseB;
}
Registration Condition::getCourseA() const {
    return courseA;
}
void Condition::setCourseA(const Registration& courseA) {
    this->courseA = courseA;
}
Registration Condition::getCourseB() const {
    return courseB;
}
void Condition::setCourseB(const Registration& courseB) {
    this->courseB = courseB;
}
void checkConflict() {


}

void validatePrerequisite() {


}

void validateRightMajor() {


}

void calculateCost() {


}

void checkApproval() {


}

