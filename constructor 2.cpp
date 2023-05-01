#include<iostream>
using namespace std;
class Constructor
{
  public:
  Constructor()	
  {	
    int a,b;
    cout<<"Enter two numbers:";
  	cin>>a>>b;
  	cout<<"Sum of two numbers is: "<<a+b;
  }
};
int main()
{   
    
	Constructor constructor1 ;
	return 0;
}
