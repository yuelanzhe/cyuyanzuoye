#include <iostream.h>
double S=0,s;
int i,n,sum;
f()
{
	for (i=1;i<=n;i++)
	{
		sum+=i;
		s=1/(double)sum;
		S+=s;
	}
	return (S);
}
void main()
{
	cout<<"������һ��������n:"<<endl;
	cin>>n;
	f();
	cout<<S<<endl;
}

