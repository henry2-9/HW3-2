#include <stdio.h>

void change(char []);

int main()
{
	char s[1000];

	printf("Enter a string:\n");
	scanf("%s", &s);

	change(s);
	printf("%s\n",s);

	system("pause");
	return 0;
}

void change(char s[])
{
	int c = 0;
	char ch;

	while (s[c] != '\0')
	{
		ch = s[c];
		if (ch >= 'A' && ch <= 'Z')
			s[c] += 32;
		else if (ch >= 'a' && ch <= 'z')
			s[c] -= 32;
		c++;
	}
}