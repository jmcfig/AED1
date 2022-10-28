//
// Created by up202108829 on 21/10/2022.
//

#include "../Headers/GestaoHor.h"


const set<Estudante> &GestaoHor::getEstudantes() const {
    return estudantes;
}

void GestaoHor::setEstudantes(const set<Estudante> &estudantes) {
    GestaoHor::estudantes = estudantes;
}

const vector<TurmaHor> &GestaoHor::getHorario() const {
    return horario;
}

void GestaoHor::setHorario(const vector<TurmaHor> &horario) {
    GestaoHor::horario = horario;
}

GestaoHor::GestaoHor(const set<Estudante> &estudantes, const vector<TurmaHor> &horario) : estudantes(estudantes), horario(horario) {}
