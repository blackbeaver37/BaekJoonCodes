#include <iostream>

bool chess[8][8] = {{true, false, true, false, true, false, true, false},
                    {false, true, false, true, false, true, false, true},
                    {true, false, true, false, true, false, true, false},
                    {false, true, false, true, false, true, false, true},
                    {true, false, true, false, true, false, true, false},
                    {false, true, false, true, false, true, false, true},
                    {true, false, true, false, true, false, true, false},
                    {false, true, false, true, false, true, false, true}};

int main()
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        char line[9];
        scanf("%s", line);
        for (int j = 0; j < 8; j++)
        {
            if (chess[i][j] && line[j] == 'F')
                cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}