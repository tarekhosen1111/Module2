#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i;
    for(i=1;i<=t;i++){
        string s,p;
        cin>>s>>p;
        int a=s.length(),b=p.length(),j,k;
        int arr[10][a+1];
        for(j=0;j<10;j++){
            for(k=0;k<=a;k++){
                arr[j][k]=0;
            }
        }
        for(j=0;j<10;j++){
            for(k=1;k<=a;k++){
                if(s[k-1]-'a'==j){
                    arr[j][k]++;
                }
            }
        }

        for(j=0;j<10;j++){
            for(k=1;k<=a;k++){
                arr[j][k]=arr[j][k-1]+arr[j][k];
            }
        }
        int sum=0;
        for(j=0;j<b;j++){
            sum=sum+arr[p[j]-'a'][a-b+j+1]-arr[p[j]-'a'][j];
        }
        printf("Case %d: %d\n",i,sum);
    }
}

