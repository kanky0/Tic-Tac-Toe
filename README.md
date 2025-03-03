# Tic Tac Toe Game

## Description
This is a simple command-line Tic Tac Toe game written in C++. The game allows two players to take turns selecting positions on a 3x3 grid until one player wins or the game ends in a draw.

## How to Play
1. Run the program.
2. The game board will be displayed with numbers representing each position.
3. Players take turns selecting positions by entering the corresponding number.
4. The game continues until one player wins by aligning three marks in a row, column, or diagonal, or until all positions are filled, resulting in a draw.

## Game Rules
- Player 1 plays as `X`, and Player 2 plays as `O`.
- Players must choose an empty position on the board.
- The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins.
- If all nine positions are filled and no player has won, the game ends in a draw.

## Compilation and Execution
To compile and run the program, use the following commands:

```
# Compile the program
g++ -o tictactoe tictactoe.cpp

# Run the executable
./tictactoe
```

## Example Output
```
Welcome to the game of Tic Tac Toe!
 1 | 2 | 3
---+---+---
 4 | 5 | 6
---+---+---
 7 | 8 | 9

Player 1, please choose your position: 5
 X | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

Player 2, please choose your position: 1
 O | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9
...

Player 1 wins!
```

## Known Issues and Limitations
- The program does not check for invalid input types (e.g., non-integer inputs).
- The game only supports two human players; there is no AI opponent.

## Future Improvements
- Implement AI for single-player mode.
- Improve input validation.
- Enhance the user interface for better readability.

## License
This project is open-source and can be modified or distributed freely.

