//
// Created by jmigu on 04/11/2022.
//

#include "../headers/Menu.h"
#include <iostream>
using namespace std;

Menu::Menu() {}

void Menu::start() {

    cout << "--------------------------------------------------\n"
         << "--------------------------------------------------\n";
    cout << "What data do you want to access?\n"
         << "1 - Student Data\n"
         << "2 - ClassUC Data\n";

    int num;
    cin  >> num;

    if(num==1){}
    else if(num==2){}
    else cout << "Please pick one of the available options.\n";


}
