#pragma once
#include <iostream>
#include "Employee.h"
#include "../DataAccess/FileWorks.h"
#include <vector>




class Manager 
{
private:

public:
	Manager();

	vector<Employee> vemployee;
	
	void setProductPrice();

	void setWorkerSalary(Employee employee, double newsalary);

    void newWorker(Employee employee);

	
};

