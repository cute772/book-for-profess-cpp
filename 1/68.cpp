#include <iostream>
#include <array>

struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};

int main() {
    Employee anEmployee;
    anEmployee.firstInitial = 'M';
    anEmployee.lastInitial = 'G';
    anEmployee.employeeNumber = 43;
    anEmployee.salary = 80000;
    // test code for vscode 


    // 배열 선언 및 초기화
    Employee arrEmployee[] = {anEmployee};
    // std::array 를 이용하여 배열 선언 및 초기화
    std::array<Employee, 1> dd = {anEmployee};


    // 직원 레코드에 저장된 값 출력
    std::cout << "Employee : " << anEmployee.firstInitial << anEmployee.lastInitial << std::endl;
    std::cout << "arrEmployee : " << arrEmployee[0].firstInitial << std::endl;

    return 0;
}
