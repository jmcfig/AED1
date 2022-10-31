//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/Estudante.h"

Estudante::Estudante() {}
Estudante::Estudante(const string &numeroUp, const string &nome, const list<UCTurma> &turmas, const queue<Pedido> &pedidos) : numeroUP(numeroUp), nome(nome), turmas(turmas){}


const string &Estudante::getNumeroUp() const {return numeroUP;}
void Estudante::setNumeroUp(const string &numeroUp) {numeroUP = numeroUp;}
const string &Estudante::getNome() const {return nome;}
void Estudante::setNome(const string &nome) {Estudante::nome = nome;}
const list<UCTurma> &Estudante::getTurmas() const {return turmas;}
void Estudante::setTurmas(const list<UCTurma> &turmas) {Estudante::turmas = turmas;}
const queue<Pedido> &Estudante::getPedidos() const {return pedidos;}
void Estudante::setPedidos(const queue<Pedido> &pedidos) {Estudante::pedidos = pedidos;}

void Estudante::appendTurma(UCTurma uct){
    Estudante::turmas.push_back(uct);
}




