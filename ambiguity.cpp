#include<iostream>
using namespace std;
class A
{
	public:
		func()
		{
			cout<<"This is class A"<<endl;
		}
};
class B
{
	public:
		func()
		{
			cout<<"This is class B"<<endl;
		}
};
class C: public A,public B
{
	public:
	func()
	{
		cout<<"This is class C"<<endl;
	}
};
int main()
{
	C obj;
	obj.func();
	return 0;
}
