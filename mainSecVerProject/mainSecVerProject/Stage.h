#pragma once
#include <string>
#include "RegistrationDetail.h"

using namespace std;

class Stage {
private:
    string semester;
    string year;
    RegistrationDetail cost;

public:
    // Constructor vacío
    Stage();

    // Constructor con parámetros
    Stage(string semester, string year, RegistrationDetail cost);

    // Setters
    void setSemester(string semester);
    void setYear(string year);
    void setCost(RegistrationDetail cost);

    // Getters
    string getSemester();
    string getYear();
    RegistrationDetail getCost();
};


