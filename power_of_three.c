#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if (n<=0){
        printf("false");
    }
    else{
        while(n%3==0){
            n/=3;
            n==1;
        }
    if(n==1){
     printf("true");
    }
    else{
        printf("false");
    }
}
    return 0;

}
