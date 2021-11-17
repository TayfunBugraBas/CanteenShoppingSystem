#include "Cashier.h"

FileWorks fileworkertwo;

Cashier::Cashier()
{
}

void Cashier::sellUrun(string urun)
{
	urunler.clear();
	fileworkertwo.FillObject(urunler);
	unsigned int i = 0;
	int _amount= 0;
	double Pricing = 0.00;
	string otheritemName;
	string changer;
	bool newitemTF = true;



	while (newitemTF == true) {

		for (i = 0; i < urunler.size();i++) {

			if (urun == urunler[i].getIsim()) {

				_amount = urunler[i].getAmount()-1;

				urunler[i].setAmount(_amount);

				Pricing = urunler[i].getFiyat() + Pricing;
				

				cout << "Do you want to continue Shopping? (t/f)" << endl;
				cin >> changer;
				if (changer == "t" || changer == "T") {
					newitemTF = true;
					cout << "Enter other product name :" << endl;
					cin >> urun;
					
					
					
				}
				else if (changer == "f" || changer == "F") {
					newitemTF = false;
					
					
				}
				else {
					cout << "You returned wrong please try again" << endl;
					cin >> changer;
				}

				
				remove("Storage.txt");
				fileworkertwo.saveUrun(urunler);


			}
			
		}
		

	}
	cout << "Toplam odenecek tutar: " << Pricing << endl;
}

void Cashier::givebackUrun(string urun)
{
	urunler.clear();
	fileworkertwo.FillObject(urunler);
	unsigned int i = 0;
	int _amount = 0;
	string otheritemName;
	string changer;
	double Pricing = 0.00;
	bool newitemTF = true;

	while (newitemTF == true) {

		for (i = 0; i < urunler.size();i++) {

			if (urun == urunler[i].getIsim()) {

				_amount = urunler[i].getAmount()+1;


				urunler[i].setAmount(_amount+1);

				Pricing = urunler[i].getFiyat() - Pricing;
			

				cout << "Do you want to continue Shopping? (t/f)" << endl;
				cin >> changer;
				if (changer == "t"|| changer =="T") {
					newitemTF = true;
					cout << "Enter other product name :" << endl;
					cin >> urun;
					
					
					
				}
				else if (changer == "f" || changer == "F") {
					
					newitemTF = false;
					
				}
				else {
					cout << "You returned wrong please try again" << endl;
					cin >> changer;
				}

				remove("Storage.txt");
				fileworkertwo.saveUrun(urunler);


			}

			
		}
		
	}
	cout << "Toplam geri iade: " << Pricing << endl;
}
