
/**
 * @file P01-Even-Odd.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This code is actually the solution of the first problem from the book called "52 Programming Problems by Tamim Shahriar Subeen"
 * @version 0.1
 * @date 2022-11-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int t, n;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}