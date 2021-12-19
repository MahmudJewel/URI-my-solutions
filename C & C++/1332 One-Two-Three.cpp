/****************##################################*************************************************
*                #   Editor : Jewel Mahmud        #                                  *
*                #   dept. of CSE, MBSTU          #                                  *
*                #   Date : 20/05/17              #                                  *
*****************##################################************************************************/

#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[10000];
    int j,t,l;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    cin>>t;
    getchar();
    for(j=1; j<=t; j++)
    {
        gets(a);
        {
            l=strlen(a);
            if(l==5)
                cout<<3<<endl;
            else
            {
                int c=0;
                for(int i=0; i<l; i++)
                {
                    if(a[i]=='o' || a[i]=='n' || a[i]=='e')
                    {
                        c++;
                        for(int k=i+1; k<l; k++)
                        {
                            if(a[k]==a[i])
                                a[k]=' ';
                        }
                    }
                }
                if(c>1)
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
            }

        }
    }
}

