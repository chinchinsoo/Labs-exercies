#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
	c=0;
	for (int i=a;i<b+1;i++)
	{
		c+=i;
	}
	cout<<c<<endl;
}
