
import random  # For shuffling questions and random number generation

TOTAL_QUESTIONS = 8
DISPLAYED_QUESTIONS = 4

# Main function starts the program execution
def main():
    score = 0  # Variable to track user score
    correct_answers = [2, 1, 4, 2, 3, 3, 3, 2]  # List to store correct answers

    # Quiz questions and options
    questions = [
        "What is the capital of Bangladesh?",
        "What is the national animal of Bangladesh?",
        "Which river is the longest in Bangladesh?",
        "What is the national flower of Bangladesh?",
        "Who is known as the Father of the Nation in Bangladesh?",
        "What is the main export product of Bangladesh?",
        "Which city is known as the commercial capital of Bangladesh?",
        "What is the literacy rate of Bangladesh (approx)?"
    ]

    options = [
        ["A. Kolkata", "B. Dhaka", "C. Chittagong", "D. Sylhet"],
        ["A. Royal Bengal Tiger", "B. Peacock", "C. Elephant", "D. Crocodile"],
        ["A. Jamuna", "B. Meghna", "C. Padma", "D. Brahmaputra"],
        ["A. Rose", "B. Water Lily", "C. Sunflower", "D. Lotus"],
        ["A. Mahatma Gandhi", "B. Sheikh Hasina", "C. Sheikh Mujibur Rahman", "D. Ziaur Rahman"],
        ["A. Tea", "B. Jute", "C. Readymade Garments", "D. Rice"],
        ["A. Sylhet", "B. Khulna", "C. Chittagong", "D. Rajshahi"],
        ["A. 65%", "B. 75%", "C. 85%", "D. 95%"]
    ]

    # Generate shuffled indices
    shuffled_indices = list(range(TOTAL_QUESTIONS))
    random.shuffle(shuffled_indices)

    print("Welcome to the Bangladesh Quiz Application!")
    print("Answer the following questions by choosing the correct option (A/B/C/D).\n")

    user_answers = []

    # Ask DISPLAYED_QUESTIONS
    for i in range(DISPLAYED_QUESTIONS):
        q_index = shuffled_indices[i]
        print(f"Q{i + 1}. {questions[q_index]}")
        for option in options[q_index]:
            print(option)
        
        while True:
            try:
                answer = int(input("Your answer (1 for A, 2 for B, 3 for C, 4 for D): "))
                if 1 <= answer <= 4:
                    user_answers.append(answer)
                    break
                else:
                    print("Invalid input! Please enter a number between 1 and 4.")
            except ValueError:
                print("Invalid input! Please enter a valid number.")

        print("You will know the answer at the end of this contest. Let's move to the next question!\n")

    # Calculate score
    for i in range(DISPLAYED_QUESTIONS):
        q_index = shuffled_indices[i]
        if user_answers[i] == correct_answers[q_index]:
            score += 1

    # Display answers and score
    print("\nCorrect Answers:")
    for i in range(DISPLAYED_QUESTIONS):
        q_index = shuffled_indices[i]
        print(f"Q{i + 1}. {questions[q_index]}")
        print(f"Correct Answer: {options[q_index][correct_answers[q_index] - 1]}\n")

    print(f"Your final score is: {score}/{DISPLAYED_QUESTIONS}")

    # Feedback based on score
    if score == DISPLAYED_QUESTIONS:
        print("Excellent! You got all answers correct!")
    elif score >= DISPLAYED_QUESTIONS * 0.75:
        print(f"Great job! You scored {score} out of {DISPLAYED_QUESTIONS}.")
    elif score >= DISPLAYED_QUESTIONS * 0.5:
        print(f"Good effort! You scored {score} out of {DISPLAYED_QUESTIONS}.")
    else:
        print(f"Better luck next time! You scored {score} out of {DISPLAYED_QUESTIONS}.")

# Run the main function
if __name__ == "__main__":
    main()
