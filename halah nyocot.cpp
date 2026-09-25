#include <iostream>
using namespace std;

int main() {
	int angka;
	
	
	cout << "masukan angka: ";
	cin >> angka;
	
	cout << "\nTabel perkalian" << angka << ":\n";
	
	for (int i = 1; i<= 10; i++){
	     cout << angka << "x" << i << "=" << angka *i << endl;
	
	return 0;
	}
}
