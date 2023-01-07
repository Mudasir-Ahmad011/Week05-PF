#include<iostream>
using namespace std;
int mul(int number);
main()
{
int number,multiply;;
cout << "Enter the number: ";
cin >> number;
multiply = mul(number);
cout << "The number after multiply with 5 is: "<<multiply;
}
int mul(int number){
int multiply;
multiply = number * 5;
return multiply;
}