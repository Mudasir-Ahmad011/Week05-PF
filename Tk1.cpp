#include<iostream>
using namespace std;
int add(int num1,int num2);
main()
{
 int num1,num2,sum;
 cout << "Enter first number: ";
 cin >> num1;
 cout << "Enter second number: ";
 cin >> num2;
sum = add(num1,num2);
cout << "Sum is: "<<sum;
}
int add(int num1,int num2)
{
 int sum;
 sum = num1 + num2;
 return sum;
}