#pragma once
#include <string>


namespace Records 
{
    const int kDefaultStartingSalary = 30000;

    class Employee 
    {
        public:
            Employee() = default;
            Employee(const std::string& firstName,
                     const std::string& lastName);

            void promote(int raiseAmount = 1000);
            void demote(int demeritAmount = 1000);
            void hire(); // 직원을 채용 or 재임용한다
            void fire(); // 직원을 해고한다
            void display() const; // 모든 직원을 출력한다

            void setFirstName(const std::string& firstName);
            const std::string& getFirstName() const;

            void setLastName(const std::string& lastName);
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
            int mSalary = kDefaultStartingSalary;
            bool mHired = false;
    };

}
