#include "Employee.h"

Employee::Employee()
{
	
}

Employee::Employee(string _employeeRank,string _name ,int empId, double _salary) {

	employeeRank = _employeeRank;
	employeeId = empId;
	salary = _salary;
	name = _name;

}

void Employee::setName(string _name)
{
	name = _name;
}

string Employee::getName()
{
	return name;
}

void Employee::setRank(string rnk)
{
	employeeRank = rnk;
}

string Employee::getRank()
{
	return employeeRank;
}

void Employee::setEmpId(int _Id)
{
	employeeId = _Id;
}

int Employee::getEmpId()
{
	return employeeId;
}

void Employee::setSalary(double Slry)
{
	salary = Slry;
}

double Employee::getSalary()
{
	return salary;
}


