#include<iostream>
using namespace std;
int add(int number1,int number2);
float divide(float number1,float number2);
int isGreater(int number1,int number2);
main()
{
int sum,greater;
float number1,number2;
float result;
cout << "Enter first number: ";
cin >> number1;
cout << "Enter second number: ";
cin >> number2;
sum = add(number1,number2);
cout << "Sum is: "<<sum<<endl;
result = divide(number1,number2);
cout << "Division is: "<<result<<endl;
greater = isGreater(number1,number2);
cout << "Greater number is: "<<greater<<endl;
}
int add(int number1,int number2)
{
int sum = number1 + number2;
return sum;
}
float divide(float number1,float number2)
{
float division = number1/number2;
return division;
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