//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_SCHEDULEMANAGE_H
#define UNTITLED_SCHEDULEMANAGE_H


#include <set>
#include "ClassUC.h"
#include "Student.h"

using namespace std;



class ScheduleManage {

public:
    ScheduleManage();

    const vector<ClassUC> &getAllUC() const;

    const set<Student> &getStudents() const;

    void getClassesData();

    void getStudentsData();




private:
    set<Student> students_ = {};
    vector<ClassUC> allUC_ = {};
};


#endif //UNTITLED_SCHEDULEMANAGE_H
