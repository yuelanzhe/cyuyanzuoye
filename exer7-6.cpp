#include <iostream.h>  
#include <stdio.h>  
#include <string.h> 
#define N 100 
void fun(char *p,char *q,char *temp,int n)  
{  
	int i,j;  
	i=j=n;  
	while(*(p+i-n)!='\0')  
	{  
 		*(temp+i)=*(p+i-n);  
 		i++;  
 	}  
 	while(*(q+n)!='\0')  
 	{  
		*(temp+i)=*(q+j);  
		i++;j++;  
	}  
 }  
void main(int n)  
{  
	char str1[N],str2[N],str3[N],*temp,*p,*q;    
	cout<<"������һ���ַ�����"<<endl;  
	gets(str1);  
	cout<<"������Ҫ������ַ�����"<<endl;  
 	gets(str2);  
 	cout<<"�������ڵڼ�λ����룺"<<endl;  
	cin>>n;  
 	q=str1;p=str2;temp=str3;
	
 	strcpy(temp,q);  
 	fun(p,q,temp,n);  
	puts(temp);  
 }