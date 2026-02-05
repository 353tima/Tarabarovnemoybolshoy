#include <iostream>
using namespace std;

void f1(int n) {
    int a = n, b = n;
    int r1[32], r2[32];
    int i = 0, j = 0;
    if (a == 0) i = 1, r1[0] = 0;
    while (a > 0) { r1[i++] = a % 2; a /= 2; }
    if (b == 0) j = 1, r2[0] = 0;
    while (b > 0) { r2[j++] = b % 8; b /= 8; }
    cout << "Binary: ";
    for (int k = i-1; k >= 0; k--) cout << r1[k];
    cout << "\nOctal: ";
    for (int k = j-1; k >= 0; k--) cout << r2[k];
}

void f2(int n) {
    int a = n;
    char r[32];
    int i = 0;
    if (a == 0) i = 1, r[0] = '0';
    while (a > 0) {
        int d = a % 16;
        r[i++] = d < 10 ? '0' + d : 'A' + d - 10;
        a /= 16;
    }
    cout << "\nHex: ";
    for (int k = i-1; k >= 0; k--) cout << r[k];
}

int main() {
    int N; cin >> N;
    f1(N); f2(N); cout << endl;
    return 0;
}