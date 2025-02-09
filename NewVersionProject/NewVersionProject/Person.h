#pragma once


#include <string>

using namespace std;

class Person {
private:
    string name;  
    string id;   

public:
  
    Person();

   
    Person(string name, string id);

 
    string getName() const;
    void setName(const string& name);

    string getId() const;
    void setId(const string& id);
};



