#include <iostream>
#include "std_lib_facilities.h"

#include "Fraction.h"

int main() {
    Fraction f1(1, 2);
    Fraction f2(2, 9);
    Fraction f3(2, 4);

    if (f1 < f2) {
        cout << f1 << " er minst " << endl;
    } else if (f1 == f2) {
        cout << "de er like" << endl;
    } else {
        cout << f2 << " er minst " << endl;
    }
    if (f1 == f3) {
        cout << "I did it" << endl;
    }
    if (f1 < 4) {
        f1 = f1 + f2;
        cout << f1 << endl;
    }

    f2 = f2 + 5;
    cout << f2 << endl;

    return 0;
}
