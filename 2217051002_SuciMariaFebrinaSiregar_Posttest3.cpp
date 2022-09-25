#include <iostream>

using namespace std;

int main (){
	int thn_kabisat;
	cin >> thn_kabisat;
	
	if (thn_kabisat % 400 == 0) {
		cout << "Tahun Kabisat";
}

	else if (thn_kabisat % 400 != 0 && thn_kabisat % 100 != 0 && thn_kabisat % 4 != 0 ) {
		cout << "Bukan Tahun Kabisat";
}	
	else if (thn_kabisat % 400 != 0 && thn_kabisat % 100 == 0) {
		cout << "Bukan Tahun Kabisat";
	}
	
	else if (thn_kabisat % 400 != 0 && thn_kabisat % 100 == 0 && thn_kabisat % 4 == 0) {
		cout << "Tahun Kabisat";
}

	return 0;
	
}
	
