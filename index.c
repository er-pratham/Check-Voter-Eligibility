#include <stdio.h>
#include <conio.h>
int main()
{
start:
    printf("Check Eligibility of Voter");
    int age;
    printf("\nEnter Your Age User ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You are not eligible for voting because you are under 18.");
    }
    else
    {
        printf("You are eligible for voting");
    }
    char permit;
    printf("\nIf you wanna use this program again.Press 'Y': ");
    getchar();
    scanf("%c", &permit);
    if (permit == 'Y' || permit == 'y')
    {
        printf("Redirecting To Program Again:-\n");
        goto start;
    }
    else
    {
        printf("Thanks for using our program.\nDeveloped by Er Pratham Saxena");
    }
    getch();
}