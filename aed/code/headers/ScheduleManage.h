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

using namespace std;



class ScheduleManage {

public:
    ScheduleManage();
    ScheduleManage(const set<Student> &estudantes, const vector<ClassSch> &horario);

    const set<Student> &getEstudantes() const;
    void setEstudantes(const set<Student> &estudantes);
    const vector<ClassSch> &getHorario() const;
    void setHorario(const vector<ClassSch> &horario);
    void lerDados();


private:
    set<Student> estudantes;
    vector<ClassSch> horario;
};


#endif //UNTITLED_SCHEDULEMANAGE_H
