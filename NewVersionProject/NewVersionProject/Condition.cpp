#include "Condition.h"

using namespace std;

// Constructor vac�o
Condition::Condition() {
    courseA = Registration();  // Llamada al constructor vac�o de Registration
    courseB = Registration();  // Llamada al constructor vac�o de Registration
}

// Constructor con par�metros
Condition::Condition(Registration courseA, Registration courseB) {
    this->courseA = courseA;
    this->courseB = courseB;
}

// Getters y Setters

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

