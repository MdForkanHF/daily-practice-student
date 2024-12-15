#include <stdio.h> // Standard input-output header
#include <stdlib.h> // For random number generation
#include <time.h>   // To seed random number generator

#define TOTAL_QUESTIONS 8
#define DISPLAYED_QUESTIONS 4

// Main function starts the program execution
int main() {
    int score = 0; // Variable to track user score
    int answer;    // Variable to store user answer
    int correct_answers[TOTAL_QUESTIONS] = {2, 1, 4, 2, 3, 3, 3, 2}; // Array to store correct answers
    int user_answers[DISPLAYED_QUESTIONS];   // Array to store user inputs
    int shuffled_indices[TOTAL_QUESTIONS];  // Array to store shuffled indices

    // Seed random number generator
    srand(time(0));

    // Initialize indices
    for (int i = 0; i < TOTAL_QUESTIONS; i++) {
        shuffled_indices[i] = i;
    }

    // Shuffle indices using Fisher-Yates algorithm
    for (int i = TOTAL_QUESTIONS - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = shuffled_indices[i];
        shuffled_indices[i] = shuffled_indices[j];
        shuffled_indices[j] = temp;
    }

    // Display the quiz introduction
    printf("Welcome to the Bangladesh Quiz Application!\n");
    printf("Answer the following questions by choosing the correct option (A/B/C/D).\n\n");

    // Quiz questions and options
    char *questions[TOTAL_QUESTIONS] = {
        "What is the capital of Bangladesh?",
        "What is the national animal of Bangladesh?",
        "Which river is the longest in Bangladesh?",
        "What is the national flower of Bangladesh?",
        "Who is known as the Father of the Nation in Bangladesh?",
        "What is the main export product of Bangladesh?",
        "Which city is known as the commercial capital of Bangladesh?",
        "What is the literacy rate of Bangladesh (approx)?"
    };

    char *options[TOTAL_QUESTIONS][4] = {
        {"A. Kolkata", "B. Dhaka", "C. Chittagong", "D. Sylhet"},
        {"A. Royal Bengal Tiger", "B. Peacock", "C. Elephant", "D. Crocodile"},
        {"A. Jamuna", "B. Meghna", "C. Padma", "D. Brahmaputra"},
        {"A. Rose", "B. Water Lily", "C. Sunflower", "D. Lotus"},
        {"A. Mahatma Gandhi", "B. Sheikh Hasina", "C. Sheikh Mujibur Rahman", "D. Ziaur Rahman"},
        {"A. Tea", "B. Jute", "C. Readymade Garments", "D. Rice"},
        {"A. Sylhet", "B. Khulna", "C. Chittagong", "D. Rajshahi"},
        {"A. 65%%", "B. 75%%", "C. 85%%", "D. 95%%"}
    };

    // Ask DISPLAYED_QUESTIONS
    for (int i = 0; i < DISPLAYED_QUESTIONS; i++) {
        int q_index = shuffled_indices[i];
        printf("Q%d. %s\n", i + 1, questions[q_index]);
        printf("%s\n%s\n%s\n%s\n", options[q_index][0], options[q_index][1], options[q_index][2], options[q_index][3]);
        printf("Your answer (1 for A, 2 for B, 3 for C, 4 for D): ");
        scanf("%d", &user_answers[i]);

        printf("You will know the answer at the end of this contest. Let's move to the next question!\n\n");
    }

    // Calculate score
    for (int i = 0; i < DISPLAYED_QUESTIONS; i++) {
        int q_index = shuffled_indices[i];
        if (user_answers[i] == correct_answers[q_index]) {
            score++;
        }
    }

    // Display answers and score
    printf("\nCorrect Answers:\n");
    for (int i = 0; i < DISPLAYED_QUESTIONS; i++) {
        int q_index = shuffled_indices[i];
        printf("Q%d. %s\n", i + 1, questions[q_index]);
        printf("Correct Answer: %s\n\n", options[q_index][correct_answers[q_index] - 1]);
    }

    printf("Your final score is: %d/%d\n", score, DISPLAYED_QUESTIONS);

    // Feedback based on score
    if (score == DISPLAYED_QUESTIONS) {
        printf("Excellent! You got all answers correct!\n");
    } else if (score >= DISPLAYED_QUESTIONS * 0.75) {
        printf("Great job! You scored %d out of %d.\n", score, DISPLAYED_QUESTIONS);
    } else if (score >= DISPLAYED_QUESTIONS * 0.5) {
        printf("Good effort! You scored %d out of %d.\n", score, DISPLAYED_QUESTIONS);
    } else {
        printf("Better luck next time! You scored %d out of %d.\n", score, DISPLAYED_QUESTIONS);
    }

    return 0; // Indicate that the program ended successfully
}
