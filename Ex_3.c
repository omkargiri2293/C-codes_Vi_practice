/*
count occrunce of number in an array
*/

#include <stdio.h>

int occurance(int myarray[], int length, int to_find_number);

int main(void)
{
    int myarray[] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 6, 5, 4, 3, 2, 1, 0};
    int count1 = occurance(myarray, 16, 5);

    printf("occurance of number 5 in array = %d", count1);
    return 0;
}
int occurance(int myarray[], int length, int to_find_number)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (myarray[i] == to_find_number)
        {
            count++;
        }
    }

    return count;
}

// version 1

// /*
// count occrunce of number in an array
// */

// #include <stdio.h>

// int main(void)
// {
//     int myarray[] = {0, 1, 2, 3, 4, 5, 6, 7, 7, 6, 5, 4, 3, 2, 1, 0};

//     int count = 0;

//     int to_find_number;
//     printf("enter the number to count occurance ");
//     scanf("%d", &to_find_number);

//     for (int i = 0; i < 16; i++)
//     {
//         if (myarray[i] == to_find_number)
//         {
//             count++;
//         }
//     }

//     printf("count of occurance of %d in array = %d", to_find_number, count);
//     return 0;
// }