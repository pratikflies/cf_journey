bool prime[1000001];
void sieveOfEratosthenes(int n){
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;

    for (int p=2;p*p<=n;p++){
        if (prime[p]==true){
            for (int i=p*p;i<=n;i=i+p)
                prime[i]=false;
        }
    }
  
    //Print all prime numbers;
    for (int p=2;p<=n;p++){
        if (prime[p])
            cout<<p<<" ";
    }
}

->TC: O(N*log(log(N)))
->SC: O(N)
