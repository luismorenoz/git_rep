#pragma once

#include <string>
#include "Registration.h"  

using namespace std;

class RegistrationDetail : public Registration {  

private:

    string nrc;   
    double cost;   
    string grade;  

public:
    // Constructor vacío
    RegistrationDetail();

    // Constructor con parámetros
    RegistrationDetail(string code, string student, int stage, string nrc, double cost, string grade);

    // Getters y Setters
    string getNrc() const;
    void setNrc(const string& nrc);

    double getCost() const;
    void setCost(double cost);

    string getGrade() const;
    void setGrade(const string& grade);

    void addRegistrationDetail();

    void viewRegistrationDetail();

    void updateGrade();

    void calculateCost();

    void removeRegistrationDetail();

};







