#pragma once
#include <string>

using namespace std;

class RegistrationDetail {
private:
    string registrationCode;
    string nrc;
    double cost;
    string grade;

public:
    // Constructor vacío
    RegistrationDetail();

    // Constructor con parámetros
    RegistrationDetail(string registrationCode, string nrc, double cost, string grade);

    // Setters
    void setRegistrationCode(string registrationCode);
    void setNrc(string nrc);
    void setCost(double cost);
    void setGrade(string grade);

    // Getters
    string getRegistrationCode();
    string getNrc();
    double getCost();
    string getGrade();
};



