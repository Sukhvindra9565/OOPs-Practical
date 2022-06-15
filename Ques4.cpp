#include<iostream>
using namespace std;

int main()
{
	int x = 10;
    char y = 'a'; 
    float z = x + 1.2;
    double a = 5.23;
    long int b = 786898667;
    
    cout<<"The value of x is "<<x<<" and the size of int "<<sizeof(x)<<endl;
    cout<<"The value of y is "<<y<<" and the size of char "<<sizeof(y)<<endl;
	cout<<"The value of z is "<<z<<" and the size of float "<<sizeof(z)<<endl;
	cout<<"The value of a is "<<a<<" and the size of double "<<sizeof(a)<<endl;
	cout<<"The value of b is "<<b<<" and the size of long int "<<sizeof(b)<<endl;	

}
