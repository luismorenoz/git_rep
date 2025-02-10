#include "Stage.h"

using namespace std;

// Constructor vac�o
Stage::Stage() {
    semester = "";
    year = "";
    // cost se deja vac�o, puede ser asignado m�s tarde
}

// Constructor con par�metros
Stage::Stage(string semester, string year, RegistrationDetail cost) {
    this->semester = semester;
    this->year = year;
    this->cost = cost;
}

// Getters y Setters

string Stage::getSemester() const {
    return semester;
}

void Stage::setSemester(const string& semester) {
    this->semester = semester;
}

string Stage::getYear() const {
    return year;
}

void Stage::setYear(const string& year) {
    this->year = year;
}

RegistrationDetail Stage::getCost() const {
    return cost;
}

void Stage::setCost(const RegistrationDetail& cost) {
    this->cost = cost;
}

void addStage() {


}

void viewStage() {


}