#include <iostream>
using namespace std;
const int ArSize =16;
int main()
{
	long long a[ArSize];
	int i;
	a[1] = a[0] = 1LL;
	for (i=2;i<ArSize;i++)
		{
			a[i]=i * a[i-1];
		}
	for (i=0;i<ArSize;i++)
		{
			cout<<i<<"! = "<<a[ArSize]<<endl;
		}
	return 0;
}