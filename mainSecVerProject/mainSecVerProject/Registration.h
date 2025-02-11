#pragma once
#include <string>

using namespace std;

class Registration {
private:
    string code;
    string studentCode;
    int stage;
    string year;

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

    // Getters
    string getCode();
    string getStudentCode();
    int getStage();
    string getYear();
};

struct RegistrationNode {
    Registration data;
   RegistrationNode* next;

    RegistrationNode (Registration registration) {
data = registration; 
next = nullptr;


}
};
