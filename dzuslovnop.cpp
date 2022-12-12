#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c, d;
	cout << "1числo:";
	cin >> a;
	cout << "2числo:";
	cin >> b;
	cout << "3числo:";
	cin >> c;
	cout << "4число:";
	cin >> d;

	if (a == b == c)
		cout << "n = 4число";
	else if (a == b == d)
		cout << "n = 3 число";
	else if (b == c == d)
		cout << "n = 1 число";
	else
		cout << "n = 2 число";
}

