#pragma once
#include <string>
#include "Course.h"  // Incluir la clase Course

using namespace std;

class CoursePerGroup {
private:
   
    string nrc;           // NRC del curso
    string courseCode;    // Código del curso (relacionado con Course)
    string professorId;   // ID del profesor
    int capacity;         // Capacidad del grupo
    int stage;            // Etapa del curso

public:

    CoursePerGroup();

   
    CoursePerGroup(string nrc, string courseCode, string professorId, int capacity, int stage);

    
    string getNrc() const;

    void setNrc(const string& nrc);

    string getCourseCode() const;

    void setCourseCode(const string& courseCode);

    string getProfessorId() const;

    void setProfessorId(const string& professorId);

    int getCapacity() const;

    void setCapacity(int capacity);

    int getStage() const;

    void setStage(int stage);
};



