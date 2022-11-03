//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_SCHEDULEMANAGE_H
#define UNTITLED_SCHEDULEMANAGE_H


#include <string>
#include <set>
#include <vector>
#include <fstream>
#include "Student.h"
#include "ClassSch.h"
#include "UCClass.h"

using namespace std;



class ScheduleManage {

public:
    ScheduleManage();
    ScheduleManage(const set<Student> &students, const vector<ClassSch> &schedule);

    const set<Student> &getStudents() const;
    void setStudents(const set<Student> &students);
    const vector<ClassSch> &getSchedule() const;
    void setSchedule(const vector<ClassSch> &schedule);
    void getData();


private:
    set<Student> students_;
    vector<ClassSch> schedule_;
};


#endif //UNTITLED_SCHEDULEMANAGE_H
