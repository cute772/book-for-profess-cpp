#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records 
{
    Employee::Employee(const std::string& firstName,
                       const std::string& lastName) 
    {
        
    };

    void Employee::promote(int raiseAmount) 
    {
        setSalary(getSalary() + raiseAmount);
    }

    void Employee::demote(int demeritAmount) 
    {
        setSalary(getSalary() - demeritAmount);
    }

    void Employee::hire()
    {
        mHired = true;
    }

    void Employee::fire()
    {
        mHired = false;
    }

    void Employee::display() const 
    {
        cout << "Employee : " << getLastName() << ", " << getLastName() << endl;
        cout << "------------------------------" << endl;
        cout << endl;
    }

    void Employee::setFirstName(const string& firstName)
    {
        mFirstName = firstName;
    }

    const string& Employee::getFirstName() const 
    {
        return mFirstName;
    }
    
    void Employee::setLastName(const string& lastName)
    {
        mLastName = lastName;
    }

    const string& Employee::getLastName() const 
    {
        return mLastName;
    }

    void setEmployeeNumber(int employeeNumber) 
    {
        mEmployeeNumber = employeeNumber;
    }

    const int getEmployeeNumber()
    {
        return mEmployeeNumber;
    }

}