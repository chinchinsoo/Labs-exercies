#include <iostream>
using namespace std;
int main()
{
	int a,b=0;
	do
	{
		cin>>a;
		b+=a;
		cout<<b<<endl;
	}
	while (a!=0);
	return 0;
}