


#include <iostream>
#include "../headers/ScheduleManage.h"
#include "../src/ScheduleManage.cpp"
#include "../src/Menu.cpp"
#include "../headers/Menu.h"


int main() {

    //get all data
    ScheduleManage schMan;
    schMan.getClassesData();
    schMan.getStudentsData();

    //set the data to the menu and start it
    Menu menu;
    menu.setManagement(schMan);
    menu.start();


}
