//
// Created by up202108829 on 21/10/2022.
//


#include "../headers/ScheduleManage.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include "../src/Slot.cpp"
#include "../src/Student.cpp"
#include "../src/ClassUC.cpp"


using namespace std;


ScheduleManage::ScheduleManage() {}

const vector<ClassUC> &ScheduleManage::getAllUC() const {
    return allUC_;
}


void ScheduleManage::getClassesData() {

    string fname = "../code/dados/classes.csv";
    ifstream file(fname);

    std::string line = "";
    std::string str = "";
    std::string previousUC = ""; //compares current uc code with the last one

    vector<std::string> temp;


    if (file.is_open()) {
        getline(file, line); //skip the first line, since is useless in this context
        while (getline(file, line)) {
            temp.clear();
            istringstream iss(line);

            while (getline(iss, str, ',')) {
                temp.push_back(str);
            }


            string classCode = temp[0];
            string ucCode = temp[1];
            string day = temp[2];
            string start = temp[3];
            string duration = temp[4];
            string type = temp[5];
            Slot slot = Slot(day, start, duration, type);


            if (ucCode != previousUC) {

                allUC_.push_back(ClassUC(ucCode,classCode,{slot}));

            } else {
                bool ucAlreadyIn = false;
                for (ClassUC& uc: allUC_) {
                    if (classCode == uc.getClassCode() && ucCode == uc.getUcCode()) {
                        uc.addSlot(slot);
                        ucAlreadyIn = true;
                    }
                }
                if (!ucAlreadyIn) { allUC_.push_back(ClassUC(ucCode, classCode, {slot})); }

            }

            previousUC=ucCode;
        }

    }
        else {cout << "Didn't manage to open classes.csv." << endl; }


    }


void ScheduleManage::getStudentsData() {

    string fname = "../code/dados/students_classes.csv";
    ifstream file(fname);

    std::string line = "";
    std::string str = "";


    vector<std::string> temp;


    if (file.is_open()) {
        getline(file, line); //skip the first line, since is useless in this context

        Student student = Student("0000","0000");
        bool first=1;



        while (getline(file, line)) {

            temp.clear();
            istringstream iss(line);

            while (getline(iss, str, ',')) {
                temp.push_back(str);
            }

            string studentCode = temp[0];
            string studentName = temp[1];
            string ucCode = temp[2];
            string classCode = temp[3];


            if (studentCode!=student.getUpNumber()) { //if student changes

                if(!first) students_.insert(student);

                student = Student(studentCode, studentName);
                for (ClassUC uc: allUC_) {

                    if (classCode == uc.getClassCode() && ucCode == uc.getUcCode()) {
                        student.appendUC(uc);
                    }
                }
            }


            else {
                for (ClassUC uc: allUC_) {

                    if (classCode == uc.getClassCode() && ucCode == uc.getUcCode()) {
                        student.appendUC(uc);
                    }
                }
            }
         first=0;
        }

    } else { cout << "Didn't manage to open students_classes.csv."; }
}

const set<Student> &ScheduleManage::getStudents() const {
    return students_;
}

void ScheduleManage::setStudents(const set<Student> &students) {
    students_ = students;
}

void ScheduleManage::removeStudentUC(Student student,string ucCode, string classCode) {
    student.removeClassUC(ucCode,classCode);
    set<Student> temp;
    for (Student stu : students_){
        if(stu.getUpNumber() != student.getUpNumber()){
            temp.insert(stu);
        }
    }
    temp.insert(student);
    setStudents(temp);
    }


bool ScheduleManage::checkAllGood(string ucCode) {
    int min = 1000;
    int max = 0;
    vector<int> studentsNumber;

    for (ClassUC classUc : allUC_){
        if(classUc.getUcCode() == ucCode){
            int count=0;
                for (Student stu : students_){
                    for(ClassUC studentUC : stu.getClasses()){
                        if(studentUC.getUcCode() == ucCode && studentUC.getClassCode()==classUc.getClassCode()){
                            count++;
                        }
                    }
            } if (count < min) min = count; if (count > max) max = count;
        }
    }

    if(max<=min+4){return true;}
    return false;
}

void ScheduleManage::addStudentUC(Student student, std::string ucCode, std::string classCode) {
    student.addClassUC(ucCode,classCode);
    set<Student> temp;
    for (Student stu : students_){
        if(stu.getUpNumber() != student.getUpNumber()){
            temp.insert(stu);
        }
    }
    temp.insert(student) ;cout<< "IGOT HERT";
    setStudents(temp);

}


















