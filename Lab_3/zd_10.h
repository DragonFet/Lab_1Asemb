#include <iostream>
#include <cmath>

using namespace std;
//использолвание алгоритма эйлера
double sum(double alpha, double epsilon) {
    double s = 0.0;
    double term = 1.0;
    double prev_term = 1.0;
    for (int i = 2; term >= epsilon; i++) {
        prev_term = term;
        term = pow(i, -alpha);
        s += term;
        if (prev_term == term) {
            break;
        }
    }
    return s;
}

int zd_10() {
    double alpha, epsilon;
    cout << "Введите значение параметра alpha: ";
    cin >> alpha;
    cout << "Введите значение точности epsilon: ";
    cin >> epsilon;
    double s = sum(alpha, epsilon);
    cout << "Сумма ряда S = " << s << endl;
    return 0;
}