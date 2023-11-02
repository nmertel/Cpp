#pragma once

#include <iostream>
using namespace std;

class Ogrenci {

private:
	int id;
	string ad;
	int sinavNotu;

public:
	Ogrenci(int _id, string _ad, int _sinavNotu); //Constructor
	void setId(int _id);
	void setAd(string _ad);
	void setSinavNot(int _sinavNotu);
	int getId();
	string getAd();
	int getSinavNot();
	void bilgileriYaz();
};
