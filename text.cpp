#include <iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x-500>=500)
	    cout<<":����ֵ��1000����"<<endl;
	else
		if(x+100>=200)
	        cout<<":����ֵ��100~999"<<endl;
	    else
			if(x>=10)
				cout<<":����ֵ��10~99"<<endl;
			else
				cout<<":����ֵС��10"<<endl;
}
