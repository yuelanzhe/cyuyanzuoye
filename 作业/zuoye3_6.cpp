#include<iostream.h>
#include<iomanip.h>
void main()
{
	float r,k,s,l;
	cout<<"������Բ�İ뾶r��һ��������k"<<endl;
	cin>>r>>k;
	s=3.14159*r*r;
	l=2*3.14159*r; 
	if(k==1)     
        cout<<"��Բ�������"<<s<<endl;
	else
		if(k==2)
		    cout<<"��Բ���ܳ���"<<l<<endl;
		else
			cout<<"��Բ�������"<<s<<"��"<<"�ܳ���"<<l<<endl;
}