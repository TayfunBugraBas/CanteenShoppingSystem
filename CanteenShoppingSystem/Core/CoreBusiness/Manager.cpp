#include "Manager.h"

FileWorks fileHelper;

Manager::Manager()
{
}

void Manager::setProductPrice()
{


}


void Manager::setWorkerSalary(Employee employee, double newsalary)
{
	vemployee.clear();
	fileHelper.fillWorker(vemployee);

	for (unsigned int i = 0; i < vemployee.size(); i++) {

		if(employee.getName() == vemployee[i].getName())
		{
			employee.setSalary(newsalary);

			vemployee.push_back(employee);

			fileHelper.saveWorker(vemployee);
		}


	}


}

void Manager::newWorker(Employee employee)
{
	vemployee.clear();
	 vemployee.push_back(employee);
	 fileHelper.saveWorker(vemployee);

}

