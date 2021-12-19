/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 17/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    LL a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        LL start=a*60+b;
        LL finish=c*60+d;
        LL result=finish-start;
        if(result<=0)
            result+=(24)*60;
        LL result_h=result/60;
        LL result_m=result%60;
        cout<<"O JOGO DUROU "<<result_h<<" HORA(S) E "<<result_m<<" MINUTO(S)"<<endl;
    }
}
