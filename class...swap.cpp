#include<iostream>
using namespace std;
class swapping
{
	public:
		int swap(int a, int b)
		{
			int c=a;
			    a=b;
			    b=c;
		}
};
int main()
{   
    int a,b;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	cout<<"Before swapping a:" <<a<< "and b:"<<b<<endl;
	swapping obj;
	obj.swap(a,b);
	cout<<"After swapping a:" <<a<< "and b:"<<b<<endl;
	return 0;
}
