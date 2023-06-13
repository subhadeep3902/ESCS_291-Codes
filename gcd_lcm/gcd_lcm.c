#include <stdio.h>
int hcf(int,int);
int find_lcm(int,int); 
int main()
{
    int n1, n2,lcm;
    printf("Enter two positive integers:\n");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d\n", n1, n2, hcf(n1, n2));
    lcm = find_lcm(n1,n2);    
    printf("LCM of %d and %d is: %d\n", n1, n2, lcm);
    return 0;
}

int hcf(int x, int y) 
{
    if (y != 0)
        return hcf(y,x%y);
    else
        return x;
}

int find_lcm(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}