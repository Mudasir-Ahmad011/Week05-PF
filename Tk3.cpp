#include<iostream>
using namespace std;
int isGreater(int num1,int num2);
main()
{
int num1,num2,greater;
cout << "Enter number: ";
cin >> num1;
cout << "Enter number: ";
cin >> num2;
greater = isGreater(num1,num2);
cout << "Greater number is: "<< greater;
}
int isGreater(int number1,int number2)
{
if(number1>number2)
 {
   return number1;
  }
if(number2>number1)
 {
   return number2;
  }
 return 0;
}