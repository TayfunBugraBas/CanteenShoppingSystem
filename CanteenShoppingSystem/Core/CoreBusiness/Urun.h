#pragma once
#include <iostream>


using namespace std;

class Urun
{
private:
	string urunIsmi;
	string urunKategori;
	string urunTipi;
	double fiyat;
	int urunId;
	int amount;
public:

	

	Urun(string, string, string, int,double,int);

	void setIsim(string);
	string getIsim();

	void setKategori(string);
	string getKategori();

	void setTipi(string);
	string getTipi();

	void setFiyat(double);
	double getFiyat();

	void setId(int);
	int getId();

	void setAmount(int);
	int getAmount();




};
