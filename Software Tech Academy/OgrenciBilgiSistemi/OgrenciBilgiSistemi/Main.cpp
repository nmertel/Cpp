#include <iostream>
#include "Ogrenci.h"
#include <list>

using namespace std;

void menuyuGoster() {
	cout << "* * * * * * * * * * *\n";
	cout << "         Menu        \n";
	cout << "* * * * * * * * * * *\n";
	cout << "1. Yeni kayit ekle\n";
	cout << "2. Tum listeyi goster\n";
	cout << "3. Ogrenci ID'ye gore kayit sil\n";
	cout << "4. Ogrenci ara\n";
	cout << "5. Cikis\n";
}

void ogrenciEkle(list<Ogrenci>* lst) {
	int id;
	string ad, soyad, isim;
	int sinavNotu;
	cout << "Lutfen ogrenci ID giriniz: ";
	cin >> id;
	cout << "Ad giriniz: ";
	cin >> ad >> soyad;
	isim = ad + " " + soyad;
	cout << "Sinav notu giriniz: ";
	cin >> sinavNotu;
	Ogrenci ogr(id, isim, sinavNotu);
	lst->push_back(ogr);
}

void showList(list<Ogrenci>* lst) {
	list<Ogrenci>::iterator it;
	cout << "* * * * Tum Ogrenci Listesi * * * *\n";
	for (it = lst->begin(); it != lst->end(); it++) {
		it->bilgileriYaz();
	}
	cout << endl;
}

void ogrenciSil(list<Ogrenci>* lst) {
	int id;
	cout << "Lutfen silinecek ogrencinin ID giriniz: ";
	cin >> id;
	list <Ogrenci>::iterator it;
	for (it = lst->begin();it != lst->end();it++) {
		if (it->getId() == id)
			break;
	}
	if (it == lst->end()) {
		cout<<"ID numarasi bulunamadi. Silme islemi gerceklesmedi.\n";
	}
	else
		lst->erase(it);
}

void ogrenciAra(list<Ogrenci>* lst) {
	int id;
	cout << "Lutfen aranacak ogrencinin id giriniz: ";
	cin >> id;
	list<Ogrenci>::iterator it;
	for (it = lst->begin(); it != lst->end(); it++) {
		if (it->getId() == id)
			break;
	}
	if (it == lst->end())
		cout << "belirtilen id bulunamamistir!\n";
	else {
		cout << endl << "Aradiginiz ogrencini bilgileri: \n";
		it->bilgileriYaz();
		cout << endl;
	}
}

int main() {
	
	list<Ogrenci>* ogrenciList = new list<Ogrenci>();

	int secim = 0;
	do {
		menuyuGoster();
		cout << "Seciminiz: ";
		cin >> secim;
		if (secim == 1)
			ogrenciEkle(ogrenciList);
		else if (secim == 2)
			showList(ogrenciList);
		else if (secim == 3)
			ogrenciSil(ogrenciList);
		else if (secim == 4)
			ogrenciAra(ogrenciList);
		else if (secim == 5)
			break;
		else
			cout << "Hatali secim yaptiniz. Yeniden deneyin.\n";

	} while (secim!=5);


	return 0;
}