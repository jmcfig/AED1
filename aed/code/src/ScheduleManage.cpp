//
// Created by up202108829 on 21/10/2022.
//

#include "../headers/ScheduleManage.h"
#include "../src/Student.cpp"
#include "../src/UCClass.cpp"
#include <iostream>
#include <sstream>
#include <set>
#include <vector>
#include <list>
#include <fstream>


ScheduleManage::ScheduleManage() {}
ScheduleManage::ScheduleManage(const set<Student> &estudantes, const vector<ClassSch> &horario) : estudantes(estudantes), horario(horario) {}

const set<Student> &ScheduleManage::getEstudantes() const {return estudantes;}
void ScheduleManage::setEstudantes(const set<Student> &estudantes) { ScheduleManage::estudantes = estudantes;}
const vector<ClassSch> &ScheduleManage::getHorario() const {return horario;}
void ScheduleManage::setHorario(const vector<ClassSch> &horario) { ScheduleManage::horario = horario;}

void ScheduleManage::lerDados() {

    ifstream classes_uc_file("C:\\Users\\diogo\\OneDrive\\Área de Trabalho\\AED-main\\AED-main\\aed\\code\\dados\\classes_per_uc.csv");
    string line = "";
    getline(classes_uc_file,line); // a primeira row são os 'títulos'
    //criar lista ucturma

    list<UCClass> listUCT;
    while(getline(classes_uc_file,line)) {
        string ucCode;
        string classCode;

        istringstream iss(line);

        getline(iss, ucCode, ',');
        getline(iss, classCode, ',');

        UCClass ucClass = UCClass(ucCode, classCode);
        listUCT.push_back(ucClass);
        }

    ifstream students_file("C:\\Users\\diogo\\OneDrive\\Área de Trabalho\\AED-main\\AED-main\\aed\\code\\dados\\students_classes.csv");
    string line2 = "";
    getline(students_file,line2); // a primeira row são os 'títulos'


    string comparar = "000000000";

    Student student = Student("x", "x", {});
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

        UCClass temp = UCClass(ucCode,classCode);


        if (studentCode != comparar) {
            student.setUpNumber(studentCode);
            student.setName(studentName);
            student.appendClass(temp);

        }
        else {student.appendClass(temp);}
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







