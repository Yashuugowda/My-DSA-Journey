#include<iostream>
using namespace std;
/*
 Employee Bonus Calculator

Write a C++ program that accepts an employee's basic salary and calculates their bonus and final salary based on the following conditions:

Basic Salary	Bonus
Less than ₹20,000	0%
₹20,000 – ₹40,000	10%
₹40,001 – ₹60,000	15%
Above ₹60,000	20%
Requirements
Read the employee's basic salary from the user.
Use if, else if, and else to determine the bonus percentage.
*/
int main(){
    double basic_salary;
    double bonus;
    double final_salary;
    cout<<"Enter Employee Basic Salary:";
    cin>>basic_salary;
    if(basic_salary<20000){
        cout<<"Final_salary:"<<basic_salary;
    }
    else if(basic_salary>=20000 && basic_salary<=40000){
        bonus=basic_salary*(10.0/100);
       

    }
    else if(basic_salary>=40001 && basic_salary<=60000){
        bonus=basic_salary*(15.0/100);
    }
    else{
        bonus=basic_salary*(20.0/100);
    }
    final_salary=basic_salary+bonus;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Final Salary: " << final_salary << endl;

    return 0;
    

}