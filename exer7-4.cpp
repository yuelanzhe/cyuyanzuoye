#include<iostream.h>
void main()
{
   int i,a[10];
   void inv(int *x,int n);
   cout<<"������ԭ���飺"<<endl;
   for(i=0;i<10;i++)
	   cin>>a[i];
   inv(a,10);
   cout<<"�����ź�����飺"<<endl;
   for(i=0;i<10;i++)
	   cout<<a[i]<<endl;

}
void inv(int *x,int n)
{
   int temp,*p,*q,m=(n-1)/2;
   p=x;
   q=x+n-1;
   for(;p<=x+m;p++,q--)
   {
     temp=*p;
	 *p=*q;
	 *q=temp;
   }
}