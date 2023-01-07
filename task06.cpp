#include<iostream>
using namespace std;
string onedigit(int number);
string twodigit(int number);
main()
{
 int number,mod1,mod2;
 string result1,result2;
 cout << "Enter (one or two digit) numbers: ";
 cin >> number;
 mod1 = number % 10;
 mod2 = number - mod1;
 cout << "In words: ";
 if(mod2 > 19){
 result1 = twodigit(mod2);
 cout << result1 << " ";
 } 
 if(mod1 < 10){
 result2 = onedigit(mod1);
 cout << result2;
 }

}
string onedigit(int number){
 if(number == 0){
   return "zero";
 }if(number == 1){
   return "one";
 }if(number == 2){
   return "two";
 }if(number == 3){
   return "three";
 }if(number == 4){
   return "four";
 }if(number == 5){
   return "five";
 }if(number == 6){
   return "six";
 }if(number == 7){
   return "seven";
 }if(number == 8){
   return "eight";
 }if(number == 9){
   return "nine";
 }
return " ";
 }
string twodigit(int number){
 if(number == 10){
  return "ten";
 } if(number == 20){
  return "twenty";
 } if(number == 30){
  return "thirty";
 } if(number == 40){
  return "forty";
 } if(number == 50){
  return "fifty";
 } if(number == 60){
  return "sixty";
 } if(number == 70){
  return "seventy";
 } if(number == 80){
  return "eighty";
 } if(number == 90){
  return "ninty";
 }
return " ";
}