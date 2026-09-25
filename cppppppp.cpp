#include <iostream>
using namespace std;

int main() {
	int angkarahasia = 7;
	int tebakan;

	cout << "== GAME ANGKA RAHASIA (1-10) ==" << endl;
	cout << "coba tebak angka rahasia: ";
	cin >> tebakan;

	if (tebakan == angkarahasia) {
		cout << "gokil bener" << endl;
	} else if (tebakan < angkarahasia) {
		cout << "tebakan kamu kekecilan" << endl;
	} else if (tebakan > angkarahasia) {
		cout << "tebakan kamu kebesaran" << endl;
	}

	return 0;
}
