#pragma once
#include <string>
using namespace std;

class Condition {
private:
    string courseA;
    string courseB;

public:
    Condition();
    Condition(string courseA, string courseB);

    void setCourseA(string courseA);
    void setCourseB(string courseB);
    string getCourseA();
    string getCourseB();
};
