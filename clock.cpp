#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
	int h,m,s,a,err;
	err=a=0;
	while (err==0)
    {
        cout<<"enter hour : "<<endl;
        cin>>h;
        cout<<"enter minutes : "<<endl;
        cin>>m;
        cout<<"enter seconds : "<<endl;
        cin>>s;
        if (h<24&&m<60&&s<60)
            err++;
        else{
            printf("Invalid");
            getch();
            system("cls");
        }
    }
	while(a==0)
	{
	    system("cls");
	    cout<<h<<":"<<m<<":"<<s<<endl;
        Sleep(1000);
		s++;
		if (s>59)
		{
			m++;
			s=0;
		}
		if (m>59)
		{
			h++;
			m=0;
		}
		if (h>23)
		{
			h=0;
		}

	}
	return 0;
}
