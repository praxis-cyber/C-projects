C Projects

A collection of interactive C programs demonstrating fundamental programming concepts and user interaction. Perfect for beginners learning C programming.

Projects Overview

This repository contains two beginner-friendly C projects:

1. Simple Calculator - A menu-driven calculator with multiple operations
2. Number Guessing Game - An interactive game that challenges players to guess a random number

Project Structure

```
beginner-c-projects/
│
├── calculator.c           Simple Calculator program
├── guessing_game.c        Number Guessing Game
└── README.md             Project documentation
```

Getting Started

Prerequisites

- GCC compiler or any C compiler
- Basic knowledge of C programming
- Terminal/Command prompt access

Compilation and Execution

On Linux/Mac:
```bash
For Calculator
gcc calculator.c -o calculator -lm
./calculator

For Guessing Game
gcc guessing_game.c -o game
./game
```

On Windows:
```bash
For Calculator
gcc calculator.c -o calculator.exe -lm
calculator.exe

For Guessing Game
gcc guessing_game.c -o game.exe
game.exe
```

Note: The -lm flag is required for the calculator to link the math library (for the pow() function).

Project Details

1. Simple Calculator

A feature-rich calculator that performs basic arithmetic operations through an interactive menu.

Features:
- Addition
- Subtraction
- Multiplication
- Division (with zero-division error handling)
- Modulus operation (with validation)
- Power calculation (X raised to Y)
- Continuous operation until user exits
- Input validation and error handling

How to Use:
1. Run the program
2. Select an operation from the menu (1-7)
3. Enter two numbers when prompted
4. View the result
5. Choose another operation or exit (option 7)

Code Highlights:
- Modular design with separate functions for operations
- Error handling for division by zero
- Use of NAN (Not a Number) for invalid operations
- Menu-driven interface for better user experience

Sample Output:
```
----------------------------------
Welcome to Simple Calculator

Choose one of the following options: 
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
7. Exit
Now enter your choice: 1

Please enter the first number: 15
Now enter the second number: 25

Result of operation is: 40.00
```

---

2. Number Guessing Game

An interactive game where players try to guess a randomly generated number between 1 and 100.

Features:
- Random number generation (1-100)
- Intelligent hints (higher/lower)
- Attempt counter
- User-friendly interface
- Victory message with statistics

How to Play:
1. Run the program
2. The computer generates a random number between 1-100
3. Enter your guess
4. Follow the hints ("Guess larger" or "Guess smaller")
5. Keep guessing until you find the correct number
6. See how many attempts it took!

Game Logic:
- Uses srand(time(NULL)) for truly random numbers each game
- Provides feedback after each guess
- Tracks number of attempts
- Congratulates player upon successful guess

Sample Output:
```
Welcome to the world of Guessing Game

Please enter your guess between(1 to 100): 50
Guess larger number. 

Please enter your guess between(1 to 100): 75
Guess smaller number. 

Please enter your guess between(1 to 100): 63
Congratulations you have successfully guessed the number in 3 attempts.

Bye Bye, Thanks for playing
Developed by Sayan Dutta
```

Learning Outcomes

These projects help you understand:

- Basic I/O Operations - Using scanf() and printf()
- Control Structures - if-else, switch-case, while, do-while loops
- Functions - Creating and calling custom functions
- Error Handling - Validating user input and handling edge cases
- Random Number Generation - Using rand() and srand()
- Mathematical Operations - Using the math library
- User Interface Design - Creating interactive menu-driven programs

Technical Concepts

Calculator Project:
- Function prototypes and definitions
- Pass by value
- Return types (double, void)
- Error handling with NAN
- Standard error output with fprintf(stderr, ...)
- Math library functions (pow(), isnan())
- Switch-case for menu handling

Guessing Game Project:
- Random number generation
- Loop control (do-while)
- Conditional statements
- Counter variables
- Time-based seeding for randomization

Possible Enhancements

Calculator:
- Add square root operation
- Add trigonometric functions
- Store calculation history
- Support for more complex expressions
- Scientific calculator features

Guessing Game:
- Add difficulty levels (different ranges)
- Implement a scoring system
- Add a maximum attempt limit
- Create a leaderboard
- Add option to play again without restarting

Known Issues

- Calculator modulus operation only works with integer inputs
- Guessing game requires manual restart to play again

Author

Sayan Dutta

License

This project is open source and available for educational purposes.

Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the issues page or submit a pull request.

Contact

For any questions or suggestions, please open an issue in this repository.

---

Happy Coding!

These projects are perfect for beginners who want to practice C programming fundamentals through interactive applications.