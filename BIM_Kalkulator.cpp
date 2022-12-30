#include <iostream>
using namespace std;

int main() {
	float TinggiBadan, BeratBadan;
	cout << "Kalkulator BIM\n\n";
	
	cout << "Tinggi Badan (cm)\t:";
	cin >> TinggiBadan;
	cout << "Berat Badan (kg)\t:";
	cin >> BeratBadan;
	
	float BMI = (BeratBadan/TinggiBadan/TinggiBadan)*10000;
	
	if (BMI<18.5){
		cout << "BMI Anda \t\t: "<<BMI<<"\n";
		cout << "Keterangan \t\t: Kurang Berat Badan";
	}
	else if (BMI<=22.9){
		cout << "BMI Anda \t\t: "<<BMI<<"\n";
		cout << "Keterangan \t\t: Normal";
	}
	else if (BMI<=24.9){
		cout << "BMI Anda \t\t: "<<BMI<<"\n";
		cout << "Keterangan \t\t: Kelebihan Berat Badan";
	}
	else if (BMI<=29.9){
		cout << "BMI Anda \t\t: "<<BMI<<"\n";
		cout << "Keterangan \t\t: Obesitas Tingkat 1";
    }
    else {
    	cout << "BMI Anda \t\t: "<<BMI<<"\n";
		cout << "Keterangan \t\t: Obesitas Tingkat 2";
	}
	return 0;
}
