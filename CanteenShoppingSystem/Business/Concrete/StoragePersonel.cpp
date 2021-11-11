#include "StoragePersonel.h"

FileWorks fileworker;

void StoragePersonel::addNewUrun(Urun urun)
{
	urunler.clear();
	 urunler.push_back(urun);

	    fileworker.saveUrun(urunler);
}

void StoragePersonel::deleteUrun(Urun urun)
{
	fileworker.FillObject(urunler);

	for (unsigned int i = 0; i < urunler.size(); i++) {

		if (urun.getIsim() == urunler[i].getIsim()) {

			urunler.erase(begin(urunler) + i);
		}
	}
	remove("Storage.txt");
	fileworker.saveUrun(urunler);
}

void StoragePersonel::updateUrun(string urun,string newname,string kategori, string type,double price, int newid, int newamount)
{
	fileworker.FillObject(urunler);

	for (unsigned int i = 0; i < urunler.size(); i++) {

		if (urun == urunler[i].getIsim()) {

			urunler[i].setIsim(newname);
			urunler[i].setKategori(kategori);
			urunler[i].setTipi(type);
			urunler[i].setFiyat(price);
			urunler[i].setAmount(newamount);
			urunler[i].setId(newid);

		}
		

	}
	remove("Storage.txt");
	fileworker.saveUrun(urunler);

}
