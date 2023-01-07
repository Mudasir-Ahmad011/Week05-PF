#include<iostream>
#include<cmath>
using namespace std;
float  positivenumber(int b,float f,int a);
float  negativenumber(int b,float f,int a);
main()
{
int b,c,d,mul;
float e,f;
float result1,result2;
int a;
cout << "Enter number: ";
cin >> a;
cout << "Enter number: ";
cin >> b;
cout << "Enter number: ";
cin >> c;
d=pow(b,2);
mul = 4*a*c;
e = d - mul;
f=sqrt(e);
result1 = positivenumber(b,f,a);
result2 = negativenumber(b,f,a);
cout << "x = "<< result1 <<" x = " << result2;

}
float  positivenumber(int b,float f,int a){
float result,quadratic_formula1;
result = -b+f;
quadratic_formula1=result/(2*a);
return quadratic_formula1;
}
float  negativenumber(int b,float f,int a){
float result,quadratic_formula2;
result = -b-f;
quadratic_formula2=result/(2*a);
return quadratic_formula2;
}