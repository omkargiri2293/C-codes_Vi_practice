/*
Write a C program to create and store information in a text file.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;
    float marks;

    // Open file in write mode
    file = fopen("student_info.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Input from user
    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%f", &marks);

    // Write data to file
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Marks: %.2f\n", marks);

    // Close file
    fclose(file);

    printf("\nData written to 'student_info.txt' successfully.\n");

    return 0;
}
