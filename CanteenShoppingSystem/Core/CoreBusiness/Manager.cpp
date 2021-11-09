#include "Manager.h"

FileWorks fileHelper;

Manager::Manager()
{
}

void Manager::setProductPrice()
{


}


void Manager::setWorkerSalary(string employee, double newsalary)
{
	
	fileHelper.fillWorker(vemployee);
	vector<Employee> emp;

	emp = vemployee;

	for (unsigned int i = 0; i < vemployee.size(); i++) {

		
		if(employee == vemployee[i].getName())
		{
			vemployee.at(i).setSalary(newsalary);

		

			
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

