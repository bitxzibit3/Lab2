//
// Created by Timur on 29.05.2021.
//

#ifndef LAB2_VECTOR_MENU_HELPFUL_FUNCTIONS_H
#define LAB2_VECTOR_MENU_HELPFUL_FUNCTIONS_H
#include <iostream>
#include <stdlib.h>

int variable_choise();

const char *MSGS[] = {"0. Quit", "1. Sum polynoms", "2. Multiply polynoms", "3. Raise a polynom to a power", "4. Polynoms composotion", "5. Count a value for entered x"};
const size_t MSGS_SIZE = (sizeof(MSGS) / sizeof(MSGS[0]));

int stoi (char *);

int choise();

void dialog (int);

#endif //LAB2_VECTOR_MENU_HELPFUL_FUNCTIONS_H
