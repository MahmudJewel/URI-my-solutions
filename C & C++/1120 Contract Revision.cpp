/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   Dept. of CSE, MBSTU          #                                  *
*                #   Date : 120/05/17              #                                 *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define D double
#define S string
main()
{
    S s,com;
    while(cin>>com>>s )
    {
        if(com =="0" && s=="0")
            break;
        LL l=s.size();
                LL c=0;
        for(LL i=0; i<l;i++)
        {
                if(s[i]==com[0] || s[i]=='0')
                {
                    c++;
                }
        }
        if(c==l)
            cout<<0<<endl;
        else
        {
            LL d=0;
            for(LL i=0; i<l; i++)
            {
                if(s[i]!='0' && s[i]!=com[0])
                    d=1;
                if(d==1 && s[i]!=com[0])
                    cout<<s[i];
            }
            cout<<endl;
        }

    }
}
