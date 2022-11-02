//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_CLASSSCH_H
#define UNTITLED_CLASSSCH_H


#include <string>
#include <list>
#include "Slot.h"

using namespace std;



class ClassSch {

private:
    string ucCode;

public:
    ClassSch();
    ClassSch(const string &ucCode, const string &classCode, const list<Slot> &scheduleUCclass);

    const string &getUcCode() const;
    void setUcCode(const string &ucCode);
    const string &getClassCode() const;
    void setClassCode(const string &classCode);
    const list<Slot> &getScheduleUCClass() const;
    void setScheduleUCClass(const list<Slot> &scheduleUCclass);

private:
    string classCode;
    list<Slot> scheduleUCclass;

};


#endif //UNTITLED_CLASSSCH_H



