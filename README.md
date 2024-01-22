# Number Guessing Game

Welcome to the Number Guessing Game! This is a simple C++ program where you can try to guess a randomly chosen number between 1 and 10.

## How to Play

1. **Run the program.**
2. The computer will choose a random number between 1 and 10.
3. You will be prompted to enter your guess.
4. The program will provide feedback on whether your guess is too low or too high.
5. Keep guessing until you correctly identify the chosen number.

## Compilation and Execution

Ensure you have a C++ compiler installed on your system. You can compile and run the program using the following commands:

```bash
g++ number_guessing_game.cpp -o number_guessing_game
./number_guessing_game
```

## Gameplay Example
```bash
Welcome to the Number Guessing Game!
I have chosen a number between 1 and 10. Try to guess it.

Enter your guess: 5
Too low! Try again.

Enter your guess: 8
Too high! Try again.

Enter your guess: 7
Congratulations! You guessed the correct number 7 in 3 attempts.
