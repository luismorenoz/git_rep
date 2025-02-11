#include "Course.h"

Course::Course() {
    code = " ";
    name = " ";
    major = " ";
    credits = 0;
    level = 0;
    condition = " ";
}
Course::Course(string code, string name, string major, int credits, int level, string condition) {
    this->code = code;
    this->name = name;
    this->major = major;
    this->credits = credits;
    this->level = level;
    this->condition = condition;
}
void Course::setCode(string code) {
    this->code = code;
}
void Course::setName(string name) {
    this->name = name;
}
void Course::setMajor(string major) {
    this->major = major;
}
void Course::setCredits(int credits) {
    this->credits = credits;
}
void Course::setLevel(int level) {
    this->level = level;
}
void Course::setCondition(string condition) {
    this->condition = condition;
}
string Course::getCode() {
    return code;
}
string Course::getName() {
    return name;
}
string Course::getMajor() {
    return major;
}
int Course::getCredits() {
    return credits;
}
int Course::getLevel() {
    return level;
}
string Course::getCondition() {
    return condition;
}

void addCourse(CourseNode*& head, string code, string name, string major, int credits, int level, string condition){
cout << "Ingrese los datos solicitados: " << endl;

string fileName = "Course.txt";

// Verificar si el archivo existe
ifstream checkFile(fileName);
bool fileExists = checkFile.good();
checkFile.close();

// Abrir el archivo en modo append
ofstream file(fileName, ios::app);
if (!file) {
	cerr << "Error al abrir el archivo." << std::endl;
	return;
}

// Si el archivo no existe, escribir la cabecera
if (!fileExists) {
    
    // PREGUNTAR!!!!!!
    
	file << "Codigo;Nombre;Carrera;Creditos;Nivel;Requisitos\n";
}
    
    Course newCourse(code, name, major, credits, level, condition);
    CourseNode* newNode = new CourseNode(newCourse);

    if (!head) 
        head = newNode;
    } else {
        CourseNode* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}
// NECESITA REVISAR !!!!!!!!!!

	/*
	file << code << ";" << name << ";" << ";" << major << ";" << credit <<";"<< level <<";"<< condition << "\n";
	file.close();
	*/
}
void viewCourseDetails(CourseNode* head, string code) {
    CourseNode* temp = head;
    while (temp) {
        if (temp->data.code == code) {
            cout << "Curso: " << temp->data.name << ", Código: " << temp->data.code << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Curso no encontrado." << endl;
}
void updateCourseDetails(CourseNode* head, string code, string newName, string newMajor, int newCredits, int newLevel, string newCondition) {
    CourseNode* temp = head;
    while (temp) {
        if (temp->data.code == code) {
            temp->data.setName(newName);
            temp->data.setMajor(newMajor);
            temp->data.setCredits(newCredits);
            temp->data.setLevel(newLevel);
            temp->data.setCondition(newCondition);
            cout << "Curso actualizado." << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Curso no encontrado." << endl;
}

void removeCourse(CourseNode*& head, string code) {
    if (!head) return;
    if (head->data.code == code) {
        CourseNode* temp = head;
        head = head->next;
        delete temp;
        cout << "Curso eliminado." << endl;
        return;
    }
    CourseNode* temp = head;
    while (temp->next && temp->next->data.code != code) {
        temp = temp->next;
    }
    if (temp->next) {
        CourseNode* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
        cout << "Curso eliminado." << endl;
    } else {
        cout << "Curso no encontrado." << endl;
    }
}
