#pragma once
#include <string>

using namespace std;

class CoursePerGroup {
private:
    string nrc;
    string courseCode;
    string scheduleCode;
    string professorId;
    int capacity;
    int stage;
    int year;

public:
    // Constructor vac�o
    CoursePerGroup();

    // Constructor con par�metros
    CoursePerGroup(string nrc, string courseCode, string scheduleCode, string professorId, int capacity, int stage, int year);

    // Setters
    void setNrc(string nrc);
    void setCourseCode(string courseCode);
    void setScheduleCode(string scheduleCode);
    void setProfessorId(string professorId);
    void setCapacity(int capacity);
    void setStage(int stage);
    void setYear(int year);

    // Getters
    string getNrc();
    string getCourseCode();
    string getScheduleCode();
    string getProfessorId();
    int getCapacity();
    int getStage();
    int getYear();
};



