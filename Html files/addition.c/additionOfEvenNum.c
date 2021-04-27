#include <stdio.h>
int main()
{
    int n; int sum=0; int Sum;
    printf("Enter the number = ");
    scanf("%d", &n);
    for(int i=2; i<=n;i+=2){
        
        sum+=i;
            printf("%d",sum);
        }
    
}