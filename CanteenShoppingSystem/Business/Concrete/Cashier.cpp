#include "Cashier.h"

FileWorks fileworkertwo;

void Cashier::sellUrun(Urun urun)
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

			if (urun.getIsim() == _urun.getIsim()) {

				_amount = urun.getAmount();

				_amount = _amount - 1;/*Deðiþebilir Kýsým*/

				_urun.setAmount(_amount);

				Pricing = _urun.getFiyat() + Pricing;

				cout << "Do you want to continue ? (t/f)" << endl;
				cin >> changer;
				if (changer == "t") {
					newitemTF = true;
					cout << "Enter other product name :" << endl;
					cin >> otheritemName;
					urun.setIsim(otheritemName);
					sellUrun(urun);
				}
				else if (changer == "f") {
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

void Cashier::givebackUrun(Urun urun)
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

			if (urun.getIsim() == _urun.getIsim()) {

				_amount = urun.getAmount();

				_amount = _amount + 1;/*Deðiþebilir Kýsým*/


				_urun.setAmount(_amount);

				Pricing = _urun.getFiyat() - Pricing;

				cout << "Do you want to continue ? (t/f)" << endl;
				cin >> changer;
				if (changer == "t") {
					newitemTF = true;
					cout << "Enter other product name :" << endl;
					cin >> otheritemName;
					urun.setIsim(otheritemName);
					givebackUrun(urun);

				}
				else if (changer == "f") {
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
		cout << "Toplam geri iade: " << Pricing << endl;

}
