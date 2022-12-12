#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    int  proz;
    cin >> a;
    c = a / 10;
    b = a % 10;
    proz = c * b;
    cout << "Произведение чисел:" << proz;
}