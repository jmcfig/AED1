//
// Created by jmigu on 04/11/2022.
//

#include "../headers/Menu.h"
#include <iostream>
#include <string>
using namespace std;

string to_lower (string str)
{
    for(auto& elem : str)
    {elem = tolower(elem);}
    return str;

}


Menu::Menu() {}

void Menu::start() {

    ScheduleManage management;
    management.getClassesData();
    management.getStudentsData();


    cout << "--------------------------------------------------\n"
         << "--------------------------------------------------\n";
    cout << "Which data do you want to access?\n"
         << "1 - Schedule of a specific student\n"
         << "2 - UC Data.\n";

    int num;
    cout << "Insert option:";
    cin >> num;

    if (num == 1) { //Student Data
        string id;
        cout << "--------------------------------------------------\n";
        cout << "Enter the student's name or UP number:";
        cin >> id;
        cout << endl;
        bool isValid = false;
        for (Student stu: management.getStudents()) {
            if (stu.getUpNumber() == id || to_lower(stu.getName()) == to_lower(id)) {
                isValid = true;
                cout << "The student " << stu.getName() << " (" << stu.getUpNumber() << ") has the following schedule:\n" << endl;
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
        if(!isValid) cout << "That's not an available student.\n";



            } else if (num == 2) {

            } else cout << "Please pick one of the available options.\n";

        }
