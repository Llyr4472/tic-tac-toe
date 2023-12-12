# Tic-Tac-Toe Game

## Overview
This game was developed as a Computer Science Project by the students of Grade 12 at KMC, Bagbazar. The project was undertaken as per the instructions of the Computer Department at KMC.

## Contributors
- Prashant Giri
- Praveen Aryal
- Rashik Poudel
- Ritesh Patak
- Tanishq Gautam

## Technical Details
- **Language:** C
- **Development Environment:** Code::Blocks
- **IDE:** Code::Blocks 20.03
- **Compiler:** GNU GCC Compiler
- **Operating System:** Windows (Code::Blocks is platform-independent, but the readme specifies the development environment used)
- **Project Structure:**
  - `main.c`: Contains the main game logic.
  - `conio.h`: Header file for console input/output functions (used for clearing the console screen).
- **Build Instructions:**
  - Open the project file in Code::Blocks.
  - Build and run the project.

## How to Play
1. Compile and run the program.
2. Players take turns entering a number from 1 to 9 to place their mark on the corresponding position on the board.

## Functions and Algorithms
### `main` Function
- Entry point of the program.
- Initializes variables, sets up the game loop, takes player input, updates the game board, and checks for a win or draw.

### `printBoard` Function
- Displays the Tic-Tac-Toe board on the console.

### `checkWin` Function
- Examines the current state of the board to determine if there is a winner or if the game is a draw.

### `system` Function
- Used for clearing the console screen.

### Algorithms Used
1. **Player Input:**
   - Takes input from players, ensuring it is valid and the chosen cell is not already occupied.

2. **Winning Check:**
   - Systematically checks all possible winning combinations: horizontal, vertical, and diagonal.

3. **Draw Check:**
   - Counts the total number of filled cells. If all cells are filled and no winner is declared, the game is a draw.

4. **Console Clearing:**
   - Uses the `system("cls")` command to clear the console screen (Windows-specific).

## Acknowledgments
We express our gratitude to the Computer Department at KMC for providing guidance and support throughout the development of this project.
