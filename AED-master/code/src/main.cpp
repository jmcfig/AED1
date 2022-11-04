


#include <iostream>
#include "../headers/ScheduleManage.h"
#include "../src/ScheduleManage.cpp"
#include "../src/Menu.cpp"
#include "../headers/Menu.h"


int main() {

    Menu menu;
    menu.start();


}
    /*
    test.getClassesData();
    cout << "--------------------------------------------------------------------" <<endl;

    for (ClassUC uc: test.getAllUC()){
        cout << uc.getUcCode() << '|' << uc.getClassCode() << '\n';
        for (Slot a: uc.getSchedule()){
            cout << '\t' << a.getDay();
            cout << ' ' << a.getStart();
            cout << ' ' << a.getDuration();
            cout << ' ' << a.getType() << '\n';
        }
    }

    cout << "----------------------------------------------------\n----------------------------------------------------\n";

    test.getClassesData();
    test.getStudentsData();
    for (Student e : test.getStudents()) {
        cout << e.getName() << '\n';
        list<ClassUC> lista = e.getClasses();
        for (ClassUC turma : lista){
            cout << turma.getUcCode() << " -- " << turma.getClassCode() << '\n';
            for (Slot a : turma.getSchedule()){
                cout << '\t' << a.getDay();
                cout << ' ' << a.getStart();
                cout << ' ' << a.getDuration();
                cout << ' ' << a.getType() << '\n';
            }
        }
    }

    return 0;
}
*/