#pragma once

#include <string>
#include "Course.h"  

using namespace std;

class Schedule {
private:
    // Atributos
    string code;
    string startTime;
    string endTime;
    string day;
    int classroom;
    Course course;  

public:
   
    Schedule();

  
    Schedule(string code, string startTime, string endTime, string day, int classroom, Course course);


    string getCode() const;

    void setCode(const string& code);

    string getStartTime() const;

    void setStartTime(const string& startTime);

    string getEndTime() const;

    void setEndTime(const string& endTime);

    string getDay() const;

    void setDay(const string& day);

    int getClassroom() const;

    void setClassroom(int classroom);

    Course getCourse() const;

    void setCourse(const Course& course);
};



