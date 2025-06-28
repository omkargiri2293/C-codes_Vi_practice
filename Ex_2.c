/*finding miximum number in array*/

#include <stdio.h>

int find_max(int myarray[], int length);
int main(void)
{
    int myarray1[] = {22, 24, 1, 11, 12, 31, 60, 4, 88, 100};
    int myarray2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 10, 19, 18, 17, 16};

    int max1 = find_max(myarray1, 10);
    int max2 = find_max(myarray2, 15);
    printf("max number in myarray1 = %d \n ", max1);

    printf("max number in myarray2 = %d", max2);

    return 0;
}

int find_max(int myarray[], int length)
{

    int max = myarray[0];

    for (int i = 1; i < length; i++)
    {
        if (myarray[i] > max)
        {
            max = myarray[i];
        }
    }
    return max;
}
