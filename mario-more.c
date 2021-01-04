#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height;
    do
    {
        height = get_int("Height of the pyramid: \n");
    }
    while ((height < 1) || (height > 8));


    for (int n = height; n > 0 ; n--)
    {
        //indentation
        for (int j = 0 ; j < n - 1 ; j++)
        {
            printf(" ");
        }
        //left pyramid
        for (int k = n - 1; k < height ; k++)
        {
            printf("#");
        }
        //space between pyramid
        printf("  ");
        //right pyramid
        for (int k = n - 1; k < height ; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}

