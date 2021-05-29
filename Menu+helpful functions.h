//
// Created by Timur on 29.05.2021.
//

#ifndef LAB2_VECTOR_MENU_HELPFUL_FUNCTIONS_H
#define LAB2_VECTOR_MENU_HELPFUL_FUNCTIONS_H
#include <iostream>
#include <stdlib.h>
#include <functional>

int variable_choise();


const char *MSGS[] = {"0. Quit", "1. Sum polynoms", "2. Multiply polynoms", "3. Raise a polynom to a power", "4. Polynoms composotion",
                      "5. Count a value for entered x", "6. Apply function for polynom's coef", "7. Concat polynoms", "8. Get SubSeq",
                      "9. Change type of variables"};
const size_t MSGS_SIZE = (sizeof(MSGS) / sizeof(MSGS[0]));

template <class T>
bool foo (char, float, T);

int stoi (char *);

int choise();

void dialog (int);

template <class T>
Sequence<T> *Where(char, T, bool (*)(char, T, T), Polynom<T> *, int);

#endif //LAB2_VECTOR_MENU_HELPFUL_FUNCTIONS_H
