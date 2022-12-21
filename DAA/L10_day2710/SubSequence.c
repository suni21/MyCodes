#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i, j, m, n, lcs_t[20][20];
char S1[20] = "HUMAN", S2[20] = "CHIMPANZEE", b[20][20];
void longestCS()
{
    m = strlen(S1);
    n = strlen(S2);

    for (i = 0; i <= m; i++)
        lcs_t[i][0] = 0;
    for (i = 0; i <= n; i++)
        lcs_t[0][i] = 0;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                lcs_t[i][j] = lcs_t[i - 1][j - 1] + 1;
            }
            else if (lcs_t[i - 1][j] >= lcs_t[i][j - 1])
            {
                lcs_t[i][j] = lcs_t[i - 1][j];
            }
            else
            {
                lcs_t[i][j] = lcs_t[i][j - 1];
            }
        }

    int index = lcs_t[m][n];
    char longestCS[index + 1];
    longestCS[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            longestCS[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (lcs_t[i - 1][j] > lcs_t[i][j - 1])
            i--;
        else
            j--;
    }

    // Printing the sub sequences
    printf("S1 : %s \nS2 : %s \n", S1, S2);
    printf("\nLCS: %s", longestCS);
}

int main()
{
    longestCS();
    printf("\n");

    return 0;
}