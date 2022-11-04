//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#include <string>
#include <list>
#include "ClassUC.h"


using namespace std;


class Student {

public:
    Student(const string &upNumber, const string &name);

    void appendUC(ClassUC uc);

    bool operator<(const Student &rhs) const;

    const string &getUpNumber() const;

    const string &getName() const;

    void setUpNumber(const string &upNumber);

    void setName(const string &name);

    void setClasses(const list <ClassUC> &classes);

    const list <ClassUC> &getClasses() const;




private:
    string upNumber_;
    string name_;
    list<ClassUC> classes_ = {};


};


#endif //UNTITLED_STUDENT_H
