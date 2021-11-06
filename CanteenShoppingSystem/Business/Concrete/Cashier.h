#pragma once
#include "../../Core/CoreBussines/Employee.h"
#include "../../Core/CoreBussines/Urun.h"
#include "../../Core/DataAccess/FileWorks.h"


class Cashier : public  Employee
{
private:


public:

	Cashier(string rnk, string name, int id, double slry) : Employee(rnk, name, id, slry) {


	}

	vector<Urun> urunler;

	void sellUrun(Urun urun);

	void givebackUrun(Urun urun);



};

