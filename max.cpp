#include<iostream>
#include<cmath>
using namespace std;
main()
{
float number1,number2;
float total,total2,total3,total4,total5,total6,total7;
cout << "Enter Number: ";
cin >> number1;
cout << "Enter Number: ";
cin >> number2;
total = max(number1,number2);
cout <<total<<" is greater number !!!"<<endl;
total2 = min(number1,number2);
cout << total2 << " is minimum number !!!"<<endl; 
total3 = sqrt(number1);
cout <<total3<<" is square"<<endl;
total4 = pow(number1,3);
cout << total4 <<" "<< number1 <<"^3"<<endl;
total5 = cbrt(number2);
cout << total5 << "is cube root square root of"<<number2<<endl;
total6 = ceil(number1);
cout << total6 <<" round of by ceiling function"<<endl;
total7 = floor(number1);
cout << total7 <<" round of by floor function"<<endl;
}