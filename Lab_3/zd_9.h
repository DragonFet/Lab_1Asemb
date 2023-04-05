#include <iostream>
#include <cmath>

using namespace std;

int core9() {
    double epsilon, sum = 0.0, term = 1.0;
    int i = 0;

    cout << "Enter the value of epsilon: ";
    cin >> epsilon;

    while (abs(term) > epsilon) {
        sum += term;
        i++;
        term = pow(-1, i) / (2*i + 1);
    }

    cout << "The sum of the Leibniz series with epsilon " << epsilon << " is " << sum << endl;

    return 0;
}