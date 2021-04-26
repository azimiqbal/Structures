#ifndef FRACTION_RIKTIG_CLASSE_H
#define FRACTION_RIKTIG_CLASSE_H

#include "std_lib_facilities.h"
#include <iostream>
#include <string>
using namespace std;

class Fraction{
public:

    Fraction(double t, double n) {
        teller = t;
        nevner = n;
        sum = teller/nevner;
    }

    void set_s(double value) { sum = value; }
    double get_s() const { return sum; }

private:
    double teller;
    double nevner;
    double sum;
};

//& bruker vi slik at vi endrer på den originale, ikke kopien


ostream& operator<<(ostream &ost, Fraction &value);
bool operator<(Fraction& f_left, Fraction& f_right);
bool operator<(Fraction& f_left, int f_right);
bool operator==(Fraction& f_left, Fraction& f_right);
Fraction operator+(Fraction& f_left, Fraction& f_right);
Fraction operator+(Fraction& f_left, int f_right);


#endif //FRACTION_RIKTIG_CLASSE_H