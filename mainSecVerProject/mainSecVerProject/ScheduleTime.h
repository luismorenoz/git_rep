#pragma once
#include <string>
#include "Schedule.h"
using namespace std;

class ScheduleTime {
private:
    Schedule scheduleCode;
    string day;
    int startHour;
    int finishHour;

public:
    ScheduleTime();
    ScheduleTime(Schedule scheduleCode, string day, int startHour, int finishHour);

    void setScheduleCode(Schedule scheduleCode);
    void setDay(string day);
    void setStartHour(int startHour);
    void setFinishHour(int finishHour);
    Schedule getScheduleCode();
    string getDay();
    int getStartHour();
    int getFinishHour();
};
