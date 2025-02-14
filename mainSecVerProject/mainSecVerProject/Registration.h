#pragma once
#include <string>
#include <vector>
#include "Condition.h"

using namespace std;

class Registration {
private:
    string code;
    string studentCode;
    int stage;
    string year;
    Condition condition; // Condición de prerequisito

public:
    // Constructor vacío
    Registration();

    // Constructor con parámetros
    Registration(string code, string studentCode, int stage, string year);

    // Setters
    void setCode(string code);
    void setStudentCode(string studentCode);
    void setStage(int stage);
    void setYear(string year);
    void setCondition(Condition condition);

    // Getters
    string getCode();
    string getStudentCode();
    int getStage();
    string getYear();
    Condition getCondition();
};

struct RegistrationNode {
    Registration data;
   RegistrationNode* next;

    RegistrationNode (Registration registration) {
data = registration; 
next = nullptr;


}
};
void addRegistration(RegistrationNode*& head, string studentCode, int stage, string year, Condition condition, vector<string> passedCourses);
void viewRegistration(RegistrationNode* head, string code);
void updateRegistration(RegistrationNode* head, string code, string newStudentCode, int newStage, string newYear);
void deleteRegistration(RegistrationNode*& head, string code);

