#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, m;
    cout << "Достоинство:";
    cin >> n;
    cout << "Масть:";
    cin >> m;
    switch (n) {
    case 6:
        cout << "шестёрка ";
        break;
    case 7:
        cout << "семёрка ";
        break;
    case 8:
        cout << "восьмёрка ";
        break;
    case 9:
        cout << "девятка ";
        break;
    case 10:
        cout << "десятка ";
        break;
    case 11:
        cout << "валет ";
        break;
    case 12:
        cout << "дама ";
        break;
    case 13:
        cout << "король ";
        break;
    case 14:
        cout << "туз ";
        break;
    }
    switch (m) {
    case 1:
        cout << "пик\n";
        break;
    case 2:
        cout << "треф\n";
        break;
    case 3:
        cout << "бубен\n";
        break;
    case 4:
        cout << "червей\n";
        break;
    }
    return 0;
}