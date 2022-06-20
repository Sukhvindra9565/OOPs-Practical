#include<iostream>
using namespace std;

class Area
{
	int length,breadth;
	public:
		Area()
		{
			cout<<"Non-Parameterized Constructor Called"<<endl;
		}
		Area(int l,int b)
		{
			cout<<"Parameterized Constructor Called"<<endl;
			length = l;
			breadth = b;
		}
		int AreaOfRect()
		{
			return length*breadth;
		}
};
int main()
{
	Area obj1;
	Area obj2(10,5);
	
	cout<<"The Area Of Rectangle is : "<<obj2.AreaOfRect()<<endl;
}
