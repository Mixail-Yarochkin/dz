#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n, k;
    cout << "N:";
    cin >> n;
    cout << "K:";
    cin >> k;
    int i, i2;
    float rez = 0, nk;
    for (i = 1; i <= n; ++i) {
        nk = 1;
        for (i2 = 1; i2 <= k; ++i2) nk *= i;
        rez += nk;
    }
    cout << rez;
    return 0;
}