#include <string>
#include <list>
#include "../headers/ClassSch.h"

//
// Created by up202108829 on 21/10/2022.
//
const std::__cxx11::basic_string<char> &ClassSch::getUcCode() const {
    return ucCode;
}

void ClassSch::setUcCode(const std::__cxx11::basic_string<char> &ucCode) {
    ClassSch::ucCode = ucCode;
}

const std::__cxx11::basic_string<char> &ClassSch::getClassCode() const {
    return classCode;
}

void ClassSch::setClassCode(const std::__cxx11::basic_string<char> &classCode) {
    ClassSch::classCode = classCode;
}

const std::__cxx11::list <Slot> &ClassSch::getScheduleUCClass() const {
    return scheduleUCclass;
}

void ClassSch::setScheduleUCClass(const std::__cxx11::list <Slot> &scheduleUCclass) {
    ClassSch::scheduleUCclass = scheduleUCclass;
}

ClassSch::ClassSch() {}

ClassSch::ClassSch(const string &ucCode, const string &classCode, const list<Slot> &scheduleUCclass) : ucCode(ucCode), classCode(classCode), scheduleUCclass(scheduleUCclass) {}

