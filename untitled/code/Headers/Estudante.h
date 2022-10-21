//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_ESTUDANTE_H
#define UNTITLED_ESTUDANTE_H

#include <string>
#include <list>
#include <queue>
#include "UCTurma.h"
#include "Pedido.h"

using namespace std;


class Estudante {

public:
    Estudante();




private:
    string numeroUP;
    string nome;
    list<UCTurma> turmas;
    queue<Pedido> pedidos;

};


#endif //UNTITLED_ESTUDANTE_H
