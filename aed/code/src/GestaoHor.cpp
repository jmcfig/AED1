//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/GestaoHor.h"
#include <iostream>
#include <sstream>
#include <set>
#include <vector>
#include <fstream>


GestaoHor::GestaoHor() {}

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

void GestaoHor::testf() {cout <<"sum";}

void GestaoHor::lerDados(string fname) {

    ifstream file;
    file.open(fname);


    string line = "";
    getline(file,line); // a primeira row são os 'títulos'
    int decider = line.length();

    while(getline(file,line)){

        if (decider < 35) { // if file is classes_per_uc
            string ucCode;
            string classCode;

            istringstream iss(line);

            getline(iss, ucCode, ',');
            getline(iss, classCode, ',');

            cout << ucCode << "  "  << classCode << endl;
        }
        else if (decider > 45) { // if file is classes.csv
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
            getline(iss,tempString,',');
            startHour = atof(tempString.c_str());

            //getting the class duration
            tempString = "";
            getline(iss,tempString,',');
            duration = atof(tempString.c_str());

            getline(iss, type, ',');

            cout << ucCode << "  " << classCode << "  "  << weekDay << "  "  << startHour << "  " << duration << "  " << type << endl;
        }

        else {  // if file is student_classes
            string studentCode;
            string studentName;
            string ucCode;
            string classCode;

            istringstream iss(line);

            getline(iss, studentCode, ',');
            getline(iss, studentName, ',');
            getline(iss, ucCode, ',');
            getline(iss, classCode, ',');

            cout << studentCode << "  " << studentName << "  "  << ucCode << "  "  << classCode << endl;

        }





    }



    }





