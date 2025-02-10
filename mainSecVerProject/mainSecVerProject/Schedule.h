#pragma once
#include <string>
using namespace std;

class Schedule {
private:
    string code;
    int classroom;
    string classCode;

public:
    Schedule();
    Schedule(string code, int classroom, string classCode);

    void setCode(string code);
    void setClassroom(int classroom);
    void setClassCode(string classCode);
    string getCode();
    int getClassroom();
    string getClassCode();
};
