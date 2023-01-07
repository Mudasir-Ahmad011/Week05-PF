#include<iostream>
using namespace std;
string checker(char alphabet);
main()
{
char alphabet;
string result;
cout << "Enter the alphabet: ";
cin >> alphabet;
result = checker(alphabet);
cout << "You  have entered: "<< result;
}
string checker(char alphabet){
if(alphabet >= 65 && alphabet <=90){
return "Alphabet is Uppercase";
}if(alphabet >= 97 && alphabet <=122){
return "Alphabet is lowercase";
}
return 0;
}