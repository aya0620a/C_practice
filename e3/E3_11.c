#include <stdio.h>

int main(void)
{
    char s, t;
    int n, m; 
    printf("s, t = ");
    scanf("%c %c", &s, &t);
    printf("n, m = ");
    scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m / 2;j++)
        {
            if(i % 2 == 0)
            {
            printf("%c", s);
            printf("%c", t);
            }

            else
            {
            printf("%c", t);
            printf("%c", s); 
            }
        }
        
            if(i % 2 == 0)
            {
            printf("%c\n", s);
            }

            else
            {
            printf("%c\n", t);
            }
    }

	return 0;
}
