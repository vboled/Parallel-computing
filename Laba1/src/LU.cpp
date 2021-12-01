#include "../include/LU.h"


LU::LU(double n) {
    N = n;
    unsigned int start_time =  clock(); 

    cout << "Here" << endl;
    matr.reserve(N);
    for (size_t i = 0; i < N; i++) {
        matr[i].reserve(N);
        for (size_t j = 0; j < N; j++) {
            matr[i].push_back(rand()%10);
        }
    }

    unsigned int end_time = clock();
    unsigned int search_time = end_time - start_time;
    cout << "time: " << end_time - start_time << endl;
    for (const auto &v : matr) {
        for (const auto &vv : v) {
            cout << vv << " ";
        }
        cout << endl;
    }
}