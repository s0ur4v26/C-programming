// Part 1: Introduction to File Handling
// This part introduces file handling in C and demonstrates how to create a file using the `fopen()` function.

#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt", "w"); // Open a file in write mode.
    if (file == NULL)
    {
        printf("Error: File not found\n");
    }
    else
    {
        printf("Your file is opened successfully\n");
    }
    fclose(file);
    return 0;
}

// Part 2: Write to a File Character by Character
// Demonstrates writing data to a file using the `fputc()` function.

#include<stdio.h>
#include<string.h>

int main()
{
    char name[60] = "out sider";
    int len = strlen(name);
    int i;
    FILE *file;
    file = fopen("test.txt", "a"); // Open a file in append mode.
    if (file == NULL)
    {
        printf("Error: File not found\n");
    }
    else
    {
        printf("Your file is opened successfully\n");
        // Writing the file character by character.
        for (i = 0; i < len; i++)
        {
            fputc(name[i], file);
        }
        fclose(file);
    }
    return 0;
}

// Part 3: Write to a File Using `fputs()` Function
// Demonstrates writing a string to a file using the `fputs()` function.

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100000];
    printf("Input something to write on the file:\n");
    gets(name);

    FILE *file;
    file = fopen("test.txt", "w"); // Open a file in write mode.
    if (file == NULL)
    {
        printf("Error: File not found\n");
    }
    else
    {
        printf("Your file is opened successfully\n\n");
        fputs(name, file); // Write the string to the file.
        fclose(file);
        printf("Your file is written successfully\n");
    }
    return 0;
}

// Part 4: Write to a File Using `fprintf()` Function
// Demonstrates writing formatted data to a file using the `fprintf()` function.

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100000];
    char company[100000];
    int salary, age;

    printf("Input your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your company name: ");
    scanf("%s", company);
    printf("Enter your salary: ");
    scanf("%d", &salary);

    FILE *file;
    file = fopen("candidate_info.txt", "a"); // Open a file in append mode.
    if (file == NULL)
    {
        printf("Error: File not found\n");
    }
    else
    {
        printf("Your file is opened successfully\n\n");
        fprintf(file, "\nTHE INFORMATION FOR THE CANDIDATE:\n------------------------------------\n");
        fprintf(file, "Name: %s\nAge: %d\nCompany Name: %s\nSalary: %d $\n\n", name, age, company, salary);
        fclose(file);
        printf("Your file is written successfully\n");
    }
    return 0;
}

// Part 5: Read from a File Character by Character
// Demonstrates reading a file and printing its content to the console using `fgetc()`.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    FILE *file;

    file = fopen("log.txt", "r"); // Open the file in read mode.
    if (file == NULL)
    {
        printf("Creating and opening file...\n");
        file = fopen("log.txt", "w");
    }
    else
    {
        printf("Your file is opened successfully\n\n");
        printf("Reading the file...\n\n");
        printf("Printing the file:\n\n");

        while (!feof(file)) // Read until the end of the file.
        {
            ch = fgetc(file); // Get a character from the file.
            printf("%c", ch);
        }
        fclose(file);
    }
    return 0;
}

// Part 6: Read from a File Using `fgets()` Function
// Demonstrates reading a file line by line using the `fgets()` function.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    char str[5000];
    FILE *file = fopen("log1.txt", "r"); // Open the file in read mode.
    if (file == NULL)
    {
        printf("File does not exist...\n");
    }
    else
    {
        printf("Your file is opened successfully\n\n");
        printf("Reading the file...\n\n");
        sleep(2);

        printf("Printing the file:\n\n");
        while (!feof(file)) // Read until the end of the file.
        {
            fgets(str, 100, file); // Read a line from the file.
            printf("%s", str);
            sleep(1);
        }
        fclose(file);
    }
    return 0;
}

// Part 7: Read from a File Using `fscanf()` Function
// Demonstrates reading formatted data from a file using the `fscanf()` function.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    char str[5000];
    FILE *file = fopen("log1.txt", "r"); // Open the file in read mode.
    if (file == NULL)
    {
        printf("File does not exist...\n");
    }
    else
    {
        printf("Your file is opened successfully\n\n");
        printf("Reading the file...\n\n");
        sleep(2);

        printf("Printing the file:\n\n");
        while (!feof(file)) // Read until the end of the file.
        {
            fscanf(file, "%s", str); // Read formatted data from the file.
            printf("%s ", str);
        }
        fclose(file);
    }
    return 0;
}
