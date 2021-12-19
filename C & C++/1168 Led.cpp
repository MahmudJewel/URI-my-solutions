/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 120/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL n;
    cin>>n;
    getchar();
    while(n--)
    {
        S str;
        getline(cin,str);
        LL sum=0;
        LL l=str.size();
        for(LL i=0; i<l; i++)
        {
            if(str[i]=='1')
                sum+=2;
            else if(str[i]=='2')
                sum+=5;
            else if(str[i]=='3')
                sum+=5;
            else if(str[i]=='4')
                sum+=4;
            else if(str[i]=='5')
                sum+=5;
            else if(str[i]=='6')
                sum+=6;
            else if(str[i]=='7')
                sum+=3;
            else if(str[i]=='8')
                sum+=7;
            else if(str[i]=='9')
                sum+=6;
            else if(str[i]=='0')
                sum+=6;
        }
        cout<<sum<<" leds"<<endl;
    }
}
