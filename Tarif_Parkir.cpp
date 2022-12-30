#include <iostream>
using namespace std;

int main (){
	cout << "TARIF PARKIR PROGRESIF\n\n";
	int Roda, LamaParkir, tarif_2=3000, tarif_4 = 6000, tarif_6 = 8000, Biaya_4, Biaya_6, Inap, R_Inap2, R_Inap4, R_Inap6;
	int inap_2 = 25000, inap_4 = 50000, inap_6 = 70000, denda_2 = 50000, denda_4 = 100000, denda_6 = 100000;
	string Karcis, Lama_Parkir;
	cout << "Jenis Kendaraan Roda (2/4/6)\t:";
	cin >> Roda;
	if (Roda==2){
		cout << "Apakah Karcis Hilang (Ya/Tidak)\t:";
		cin >> Karcis;
		if (Karcis=="Ya"){
			cout << "Anda dikenakan denda sebesar \t: Rp"<<denda_2<<"";
	 	}
	 	else if (Karcis=="Tidak"){
	 		cout << "Apakah Parkir Inap (Ya/Tidak)   :";
			cin >> Lama_Parkir;
			if (Lama_Parkir=="Ya"){
				cout << "Lama Parkir Inap (Hari) \t:";
				cin >> Inap;
				R_Inap2 = Inap*inap_2;
				cout << "Total Tarif Parkir Anda \t: Rp"<<R_Inap2<<"";	
			}
			else if (Lama_Parkir=="Tidak"){
				cout << "Total Tarif Parkir Anda \t: Rp"<<tarif_2<<"";
			}
		}
	}
	else if (Roda==4){
		cout << "Apakah Karcis Hilang (Ya/Tidak)\t:";
		cin >> Karcis;
		if (Karcis=="Ya"){
			cout << "Anda dikenakan denda sebesar \t: Rp"<<denda_4<<"";
		}
		else if (Karcis == "Tidak"){
			cout << "Apakah Parkir Inap (Ya/Tidak)   :";
			cin >> Lama_Parkir;
			if (Lama_Parkir=="Ya"){ 
				cout << "Lama Parkir Inap (Hari) \t:";
				cin >> Inap;
				R_Inap4 = Inap*inap_4;
				cout << "Total Tarif Parkir Anda \t: Rp"<<R_Inap4<<"";
			}
			else if (Lama_Parkir=="Tidak"){
				cout << "Berapa Lama Anda Parkir (Jam)\t:";
				cin >> LamaParkir;
				if (LamaParkir <= 5){
					Biaya_4 = LamaParkir*2000+tarif_4-2000;
					cout << "Total Tarif Parkir Anda \t: Rp"<<Biaya_4<<"";
				}	
				else if (LamaParkir <= 12){
					cout << "Total Tarif Parkir Anda \t: Rp25000";
				}
				else if (LamaParkir <= 24){
					cout << "Total Tarif Parkir Anda \t: Rp55000";
				}
			}
		}
	}
	else if (Roda == 6){
		cout << "Apakah Karcis Hilang (Ya/Tidak)\t:";
		cin >> Karcis;
		if (Karcis=="Ya"){
			cout << "Anda dikenakan denda sebesar \t: Rp"<<denda_6<<"";
		}
		else if (Karcis == "Tidak"){
			cout << "Apakah Parkir Inap (Ya/Tidak)   :";
			cin >> Lama_Parkir;
			if (Lama_Parkir=="Ya"){
				cout << "Lama Parkir Inap (Hari) \t:";
				cin >> Inap;
				R_Inap6 = Inap*inap_6;
				cout << "Total Tarif Parkir Anda \t: Rp"<<R_Inap6<<"";
			}
			else if (Lama_Parkir=="Tidak"){
				cout << "Berapa Lama Anda Parkir (Jam)\t:";
				cin >> LamaParkir;
				if (LamaParkir <= 5){
					Biaya_6 = LamaParkir*3500+tarif_6-3500;
					cout << "Total Tarif Parkir Anda \t: Rp"<<Biaya_6<<"";
				}	
				else if (LamaParkir <= 12){
					cout << "Total Tarif Parkir Anda \t: Rp35000";
				}
				else if (LamaParkir <= 24){
					cout << "Total Tarif Parkir Anda \t: Rp70000";
				}
			}
		}
	}
	return 0;
}