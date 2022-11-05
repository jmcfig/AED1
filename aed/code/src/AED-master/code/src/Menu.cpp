//
// Created by jmigu on 04/11/2022.
//

#include "../headers/Menu.h"
#include <iostream>
#include <string>
#include <set>
using namespace std;

string to_lower (string str)
{
    for(auto& elem : str)
    {elem = tolower(elem);}
    return str;
}

string to_upper (string str)
{
    for(auto& elem : str)
    {elem = toupper(elem);}
    return str;
}

void Menu::setManagement(const ScheduleManage &management) {
    management_ = management;
}

void Menu::option1(){
    string uccode;
    cout << "--------------------------------------------------\n";
    cout << "Enter the UcCode:";
    cin >> uccode;
    string classcode;
    cout << "Enter the ClassCode:";
    cin >> classcode;
    cout << endl;

    bool isValid = false;
    for (Student stu: management_.getStudents()) {
        list<ClassUC> listC = stu.getClasses();
        for (ClassUC uc: listC) {
            if (to_lower(uc.getUcCode()) == to_lower(uccode) &&
                to_lower(uc.getClassCode()) == to_lower(classcode)) {
                isValid = true;
                cout << stu.getName() << " (" << stu.getUpNumber()
                     << ")\n";
            }

        }

    }
    if(!isValid) cout << "That's not a valid input.\n";
}

void Menu::option2() {
    string id;
    cout << "--------------------------------------------------\n";
    cout << "Enter the student's name or UP number:";
    cin >> id;
    cout << endl;
    bool isValid = false;
    for (Student stu: management_.getStudents()) {
        if (stu.getUpNumber() == id || to_lower(stu.getName()) == to_lower(id)) {
            isValid = true;
            cout << "The student " << stu.getName() << " (" << stu.getUpNumber()
                 << ") has the following schedule:\n" << endl;
            list<ClassUC> listC = stu.getClasses();
            for (ClassUC uc: listC) {
                cout << uc.getUcCode() << " -- " << uc.getClassCode() << endl;
                for (Slot a: uc.getSchedule()) {
                    cout << '\t' << a.getDay();
                    cout << ' ' << a.getStart();
                    cout << ' ' << a.getDuration();
                    cout << ' ' << a.getType() << '\n';

                }
            }


        }
    }
    if (!isValid) cout << "That's not a valid input.\n";
}

void Menu::option3() {
    string uccode;
    cout << "--------------------------------------------------\n";
    cout << "Enter the UcCode:";
    cin >> uccode;
    string classcode;
    cout << "Enter the ClassCode:";
    cin >> classcode;
    cout << endl;
    bool isValid=false;

    for(ClassUC uc : management_.getAllUC()) {
        if (to_lower(uc.getUcCode()) == to_lower(uccode) &&
            to_lower(uc.getClassCode()) == to_lower(classcode)) {
            isValid=true;
            cout << uc.getUcCode() << " -- " << uc.getClassCode() << endl;
            for (Slot a: uc.getSchedule()) {
                cout << '\t' << a.getDay();
                cout << ' ' << a.getStart();
                cout << ' ' << a.getDuration();
                cout << ' ' << a.getType() << '\n';
            }
        }
    } if (!isValid) cout << "That's not a valid input.\n";
}

void Menu::option4() {
    string ucCode;
    cout << "--------------------------------------------------\n";
    cout << "Enter the UcCode:";
    cin >> ucCode;
    cout << endl;
    bool isValid = false;

    for (ClassUC uc: management_.getAllUC()) {
        if (to_lower(ucCode) == to_lower(uc.getUcCode())) {
            isValid=true;
            cout << uc.getClassCode() << endl;
            for (Slot a: uc.getSchedule()) {
                cout << '\t' << a.getDay();
                cout << ' ' << a.getStart();
                cout << ' ' << a.getDuration();
                cout << ' ' << a.getType() << '\n';
            }
        }

    } if(!isValid) cout << "That's not a valid input.\n";
}

void Menu::option5() {
    string classCode;
    cout << "--------------------------------------------------\n";
    cout << "Enter the ClassCode:";
    cin >> classCode;
    cout << endl;
    bool isValid = false;

    for (ClassUC uc: management_.getAllUC()) {
        if (to_lower(classCode) == to_lower(uc.getClassCode())) {
            isValid=true;
            cout << uc.getUcCode() << endl;
            for (Slot a: uc.getSchedule()) {
                cout << '\t' << a.getDay();
                cout << ' ' << a.getStart();
                cout << ' ' << a.getDuration();
                cout << ' ' << a.getType() << '\n';
            }
        }

    } if(!isValid) {cout << "That's not a valid input.\n";}
}

void Menu::accessData() {
    cout << "--------------------------------------------------\n";

    cout << "Which data do you want to access?\n\n"
         << "1 - All students of a specific UC/class.\n"
         << "2 - Schedule of a specific student.\n"
         << "3 - Schedule of a specific UC/class.\n"
         << "4 - Schedule of a specific UC.\n"
         << "5 - Schedule of a specific class.\n";

    string ch;
    cout << endl << "Insert option:";
    cin >> ch;


    if (ch == "1") option1();
    else if (ch == "2") option2();
    else if (ch == "3") option3();
    else if(ch=="4") option4();
    else if(ch=="5") option5();
    else { cout << "That's not a valid input.\n"; }
    cout << endl;

}

void Menu::cancelEnrollment() {
    string id;
    cout << "--------------------------------------------------\n";
    cout << "Enter the student's name or UP number:";
    cin >> id;
    cout << endl;
    bool isValid = false;
    for (Student stu: management_.getStudents()) {
        if (stu.getUpNumber() == id || to_lower(stu.getName()) == to_lower(id)) {
            isValid = true;
            set<Student> temp = management_.getStudents();
            temp.erase(Student(stu.getUpNumber(), stu.getName()));
            management_.setStudents(temp);
            cout << stu.getName() << "(" << stu.getUpNumber() << ") cancelled their enrollment.\n";
        }
    } if(!isValid) cout << "That's not a valid input.\n";
}

void Menu::removeStudent() {

    string id, ucCode, classCode;
    cout << "--------------------------------------------------\n";
    cout << "Enter the student's name or UP number:";
    cin >> id;
    cout << "Enter the ucCode:";
    cin >> ucCode;
    cout << "Enter the classCode:";
    cin >> classCode;
    cout<<endl;

    bool isValid = false;
    for (Student stu: management_.getStudents()) {
        if (stu.getUpNumber() == id || to_lower(stu.getName()) == to_lower(id)) {
                management_.removeStudentUC(stu,to_upper(ucCode),to_upper(classCode));
                isValid = true;
                id = stu.getName();
            }
        }
    if(!isValid) cout << "That's not a valid input\n";
}

void Menu::addStudent(){

    string id, ucCode, classCode;
    cout << "--------------------------------------------------\n";
    cout << "Enter the student's name or UP number:";
    cin >> id;
    cout << "Enter the ucCode:";
    cin >> ucCode;
    cout << "Enter the classCode:";
    cin >> classCode;
    cout<<endl;

    set<Student> tempSet = management_.getStudents();

    for (Student stu: management_.getStudents()) {
        if (stu.getUpNumber() == id || to_lower(stu.getName()) == to_lower(id)){
            management_.addStudentUC(stu, to_upper(ucCode),to_upper(classCode));
        }
    }
    if(!management_.checkAllGood(ucCode)) {cout << "That's not possible. \n"; management_.setStudents(tempSet);}


}

void Menu::changeData() {
    cout << "--------------------------------------------------\n";

    cout << "Which data do you want to change?\n\n"
         << "1 - Cancel a students' enrollment.\n"
         << "2 - Remove a student from a UC/class\n"
         << "3 - Add a student to a UC/class\n";

    string ch;
    cout << endl << "Insert option:";
    cin >> ch;

    if (ch == "1") cancelEnrollment();
    else if (ch == "2") removeStudent();
    else if (ch == "3") addStudent();
    else cout << "That's not a valid input.\n\n";
}


Menu::Menu(){}

void Menu::start() {
    bool run = true;


    while (run == true) {
        cout << "--------------------------------------------------\n"
             << "--------------------------------------------------\n";
        cout << "What do you want to do?\n\n"
             << "1 - Access data.\n"
             << "2 - Change data.\n"
             << "Q - Quit.\n";

        string ch; // ch is defined as a string, so it won't cause problems if someone inputs a string
        cout << endl << "Insert option:";
        cin >> ch;


        if (ch == "1") accessData();
        else if (ch == "2") changeData();

        // use 'q' to quit the menu
        else if (ch == "q" || ch == "Q") {
            cout << "--------------------------------------------------\n"
                 << "--------------------------------------------------\n";
            run = false; }

        else { cout << "That's not a valid input.\n\n"; }
    }
}

