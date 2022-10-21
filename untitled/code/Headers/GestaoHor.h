//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_GESTAOHOR_H
#define UNTITLED_GESTAOHOR_H


#include <string>
#include <set>
#include <vector>
#include "Estudante.h"
#include "TurmaHor.h"

using namespace std;



class GestaoHor {

public:
    GestaoHor();



private:
    set<Estudante> estudantes;
    vector<TurmaHor> horario;


};


#endif //UNTITLED_GESTAOHOR_H
