#pragma once
#include <iostream>
#include <vector>
#include "../../Core/CoreBusiness/Employee.h"
#include "../../Core/DataAccess/FileWorks.h"
#include "../../Core/CoreBusiness/Urun.h"

using namespace std;

class StoragePersonel: public Employee
{
private:


public:

	StoragePersonel(string rnk, string name, int id, double salary) : Employee(rnk, name, id, salary) {

	}
	StoragePersonel();

	vector<Urun> urunler;

	void addNewUrun(Urun urun);

	void deleteUrun(Urun urun);

	void updateUrun(string urun, string newname, string kategori, string type, double price, int newid, int newamount);

	void getAllProducts();




};

