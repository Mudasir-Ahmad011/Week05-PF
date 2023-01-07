#include<iostream>
#include<cmath>
using namespace std;
bool IsSymmetricalORnot(int number1,int number2);
main()
{
int number1,number2,number3,mod1,mod_1,mod2,mod_2,mod3,mod_3,result;
cout <<"Enter first number";
cin >> number1;
mod1 = number1 % 10;
mod_1 = number1 / 10;
mod2 = mod_1 % 10;
mod_2 = mod_1/10;
mod3 = mod_2 % 10;
mod_3 = mod_2/10;
result =IsSymmetricalORnot(mod1,mod3);
if (result == true){
 cout << "Symmetrical";
}if(result == false){
 cout << "not Symmetrical";
}
}
bool IsSymmetricalORnot(int number1,int number3)
{
if(number1 == number3){
   return true; 
 }
if(number1 != number3){
  return false;
 }
 return 0;
}