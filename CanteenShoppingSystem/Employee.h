#pragma once
#include <iostream>
#include "FileWorks.h"

using namespace std;



class Employee
{
private:
	string name;
	string employeeRank;
	int employeeId;
	double salary;
public:


	Employee(string,string, int, double);

	void setName(string);
	string getName();

	void setRank(string);
	string getRank();

	void setEmpId(int);
	int getEmpId();

	void setSalary(double);
	double getSalary();


};

