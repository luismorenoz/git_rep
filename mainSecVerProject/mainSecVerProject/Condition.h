#pragma once
#include <string>
using namespace std;

class Condition {
private:
    string courseToRegister;               // Curso que se quiere matricular
    vector<string> prerequisites;          // Cursos requisitos

public:
    // Constructores
    Condition();
    Condition(string courseToRegister, vector<string> prerequisites);

    // Setters
    void setCourseToRegister(string courseToRegister);
    void setPrerequisites(vector<string> prerequisites);

    // Getters
    string getCourseToRegister();
    vector<string> getPrerequisites();

    // Verifica si el estudiante ha aprobado todos los cursos requisitos
    bool canRegister(const vector<string>& passedCourses) const;

    // Método estático para definir las reglas de prerequisitos
    static unordered_map<string, vector<string>> getDefaultPrerequisites();
};
