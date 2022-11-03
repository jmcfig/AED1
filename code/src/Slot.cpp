//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/Slot.h"





const string &Slot::getDay() const {
    return day_;
}

void Slot::setDay(const string &day) {
    Slot::day_ = day;
}

const string &Slot::getStart() const {
    return start_;
}

void Slot::setStart(const string &start) {
    Slot::start_ = start;
}

const string &Slot::getDuration() const {
    return duration_;
}

void Slot::setDuration (const string &duration) {
    Slot::duration_ = duration;
}

const string &Slot::getType() const {
    return type_;
}

void Slot::setType(const string &type) {
    Slot::type_ = type;
}

Slot::Slot(const string &day, const string &start, const string &duration, const string &type) : day_(day),start_(
                                                                                                             start),
                                                                                                     duration_(duration),
                                                                                                     type_(type) {}


