#include<iostream.h>
#include<math.h>
#include<iomanip.h>
void main()
{
float x,y,z,i,j;
cout<<"请输入三角形的三边长度"<<endl;
cin>>x>>y>>z;
i=0.5*(x+y+z);
j=sqrt(i*(i-x)*(i-y)*(i-z));
cout<<"该三角形的面积为"<<j<<endl;
}