#include<iostream>
using namespace std;
void Nooverflow(int total,int v,int percentageOfp1,int percentageOfp2,int percentage);
void Afteroverflow(int total,int v,int h,int percentageOfp1,int percentageOfp2,int percentage);
main()
{
int v,p1,p2,percentageOfp1,percentageOfp2,percentage,total,total_p1,total_p2;
float h;
cout << "Enter volume of the swimming pool in litres: ";
cin >> v;
cout << "Enter flowrate of 1st pipe(per hour): ";
cin >>p1;
cout << "Enter flowrate of 2nd pipe(per hour): ";
cin >>p2;
cout <<"Enter time in hours: ";
cin >> h;
total_p1 = p1 * h;
total_p2 = p2 * h;
total = total_p1 + total_p2;
percentage = (total * 100) / v;
percentageOfp1 = (total_p1*100)/total;
percentageOfp2 = (total_p2*100)/total;
Nooverflow(total,v,percentageOfp1,percentageOfp2,percentage);
Afteroverflow(total,v,h,percentageOfp1,percentageOfp2,percentage);
}

void Nooverflow(int total,int v,int percentageOfp1,int percentageOfp2,int percentage){
if(total < v){
cout << "The pool is "<<percentage<<"% full.Pipe1: "<<percentageOfp1<<"%. Pipe2: "<<percentageOfp2<<"%.";
}
}
void Afteroverflow(int total,int v,int h,int percentageOfp1,int percentageOfp2,int percentage){
int afterOverflow;
if(total > v){
 afterOverflow = total - v;
cout << "For "<<h<<" hours the pool overflows with "<<afterOverflow<<" liters.";
} 
}