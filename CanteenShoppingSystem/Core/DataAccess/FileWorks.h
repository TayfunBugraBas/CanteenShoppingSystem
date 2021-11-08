#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "../CoreBusiness/Urun.h"
#include "../CoreBusiness/Manager.h"
#include "../CoreBusiness/Employee.h"
#include <istream>
#include <string>
#include <iostream>
#include <sstream>


class FileWorks
{
public:

	FileWorks();

	void saveWorker(vector<Employee>& employee);

	void saveUrun(vector<Urun>& urunler);

	void getAllObject();

	void FillObject(vector<Urun>& urunler);

	void fillWorker(vector<Employee>& employee);

	void FindWorker(string worker);

	void findUrun(string urun);




};

