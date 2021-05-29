#include <iostream>
#include "Sequence.cpp"
#include "Polynom.cpp"
#include "complex.cpp"
#include "Menu+helpful functions.cpp"

int VAR = variable_choise();

const int SEQTYPE = 1;

int main() {
    while (1) {
        switch (VAR) {
            case(0):
            {
                return 0;
            }
            case (1): {
                VAR = dialog<int>(SEQTYPE);
                break;
            }
            case (2): {
                VAR = dialog<float>(SEQTYPE);
                break;
            }
            case (3): {
                VAR = dialog<complex>(SEQTYPE);
                break;
            }
        }
    }
    return 0;
}
