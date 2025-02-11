#include "Stage.h"


Stage::Stage() {
    semester = "";
    year = "";
    cost = RegistrationDetail(); 

}


Stage::Stage(string semester, string year, RegistrationDetail cost) {
    this->semester = semester;
    this->year = year;
    this->cost = cost;
}

// Setters
void Stage::setSemester(string semester) {
    this->semester = semester;
}

void Stage::setYear(string year) {
    this->year = year;
}

void Stage::setCost(RegistrationDetail cost) {
    this->cost = cost;
}

// Getters
string Stage::getSemester() {
    return semester;
}

string Stage::getYear() {
    return year;
}

RegistrationDetail Stage::getCost() {
    return cost;
}
