#include <stdio.h>

long long calculate_combinations(int n, int r)
{
        // Calculate combinations using the factorial formula
        long long numerator = 1;
        long long denominator = 1;

        for (int i = 1; i <= r; i++)
        {
                numerator *= (n - i + 1);
                denominator *= i;
        }

        long long combinations = numerator / denominator;
        return combinations;
}

int main()
{
        int n, r;
        printf("Enter values for n and r: ");
        scanf("%d %d", &n, &r);
        check:
        if (n < 0 || r < 0)
        {
                printf("There are no combinations possible\n");
                return 0;
        }

        if (n>21 || r > 21){
                printf("Too much large value is provided\n");
                return 0;
        }

        long long result = calculate_combinations(n, r);
        printf("There are %lld combinations of %d objects taken %d at a time\n\n", result, n, r);
        printf("Enter values for n and r: ");
        scanf("%d %d", &n, &r);
        goto check;
        
        return 0;
}
