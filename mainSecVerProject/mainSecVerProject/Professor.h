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

struct ProfessorNode {
    Professor data;
    ProfessorNode* next;

    ProfessorNode(Professor professor) {
data = professor; 
next = nullptr;
 }
};
void addProfessor(ProfessorNode*& head, string id, string name, string degree);
void viewProfessor(ProfessorNode* head, string id);
void updateProfessor(ProfessorNode* head, string id, string newName, string newDegree);
void deleteProfessor(ProfessorNode*& head, string id);

