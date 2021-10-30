#include "FileWorks.h"

FileWorks::FileWorks()
{

}

void FileWorks::saveWorker()
{
	fstream file("Employee.txt", ios::app | ios::in | ios::out);
	if (!file.is_open()) {
		cout << "opsss... birseyler eksik!!!" << endl;
	}
	else {
		/*for (auto employee : workers) {

			file << employee.getName() << endl << employee.getRank() << endl << employee.getEmpId() << endl << employee.getSalary() << endl;

		}*/
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

}

void FileWorks::FillObject(vector<Urun>& urunler)
{
}

void FileWorks::fillWorker()
{
}

void FileWorks::FindWorker(string worker)
{
}
