#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int P = 3; // lapis
    const int R = 3; // baris
    const int C = 4; // kolom

    int arr[P][R][C];

    // Mengisi array mengikuti pola: 2, 1, 3, 2, 4, 3, 5, ...
    // aturan: nilai berikutnya -1 jika index genap, +2 jika index ganjil
    int val = 2;
    int index = 0;

    for (int i = 0; i < P; i++) {
        for (int j = 0; j < R; j++) {
            for (int k = 0; k < C; k++) {
                arr[i][j][k] = val;

                if (index % 2 == 0)
                    val = val - 1;
                else
                    val = val + 2;

                index++;
            }
        }
    }

    for (int i = 0; i < P; i++) {
        cout << "Lapis " << (i + 1) << ":\n";
        for (int j = 0; j < R; j++) {
            for (int k = 0; k < C; k++) {
                cout << setw(4) << arr[i][j][k];
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}