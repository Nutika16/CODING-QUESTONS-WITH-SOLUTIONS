#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int rem,sum=0;
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0){
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
