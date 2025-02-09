#pragma once

#include <string>
#include "Person.h"  // Incluir la clase Person

using namespace std;

class Professor : public Person {  // Hereda de Person
public:
   
    Professor();

 
    Professor(string name, string id);

  
};


