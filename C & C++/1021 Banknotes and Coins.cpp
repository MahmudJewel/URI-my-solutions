/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 17/05/17              #                                  *
*****************##################################************************************************/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define LL long long
#define D double
#define S string

main()
{
    D n;
    D div[]= {100.00,50.00,20.00,10.00,5.00,2.00,1.00,.50,.25,.10,.05,.01};
    LL note[12];
    cin>>n;
    //n=n*100;
    for(LL i=0; i<12; i++)
    {
        note[i]=n/div[i];
        n=fmod(n,div[i]);

    }
    cout<<"NOTAS:"<<endl;
    for(LL i=0; i<6; i++)
    {
        printf("%lld nota(s) de R$ %.2lf\n",note[i],div[i]);
    }
    cout<<"MOEDAS:"<<endl;
    for(LL i=6; i<12; i++)
    {
        //if(i==11)
            //printf("%lld moeda(s) de R$ %.2lf",note[i],div[i]);
        //else
            printf("%lld moeda(s) de R$ %.2lf\n",note[i],div[i]);
    }
}
