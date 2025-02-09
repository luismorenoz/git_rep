#pragma once
#include <string>

using namespace std;

class Registration {
private:

    string code;    
    string student; 
    int stage;      

public:
   
    Registration();


    Registration(string code, string student, int stage);

   
    string getCode() const;

    void setCode(const string& code);

    string getStudent() const;

    void setStudent(const string& student);

    int getStage() const;

    void setStage(int stage);
};


