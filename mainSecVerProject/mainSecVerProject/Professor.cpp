#include "Professor.h"

Professor::Professor() {
    id = "";
    name = "";
    degree = "";
}

Professor::Professor(string id, string name, string degree) {
    this->id = id;
    this->name = name;
    this->degree = degree;
}
void Professor::setId(string id) {
    this->id = id;
}
void Professor::setName(string name) {
    this->name = name;
}
void Professor::setDegree(string degree) {
    this->degree = degree;
}
string Professor::getId() {
    return id;
}
string Professor::getName() {
    return name;
}
string Professor::getDegree() {
    return degree;
}


