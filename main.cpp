#include <iostream>
#include "Sequence.cpp"
#include "Polynom.cpp"
#include "complex.cpp"
#include "Menu+helpful functions.cpp"

const int VAR = variable_choise();
const int SEQTYPE = 1;

int main() {
    Polynom<int> *tmp = PolynomEnter<int>(SEQTYPE);
    tmp->Print();
    std::cout << tmp->Size();
//    switch (VAR)
//    {
//        case (1):
//            dialog <int> (SEQTYPE);
//        case (2):
//            dialog <float> (SEQTYPE);
//        case(3):
//            dialog <complex> (SEQTYPE);
//    }
    return 0;
}
