#include<iostream.h>
#include<math.h>
#include<iomanip.h>
void main()
{
float x,y,z,i,j;
cout<<"�����������ε����߳���"<<endl;
cin>>x>>y>>z;
i=0.5*(x+y+z);
j=sqrt(i*(i-x)*(i-y)*(i-z));
cout<<"�������ε����Ϊ"<<j<<endl;
}