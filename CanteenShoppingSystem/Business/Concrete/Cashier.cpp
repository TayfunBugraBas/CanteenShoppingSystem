#include "Cashier.h"

FileWorks fileworkertwo;

void Cashier::sellUrun(Urun urun)
{
	urunler.clear();
	fileworkertwo.FillObject(urunler);
	int i = 0;
	int _amount;
	

	

		for (auto _urun : urunler) {

			if (urun.getIsim() == _urun.getIsim()) {
				
				_amount = urun.getAmount();

				   _amount = _amount - 1;/*Deðiþebilir Kýsým*/

				       _urun.setAmount(_amount);

					   remove("Storage.txt");
			 fileworkertwo.saveUrun(urunler);
			}
			/*toplam fiyat eklemeyi unutma*/
		}
}

void Cashier::givebackUrun(Urun urun)
{
	urunler.clear();
	fileworkertwo.FillObject(urunler);
	int i = 0;
	int _amount;



		for (auto _urun : urunler) {

			if (urun.getIsim() == _urun.getIsim()) {

				_amount = urun.getAmount();

				  _amount = _amount + 1;/*Deðiþebilir Kýsým*/

				      _urun.setAmount(_amount);

					  remove("Storage.txt");
			 fileworkertwo.saveUrun(urunler);

			

			}

			/*toplam fiyat eklemeyi unutma*/
		}

}
