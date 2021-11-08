#pragma once
#include "../../Core/CoreBusiness/Employee.h"
#include "../../Core/CoreBusiness/Urun.h"
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

