#include <string>
#include <list>
#include "../headers/TurmaHor.h"

//
// Created by up202108829 on 21/10/2022.
//
const std::__cxx11::basic_string<char> &TurmaHor::getCodUc() const {
    return codUC;
}

void TurmaHor::setCodUc(const std::__cxx11::basic_string<char> &codUc) {
    codUC = codUc;
}

const std::__cxx11::basic_string<char> &TurmaHor::getCodTurma() const {
    return codTurma;
}

void TurmaHor::setCodTurma(const std::__cxx11::basic_string<char> &codTurma) {
    TurmaHor::codTurma = codTurma;
}

const std::__cxx11::list <Slot> &TurmaHor::getHorarioUCturma() const {
    return horarioUCturma;
}

void TurmaHor::setHorarioUCturma(const std::__cxx11::list <Slot> &horarioUCturma) {
    TurmaHor::horarioUCturma = horarioUCturma;
}

TurmaHor::TurmaHor() {}

