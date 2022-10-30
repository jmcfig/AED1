//
// Created by up202108829 on 21/10/2022.
//
#ifndef UNTITLED_UCTURMA_H
#define UNTITLED_UCTURMA_H


#include <string>
using namespace std;


class UCTurma {

private:
public:
    UCTurma();

public:
    const string &getCodUc() const;

    void setCodUc(const string &codUc);

    const string &getCodTurma() const;

    void setCodTurma(const string &codTurma);

private:
    string codUC;
    string codTurma;

};


#endif //UNTITLED_UCTURMA_H
