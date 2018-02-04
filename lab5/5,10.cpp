#include <iostream>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	for (int i=1;i<=a;i++)
	{
		for (int j=a-i;j>0;j--)
		{
			cout<<".";
		}
		for (int k=a-i+1;k<=a;k++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
}
