#include<iostream>
using namespace std;
int main()
{
    int days,year,week;
    cout<<"Enter number of days : ";cin>>days;
    year=days/365;
    week=(days%365)/7; //139 / 7
    cout<<"Years : "<<year<<endl;
    cout<<"Weeks : "<<week<<endl;
    cout<<"Days : "<<days-(week*7+year*365)<<endl;
}