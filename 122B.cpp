#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin>>s;
        
    int i=0;
    
    int  arr[10]={0};

    while(s[i]!='\0'){

        if(s[i]=='4'||s[i]=='7'){

            arr[s[i]-'0']++;
        }



        i++;
    }
    
    
    int max=0,index=0;

     for(int i=0;i<10;i++){
       if(max<arr[i]){
        max=arr[i];

        index=i;
       }

     }

    if(max>0)
{
    cout<<index;
}

else{
    cout<<"-1";
}

return 0;
}