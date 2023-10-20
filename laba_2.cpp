#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	using byte = short int;
	pair<byte, byte> positionA;
	pair<byte, byte> positionB;
	cout << "Введите номер вертикали и горизонтали а (от 1 до 8)" << endl;
	cin >> positionA.first >> positionA.second;
	if (positionA.first < 1 | positionA.first > 8 | positionA.second < 1 | positionA.second > 8) {
		cout << "Неверное значение";
		return 0;
	}
	cout << "Введите номер вертикали и горизонтали b (от 1 до 8)" << endl;
	cin >> positionB.first >> positionB.second;
	if (positionB.first < 1 | positionB.first > 8 | positionB.second < 1 | positionB.second > 8) {
		cout << "Неверное значение";
		return 0;
	}

	if ((positionA.first == positionB.first) or (positionA.second == positionB.second)) {
		cout << "Ладья угрожает" << endl;
	}
	else {
		cout << "Ладья не угрожает" << endl;
	}

	if (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second)) {
		cout << "Слон угрожает" << endl;
	}
	else {
		cout << "Слон не угрожает" << endl;
	}

	if (abs(positionA.first - positionB.first) <= 1 or abs(positionA.second - positionB.second) <= 1) {
		cout << "Король угрожает" << endl;
	}
	else {
		cout << "Король не угрожает" << endl;
	}

	if ((positionA.first == positionB.first) or (positionA.second == positionB.second) or (abs(positionA.first - positionB.first) == abs(positionA.second - positionB.second))) {
		cout << "Ферзь угрожает" << endl;
	}
	else {
		cout << "Ферзь не угрожает" << endl;
	}
	if ((positionB.second - positionA.second == 1) or ((positionB.second - positionA.second == 1) and (abs(positionB.first - positionA.first == 1)))) {
		cout << "Пешка угрожает" << endl;
	}
	else {
		cout << "Пешка не угрожает" << endl;
	}
}