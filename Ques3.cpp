#include<iostream>
using namespace std;

int main()
{
	int x = 10; // integer x
    char y = 'a'; // character c
  
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
  
    // x is implicitly converted to float
    float z = x + 1.2;
  	
  	cout<<"Implicit type conversion"<<endl;
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;
         
	
	int c = (int)z;
	cout<<"Explicit type conversion float to int : "<<c<<endl;
}
