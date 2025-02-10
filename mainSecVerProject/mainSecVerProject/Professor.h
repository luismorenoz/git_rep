#pragma once
class Professor
#include <string>
using namespace std;

class Professor {
private:
    string id;
    string name;
    string degree;

public:
    Professor();
    Professor(string id, string name, string degree);

    void setId(string id);
    void setName(string name);
    void setDegree(string degree);
    string getId();
    string getName();
    string getDegree();
};


