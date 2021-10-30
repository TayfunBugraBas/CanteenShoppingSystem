#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "Urun.h"
#include "Manager.h"

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




};

