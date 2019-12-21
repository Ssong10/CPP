#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char a[51], cnt = 0;
		bool ch = 0;
		scanf("%s", a);
		for (int j = 0; a[j] != 0; j++)
		{
			if (a[j] == '(')
				cnt++;
			else
				cnt--;
			if (cnt < 0)
			{
				printf("NO\n");
				ch = 1;
				break;
			}
		}
		if (!ch)
		{
			if (cnt == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}