Method-1:-
void primeFactorization(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      int cnt=0;
      while(n%i==0){
        cnt++;
        n/=i;
      }
      cout<<i<<" "<<cnt<<endl;
    }
  }
  if(n>1) cout<<n<<" "<<1<<endl;
}

TC - O(sqrt(n))
SC - O(1)

Method-2:-
#include <bits/stdc++.h>
using namespace std;

int factor[1000001];
void sieveFactorization(int n){
    memset(factor,-1,sizeof(factor));
    //have to go till n;
    for(int i=2;i<=n;i++){
        if(factor[i]==-1){
            int num=i+i;
            for(int j=num;j<=n;j+=i){
                if(factor[j]==-1) factor[j]=i;
            }
        }
    }
}

int main()
{
    sieveFactorization(315);
    int n=315;
    while(factor[n]!=-1){
        cout<<factor[n]<<" ";
        n/=factor[n];
    }
    cout<<n<<endl;
}

TC - O(nlog(longn)) for pre-processing and O(logn) per query
SC - O(n)
