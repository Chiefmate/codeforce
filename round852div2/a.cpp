#include <bits/stdc++.h>

void	solve()
{
	long long	a, b, n, m;
	long long	quotient;
	long long	ret;

	scanf(" %lld %lld %lld %lld", &a, &b, &n, &m);
	quotient = n / (m + 1);
	if (a < b)
	{
		ret = a * quotient * m + a * (n % (m + 1));	
	}
	else if ((a*m) < (m+1) * b)
	{
		ret = a * quotient * m + b * (n - (m+1)*quotient);	
	}
	else
	{
		ret = b * n;
	}
	printf("%lld\n", ret);
	return ;
}

int	main()
{
	int	t;
	
	scanf("%d", &t);
	for (int i=0; i<t; i++)
		solve();

	return (0);
}
