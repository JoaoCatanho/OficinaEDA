cmake_minimum_required(VERSION 3.24)
project(OficinaEDA)

set(CMAKE_CXX_STANDARD 17)

add_executable(OficinaEDA main.cpp Gestão.cpp Gestão.h Inicialização.cpp Inicialização.h rascunhos.cpp mecanico.cpp ET.cpp ET.h mecanico.h)
