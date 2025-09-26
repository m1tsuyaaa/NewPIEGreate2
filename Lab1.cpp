/*************************
 * Name:    Katkov Stepan*
 * Project: Lab01        *
 * Var 8                 *
 * ***********************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    const double PI = 3.14159265358979323846;

    double lambda, R1, R2, t1, t2, F, L;

    cout << "Enter lambda =";
    cin  >> lambda;
    cout << "Enter R1 =";
    cin  >> R1;
    cout << "Enter R2 =";
    cin  >> R2;
    cout << "Enter t1 =";
    cin  >> t1;
    cout << "Enter t2 =";
    cin  >> t2;
    cout << "Enter F =";
    cin  >> F;
    cout << "Enter L =";
    cin  >> L;


    double delta_t, Q1, Q2, Q3;

    delta_t = t1-t2;

    Q1 = (lambda * F / (R2 - R1)) * delta_t;

    Q2 = (2 * PI * lambda * L / log(R2 / R1)) * delta_t;

    Q3 = (4 * PI * lambda / (1/R1 - 1/R2)) * delta_t;

    cout << Q1 << endl
    << Q2 << endl
    << Q3 << endl;

    return 0;
}
