// second version
// using function

/*finding minimum number in array*/
#include <stdio.h>

int find_min(int array[], int length);

int main(void)
{
    int myarray1[] = {5, 9, 10, 11, 4, 3, 1, 6, 7};
    int myarray2[] = {2, 3, 4, 6, 9, 10, 1, 22};

    int min1 = find_min(myarray1, 9);
    int min2 = find_min(myarray2, 8);

    printf("minimum number in myarray1 = %d \n ", min1);
    printf("minimum number in myarray2 = %d \n ", min2);
    return 0;
}

int find_min(int myarray[], int length)
{

    int min;

    min = myarray[0];

    for (int i = 0; i < length; i++)
    {
        if (myarray[i] < min)
        {
            min = myarray[i];
        }
    }
    return min;
}

// first version

// /*minimum number in array*/
// #include <stdio.h>

// int main(void)
// {
//     int myarray[] = {5, 9, 10, 11, 4, 3, 1, 6, 7};

//     int min;

//     min = myarray[0];

//     for (int i = 0; i < 9; i++)
//     {
//         if (myarray[i] < min)
//         {
//             min = myarray[i];
//         }
//     }
//     printf("minimum number in array = %d \n ", min);
//     return 0;
// }
