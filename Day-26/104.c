#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ COMPETITION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    // Question 3
    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 360\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;

    // Question 4
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    // Question 5
    printf("\n5. Which operator is used for multiplication in C?\n");
    printf("1. *\n2. +\n3. /\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}