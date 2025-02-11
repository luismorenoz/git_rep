#include "RegistrationDetail.h"

// Constructor vacío
RegistrationDetail::RegistrationDetail() {
    registrationCode = "";
    nrc = "";
    cost = 0.0;
    grade = "";
}

// Constructor con parámetros
RegistrationDetail::RegistrationDetail(string registrationCode, string nrc, double cost, string grade) {
    this->registrationCode = registrationCode;
    this->nrc = nrc;
    this->cost = cost;
    this->grade = grade;
}

// Setters
void RegistrationDetail::setRegistrationCode(string registrationCode) {
    this->registrationCode = registrationCode;
}

void RegistrationDetail::setNrc(string nrc) {
    this->nrc = nrc;
}

void RegistrationDetail::setCost(double cost) {
    this->cost = cost;
}

void RegistrationDetail::setGrade(string grade) {
    this->grade = grade;
}

// Getters
string RegistrationDetail::getRegistrationCode() {
    return registrationCode;
}

string RegistrationDetail::getNrc() {
    return nrc;
}

double RegistrationDetail::getCost() {
    return cost;
}

string RegistrationDetail::getGrade() {
    return grade;
}
