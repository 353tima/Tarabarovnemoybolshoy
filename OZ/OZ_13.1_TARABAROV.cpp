#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string brand, range;
    cin >> brand >> range;
    ifstream f("phones.txt");
    string line;
    while (getline(f, line)) {
        if (line.find(brand) != string::npos) {
            size_t p = line.find(' ');
            if (p != string::npos) {
                string pr = line.substr(p + 1);
                size_t d = range.find('-');
                double low = stod(range.substr(0, d));
                double high = stod(range.substr(d + 1));
                double price = stod(pr);
                if (price >= low && price <= high)
                    cout << line << endl;
            }
        }
    }
    return 0;
}