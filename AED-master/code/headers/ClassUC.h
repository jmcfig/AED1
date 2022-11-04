//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_CLASSUC_H
#define UNTITLED_CLASSUC_H


#include <string>
#include <vector>
#include "Slot.h"


using namespace std;



class ClassUC {



public:

    ClassUC(const string &ucCode, const string &classCode, const vector<Slot> &schedule);

    void addSlot(Slot slot);

    const string &getClassCode() const;

    const string &getUcCode() const;

    const vector<Slot> &getSchedule() const;


private:
    string ucCode_;
    string classCode_;
    vector<Slot> schedule_;

};


#endif //UNTITLED_CLASSUC_H



