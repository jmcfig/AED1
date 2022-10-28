//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_TURMAHOR_H
#define UNTITLED_TURMAHOR_H


#include <string>
#include "Slot.h"

using namespace std;



class TurmaHor {

private:
    string codUC;
public:
    TurmaHor(const string &codUc, const string &codTurma, const list<Slot> &horarioUCturma);

public:
    const string &getCodUc() const;

    void setCodUc(const string &codUc);

    const string &getCodTurma() const;

    void setCodTurma(const string &codTurma);

    const list<Slot> &getHorarioUCturma() const;

    void setHorarioUCturma(const list<Slot> &horarioUCturma);

private:
    string codTurma;
    list<Slot> horarioUCturma;

};


#endif //UNTITLED_TURMAHOR_H



