#include <iostream>
#include "Ogrenci.h"

using namespace std;

Ogrenci::Ogrenci(int _id, string _ad, int _sinavNotu) {
	id = _id;
	ad = _ad;
	sinavNotu = _sinavNotu;
}

void Ogrenci::setId(int _id) {
	id = _id;
}

void Ogrenci::setAd(string _ad) {
	ad = _ad;
}

void Ogrenci::setSinavNot(int _sinavNotu) {
	sinavNotu = _sinavNotu;
}

int Ogrenci::getId() {
	return id;
}

string Ogrenci::getAd() {
	return ad;
}

int Ogrenci::getSinavNot() {
	return sinavNotu;
}


void Ogrenci::bilgileriYaz() {
	cout << "ID: " << id << "\t\t" << "Isim: " << ad << "\t\t" << "Sinav notu: " << sinavNotu << endl;
}

