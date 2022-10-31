//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/GestaoHor.h"
#include "../src/Estudante.cpp"
#include "../src/UCTurma.cpp"
#include <iostream>
#include <sstream>
#include <set>
#include <vector>
#include <list>
#include <fstream>


GestaoHor::GestaoHor() {}
GestaoHor::GestaoHor(const set<Estudante> &estudantes, const vector<TurmaHor> &horario) : estudantes(estudantes),horario(horario) {}

const set<Estudante> &GestaoHor::getEstudantes() const {return estudantes;}
void GestaoHor::setEstudantes(const set<Estudante> &estudantes) {GestaoHor::estudantes = estudantes;}
const vector<TurmaHor> &GestaoHor::getHorario() const {return horario;}
void GestaoHor::setHorario(const vector<TurmaHor> &horario) {GestaoHor::horario = horario;}

void GestaoHor::lerDados() {

    ifstream classes_uc_file("C:\\Users\\jmigu\\CLionProjects\\AED\\aed\\code\\dados\\classes_per_uc.csv");
    string line = "";
    getline(classes_uc_file,line); // a primeira row são os 'títulos'
    //criar lista ucturma

    list<UCTurma> listUCT;
    while(getline(classes_uc_file,line)) {
        string ucCode;
        string classCode;

        istringstream iss(line);

        getline(iss, ucCode, ',');
        getline(iss, classCode, ',');

        UCTurma ucTurma = UCTurma(ucCode, classCode);
        listUCT.push_back(ucTurma);
        }

    ifstream students_file("C:\\Users\\jmigu\\CLionProjects\\AED\\aed\\code\\dados\\students_classes.csv");
    string line2 = "";
    getline(students_file,line2); // a primeira row são os 'títulos'


    string comparar = "000000000";

    Estudante estudante = Estudante("x","x",{});
    while(getline(classes_uc_file,line2)) {

        string studentCode;
        string studentName;
        string ucCode;
        string classCode;

        istringstream iss(line2);

        getline(iss, studentCode, ',');
        getline(iss, studentName, ',');
        getline(iss, ucCode, ',');
        getline(iss, classCode, ',');

        UCTurma temp = UCTurma(ucCode,classCode);


        if (studentCode != comparar) {
            estudante.setNumeroUp(studentCode);
            estudante.setNome(studentName);
            estudante.appendTurma(temp);

        }
        else {estudante.appendTurma(temp);}
        comparar = studentCode;



        }



/*

    else if (decider > 45) { // if file is classes.csv
        while (getline(file, line)) {
            string ucCode;
            string classCode;
            string weekDay;
            double startHour;
            double duration;
            string type;

            istringstream iss(line);

            getline(iss, ucCode, ',');
            getline(iss, classCode, ',');
            getline(iss, weekDay, ',');

            //getting the starting hour
            string tempString = "";
            getline(iss, tempString, ',');
            startHour = atof(tempString.c_str());

            //getting the class duration
            tempString = "";
            getline(iss, tempString, ',');
            duration = atof(tempString.c_str());

            getline(iss, type, ',');

            cout << ucCode << "  " << classCode << "  " << weekDay << "  " << startHour << "  " << duration << "  "
                 << type << endl;
        }
    }

    else {  // if file is student_classes
        while (getline(file, line)) {
            string studentCode;
            string studentName;
            string ucCode;
            string classCode;

            istringstream iss(line);

            getline(iss, studentCode, ',');
            getline(iss, studentName, ',');
            getline(iss, ucCode, ',');
            getline(iss, classCode, ',');

            cout << studentCode << "  " << studentName << "  " << ucCode << "  " << classCode << endl;

        }
    }





    }


*/
    }







