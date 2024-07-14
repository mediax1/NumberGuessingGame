# Number Guessing Game

This is a simple number guessing game implemented in C. The program generates a random number between 1 and 10, and the user has to guess the number. The program provides feedback if the guess is too high or too low and keeps track of the number of attempts.

## Features

- Generates a random number between 1 and 10.
- Prompts the user to guess the number.
- Provides feedback if the guess is too high or too low.
- Keeps track of the number of attempts.
- Uses ANSI escape codes to display colored messages in the terminal.

## How to Play

1. Run the program.
2. Enter your guess when prompted.
3. The program will tell you if your guess is too high or too low.
4. Keep guessing until you find the correct number.
5. The program will display the number of attempts you made to guess the correct number.

## Requirements

- A C compiler (e.g., `gcc`).
- A terminal that supports ANSI escape codes for colored output.

## How to Compile and Run

1. Clone the repository or download the source code.
2. Open a terminal and navigate to the directory containing the source code.
3. Compile the program using the following command:

    ```sh
    gcc -o guessing_game main.c
    ```

4. Run the program:

    ```sh
    ./guessing_game
    ```