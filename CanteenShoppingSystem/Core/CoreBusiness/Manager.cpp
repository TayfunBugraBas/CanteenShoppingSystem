#include "Manager.h"

FileWorks fileHelper;

Manager::Manager()
{
}

void Manager::setProductPrice(string urun, double newPrice)
{
	fileHelper.FillObject(vurun);

	for (unsigned int i = 0; i < vurun.size(); i++) {
		if (urun == vurun[i].getIsim()) {
			vurun.at(i).setFiyat(newPrice);
		}
		
	}
	remove("Storage.txt");
	fileHelper.saveUrun(vurun);

}


void Manager::setWorkerSalary(string employee, double newsalary)
{
	
	fileHelper.fillWorker(vemployee);
	
	for (unsigned int i = 0; i < vemployee.size(); i++) {

		
		if(employee == vemployee[i].getName())
		{
			vemployee.at(i).setSalary(newsalary);
		}
		else {
			cout << "kisi yok" << endl;
		}
		
	}
	
	remove("Employee.txt");
	fileHelper.saveWorker(vemployee);

}

void Manager::newWorker(Employee employee)
{
	vemployee.clear();
	 vemployee.push_back(employee);
	 fileHelper.saveWorker(vemployee);

}

void Manager::deleteWorker(Employee employee)
{
	fileHelper.fillWorker(vemployee);

	for (unsigned int i = 0; i < vemployee.size(); i++) {

		if (employee.getName() == vemployee[i].getName()) {
			vemployee.erase(begin(vemployee) + i);
		}
		remove("Employee.txt");
		fileHelper.saveWorker(vemployee);

	}

}

void Manager::listWorkers()
{
	fileHelper.getAllWorker();
}

