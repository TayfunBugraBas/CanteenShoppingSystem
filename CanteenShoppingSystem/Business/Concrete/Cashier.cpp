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

				       urun.setAmount(_amount);

				urunler.push_back(_urun);

			 fileworkertwo.saveUrun(urunler);

				

			}


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

				      urun.setAmount(_amount);


				 urunler.push_back(_urun);

			 fileworkertwo.saveUrun(urunler);

			

			}


		}

}
