//
// Created by Timur on 29.05.2021.
//

#include "Menu+helpful functions.h"

int stoi (char *str)
{
    int ans = 0, i = 0;
    int sign = (str[0] == '-') ? -1: (((str[0] >= '0') && (str[0] <= '9')) ? 1: 0);
    if (sign == 0)
        return -1;
    while (str[i] != '\0')
    {
        if ((str[i] <= '9') && (str[i] >= '0'))
            ans = 10 * ans + str[i] - '0';
        else
            return -1;
        i++;
    }
    return sign * ans;

}

int variable_choise()
{
    while (1)
    {
        std::cout << "What type of data do you wanna use?" << std::endl << "1. Integer" << std::endl << "2. Float" << std::endl << "3. Complex" << std::endl;
        char *c = new char (100);
        std::cin >> c;
        int ans = stoi (c);
        delete c;
        if ((ans > 0) && (ans < 4))
            return ans;
        else
            std::cout << "You entered a wrong number, plaese, try again!" << std::endl;
    }
}

int choise_()
{
    while (1) {
        char *ch = new char (100);
        std::cout << "What do you wanna do?" << std::endl;
        for (size_t i = 0; i < MSGS_SIZE; i++)
            std::cout << MSGS[i] << std::endl;
        std::cin >> ch;
        int choise = stoi(ch);
        delete ch;
        if ((choise >= 0) && (choise < MSGS_SIZE))
            return choise;
        else
            std::cout << "You entered a wrong number, plaese, try again!" << std::endl;
        }
}

template <class T>
void dialog(int seq)
{
    int choise = choise_();
    switch (choise)
    {
        case(0):
        {
            std::cout << "Good Bye!" << std::endl;
            return;
        }
        case(1):
        {
            Polynom<T> *first = PolynomEnter<T>(seq);
            std::cout << "You entered : ";
            first->Print();
            Polynom<T> *second = PolynomEnter<T>(seq);
            std::cout << "You entered : ";
            second->Print();
            //Polynom<T> *ans = first + second;
            //ans->Print();
        }
    }
}

