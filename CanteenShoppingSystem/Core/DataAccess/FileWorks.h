#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "../CoreBussines/Urun.h"
#include "../CoreBussines/Manager.h"
#include <istream>
#include <string>
#include <iostream>
#include <sstream>


class FileWorks
{
public:

	FileWorks();

	void saveWorker();

	void saveUrun(vector<Urun>& urunler);

	void getAllObject();

	void FillObject(vector<Urun>& urunler);

	void fillWorker();

	void FindWorker(string worker);

	void findUrun(string urun);




};

