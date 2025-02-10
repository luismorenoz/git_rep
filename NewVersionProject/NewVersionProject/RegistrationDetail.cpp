#include "RegistrationDetail.h"

using namespace std;

// Constructor vacío
RegistrationDetail::RegistrationDetail() : Registration() {
    nrc = "";
    cost = 0.0;
    grade = "";
}

// Constructor con parámetros
RegistrationDetail::RegistrationDetail(string code, string student, int stage, string nrc, double cost, string grade) : Registration(code, student, stage) {  
    this->nrc = nrc;
    this->cost = cost;
    this->grade = grade;
}



string RegistrationDetail::getNrc() const {
    return nrc;
}

void RegistrationDetail::setNrc(const string& nrc) {
    this->nrc = nrc;
}

double RegistrationDetail::getCost() const {
    return cost;
}

void RegistrationDetail::setCost(double cost) {
    this->cost = cost;
}

string RegistrationDetail::getGrade() const {
    return grade;
}

void RegistrationDetail::setGrade(const string& grade) {
    this->grade = grade;
}


void addRegistrationDetail() {


}

void viewRegistrationDetail() {


}

void updateGrade() {


}

void calculateCost() {


}

void removeRegistrationDetail() {


}