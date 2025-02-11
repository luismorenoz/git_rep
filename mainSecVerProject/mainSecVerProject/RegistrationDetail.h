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
    // Constructor vac�o
    RegistrationDetail();

    // Constructor con par�metros
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



