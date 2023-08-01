#include<iostream>
using namespace std;
class bb
{
	public:
	virtual	void ppp()//if virtual is not used then it will block the outputs of class d1 and d2//
		{
			cout<<"It is base class"<<endl;
		}
};
class d1: public bb
{
	public:
		void ppp()
		{
			cout<<"It is 1st derived class"<<endl;
		}
};
class d2: public bb
{
	void ppp()
	{
		cout<<"It is 2nd derived class"<<endl;
	}
};
int main()
{
	bb *p;
	d1 a;
	d2 b;
	p=&a;
	p ->ppp();
	p=&b;
	p ->ppp();
	return 0;
}
