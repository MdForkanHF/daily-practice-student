#include <stdio.h> // Standard input-output header

// Main function starts the program execution

int main() {
    int score = 0; // Variable to track user  score
    int answer;    // Variable to store user answer

    // Display the quiz introduction
    printf("Welcome to the Bangladesh Quiz Application!\n");
    printf("Answer the following questions by choosing the correct option (1/2/3/4).\n\n");

    
    // Question 1
    printf("1. What is the capital of Bangladesh?\n");
    printf("1. Kolkata\n2. Dhaka\n3. Chittagong\n4. Sylhet\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 2. Dhaka.\n\n");
    }

    // Question 2
    printf("2. What is the national animal of Bangladesh?\n");
    printf("1. Royal Bengal Tiger\n2. Peacock\n3. Elephant\n4. Crocodile\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 1) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 1. Royal Bengal Tiger.\n\n");
    }

    // Question 3
    printf("3. Which river is the longest in Bangladesh?\n");
    printf("1. Jamuna\n2. Meghna\n3. Padma\n4. Brahmaputra\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 4) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 4. Brahmaputra.\n\n");
    }

    // Question 4
    printf("4. What is the national flower of Bangladesh?\n");
    printf("1. Rose\n2. Water Lily\n3. Sunflower\n4. Lotus\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 2. Water Lily.\n\n");
    }

    // Question 5
    printf("5. Who is known as the Father of the Nation in Bangladesh?\n");
    printf("1. Mahatma Gandhi\n2. Sheikh Hasina\n3. Sheikh Mujibur Rahman\n4. Ziaur Rahman\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 3. Sheikh Mujibur Rahman.\n\n");
    }

    // Question 6
    printf("6. What is the main export product of Bangladesh?\n");
    printf("1. Tea\n2. Jute\n3. Readymade Garments\n4. Rice\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 3. Readymade Garments.\n\n");
    }

    // Question 7
    printf("7. Which city is known as the commercial capital of Bangladesh?\n");
    printf("1. Sylhet\n2. Khulna\n3. Chittagong\n4. Rajshahi\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 3. Chittagong.\n\n");
    }

    // Question 8
    printf("8. What is the literacy rate of Bangladesh (approx)?\n");
    printf("1. 65%%\n2. 75%%\n3. 85%%\n4. 95%%\n");
    printf("Your answer: ");
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
        printf("Correct!\n\n");
    } else {
        printf("Wrong! The correct answer is 2. 75%%.\n\n");
    }

    // Display final score
    printf("Your final score is: %d/8\n", score);

    // Feedback based on score
    if (score == 8) {
        printf("Excellent! You got all answers correct!\n");
    } else if (score >= 6) {
        printf("Great job! You scored %d out of 8.\n", score);
    } else if (score >= 4) {
        printf("Good effort! You scored %d out of 8.\n", score);
    } else {
        printf("Better luck next time! You scored %d out of 8.\n", score);
    }

    return 0; // Indicate that the program ended successfully
}
