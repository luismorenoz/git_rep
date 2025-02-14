#include "Condition.h"
#include <iostream>
Condition::Condition() {
    courseA = "";
    courseB = "";
}
Condition::Condition(string courseA, string courseB) {
    this->courseA = courseA;
    this->courseB = courseB;
}
void Condition::setCourseA(string courseA) {
    this->courseA = courseA;
}
void Condition::setCourseB(string courseB) {
    this->courseB = courseB;
}
string Condition::getCourseA() {
    return courseA;
}
string Condition::getCourseB() {
    return courseB;
}
// Constructor vacio
Condition::Condition() {
    courseToRegister = "";
    prerequisites = {};
}

// Constructor con parámetros
Condition::Condition(string courseToRegister, vector<string> prerequisites) {
    this->courseToRegister = courseToRegister;
    this->prerequisites = prerequisites;
}

void Condition::setCourseToRegister(string courseToRegister) {
    this->courseToRegister = courseToRegister;
}

void Condition::setPrerequisites(vector<string> prerequisites) {
    this->prerequisites = prerequisites;
}

string Condition::getCourseToRegister() {
    return courseToRegister;
}

vector<string> Condition::getPrerequisites() {
    return prerequisites;
}

// Verifica si el estudiante ha aprobado todos los cursos requisitos
bool Condition::canRegister(const vector<string>& passedCourses) const {
    for (const string& prereq : prerequisites) {
        bool found = false;
        for (const string& passed : passedCourses) {
            if (prereq == passed) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "No puedes matricular " << courseToRegister << " porque no has aprobado " << prereq << "." << endl;
            return false;
        }
    }
    cout << "Puedes matricular " << courseToRegister << "." << endl;
    return true;
}

// Método estático que define los prerequisitos predeterminados
unordered_map<string, vector<string>> Condition::getDefaultPrerequisites() {
    return {
        {"Matemáticas II", {"Matemáticas I"}},
        {"Física II", {"Física I"}},
        {"Programación II", {"Programación I"}},
        {"Cálculo II", {"Cálculo I"}},
        {"Álgebra Lineal", {"Matemáticas Discretas"}},
        {"Estructuras de Datos", {"Programación II"}},
        {"Bases de Datos", {"Estructuras de Datos"}},
        {"Sistemas Operativos", {"Arquitectura de Computadoras"}},
        {"Redes de Computadoras", {"Sistemas Operativos"}},
        {"Inteligencia Artificial", {"Estructuras de Datos", "Probabilidad y Estadística"}},
        {"Compiladores", {"Lenguajes Formales y Autómatas"}},
        {"Seguridad Informática", {"Redes de Computadoras"}},
        {"Ingeniería de Software II", {"Ingeniería de Software I"}},
        {"Análisis de Algoritmos", {"Estructuras de Datos"}},
        {"Desarrollo Web Avanzado", {"Desarrollo Web Básico"}}
    };
}
