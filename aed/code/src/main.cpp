#include <iostream>
#include "../headers/GestaoHor.h"
#include "../src/GestaoHor.cpp"
#include "../headers/Estudante.h"
#include "../src/Estudante.cpp"



int main() {

   GestaoHor hor;
   hor.lerDados("C:\\Users\\jmigu\\CLionProjects\\aed\\code\\dados\\classes.csv");
   cout << "--------------------------------------------------------------------" <<endl;
   hor.lerDados("C:\\Users\\jmigu\\CLionProjects\\aed\\code\\dados\\classes_per_uc.csv");
   cout << "--------------------------------------------------------------------" <<endl;
   hor.lerDados("C:\\Users\\jmigu\\CLionProjects\\aed\\code\\dados\\students_classes.csv");

    return 0;
}
