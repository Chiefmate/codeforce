#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	t;
	int	n;
	int	health[100];
	int cnt;
	int	min_idx;
	int	second_min_idx;
	int	biggest_idx;
	int	spell_flag;
	int	out_cnt;

	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		cnt = 0;
		scanf(" %d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf(" %d", health + j);
		}

		if (n == 1)
		{
			printf("1\n");
			continue ;
		}

		min_idx = 0;
		second_min_idx = 0;
		biggest_idx = 0;
		for (int j = 0; j < n; j++)
		{
			if (health[min_idx] > health[j])
			{
				second_min_idx = min_idx;
				min_idx = j;
			}
			else if (health[second_min_idx] > health[j])
			{
				second_min_idx = j;
			}
			else if (health[biggest_idx] < health[j])
				biggest_idx = j;
		}


		while (1)
		{
			spell_flag = 0;
			out_cnt = 0;
			for (int j = 0; j < n; j++)
			{
				if (health[j] <= 0)
				{
					out_cnt++;
				}
			}
			printf("out:%d\n", out_cnt);
			if (out_cnt == n)
			{
				break ;
			}
			for (int j = 1; j < n; j++)
			{
				if (health[j] > 0)
				{
					if (health[min_idx] > health[j])
					{
						second_min_idx = min_idx;
						min_idx = j;
					}
					if (health[j] > health[biggest_idx])
					{
						biggest_idx = j;
					}
					if (health[j] == 1)
					{
						spell_flag = 1;
					}
				}
			}
			if (spell_flag)
			{
				if (health[min_idx] > 0)
					health[min_idx]--;
				if (health[second_min_idx] > 0)
					health[second_min_idx]--;
			}
			else
			{
				health[biggest_idx] = 0;
			}

			min_idx = 0;
			second_min_idx = 0;
			biggest_idx = 0;
			for (int k = 0; k < n; k++)
			{
				if (health[k] < 1)
					continue ;

				if (health[min_idx] > health[k])
				{
					second_min_idx = min_idx;
					min_idx = k;
				}
				else if (health[second_min_idx] > health[k])
				{
					second_min_idx = k;
				}
				else if (health[biggest_idx] < health[k])
					biggest_idx = k;
			}

			printf("%d\n", cnt);
			cnt++;
		}
		printf("%d\n", cnt);
	}
	return (0);
}