#include<iostream>
using namespace std;

int fib(int n)
{
	if(n == 1)
	return 0;
	else if(n == 2)
	return 1;
	
	return fib(n-1)+fib(n-2);
}
int main()
{
	cout<<"Fibonacci of "<<5<<" is : "<<fib(5)<<endl;

}
