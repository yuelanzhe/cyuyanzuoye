#include<iostream.h>
void main()
{
	int x,y;
	cout<<"������һ��������"<<endl;
	cin>>x;
	y=0;
	while(x!=1)
	{
		y++;
			if(x%2==1)
			x=3*x+1;
	else
		    if(x%2!=1)
		    x=0.5*x;
	}
	y=y-1;
	cout<<"�����ĽǹȲ��벽������"<<y<<endl;
}