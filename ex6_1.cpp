#include<iostream.h>
#define N 100
void main()
{
	int a[N],n,i,t;
	 int max,min,j,k;
    cout<<"����������Ĵ�С��";
	cin>>n;
	cout<<"����������"<<n<<"������Ԫ�ص�ֵ"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter a["<<i<<"]:";
		cin>>a[i];
	}
	max=min=a[0];
	j=k=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i]; 
			j=i;
		}
		else if(a[i]<min)
		{
			min=a[i]; 
			k=i;
		}
	}
	if(j!=k)
	{
		t=a[j];
		a[j]=a[k];
		a[k]=t;
	}
	cout<<"����������飺";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}

	
