#include<bits/stdc++.h>

 using namespace std;

 int main(){

    long long n,k;

    cin>>n>>k;

    vector<pair<long long,long long>> v;

    for(long long i=0;i<n;i++){

        long long x,y;

        cin>>x>>y;

        v.emplace_back(x,y);

    }
     
    
    sort(v.begin(),v.end());

    long long sum=v[0].second,max=v[0].second;


    for(long long i=1;i<n;i++){

       cout<<sum<<" "<<endl;

        if(max<v[i].second){

            max=v[i].second;
        }
     
        if(v[i].first-v[0].first<k){
             
            sum+=v[i].second;

        }

        if(max<sum){
            max=sum;
        }

    }

    cout<<max;
 }