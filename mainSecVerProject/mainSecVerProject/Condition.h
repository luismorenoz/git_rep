#pragma once
#include <string>
using namespace std;

class Condition {
private:
    string courseToRegister;
    string courseCondition;

public:
    Condition();
    Condition(string courseA, string courseB);

    void courseToRegister(string courseToRegister);
    void courseCondition(string courseB);
    string courseToRegister();
    string courseCondition();
};
