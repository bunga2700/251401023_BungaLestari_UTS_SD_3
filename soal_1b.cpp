#include<iostream>
using namespace std;

int main(){
    int nilai[5][4]= {
        {100, 90, 60, 70},
        {70, 50, 80, 40},
        {80, 95, 75, 70},
        {90, 100, 80, 75},
        {50, 70, 85, 70},
    };

    cout << "Nilai mahasiswa:" << endl;
    for(int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    // cout << "Rata-rata : "<< endl;
    // for(int i=0; i<5; i++){
    //     for (int j=0; j<4; j++){
    //         int rata2 = nilai[0][i] + nilai[1][j];
    //         cout << rata2;
    //     }
    //     cout << endl;
    // }

    double rata2 = 0;
    for (int i = 0; i < 5; i++) {
        for (int j=0; j<4; j++){
        rata2 += nilai[i][j];
        }
    }
    rata2 /= 20;

    double maks = rata2[0][0];
    double min = rata2[0][0];
    // int rataMaks = rata2 [0][0];
    // int rataMin = rata2 [0][0];

    for (int i = 0; i < 5; i++) {
            if (nilai[i] > maks) {
                maks = nilai[i][j];
            }

            if (nilai[i][j] < min) {
                min = nilai[i][j];
            }
        }
    }

    cout << "Rata-rata tertinggi: " << maks << endl;
    cout << "Rata-rata terendah: " << min << endl;
    cout << "Mahasiswa dengan rata-rata minimal 75:";
}
