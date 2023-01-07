#include<iostream>
using namespace std;
main()
{
int hours;
int minutes;
cout << "Enter hours(0-23): ";
cin >> hours;
cout << "Enter minutes(0-59): ";
cin >> minutes;
minutes = minutes + 15;
if(minutes>=60){
 hours = hours + minutes/60;
 minutes = minutes % 60;
  }
hours = hours % 24;
cout << "Time after 15 minutes is: "<< hours << ":"<< minutes;
}