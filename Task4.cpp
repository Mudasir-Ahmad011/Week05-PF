#include<iostream>
#include<cmath>
using namespace std;
string evenishOddish(int sum);
main()
{
int number,mod1,mod_1,mod2,mod_2,mod3,mod_3,mod4,mod_4,mod5,mod_5,sum;
string result;
cout<<"Enter number: ";
cin >> number;
mod1=number%10;
mod_1 = number/10;
mod2 = mod_1%10;
mod_2 = mod_1/10;
mod3=number%10;
mod_3 = number/10;
mod4 = mod_1%10;
mod_4 = mod_1/10;
mod5=number%10;
mod_5 = number/10;
sum = mod1 + mod2 + mod3 + mod4 +mod5;
result = evenishOddish(sum);
cout << result;
}
string evenishOddish(int sum)
{
 if(sum % 2 == 0){
  return "evenish";
 }if(sum % 2 != 0){
  return "oddish";
 }

}