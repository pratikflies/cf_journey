int gcd(int a, int b){
  if(a==0) return b;
  return gcd(b%a,a);
}

TC: O(log(min(a,b))
SC: O(log(min(a,b)) //auxiliary stack space;
