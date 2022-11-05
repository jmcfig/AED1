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

void Student::removeClassUC(string ucCode, string classCode) {

    list<ClassUC> lista{};
    bool isValid = false;
    for(ClassUC uc2 : getClasses()){
        if (classCode!=uc2.getClassCode() || ucCode!=uc2.getUcCode() ) {
            lista.push_back(uc2);
        }
        else isValid=true;
    }
    setClasses(lista);
    if (!isValid) cout << "That's not a valid input.\n";
    else cout << getName() << "(" << getUpNumber() << ") is no longer part of the UC/Class.\n";
}

void Student::addClassUC(string ucCode, string classCode){
    list<ClassUC> lista= classes_;
    bool isValid=false;

    for(ClassUC uc : lista){
        if (classCode==uc.getClassCode() && ucCode==uc.getUcCode() ){
            isValid=true;
            lista.push_back(uc);
        }
    }
    setClasses(lista);
    if (isValid);

}
