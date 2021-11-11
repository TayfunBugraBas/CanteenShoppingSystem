#pragma once
#include <iostream>
#include "Employee.h"
#include "../DataAccess/FileWorks.h"
#include <vector>
#include "Urun.h"



class Manager 
{
private:

public:
	Manager();

	vector<Employee> vemployee;
	vector<Urun> vurun;

	
	void setProductPrice(string urun, double newPrice);

	void setWorkerSalary(string employee, double newsalary);

    void newWorker(Employee employee);

	
};

