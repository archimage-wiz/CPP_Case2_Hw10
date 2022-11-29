# CMakeList.txt : CMake project for ClassesCmakeDemo, include source and define
# project specific logic here.
#

cmake_minimum_required (VERSION 3.8)

project (ClassesCmakeDemo)

# Add source to this project's executable.
add_executable (ClassesCMakeDemo
"main.cpp"
"classes/classes.h"
"classes/EquilateralTriangle.cpp"
"classes/EquilateralTriangle.h"
"classes/figure.cpp"
"classes/figure.h"
"classes/IsoscelesTriangle.cpp"
"classes/IsoscelesTriangle.h"
"classes/Parallelogram.cpp"
"classes/Parallelogram.h"
"classes/Quadrangle.cpp"
"classes/Quadrangle.h"
"classes/Rectangle.cpp"
"classes/Rectangle.h"
"classes/Rhomb.cpp"
"classes/Rhomb.h"
"classes/RightTriangle.cpp"
"classes/RightTriangle.h"
"classes/Square.cpp"
"classes/Square.h"
"classes/Triangle.cpp"
"classes/Triangle.h"

)


# TODO: Add tests and install targets if needed.
