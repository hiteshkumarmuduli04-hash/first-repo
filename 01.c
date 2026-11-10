//input:5832 ->output:18
#include<stdio.h>
int sumofdigits(int x){
    int sum;
    while(x!=0){
     sum+=x%10;
        x=x/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",sumofdigits(n));
    return 0;
}