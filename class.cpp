#include<iostream>
using namespace std;
class A
{
	public:
	int display()
	{
		int x=10;
		return(x);
	}
};
int main()
{
	A obj;
	cout<<obj.display();
	return 0;

}
