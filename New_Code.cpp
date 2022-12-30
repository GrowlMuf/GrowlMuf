#include<iostream>
using namespace std;

int main(){
	cout << "TIKET MASUK DUFAN\n";
	cout << "---------------------------------------------------------------------------------------------------------------------\n\n";
	string hari, beli;
	int paket, tiket, biaya, harga, T_kendaraan, mobil=25000, motor=15000;
	cout << "Jenis Kendaraan\n";
	cout << "1. Mobil\n";
	cout << "2. Motor\n";
	cout << "Kendaraan yang anda bawa (angka) :";
	cin >> T_kendaraan;
	if (T_kendaraan==1){
		cout<<"Biaya tiket kendaraan \t: Rp"<<mobil<<"\n\n";
	}	
	else if (T_kendaraan == 2){
		cout << "Biaya tiket kendaraan \t: Rp"<<motor<<"\n\n";
	}
	
	cout << "Hari kedatangan anda : ";
	cin >> hari;
	
	if (hari=="senin"||hari=="selasa"||hari=="rabu"||hari=="kamis"||hari=="jumat"){
	
	cout << "Pilihan paket tersedia\n";
	cout << "1. Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol\n";
	cout << "2. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol\n";
	cout << "3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan)\n";
	cout << "4. Weekday Dufan + Ancol\n";
	cout << "5. Six Months Pass Dufan (Ecard) + 1x kunjungan reguler Ancol + Weekday Gondola\n\n";
	cout << "Paket yang anda pilih (Angka) : ";
	cin >> paket;
	
	switch (paket){
		case 1 :
			beli = "Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol";
			harga = 350000;
			break;
		case 2 :
			beli = "Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol";
			harga = 295000;
			break;
		case 3 :
			beli = "Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan)";
			harga = 185000;
			break;
		case 4 :
			beli = "Weekday Dufan + Ancol";
			harga = 250000;
			break;
		case 5 :
			beli = "Six Months Pass Dufan (Ecard) + 1x kunjungan reguler Ancol + Weekday Gondola";
			harga = 333000;
} 	cout << "Pilihan anda adalah "<<beli<<"\n\n";

	cout << "Jumlah tiket yang dibeli \t: ";
	cin >> tiket;
	cout << "______________________________________________________________________________________________________________\n";
	biaya = tiket*harga;
	
	if (paket == 3 && tiket < 4){
		cout << "Minimal pembelian 4 tiket!\n";
	}else{
		cout << "Biaya tiket masuk anda \t\t\t: Rp"<<biaya<<"\n";
		if (T_kendaraan == 1){
		cout << "Jumlah biaya tiket masuk dan kendaraan \t: Rp"<<mobil+biaya;
	}	else if (T_kendaraan == 2){
		cout << "Jumlah biaya tiket masuk dan kendaraan \t: Rp"<<motor+biaya;
	}
	}
}
	
	else if(hari == "sabtu"||hari == "minggu"||hari == "libur"){
		
	cout << "1. Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol\n";
	cout << "2. Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol\n";
	cout << "3. Weekend Dufan + Ancol + Samdera\n";
	cout << "4. Weekend Dufan + Ancol\n";
	cout << "5. Weekend Dufan + Ancol + Gondola\n";
	cout << "6. Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan)\n";
	cout << "7. Six Months Pass Dufan (Ecard) + 1x kunjungan reguler Ancol + Weekend Gondola\n\n";
	cout << "Paket yang anda pilih (Angka) : ";
	cin >> paket;
	
	switch (paket){
		case 1 :
			beli = "Annual Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol";
			harga = 350000;
			break;
		case 2 :
			beli = "Six Months Pass Dufan (Ecard) + 1x kunjungan Reguler Ancol";
			harga = 295000;
			break;
		case 3 :
			beli = "Weekend Dufan + Ancol + Samdera";
			harga = 315000;
			break;
		case 4 :
			beli = "Weekend Dufan + Ancol";
			harga = 275000;
			break;
		case 5 :
			beli = "Weekend Dufan + Ancol + Gondola";
			harga = 317000;
			break;
		case 6 :
			beli = "Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan)";
			harga = 250000;
			break;
		case 7 : 
			beli = "Six Months Pass Dufan (Ecard) + 1x kunjungan reguler Ancol + Weekend Gondola";
			harga = 337000;
}	cout << "Pilihan anda adalah "<<beli<<"\n\n";

	cout << "Jumlah tiket yang dibeli \t: ";
	cin >> tiket;
	cout << "______________________________________________________________________________________________________________\n";
	biaya = tiket * harga;
	
	if (paket == 6 && tiket < 4){
		cout << "Minimal pembelian 4 tiket!\n";
	}else {
		cout << "Biaya tiket masuk anda \t\t\t: Rp"<<biaya<<"\n";
		if (T_kendaraan == 1){
		cout << "Jumlah biaya tiket masuk dan kendaraan \t: Rp"<<mobil+biaya;
	}	else if (T_kendaraan == 2){
		cout << "Jumlah biaya tiket masuk dan kendaraan \t: Rp"<<motor+biaya;
	}
	}
}
}