#include<stdio.h>

int main() {
    int d;
    
    scanf("%d", &d);
    
    for(int i=1; i<=9; i++) {
        
        printf("%d * %d = %d\n",d,i,d*i);
    }
}