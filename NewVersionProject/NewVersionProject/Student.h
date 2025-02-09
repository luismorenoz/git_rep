#pragma once


#include <string>
#include "Person.h"  // Incluir la clase Person

using namespace std;

class Student : public Person {  // Hereda de Person
public:
  
    Student();

    
    Student(string name, string id);

   
};



