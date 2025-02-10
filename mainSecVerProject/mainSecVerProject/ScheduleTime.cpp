#include "ScheduleTime.h"

ScheduleTime::ScheduleTime() {
    scheduleCode = Schedule(); 
    day = "";
    startHour = 0;
    finishHour = 0;
}
ScheduleTime::ScheduleTime(Schedule scheduleCode, string day, int startHour, int finishHour) {
    this->scheduleCode = scheduleCode;
    this->day = day;
    this->startHour = startHour;
    this->finishHour = finishHour;
}
void ScheduleTime::setScheduleCode(Schedule scheduleCode) {
    this->scheduleCode = scheduleCode;
}
void ScheduleTime::setDay(string day) {
    this->day = day;
}
void ScheduleTime::setStartHour(int startHour) {
    this->startHour = startHour;
}
void ScheduleTime::setFinishHour(int finishHour) {
    this->finishHour = finishHour;
}
Schedule ScheduleTime::getScheduleCode() {
    return scheduleCode;
}
string ScheduleTime::getDay() {
    return day;
}
int ScheduleTime::getStartHour() {
    return startHour;
}
int ScheduleTime::getFinishHour() {
    return finishHour;
}
