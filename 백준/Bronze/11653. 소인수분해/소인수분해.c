#include <stdio.h>
 
int main(void){
    int N;
    scanf("%d", &N);
 
    while(N>1){
        for(int i=2; i<=N; i++){
            if(N%i==0){
                printf("%d\n", i);
                N = N/i;
                break; //다시 2부터 시작하기 위해
            }
        }
    }
}