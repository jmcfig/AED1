//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_UCCLASS_H
#define UNTITLED_UCCLASS_H


#include <string>
using namespace std;


class UCClass
 {


public:
    UCClass();
    UCClass(const string &ucCode, const string &classCode);

    const string &getUcCode() const;
    void setUcCode(const string &ucCode);
    const string &getClassCode() const;
    void setClassCode(const string &classCode);

private:
    string ucCode;
    string classCode;

};


#endif //UNTITLED_UCCLASS_H
