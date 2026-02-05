#include <iostream>
using namespace std;

void printLine(char c, int n) {
    int k = n / 2;
    for (int i = 0; i < k; i++)
        cout << c;
    for (int i = 0; i < n - 2 * k; i++)
        cout << '.';
    for (int i = 0; i < k; i++)
        cout << c;
    cout << endl;
}

void draw(int len, char c) {
    if (len == 20) {
        printLine(c, len);
        return;
    }
    printLine(c, len);
    draw(len - 4, c + 1);
    printLine(c, len);
}

int main() {
    draw(120, 'A');
    return 0;
}