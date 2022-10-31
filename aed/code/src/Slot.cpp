//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/Slot.h"

Slot::Slot() {}



const string &Slot::getDia() const {
    return dia;
}

void Slot::setDia(const string &dia) {
    Slot::dia = dia;
}

const string &Slot::getHoraInicio() const {
    return horaInicio;
}

void Slot::setHoraInicio(const string &horaInicio) {
    Slot::horaInicio = horaInicio;
}

const string &Slot::getHoraFim() const {
    return horaFim;
}

void Slot::setHoraFim(const string &horaFim) {
    Slot::horaFim = horaFim;
}

const string &Slot::getTipo() const {
    return tipo;
}

void Slot::setTipo(const string &tipo) {
    Slot::tipo = tipo;
}

Slot::Slot(const string &dia, const string &horaInicio, const string &horaFim, const string &tipo) : dia(dia),
                                                                                                     horaInicio(
                                                                                                             horaInicio),
                                                                                                     horaFim(horaFim),
                                                                                                     tipo(tipo) {}


