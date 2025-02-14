
#include <iostream>
#include <fstream>
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Professor.h"

using namespace std;

class StudentManager {
public:
    static void registerStudent(vector<Student>& students) {
        string name, id;
        Course major, level;
        
        cout << "Ingrese nombre del estudiante: ";
        cin >> name;
        cout << "Ingrese ID del estudiante: ";
        cin >> id;

        students.push_back(Student(name, id, major, level));
        cout << "Estudiante registrado correctamente." << endl;
    }

    static void showStudents(const vector<Student>& students) {
        for (const auto& student : students) {
            cout << "Nombre: " << student.getName() << ", ID: " << student.getId() << endl;
        }
    }
};

class CourseManager {
public:
    static void registerCourse(vector<Course>& courses) {
        string courseName, courseCode;
        int credits;
        
        cout << "Ingrese nombre del curso: ";
        cin >> courseName;
        cout << "Ingrese código del curso: ";
        cin >> courseCode;
        cout << "Ingrese créditos del curso: ";
        cin >> credits;

        courses.push_back(Course(courseName, courseCode, credits));
        cout << "Curso registrado correctamente." << endl;
    }

    static void showCourses(const vector<Course>& courses) {
        for (const auto& course : courses) {
            cout << "Curso: " << course.getCourseName() << ", Código: " << course.getCourseCode() << ", Créditos: " << course.getCredits() << endl;
        }
    }
};

void mostrarAcercaDe() {
    cout << "Sistema creado por [Tu Nombre]" << endl;
}

int main() {
    vector<Student> students;
    vector<Course> courses;
    
    int opcion;
    do {
        cout << "\nMenú del Sistema\n";
        cout << "1. Acerca de\n";
        cout << "2. Mantenimiento\n";
        cout << "3. Consulta\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                mostrarAcercaDe();
                break;

            case 2: {
                int mantenimientoOpcion;
                cout << "\nMantenimiento\n";
                cout << "1. Registrar Estudiante\n";
                cout << "2. Registrar Curso\n";
                cout << "Ingrese una opción: ";
                cin >> mantenimientoOpcion;

                switch(mantenimientoOpcion) {
                    case 1:
                        StudentManager::registerStudent(students);
                        break;
                    case 2:
                        CourseManager::registerCourse(courses);
                        break;
                    default:
                        cout << "Opción no válida.\n";
                        break;
                }
                break;
            }

            case 3: {
                int consultaOpcion;
                cout << "\nConsulta\n";
                cout << "1. Ver Estudiantes\n";
                cout << "2. Ver Cursos\n";
                cout << "Ingrese una opción: ";
                cin >> consultaOpcion;

                switch(consultaOpcion) {
                    case 1:
                        StudentManager::showStudents(students);
                        break;
                    case 2:
                        CourseManager::showCourses(courses);
                        break;
                    default:
                        cout << "Opción no válida.\n";
                        break;
                }
                break;
            }

            case 4:
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opción no válida, por favor intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}
