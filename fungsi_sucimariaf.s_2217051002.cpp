#include <iostream>

using namespace std;

float siregar(float s, float z){
	float penjumlahan=s+z;
	float pengurangan=s-z;
	float perkalian=s*z;
	float pembagian=s/z;
	
	return (penjumlahan+pengurangan+perkalian+pembagian);
	
}

int main (){
	cout << siregar(1,8);
	
}
