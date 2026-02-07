#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long c,n;

    cin>>c>>n;

    long long k=n;

    long long arr[k]={0};
   
    int p=0,index=0;
    
 if(n==1){

    for(int i=0;i<c;i++){

        int x;

        cin>>x;

        if(x>p){
            p=x;

            index=i;
        }
    }

    cout<<index+1<<endl;

    return 0;
 }

    while(n!=0){

        long long max=0,index=0;
 
        for(long long i=0;i<c;i++){
           
            long long x;
            cin>>x;

            if(max<x){
                max=x;

                index=i;
            }

        }

        arr[index]++;

        n--;
    }


long long m=0;
long long in=0;

    for(long long i=0;i<k;i++){
  
      if(arr[i]>m){
       m=arr[i];

        in=i;
      }
    }

    cout<<in+1;

   return 0;
}