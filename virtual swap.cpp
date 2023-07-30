#include<iostream>
using namespace std;
class A
{
	public:
		virtual void swap(int &a,int &b)
		{
			int c=a;
			a=b;
			b=c;
		}
};
main()
{ 
    int a=9,b=2;
    cout<<"a= "<<a<<" and b= "<<b<<endl;
	A obj;
	A *p=&obj;
	p->swap(a,b);
	cout<<"a= "<<a<<" and b= "<<b;
	return 0;
}
