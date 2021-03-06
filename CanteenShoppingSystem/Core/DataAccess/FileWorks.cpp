#include "FileWorks.h"

FileWorks::FileWorks()
{

}

void FileWorks::saveWorker(vector<Employee>& employee)
{
	unsigned int a =0;
	fstream file("Employee.txt", ios::app | ios::in | ios::out);
	if (!file.is_open()) {
		cout << "opsss... birseyler eksik!!!" << endl;
	}
	else {
		for (auto emp: employee) {

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

			file << specs.getIsim() << endl << specs.getTipi() << endl << specs.getKategori() << endl << specs.getId() << endl << specs.getFiyat() << endl << specs.getAmount() << endl;
		}
	}

}

void FileWorks::getAllObject()
{
	
	vector<Urun> Getir;

	Getir.clear();

	FillObject(Getir);
	for (auto _urun : Getir) {

		cout << endl <<" \nUrun ismi: "<<_urun.getIsim() << " \nUrun Kategori: " << _urun.getKategori() << " \n Urun Tipi: " << _urun.getTipi() << " \n Urun Id: " << _urun.getId() <<" \nUrun Fiyat: "<<_urun.getFiyat() << " \n Urun miktar: " <<   _urun.getAmount() << endl;

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

		helperUrunTipi = objectHandler[i];
		i++;

		helperUrunKategori = objectHandler[i];
		i++;

		_helperUrunId = objectHandler[i];
		stringstream xdegistir(_helperUrunId);
		xdegistir >> helperUrunId;
		i++;

		_helperFiyat = objectHandler[i];
		helperFiyat = stod(_helperFiyat);
		i++;

		_helperAmount = objectHandler[i];
		stringstream  degistir(_helperAmount);
		degistir >> helperAmount;
		

		

		Urun helperUrun(helperUrunIsmi, helperUrunTipi, helperUrunKategori, helperUrunId , helperFiyat , helperAmount);

		urunler.push_back(helperUrun);

	}
	

	



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

	for (unsigned int x = 0; x < workerHandler.size(); x++) {

		helperName = workerHandler[x];
		x++;
		helperRank = workerHandler[x];
		x++;

		_empId = workerHandler[x];
		stringstream changer(_empId);
		changer >> empId;
		x++;

		_empSalary = workerHandler[x];
		empSalary = stod(_empSalary);


		Employee helperEmployee(helperRank, helperName, empId, empSalary);
		employee.push_back(helperEmployee);
	}
	

}

void FileWorks::FindWorker(string worker)
{
	vector<Employee> helper;
	fillWorker(helper);

	for (auto find : helper) {

		if (worker == find.getName()) {
			cout << "Calisan Bulundu " << endl;

			cout << find.getName() << " " << find.getRank() << " " << find.getEmpId() << " " << find.getSalary() << endl;
		}
		else {
			cout << "Bulunamadi" << endl;
		}

	}


}

void FileWorks::findUrun(string urun)
{
	vector<Urun> helper;
	FillObject(helper);

	for (auto find : helper) {

		if (urun == find.getIsim())
		{
			cout << "Urun bulundu" << endl;

			cout <<"--?sim: " <<find.getIsim() <<endl <<"--Kategori: " << find.getKategori() << endl<<"--Tipi:" << find.getTipi() <<endl <<"--Fiyat:" << find.getFiyat() <<endl <<"--StokAdeti:" << find.getAmount() <<endl <<"--ID:" << find.getId() << endl;
		}
		

	}

}

void FileWorks::getAllWorker()
{
	vector <Employee> listEmp;

	fillWorker(listEmp);
	for (unsigned int i = 0; i < listEmp.size(); i++) {


		cout <<"isim:" <<listEmp[i].getName() << "\n " << "Rutbe:"<<listEmp[i].getRank() << "\n " <<"ID:" <<listEmp[i].getEmpId() << "\n " << "Maas:"<<listEmp[i].getSalary() << endl<<endl<<endl;

	}

}
