#include <iostream>
using std::cout; using std::cin; using std::endl;
int main()
{
    int a, b, c;
    cout << "Assignment 2" << endl;

    cout << "\nProblem 1" << endl;
    cout << "A\tB\tC\tA and B\t\tA and C\t\t(A and B) or (A and C)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if (a && b == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b) << "\t\t" << (a and c) << "\t\t" << ((a && b) || (a && c)) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b) << "\t\t" << (a and c) << "\t\t" << ((a && b) || (a && c)) << endl;
                }
            }
        }
    }

    cout << "\nProblem 2" << endl;
    cout << "A\tB\tC\tA and C\t\tB and !C\t\t(A and C) or (B and !C)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if (a && b == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a && c) << "\t\t" << (b and !c) << "\t\t" << ((a && c) || (b && !c)) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a && c) << "\t\t" << (b and !c) << "\t\t" << ((a && c) || (b && !c)) << endl;
                }
            }
        }
    }

    cout << "\nProblem 3" << endl;
    cout << "A\tB\tC\tA or B\t\t!(B or C)\t\t(A or C) and !(B or C)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if (a && b == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a || b) << "\t\t" << !(b or c) << "\t\t" << ((a || b) && !(b || c)) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (a || b) << "\t\t" << !(b or c) << "\t\t" << ((a || b) && !(b || c)) << endl;
                }
            }
        }
    }

    cout << "\nProblem 4" << endl;
    cout << "A\tB\tC\tB and C\t\t!A and !B\t\t(A or (B and C) and (!A and !B)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if (a && b == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (b && c) << "\t\t" << (!a && !b) << "\t\t" << ((a || (b && c)) && (!a && !b)) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (b && c) << "\t\t" << (!a && !b) << "\t\t" << ((a || (b && c)) && (!a && !b)) << endl;
                }
            }
        }
    }

    cout << "\nProblem 5" << endl;
    cout << "A\tB\tC\tB and C\t\tC and A\t\t((B and C) or (C and A)) and (!(A or B) and C)" << endl;
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            for (c = 0; c <= 1; c++) {
                if (a && b == 1) {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (b && c) << "\t\t" << (c && a) << "\t\t" << (((b && c) || (c && a)) && (!(a || b) && c)) << endl;
                }
                else {
                    cout << a << "\t" << b << "\t" << c << "\t\t" << (b && c) << "\t\t" << (c && a) << "\t\t" << (((b && c) || (c && a)) && (!(a || b) && c)) << endl;
                }
            }
        }
    }
}

