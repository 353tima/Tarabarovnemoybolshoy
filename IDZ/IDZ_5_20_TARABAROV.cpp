#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int cnt = 0;
    int res[10];

    for (int j = 0; j < m; j++) {
        bool ok = true;
        for (int i = 2; i < n; i++) {
            if (a[i][j] * a[i-2][j] != a[i-1][j] * a[i-1][j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            res[cnt] = j + 1;
            cnt++;
        }
    }

    if (cnt == 0)
        cout << -1 << endl;
    else {
        cout << cnt << endl;
        for (int i = 0; i < cnt; i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}