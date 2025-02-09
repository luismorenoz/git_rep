#include "Person.h"

using namespace std;


Person::Person() {
    name = "";
    id = "";
}


Person::Person(string name, string id) {
    this->name = name;
    this->id = id;
}


string Person::getName() const {
    return name;
}

void Person::setName(const string& name) {
    this->name = name;
}

string Person::getId() const {
    return id;
}

void Person::setId(const string& id) {
    this->id = id;
}
