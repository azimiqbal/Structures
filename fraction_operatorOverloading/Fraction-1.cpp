#include "Fraction.h"

bool operator<(Fraction& f_left, Fraction& f_right){
    if(f_left.get_s() < f_right.get_s()) return true;
    else return false;
}

bool operator==(Fraction& f_left, Fraction& f_right){
    if(f_left.get_s() == f_right.get_s()) return true;
    else return false;
}

Fraction operator+(Fraction &f_left, Fraction &f_right){
    double sum = f_left.get_s() + f_right.get_s();
    f_left.set_s(sum);
    return f_left;
}

Fraction operator+(Fraction &f_left, int f_right){
    double sum = f_left.get_s() + f_right;
    f_left.set_s(sum);
    return f_left;
}

ostream& operator<<(ostream& ost, Fraction& value){
    ost << value.get_s();
    return ost;
}

bool operator<(Fraction& f_left, int f_right){
    if(f_left.get_s() < f_right) return true;
    else return false;
}