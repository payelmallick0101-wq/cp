 #include<bits/stdc++.h>

 using namespace std;

 int main(){

    int n;

    cin>>n;

    vector<long long> v;

    for(int i=0;i<n;i++){

        long long x;

        cin>>x;

        v.push_back(x);
    }

    if(n==1){

        cout<<n;
        return 0;
    }
    
    int sum=1;

  int max=0;

  for(int i=0;i<n-1;i++){
    
    

    if(v[i]<=v[i+1]){
        sum++;

    }

    if(max<sum){
        max=sum;
    }

    else if(v[i]>v[i+1]&&sum>max){

        max=sum;

        sum=1;
    }

    else if(v[i]>v[i+1]&&sum<=max){
        sum=1;
    }

    
  }

  cout<<max;
    
 }