#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

#define infinite_loop while(1)


int main()
{
    long long t,sec;
    string ti=__TIME__;
    t=time(0);

    infinite_loop
    {
        sec=time(0)-t;

        if(sec>=1)
        {
            ti[7]++;
            if(ti[7]=='9'+1)
            {
                ti[6]++;
                ti[7]='0';
            }

            if(ti[6]=='6')
            {
                ti[4]++;
                ti[6]='0';
            }

            if(ti[4]=='9'+1)
            {
                ti[3]++;
                ti[4]='0';
            }

            if(ti[3]=='6')
            {
                ti[1]++;
                ti[3]='0';
            }

            if(ti[1]=='9'+1)
            {
                ti[0]++;
                ti[1]='0';
            }

            sec=0;
            t=time(0);
        }
        cout<<ti;
        system("cls");
    }
    return 0;
}
