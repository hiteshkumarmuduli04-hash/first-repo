//input:5832 ->output:18
//and reverse these like 5832-->2385
#include<stdio.h>
int sumofdigits(int x){
    int sum;
    while(x!=0){
     sum+=x%10;
        x=x/10;
    }
    return sum;
}
int reverse(int n){
    int r=0;
  while(n!=0){
    r=(r+(n%10))*10;
    n=n/10;
  }
  return r/10;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d\n",sumofdigits(n));
     printf("%d\n",reverse(n));
    return 0;
}