//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#include <string>
#include <list>
#include <queue>
#include "UCClass.h"
#include "Request.h"

using namespace std;


class Student {

public:
    Student();
    Student(const string &upNumber, const string &name, const list<UCClass> &classes);

    const string &getUpNumber() const;
    void setUpNumber(const string &upNumber);
    const string &getName() const;
    void setName(const string &name);
    const list<UCClass> &getClasses() const;
    void setClasses(const list<UCClass> &classes);
    void appendClass(UCClass uct);
    const queue<Request> &getRequests() const;
    void setRequests(const queue<Request> &requests);



private:
    string upNumber_;
    string name_;
    list<UCClass> classes_;
    queue<Request> requests_;

};


#endif //UNTITLED_STUDENT_H
