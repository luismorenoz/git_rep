#pragma once


#include <string>
#include "RegistrationDetail.h"  // Incluir la clase RegistrationDetail

using namespace std;

class Stage {
private:
    string semester;      
    string year;          
    RegistrationDetail cost;  

public:

    Stage();


    Stage(string semester, string year, RegistrationDetail cost);

 
    string getSemester() const;
    void setSemester(const string& semester);

    string getYear() const;
    void setYear(const string& year);

    RegistrationDetail getCost() const;
    void setCost(const RegistrationDetail& cost);
};



