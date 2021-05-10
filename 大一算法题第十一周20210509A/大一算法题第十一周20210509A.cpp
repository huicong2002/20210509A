#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
int Count(int x)
{
	if (x == 1 || x == 2)
	{
		return 1;
	}
	else
	{
		return Count(x - 1) + Count(x - 2);
	}
}
int main()
{
	int n;
	scanf("%d", &n);

	while (n--)
	{
		int start, end;
		scanf("%d%d", &start, &end);

		int x;
		x = end - start + 1;
		int count;
		count = Count(x);

		printf("%d\n", count);
	}

	return 0;
}
*/

#include<stdio.h>
int main()
{
	long long int arr[55];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i < 55; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	int n;
	scanf("%d", &n);

	while (n--)
	{
		int start, end;
		scanf("%d%d", &start, &end);

		long long int x;
		x = arr[end - start];

		printf("%lld\n", x);
	}
}