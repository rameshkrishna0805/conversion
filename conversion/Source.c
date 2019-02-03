
#include<stdio.h>
void itob(int n)
{
	int s = 0;
	while (n > 0)
	{
		s = s * 10 + (n % 2);
		n = n / 2;
	}
	printf("%d", s);
}
void itoh(int n)
{
	int m,i=0;
	char s[10];
	while (n > 0)
	{
		m=n % 16;
		if (m <= 9)
		{
			s[i] = m;
		}
		else if (m == 10)
		{
			s[i] = 'A';
		}
		else if (m == 11)
		{
			s[i] = 'B';
		}
		else if (m == 12)
		{
			s[i] = 'C';
		}
		else if (m == 13)
		{
			s[i] = 'D';
		}
		else if (m == 14)
		{
			s[i] = 'E';
		}
		else if (m == 15)
		{
			s[i] = 'F';
		}
		i++;
		n = n / 16;
	}
	for (int j = i;j >= 0;j--)
	{
		printf("%c", s[j]);
	}
}
int main()
{
	int n;
	//
	scanf_s("%d", &n);
	itob(n);
	itoh(n);

	getchar();
	return 0;
}