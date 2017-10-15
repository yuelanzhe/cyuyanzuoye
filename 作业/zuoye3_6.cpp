#include<iostream.h>
#include<iomanip.h>
void main()
{
	float r,k,s,l;
	cout<<"请输入圆的半径r和一个整型数k"<<endl;
	cin>>r>>k;
	s=3.14159*r*r;
	l=2*3.14159*r; 
	if(k==1)     
        cout<<"该圆的面积是"<<s<<endl;
	else
		if(k==2)
		    cout<<"该圆的周长是"<<l<<endl;
		else
			cout<<"该圆的面积是"<<s<<"，"<<"周长是"<<l<<endl;
}