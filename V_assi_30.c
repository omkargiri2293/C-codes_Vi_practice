/*
Create a structure called "Student" with members' names, ages, and total marks.
Write a C program to input N students' data and display their information.
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float totalMarks;
};

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n]; // array of students

    // Input student data
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Total Marks: ");
        scanf("%f", &students[i].totalMarks);
    }

    // Display student data
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name       : %s\n", students[i].name);
        printf("Age        : %d\n", students[i].age);
        printf("Total Marks: %.2f\n", students[i].totalMarks);
    }

    return 0;
}
