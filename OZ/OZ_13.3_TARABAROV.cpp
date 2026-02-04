#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, res;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            while (i < s.size() && s[i] != ')') i++;
        } else {
            res += s[i];
        }
    }
    cout << res << endl;
    return 0;
}