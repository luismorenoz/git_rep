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
    string condition;

public:
    Course();
    Course(string code, string name, string major, int credits, int level, string condition);

    void setCode(string code);
    void setName(string name);
    void setMajor(string major);
    void setCredits(int credits);
    void setLevel(int level);
    void setCondition(string condition);
    string getCode();
    string getName();
    string getMajor();
    int getCredits();
    int getLevel();
    string getCondition();

struct CourseNode {
    Course data;
    CourseNode* next;

    CourseNode(Course course) : data(course), next(nullptr) {}
};
void addCourse(CourseNode*& head, string code, string name, string major, int credits, int level, string condition);
void viewCourseDetails(CourseNode* head, string code);
};


