#include<iostream>
using namespace std;
class adding
{
	public:
	int sum(int a, int b)
	{
		return(a+b);
	}
};
int main()
{
	int a,b,sum;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	adding obj;
	sum=obj.sum(a,b);
	cout<<"Sum of the given numbers is:" <<sum;
	return 0;
}
