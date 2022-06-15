#include<iostream>
using namespace std;

namespace myName
{
	class Person
	{
		int age;
		string name;
		public:
		Person(int a,string n)
		{
			age = a;
			name = n;
		}
		void print()
		{
			cout<<"Your name is : "<<name<<endl;
			cout<<"Your age is : "<<age<<endl;
		}
	};
}
int main()
{
	myName::Person obj(20,"Sukhvindra");
	obj.print();
}
