#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee emp;
	emp.setFirstName("Bjorn");
	emp.setLastName("Welboren");
	emp.setEmployeeNumber(54);
	emp.setSalary(1700);
	emp.promote();
	emp.promote(300);
	emp.hire();
	emp.display();
	return 0;
}
