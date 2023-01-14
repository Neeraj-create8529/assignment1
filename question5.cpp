//This program is to find the size of some basic data types

#include<iostream>
using namespace std;

int main()
{
    int a;
    long int b;
    short int c;
    char d;
    short e;
    float f;
    double g;
    long double h;
    bool k;

    cout<<"The size of int is: "<<sizeof(a)<<endl;
    cout<<"The size of long int is: "<<sizeof(b)<<endl;
    cout<<"The size of short int is: "<<sizeof(c)<<endl;
    cout<<"The size of char is: "<<sizeof(d)<<endl;
    cout<<"The size of short is: "<<sizeof(e)<<endl;
    cout<<"The size of float is: "<<sizeof(f)<<endl;
    cout<<"The size of double is: "<<sizeof(g)<<endl;
    cout<<"The size of long double is: "<<sizeof(h)<<endl;
    cout<<"The size of bool is: "<<sizeof(k)<<endl;


    return 0;
}