#include <iostream>

using namespace  std;


float Sd(int N) { // наивный порядок
    float sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 1.0f / i;
    }
    return sum;
}

float Sa(int N) { // обратный порядок
    float sum = 0;
    for (int i = N; i >= 1; i--) {
        sum += 1.0f / i;
    }
    return sum;
}

double Sdd(int N) { // наивный порядок
    double sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

double Sad(int N) { // обратный порядок
    double sum = 0;
    for (int i = N; i >= 1; i--) {
        sum += 1.0f / i;
    }
    return sum;
}

void core8() {
    cout<<"Worck with float varible"<<endl;
    int N1 = 1000, N2 = 1000000, N3 = 1000000000;

    cout << "N = " << N1 << ", Sd(N) = " << Sd(N1) << ", Sa(N) = " << Sa(N1) << endl;
    cout << "N = " << N2 << ", Sd(N) = " << Sd(N2) << ", Sa(N) = " << Sa(N2) << endl;
    cout << "N = " << N3 << ", Sd(N) = " << Sd(N3) << ", Sa(N) = " << Sa(N3) << endl;
    cout<<endl;
    cout<<"Worck with double varible"<<endl;
    cout<<endl;
    cout << "N = " << N1 << ", Sdd(N) = " << Sdd(N1) << ", Sad(N) = " << Sad(N1) << endl;
    cout << "N = " << N2 << ", Sdd(N) = " << Sdd(N2) << ", Sad(N) = " << Sad(N2) << endl;
    cout << "N = " << N3 << ", Sdd(N) = " << Sdd(N3) << ", Sad(N) = " << Sad(N3) << endl;

}