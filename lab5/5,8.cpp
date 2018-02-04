#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int b=0;
	do
	{
		cin>>a;
		b+=1;
	}
	while (a!="done");
	cout<<b-1<<endl;
	return 0;
}