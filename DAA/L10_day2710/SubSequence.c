#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i, j, m, n, lcs_table[20][20];
char S1[20] = "HUMAN", S2[20] = "CHIMPANZEE", b[20][20];
void longestCommonSubSeq()
{
    m = strlen(S1);
    n = strlen(S2);

    for (i = 0; i <= m; i++)
        lcs_table[i][0] = 0;
    for (i = 0; i <= n; i++)
        lcs_table[0][i] = 0;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            if (S1[i - 1] == S2[j - 1])
            {
                lcs_table[i][j] = lcs_table[i - 1][j - 1] + 1;
            }
            else if (lcs_table[i - 1][j] >= lcs_table[i][j - 1])
            {
                lcs_table[i][j] = lcs_table[i - 1][j];
            }
            else
            {
                lcs_table[i][j] = lcs_table[i][j - 1];
            }
        }

    int index = lcs_table[m][n];
    char longestCommonSubSeq[index + 1];
    longestCommonSubSeq[index] = '\0';

    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            longestCommonSubSeq[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }

        else if (lcs_table[i - 1][j] > lcs_table[i][j - 1])
            i--;
        else
            j--;
    }

    // Printing the sub sequences
    printf("S1 : %s \nS2 : %s \n", S1, S2);
    printf("\nLCS: %s", longestCommonSubSeq);
}

int main()
{
    longestCommonSubSeq();
    printf("\n");
}