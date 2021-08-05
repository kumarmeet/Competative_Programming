#include <stdio.h>
#include <stdlib.h>

int romanToInt(char *);

int main()
{
    char s[] = "MMMCMXCI";
    int num = romanToInt(s);
    printf("%d", num);
    return 0;
}

int romanToInt(char *s)
{
    int i = 0, j = 0, sum = 0;
    int num[20] = {0};

    while (s[i])
    {
        if (s[i] == 'I')
            num[j] = 1;
        if (s[i] == 'V')
            num[j] = 5;
        if (s[i] == 'X')
            num[j] = 10;
        if (s[i] == 'L')
            num[j] = 50;
        if (s[i] == 'C')
            num[j] = 100;
        if (s[i] == 'D')
            num[j] = 500;
        if (s[i] == 'M')
            num[j] = 1000;
        i++;
        j++;
    }

    int t = 0, flag = 0;

    for (int k = 0; k < 20; k++)
    {
        if (num[k] > num[k + 1])
            flag = 1;
        else if (num[k] == num[k + 1])
            flag = 1;
        else
            flag = 0;
        if (num[k] == 0 || flag == 0)
            break;
    }

    if (flag)
    {
        for (int k = 0; k < 20; k++)
        {
            sum = num[k] + num[k + 1];
            t = t + sum;
            k++;
        }
        return t;
    }
    else
    {
        //calculate from last element
        for (int k = 0; k < 20; k++)
        {
            if (num[k] != 0)
            {
                if (num[k] > num[k + 1])
                {
                    sum = num[k];
                    t = t + sum;
                    continue;
                }
                if (num[k] < num[k + 1])
                    sum = num[k + 1] - num[k];
                else
                    sum = num[k] + num[k + 1];
                k++;
                t = t + sum;
            }
            if (num[k] == 0)
                break;
        }

        return t;
    }
}
