#include "Schedule.h"
#include "Course.h"
#include "Professor.h"
using namespace std;

// Constructor vacío
Schedule::Schedule() {
    code = "";
    startTime = "";
    endTime = "";
    day = "";
    classroom = 0;
    course = Course();  // Llamada al constructor vacío de Course
}

// Constructor con parámetros
Schedule::Schedule(string code, string startTime, string endTime, string day, int classroom, Course course) {
    this->code = code;
    this->startTime = startTime;
    this->endTime = endTime;
    this->day = day;
    this->classroom = classroom;
    this->course = course;  // Asignar el objeto Course
}

// Getters y Setters

string Schedule::getCode() const {
    return code;
}

void Schedule::setCode(const string& code) {
    this->code = code;
}

string Schedule::getStartTime() const {
    return startTime;
}

void Schedule::setStartTime(const string& startTime) {
    this->startTime = startTime;
}

string Schedule::getEndTime() const {
    return endTime;
}

void Schedule::setEndTime(const string& endTime) {
    this->endTime = endTime;
}

string Schedule::getDay() const {
    return day;
}

void Schedule::setDay(const string& day) {
    this->day = day;
}

int Schedule::getClassroom() const {
    return classroom;
}

void Schedule::setClassroom(int classroom) {
    this->classroom = classroom;
}

Course Schedule::getCourse() const {
    return course;
}

void Schedule::setCourse(const Course& course) {
    this->course = course;
}

void addSchedule() {


}

void removeSchedule() {


}

void viewSchedule() {


}

