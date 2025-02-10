#pragma once
#include <string>
#include "Registration.h"  // Incluir la clase Registration

using namespace std;

class Condition {

private:
    // Atributos
    Registration courseA;  // Primer registro de curso
    Registration courseB;  // Segundo registro de curso

public:
    // Constructor vacío
    Condition();

    // Constructor con parámetros
    Condition(Registration courseA, Registration courseB);

    // Getters y Setters
    Registration getCourseA() const;
    void setCourseA(const Registration& courseA);

    Registration getCourseB() const;
    void setCourseB(const Registration& courseB);

    void checkConflict();

    void validatePrerequisite();

    void validateRightMajor();

    void calculateCost();

    void checkApproval();

};

