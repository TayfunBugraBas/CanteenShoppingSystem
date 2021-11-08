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
}

void StoragePersonel::updateUrun(Urun urun)
{
}
