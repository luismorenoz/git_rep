#pragma once
#include <string>

using namespace std;

class Course {
private:
   

    string code;
    string name;
    string major;
    int credits;
    int level;


public:

    Course();


    Course(string code, string name, string major, int credits, int level);

  
    string getCode() const;

    void setCode(const string& code);

    string getName() const;

    void setName(const string& name);

    string getMajor() const;

    void setMajor(const string& major);

    int getCredits() const;
    void setCredits(int credits);

    int getLevel() const;

    void setLevel(int level);
};



