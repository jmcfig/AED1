cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp code/Headers/TurmaHor.h code/Classes/TurmaHor.cpp code/Classes/UCTurma.cpp code/Headers/UCTurma.h code/Classes/Slot.cpp code/Headers/Slot.h code/Classes/GestaoHor.cpp code/Headers/GestaoHor.h code/Classes/Estudante.cpp code/Headers/Estudante.h code/Classes/Pedido.cpp code/Headers/Pedido.h)
