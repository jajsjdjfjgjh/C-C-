#include <stdio.h>

/*
 ************ 11星星0空格
 * *********   9星星1空格
 *  *******    7星星2空格
 *   *****     5星星3空格
 *    ***      3星星4空格
 *     *       1星星5空格
 * */

int main()
{
    int i = 6;
    while(i >= 0)
    {
        int j = 6;
        while(j > i)
        {
            printf(" ");
            j--;
        }
        j = 1;
        while(j <= 2 * i - 1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
