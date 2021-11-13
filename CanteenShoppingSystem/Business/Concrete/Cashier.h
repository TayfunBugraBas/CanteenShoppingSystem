#pragma once
#include "../../Core/CoreBusiness/Employee.h"
#include "../../Core/CoreBusiness/Urun.h"
#include "../../Core/DataAccess/FileWorks.h"
using namespace std;



class Cashier : public  Employee
{
private:


public:

	Cashier(string rnk, string name, int id, double slry) : Employee(rnk, name, id, slry) {


	}
	Cashier();

	vector<Urun> urunler;

	void sellUrun(string urun);

	void givebackUrun(string urun);




};

