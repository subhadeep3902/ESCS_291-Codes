#include <stdio.h>
int ack(int m, int n)
{
    if (m == 0){
        return n+1;
    }
    else if((m > 0) && (n == 0)){
        return ack(m-1, 1);
    }
    else if((m > 0) && (n > 0)){
        return ack(m-1, ack(m, n-1));
    }
}
 
int main(){
    int A,x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    A=ack(x,y);
    printf("%d\n", A);
    return 0;
}