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
    Estudante(const string &numeroUp, const string &nome, const list<UCTurma> &turmas);

    const string &getNumeroUp() const;
    void setNumeroUp(const string &numeroUp);
    const string &getNome() const;
    void setNome(const string &nome);
    const list<UCTurma> &getTurmas() const;
    void setTurmas(const list<UCTurma> &turmas);
    void appendTurma(UCTurma uct);
    const queue<Pedido> &getPedidos() const;
    void setPedidos(const queue<Pedido> &pedidos);



private:
    string numeroUP;
    string nome;
    list<UCTurma> turmas;
    queue<Pedido> pedidos;

};


#endif //UNTITLED_ESTUDANTE_H
