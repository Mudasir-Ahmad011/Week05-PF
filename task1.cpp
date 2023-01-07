#include<iostream>
#include<cmath>
using namespace std;
main()
{
float base,a;
float height;
float angle = 30;
float rad;
rad = angle*(3.14/180.0);
a = tan(rad);
height = 43*a;
cout << "Height is: "<<height;

}