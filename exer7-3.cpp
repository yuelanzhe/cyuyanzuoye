#include <iostream.h>  
void fun(int *p)  
{  
	int i,x,y,temp;  
	x=y=0;  
 	for(i=1;i<10;i++)  
		if(*(p+x)>*(p+i))  
			x=i;  
	for(i=1;i<10;i++)  
		if(*(p+y)<*(p+i))  
 			y=i;  
	temp=*(p+y);  
	*(p+y)=*(p+x);  
 	*(p+x)=temp;  
 }  
 void main()  
 {  
 	int a[10],i,*p;  
	cout<<"��������a[10]"<<endl;  
	for(i=0;i<10;i++)  
		cin>>a[i];  
	p=a;  
	fun(p);  
	cout<<"����������飺"<<endl;
	for(i=0;i<10;i++)  
		cout<<*(p+i)<<" ";   
 }  
