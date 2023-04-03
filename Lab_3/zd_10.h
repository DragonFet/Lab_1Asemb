#include <iostream>
#include <cmath>

using namespace std;
//�������������� ��������� ������
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
    cout << "������� �������� ��������� alpha: ";
    cin >> alpha;
    cout << "������� �������� �������� epsilon: ";
    cin >> epsilon;
    double s = sum(alpha, epsilon);
    cout << "����� ���� S = " << s << endl;
    return 0;
}