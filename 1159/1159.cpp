#include <iostream>

int alp[26] = {
    0,
};

main()
{
    int N;
    scanf("%d", &N);
    for (int n = 0; n < N; n++)
    {
        char name[31];
        scanf("%s", name);
        alp[name[0] - 'a']++;
    }

    bool isEmpty = true;
    for (int i = 0; i < 26; i++)
    {
        if (alp[i] >= 5)
        {
            printf("%c", i + 'a');
            isEmpty = false;
        }
    }
    if (isEmpty)
        printf("PREDAJA");

    return 0;
}