#pragma once
#include <string>

class Employee {
public:
	Employee() {};
	Employee(const std::string& firstname,
		const std::string& lastname) {};
	void promote(int raiseAmount = 1000);
	void demote(int demeritAmount = 1000);
	void hire();
	void fire();
	void display() const;

	//getters and setters
	void setFirstName(const std::string& firstname);
	const std::string& getFirstName() const;

	void setLastName(const std::string& lastname);
	const std::string& getLastName() const;

	void setEmployeeNumber(int employeeNumber);
	int getEmployeeNumber() const;
	void setSalary(int newSalary);
	int getSalary() const;
	bool isHired() const;

private:
	std::string mFirstName;
	std::string mLastName;
	int mEmployeeNumber = -1;
	int mSalary = 1700;
	bool mHired = false;
};



