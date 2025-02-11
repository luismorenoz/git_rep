#include "CoursePerGroup.h"

// Constructor vacío
CoursePerGroup::CoursePerGroup() {
    nrc = "";
    courseCode = "";
    scheduleCode = "";
    professorId = "";
    capacity = 0;
    stage = 0;
    year = 0;
}

// Constructor con parámetros
CoursePerGroup::CoursePerGroup(string nrc, string courseCode, string scheduleCode, string professorId, int capacity, int stage, int year) {
    this->nrc = nrc;
    this->courseCode = courseCode;
    this->scheduleCode = scheduleCode;
    this->professorId = professorId;
    this->capacity = capacity;
    this->stage = stage;
    this->year = year;
}

// Setters
void CoursePerGroup::setNrc(string nrc) { 
    this->nrc = nrc; 
}
void CoursePerGroup::setCourseCode(string courseCode) { 
    
    this->courseCode = courseCode; 
}
void CoursePerGroup::setScheduleCode(string scheduleCode) { 
    this->scheduleCode = scheduleCode;

}
void CoursePerGroup::setProfessorId(string professorId) {
    this->professorId = professorId; 
}
void CoursePerGroup::setCapacity(int capacity) { 
    this->capacity = capacity; }

void CoursePerGroup::setStage(int stage) { this->stage = stage; 

}
void CoursePerGroup::setYear(int year) { 
    this->year = year;

}

// Getters
string CoursePerGroup::getNrc() { 
    return nrc; 

}
string CoursePerGroup::getCourseCode() {
    return courseCode; 
}
string CoursePerGroup::getScheduleCode() { 
    return scheduleCode;
}
string CoursePerGroup::getProfessorId() { 
    
    return professorId; 
}
int CoursePerGroup::getCapacity() { 
    return capacity;
}
int CoursePerGroup::getStage() { 
    return stage;
}
int CoursePerGroup::getYear() { 
    return year; 
}
