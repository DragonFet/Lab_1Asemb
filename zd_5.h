int zd5() {
    const int N = 5;
    __int16 x16 = 0xDEAD;
    uint32_t x32 = 0xC0CAC01A;
    uint64_t x64 = 0xC0FFEE11BEA7;
    __int16 M16[N] = {x16, x16, x16, x16, x16};
    uint32_t M32[N] = {x32, x32, x32, x32, x32};
    uint64_t M64[N] = {x64, x64, x64, x64, x64};
    float x = -10.0f / 3.0f;
    double y = -10.0 / 3.0;
    float Ms[N] = {x, x, x, x, x};
    double Ml[N] = {y, y, y, y, y};
    int new_value;


    cout << "x16" << endl;
    for (int i = 0; i < 5; ++i) printf("%04X ", M16[i]);
    cout << "x32" << endl;
    for (int i = 0; i < 5; ++i) printf("%08X ", M32[i]);
    cout << "x64" << endl;
    for (int i = 0; i < 5; ++i) printf("%016llX ", M64[i]);
    cout << endl;
    cout << "Ms: ";
    for (int i = 0; i < N; i++) {
        printf("%.2f ", Ms[i]);
    }
    cout << endl;

    cout << "Ml: ";
    for (int i = 0; i < N; i++) {
        printf("%.2lf ", Ml[i]);
    }
    cout << endl;
    cout << "A new values for five massives\n ";
    scanf("%f %f %f %f %f", &M16[2], &M32[2], &M64[2], &Ms[2], &Ml[2]);
    cout << endl;
    cout << "massive check";
    cout <<endl;
    for (int i = 0; i < 5; ++i) printf("%hd", M16[i]);
    cout << "x16" << endl;
    for (int i = 0; i < 5; ++i) printf("%d", M32[i]);
    cout << "x64" << endl;
    for (int i = 0; i < 5; ++i) printf("%ld", M64[i]);
    cout << endl;
    cout << "Ms: ";
    for (int i = 0; i < N; i++) {
        printf("%f", Ms[i]);
    }
    cout << endl;

    cout << "Ml: ";
    for (int i = 0; i < N; i++) {
        printf("%lf ", Ml[i]);
    }
}
