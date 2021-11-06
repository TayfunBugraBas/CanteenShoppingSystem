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


}

void StoragePersonel::updateUrun(Urun urun)
{
}
