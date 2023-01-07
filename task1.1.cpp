#include<iostream>
#include<cmath>
using namespace std;
float calculateHeight(float base,float degrees);
main()
{
float base;
float degrees,height;
cout << "Enter distance: ";
cin >> base;
cout << "Enter angle of elevation";
cin >> degrees;

height = calculateHeight( base, degrees);
cout << "Height of tree is: "<<height<<endl;
}
float calculateHeight(float base,float degrees)
{
  float radian;
 float radians;
 float height;
 float angle;
 
 radian = 57.2958;
 radians = degrees/radian;
 angle = tan(radians);
 height = angle * base;
 return height;
}