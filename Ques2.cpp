#include<iostream>
using namespace std;

class Area
{

	public:
	int rectangle(int l,int b)
	{
		return l*b;
	}
	int triangle(int l,int h)
	{
		return (l*h)/2;
	}
	int square(int side)
	{
		return side*side;
	}
};
int main()
{
	Area obj;
	cout<<"The Area of Rectangle is : "<<obj.rectangle(5,6)<<endl;
	cout<<"The Area of Triangle is : "<<obj.triangle(10,5)<<endl;
	cout<<"The Area of square is : "<<obj.square(5)<<endl;
	
}
