#include "FileWorks.h"

FileWorks::FileWorks()
{

}

void FileWorks::saveWorker(vector<Employee>& employee)
{
	fstream file("Employee.txt", ios::app | ios::in | ios::out);
	if (!file.is_open()) {
		cout << "opsss... birseyler eksik!!!" << endl;
	}
	else {
		for (auto emp : employee) {

			file << emp.getName() << endl << emp.getRank() << endl << emp.getEmpId() << endl << emp.getSalary() << endl;

		}
	}


}

void FileWorks::saveUrun(vector<Urun>& urunler)
{
	fstream file("Storage.txt", ios::app | ios::in | ios::out);

	if (!file.is_open()) {
		cout << "opsss... birseyler eksik!!!" << endl;
	}
	else {
		for (auto specs : urunler) {

			file << specs.getIsim() << endl << specs.getTipi() << endl << specs.getKategori() << endl << specs.getId() << endl << specs.getFiyat() << endl;
		}
	}

}

void FileWorks::getAllObject()
{
	
	vector<Urun> Getir;

	Getir.clear();

	FillObject(Getir);
	for (auto _urun : Getir) {

		cout << endl << _urun.getIsim() << "  " << _urun.getKategori() << "  " << _urun.getTipi() << "  " << _urun.getFiyat() << _urun.getAmount() << "  " << _urun.getId() << endl;

	}

}

void FileWorks::FillObject(vector<Urun>& urunler)
{
	fstream file;

	

	string helperUrunIsmi;
	string helperUrunKategori;
	string helperUrunTipi;
	double helperFiyat=0;
	int helperUrunId=0;
	int helperAmount=0;

	string _helperFiyat;
	string _helperUrunId;
	string _helperAmount;

    unsigned int i;
	string taker;
	vector<string> objectHandler;

	file.open("Storage.txt");

	while (getline(file, taker)) {

		objectHandler.push_back(taker);

	}



	for (i = 0; i < objectHandler.size(); i++) {

		helperUrunIsmi = objectHandler[i];
		i++;

		helperUrunKategori = objectHandler[i];
		i++;

		helperUrunTipi = objectHandler[i];
		i++;

		_helperFiyat = objectHandler[i];
		helperFiyat = stod(_helperFiyat);

		_helperAmount = objectHandler[i];
		stringstream  degistir(_helperAmount);
		degistir >> helperAmount;
		i++;

		_helperUrunId = objectHandler[i];
		stringstream xdegistir(_helperUrunId);
		xdegistir >> helperUrunId;



	}
	

	Urun helperUrun(helperUrunIsmi,helperUrunKategori,helperUrunTipi,helperFiyat,helperAmount,helperUrunId);

	urunler.push_back(helperUrun);



}

void FileWorks::fillWorker(vector<Employee>& employee)
{
	fstream file;
	vector<string> workerHandler;
	file.open("Employee.txt");


	string helper;
	string helperRank;
	string helperName;

	int empId=0 ;
	double empSalary = 0.00;

	string _empId;
	string _empSalary;

	while (getline(file, helper)) {

		workerHandler.push_back(helper);

	}

	for (unsigned int i = 0; i < workerHandler.size(); i++) {

		helperName = workerHandler[i];
		i++;
		helperRank = workerHandler[i];
		i++;

		_empId = workerHandler[i];
		stringstream changer(_empId);
		changer >> empId;
		i++;

		_empSalary = workerHandler[i];
		empSalary = stod(_empSalary);

	}
	Employee helperEmployee(helperRank, helperName, empId, empSalary);

	employee.push_back(helperEmployee);

}

void FileWorks::FindWorker(string worker)
{
}

void FileWorks::findUrun(string urun)
{
	fstream file("Storage.txt", ios::app | ios::in | ios::out);



}
