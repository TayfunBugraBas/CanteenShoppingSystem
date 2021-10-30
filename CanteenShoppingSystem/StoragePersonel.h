#pragma once
#include <iostream>
#include <vector>
#include "Employee.h"
#include "Urun.h"

using namespace std;

class StoragePersonel: public Employee
{
private:


public:

	StoragePersonel(string rnk, string name, int id, double salary) : Employee(rnk, name, id, salary) {

	}

	vector<Urun> urunler;

	void addNewUrun(Urun urun);


};

