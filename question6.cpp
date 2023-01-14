//This program is to swap two numbers 

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, temp;
    cout<<"Enter first number: "<<endl;
    cin>>num1;

    cout<<"Enter second number: "<<endl;
    cin>>num2;

    cout<<"The numbers before swapping are num1: "<<num1<<" and num2: "<<num2<<endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout<<"The numbers after swapping are num1: "<<num1<<" num2: "<<num2<<endl;


    return 0;
}