//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_SLOT_H
#define UNTITLED_SLOT_H

#include <string>

using namespace std;




class Slot {
public:
    Slot();
    Slot(const string &day, const string &start, const string &duration, const string &type);

    const string &getDay() const;
    void setDay(const string &day);
    const string &getStart() const;
    void setStart(const string &start);
    const string &getDuration() const;
    void setDuration(const string &duration);
    const string &getType() const;
    void setType(const string &type);


private:
    string day_;
    string start_;
    string duration_;
    string type_;
};




#endif //UNTITLED_SLOT_H
