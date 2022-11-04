//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/Student.h"



void Student::appendUC(ClassUC uc) {classes_.push_back(uc);}

Student::Student(const string &upNumber, const string &name) : upNumber_(upNumber), name_(name) {}

bool Student::operator<(const Student &rhs) const {
    return name_ < rhs.name_;
}

const string &Student::getUpNumber() const {
    return upNumber_;
}

const string &Student::getName() const {
    return name_;
}

const list<ClassUC> &Student::getClasses() const {
    return classes_;
}

void Student::setUpNumber(const string &upNumber) {
    upNumber_ = upNumber;
}

void Student::setName(const string &name) {
    name_ = name;
}

void Student::setClasses(const list<ClassUC> &classes) {
    classes_ = classes;
}

