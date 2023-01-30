#include <bits/stdc++.h>

int main(void)
{
    int t;
    int n;
    int a[100001];
    int odd_num;
    int odd[100001];
    int even_num;
    int even[100001];
    
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf(" %d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", a + j);
        }

        odd_num = 0;
        even_num = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2)
            {
                odd[odd_num] = j;
                odd_num++;
            }
            else
            {
                even[even_num] = j;
                even_num++;
            }
        }

        if ((odd_num > 0 && even_num != 1) || (even_num == 1 && odd_num >= 3))
        {
            printf("YES\n");
            if (even_num <= 1)
                printf("%d %d %d\n", odd[0] + 1, odd[1] + 1, odd[2] + 1); 
            else
                printf("%d %d %d\n", even[0] + 1, even[1] + 1, odd[0] + 1); 
        }
        else
        {
            printf("NO\n");
        }
    }
    return (0);
}
