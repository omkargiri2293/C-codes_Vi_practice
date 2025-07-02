/*
reverse an array
*/

#include <stdio.h>

void reverse(int myarray[], int length);
int main(void)
{
    int myarray1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int myarray2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    reverse(myarray1, 10);
    reverse(myarray2, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("myarray1[%d]=%d\n", i, myarray1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("myarray2[%d]=%d\n", i, myarray2[i]);
    }
    return 0;
}
void reverse(int myarray[], int length)
{
    int temp = 0;
    for (int i = 0; i < length / 2; i++)
    {
        temp = myarray[i];
        myarray[i] = myarray[length - i - 1];
        myarray[length - i - 1] = temp;
    }
}

// /*
// reverse an array
// */

// #include <stdio.h>

// int main(void)
// {
//     int myarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     int length = 10;

//     int temp = 0;
//     for (int i = 0; i < length / 2; i++)
//     {
//         temp = myarray[i];
//         myarray[i] = myarray[length - i - 1];
//         myarray[length - i - 1] = temp;
//     }

//     for (int i; i < length; i++)
//     {
//         printf("myarray[%d]=%d\n", i, myarray[i]);
//     }
// }