#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    char str1[n];
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            str1[i] = '#';
        }
        else
        {
            str1[i] = '.';
        }
    }
    char str2[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            str2[i] = '#';
        }
        else
        {
            str2[i] = '.';
        }
    }
    char str3[n];
    for (int i = 0; i < n; i++)
    {
        str3[i] = '#';
    }

    for (int i = 0; i < m; i++)
    {
        int tri1 = 0, tri2 = 0, sum = 0;
        for (int j = 1; j <= m; j += 4)
        {
            if (j == i)
            {
                for (int x = 0; x < n; x++)
                {
                    printf("%c", str1[x]);
                    if (x == (n - 1))
                    {
                        printf("\n");
                    }
                }
                tri1++;
                break;
            }
        }
        for (int j = 3; j <= m; j += 4)
        {
            if (j == i)
            {
                for (int x = 0; x < n; x++)
                {
                    printf("%c", str2[x]);
                    if (x == (n - 1))
                    {
                        printf("\n");
                    }
                }
                tri2++;
                break;
            }
        }
        sum = tri1 + tri2;
        if (sum == 0)
        {
            for (int x = 0; x < n; x++)
            {
                printf("%c", str3[x]);
                if (x == (n - 1))
                {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}