#include<iostream>
using namespace std;
template <class T>
class A
{
	public:
		int x,y;
		A(T a,T b)
		{
			x=a;
			y=b;
		}
	 max(T x,T y)
	{
		if(x>y)
		cout<<x<<" is greater"<<endl;
		else
		cout<<y<<" is greater"<<endl;
		}	
};
main()
{
	A<int> obj1(0,0);
	A<float> obj2(0.0,0.0);
	obj1.max(2,3);
	obj2.max(3.6,1.2);
	return 0;
}
