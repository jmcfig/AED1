//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/Student.h"

Student::Student() {}
Student::Student(const string &upNumber, const string &name, const list<UCClass> &classes, const queue<Request> &requests) : upNumber(upNumber), name(name), classes(classes){}


const string &Student::getUpNumber() const {return upNumber;}
void Student::setUpNumber(const string &numeroUp) { upNumber = numeroUp;}
const string &Student::getName() const {return name;}
void Student::setName(const string &name) { Student::name = name;}
const list<UCClass> &Student::getClasses() const {return classes;}
void Student::setClasses(const list<UCClass> &classes) { Student::classes = classes;}
const queue<Request> &Student::getRequests() const {return requests;}
void Student::setRequests(const queue<Request> &requests) { Student::requests = requests;}

void Student::appendClass(UCClass uct){
    Student::classes.push_back(uct);
}




