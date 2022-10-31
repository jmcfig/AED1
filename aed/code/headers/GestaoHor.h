//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_GESTAOHOR_H
#define UNTITLED_GESTAOHOR_H


#include <string>
#include <set>
#include <vector>
#include <fstream>
#include "Estudante.h"
#include "TurmaHor.h"

using namespace std;



class GestaoHor {

public:
    GestaoHor();
    GestaoHor(const set<Estudante> &estudantes, const vector<TurmaHor> &horario);

    const set<Estudante> &getEstudantes() const;
    void setEstudantes(const set<Estudante> &estudantes);
    const vector<TurmaHor> &getHorario() const;
    void setHorario(const vector<TurmaHor> &horario);
    void lerDados();


private:
    set<Estudante> estudantes;
    vector<TurmaHor> horario;
};


#endif //UNTITLED_GESTAOHOR_H
