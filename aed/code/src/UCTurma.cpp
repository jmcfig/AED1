//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/UCTurma.h"

const string &UCTurma::getCodUc() const {
    return codUC;
}

void UCTurma::setCodUc(const string &codUc) {
    codUC = codUc;
}

const string &UCTurma::getCodTurma() const {
    return codTurma;
}

void UCTurma::setCodTurma(const string &codTurma) {
    UCTurma::codTurma = codTurma;
}

UCTurma::UCTurma() {}

UCTurma::UCTurma(const string &codUc, const string &codTurma) : codUC(codUc), codTurma(codTurma) {}
