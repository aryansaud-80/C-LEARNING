#include <stdio.h>

int main()
{
    int numSubjects;
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Validate the number of subjects
    if (numSubjects <= 0)
    {
        printf("Invalid number of subjects. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    float totalMarks = 0.0;

    // Get marks for each subject and calculate total marks
    for (int i = 1; i <= numSubjects; ++i)
    {
        float marks;
        printf("Enter marks for Subject %d: ", i);
        scanf("%f", &marks);

        // Validate marks
        if (marks < 0.0 || marks > 100.0)
        {
            printf("Invalid marks. Please enter a value between 0 and 100.\n");
            return 1; // Exit with an error code
        }

        totalMarks += marks;
    }

    // Calculate average marks
    float averageMarks = totalMarks / numSubjects;

    // Determine the grade using conditional statements
    char grade;
    if (averageMarks >= 90.0)
    {
        grade = 'A';
    }
    else if (averageMarks >= 80.0)
    {
        grade = 'B';
    }
    else if (averageMarks >= 70.0)
    {
        grade = 'C';
    }
    else if (averageMarks >= 60.0)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    // Display the result
    printf("Average Marks: %.2f\n", averageMarks);
    printf("Grade: %c\n", grade);

    return 0;
}
