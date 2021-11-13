#include "Cashier.h"

FileWorks fileworkertwo;

Cashier::Cashier()
{
}

void Cashier::sellUrun(string urun)
{
	urunler.clear();
	fileworkertwo.FillObject(urunler);
	int i = 0;
	int _amount;
	double Pricing = 0.00;
	string otheritemName;
	string changer;
	bool newitemTF = true;



	while (newitemTF == true) {

		for (auto _urun : urunler) {

			if (urun == _urun.getIsim()) {

				_amount = _urun.getAmount();

				_amount = _amount - 1;/*Deðiþebilir Kýsým*/

				_urun.setAmount(_amount);

				Pricing = _urun.getFiyat() + Pricing;

				cout << "Do you want to continue ? (t/f)" << endl;
				cin >> changer;
				if (changer == "t") {
					newitemTF = true;
					cout << "Enter other product name :" << endl;
					cin >> urun;
					
					sellUrun(urun);
				}
				else if (changer == "f") {
					newitemTF = false;
					/*Ne yapýlacak bul yaz*/
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
	int i = 0;
	int _amount;
	string otheritemName;
	string changer;
	double Pricing = 0.00;
	bool newitemTF = true;

	while (newitemTF == true) {

		for (auto _urun : urunler) {

			if (urun == _urun.getIsim()) {

				_amount = _urun.getAmount();

				_amount = _amount + 1;/*Deðiþebilir Kýsým*/


				_urun.setAmount(_amount);

				Pricing = _urun.getFiyat() - Pricing;

				cout << "Do you want to continue ? (t/f)" << endl;
				cin >> changer;
				if (changer == "t") {
					newitemTF = true;
					cout << "Enter other product name :" << endl;
					cin >> urun;
					
					givebackUrun(urun);

				}
				else if (changer == "f") {
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
