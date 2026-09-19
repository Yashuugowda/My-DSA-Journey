#include<iostream>//this is standard input output c++ library
using namespace std;
/*
Write a C++ program that asks the user to enter:

Student's name
Student's age
Student's college name
Student's branch
Student's CGPA

Then display all the entered information.
*/
int main(){
    string name;
    int age;
    string branch;
    float cgpa;
    cout <<"---Student details----"<<std::endl;//-->endline the cursor move on the next line
    cout <<"enter the Student name:";
    getline(cin,name);// getline is used for  take complete input line including space
    cout<<"enter the Age:";
    cin>> age;
    cin.ignore(); 
    cout<<"enter your Branch:";
    getline(cin,branch);
    cout<<"enter your CGPA:";
    cin>> cgpa;






}