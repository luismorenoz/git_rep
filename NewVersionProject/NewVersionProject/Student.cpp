#include "Student.h"


using namespace std;


Student::Student() : Person() {  // Llama al constructor vacío de la clase base Person
    
}


Student::Student(string name, string id)
    : Person(name, id) {  // Llama al constructor de la clase base Person
   
}
