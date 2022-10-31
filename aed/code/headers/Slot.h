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
    Slot(const string &dia, const string &horaInicio, const string &horaFim, const string &tipo);

    const string &getDia() const;
    void setDia(const string &dia);
    const string &getHoraInicio() const;
    void setHoraInicio(const string &horaInicio);
    const string &getHoraFim() const;
    void setHoraFim(const string &horaFim);
    const string &getTipo() const;
    void setTipo(const string &tipo);


private:
    string dia;
    string horaInicio;
    string horaFim;
    string tipo;
};




#endif //UNTITLED_SLOT_H
