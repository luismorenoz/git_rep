#include "CoursePerGroup.h"

using namespace std;


CoursePerGroup::CoursePerGroup() {
    nrc = "";
    courseCode = "";     // Este será el código de un curso de la clase Course
    professorId = "";
    capacity = 0;
    stage = 0;
}

// Constructor con parámetros
CoursePerGroup::CoursePerGroup(string nrc, string courseCode, string professorId, int capacity, int stage) {
    this->nrc = nrc;
    this->courseCode = courseCode;
    this->professorId = professorId;
    this->capacity = capacity;
    this->stage = stage;
}



string CoursePerGroup::getNrc() const {
    return nrc;
}

void CoursePerGroup::setNrc(const string& nrc) {
    this->nrc = nrc;
}

string CoursePerGroup::getCourseCode() const {
    return courseCode;
}

void CoursePerGroup::setCourseCode(const string& courseCode) {
    this->courseCode = courseCode;
}

string CoursePerGroup::getProfessorId() const {
    return professorId;
}

void CoursePerGroup::setProfessorId(const string& professorId) {
    this->professorId = professorId;
}

int CoursePerGroup::getCapacity() const {
    return capacity;
}

void CoursePerGroup::setCapacity(int capacity) {
    this->capacity = capacity;
}

int CoursePerGroup::getStage() const {
    return stage;
}

void CoursePerGroup::setStage(int stage) {
    this->stage = stage;
}
