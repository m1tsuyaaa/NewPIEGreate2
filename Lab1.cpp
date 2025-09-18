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
    

    double delta_t = t1 - t2;
    
    double Q1 = (lambda * F / (R2 - R1)) * delta_t;
    double Q2 = (2 * PI * lambda * L / log(R2 / R1)) * delta_t;
    double Q3 = (4 * PI * lambda / (1/R1 - 1/R2)) * delta_t;
    
    cout << fixed <<setprecision(4);
    cout << Q1 << endl;
    cout << Q2 << endl;
    cout << Q3 << endl;
    
    return 0;
}