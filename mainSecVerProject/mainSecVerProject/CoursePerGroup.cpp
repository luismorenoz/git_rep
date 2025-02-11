#include "CoursePerGroup.h"

// Constructor vacío
CoursePerGroup::CoursePerGroup() {
    nrc = "";
    courseCode = "";
    scheduleCode = "";
    professorId = "";
    capacity = 0;
    stage = 0;
    year = 0;
}

// Constructor con parámetros
CoursePerGroup::CoursePerGroup(string nrc, string courseCode, string scheduleCode, string professorId, int capacity, int stage, int year) {
    this->nrc = nrc;
    this->courseCode = courseCode;
    this->scheduleCode = scheduleCode;
    this->professorId = professorId;
    this->capacity = capacity;
    this->stage = stage;
    this->year = year;
}

// Setters
void CoursePerGroup::setNrc(string nrc) { 
    this->nrc = nrc; 
}
void CoursePerGroup::setCourseCode(string courseCode) { 
    
    this->courseCode = courseCode; 
}
void CoursePerGroup::setScheduleCode(string scheduleCode) { 
    this->scheduleCode = scheduleCode;

}
void CoursePerGroup::setProfessorId(string professorId) {
    this->professorId = professorId; 
}
void CoursePerGroup::setCapacity(int capacity) { 
    this->capacity = capacity; }

void CoursePerGroup::setStage(int stage) { this->stage = stage; 

}
void CoursePerGroup::setYear(int year) { 
    this->year = year;

}

// Getters
string CoursePerGroup::getNrc() { 
    return nrc; 

}
string CoursePerGroup::getCourseCode() {
    return courseCode; 
}
string CoursePerGroup::getScheduleCode() { 
    return scheduleCode;
}
string CoursePerGroup::getProfessorId() { 
    
    return professorId; 
}
int CoursePerGroup::getCapacity() { 
    return capacity;
}
int CoursePerGroup::getStage() { 
    return stage;
}
int CoursePerGroup::getYear() { 
    return year; 
}

void addCoursePerGroup(CoursePerGroupNode*& head, string nrc, string courseCode, string scheduleCode, string professorId, int capacity, int stage, int year) {
    CoursePerGroup newCourse(nrc, courseCode, scheduleCode, professorId, capacity, stage, year);
    CoursePerGroupNode* newNode = new CoursePerGroupNode(newCourse);

    if (head == nullptr) {
        head = newNode;
    } else {
        CoursePerGroupNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void viewCoursePerGroup(CoursePerGroupNode* head, string nrc) {
    CoursePerGroupNode* temp = head;
    while (temp != nullptr) {
        if (temp->data.getNrc() == nrc) {
            cout << "Grupo de Curso encontrado: " << endl;
            cout << "NRC: " << temp->data.getNrc() << endl;
            cout << "Código de Curso: " << temp->data.getCourseCode() << endl;
            cout << "Código de Horario: " << temp->data.getScheduleCode() << endl;
            cout << "ID de Profesor: " << temp->data.getProfessorId() << endl;
            cout << "Capacidad: " << temp->data.getCapacity() << endl;
            cout << "Semestre: " << temp->data.getStage() << endl;
            cout << "Año: " << temp->data.getYear() << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "No se encontró el grupo con NRC: " << nrc << endl;
}

void updateCoursePerGroup(CoursePerGroupNode* head, string nrc, string newCourseCode, string newScheduleCode, string newProfessorId, int newCapacity, int newStage, int newYear) {
    CoursePerGroupNode* temp = head;

    while (temp != nullptr) {
        if (temp->data.getNrc() == nrc) {
            temp->data.setCourseCode(newCourseCode);
            temp->data.setScheduleCode(newScheduleCode);
            temp->data.setProfessorId(newProfessorId);
            temp->data.setCapacity(newCapacity);
            temp->data.setStage(newStage);
            temp->data.setYear(newYear);

            cout << "Grupo de curso actualizado: " << endl;
            cout << "Código de Curso: " << temp->data.getCourseCode() << endl;
            cout << "Código de Horario: " << temp->data.getScheduleCode() << endl;
            cout << "ID de Profesor: " << temp->data.getProfessorId() << endl;
            cout << "Capacidad: " << temp->data.getCapacity() << endl;
            cout << "Semestre: " << temp->data.getStage() << endl;
            cout << "Año: " << temp->data.getYear() << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "No se encontró el grupo con NRC: " << nrc << endl;
}

void deleteCoursePerGroup(CoursePerGroupNode*& head, string nrc) {
    CoursePerGroupNode* temp = head;
    CoursePerGroupNode* prev = nullptr;

    if (temp != nullptr && temp->data.getNrc() == nrc) {
        head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data.getNrc() != nrc) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "No se encontró el grupo con NRC: " << nrc << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}
