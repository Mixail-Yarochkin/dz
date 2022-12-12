#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "A:";
	cin >> a;
	cout << "B:";
	cin >> b;
	cout << "C:";
	cin >> c;
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		cout << "Истинно";
	}
	else {
		cout << "Ложь";
	}
}
