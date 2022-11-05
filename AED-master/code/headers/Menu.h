//
// Created by jmigu on 04/11/2022.
//

#ifndef UNTITLED_MENU_H
#define UNTITLED_MENU_H


class Menu {

public:
    Menu();
    void start();

    void setManagement(const ScheduleManage &management);

    //interface 1
    void accessData();
    void changeData();

    //interface 2
    void option1();
    void option2();
    void option3();
    void option4();
    void option5();

    //interface 3
    void cancelEnrollment();
    void removeStudent();
    void addStudent();


private:
    ScheduleManage management_;
};


#endif //UNTITLED_MENU_H
