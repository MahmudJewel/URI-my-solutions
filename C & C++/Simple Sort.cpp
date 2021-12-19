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
    LL a[3];
    LL b[3];
    for(LL i=0; i<3; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+3);
    for(LL i=0; i<3; i++)
        cout<<a[i]<<endl;
        cout<<endl;
    for(LL i=0; i<3; i++)
        cout<<b[i]<<endl;
}
