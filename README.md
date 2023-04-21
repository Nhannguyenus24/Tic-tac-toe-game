# Tic-tac-toe-game
Tic Tac Toe Game
This program is a simple implementation of the popular Tic Tac Toe game, played between a human player and a computer player. The game is played on a 3x3 board, where players take turns placing their markers ('X' and 'O') on the board, trying to get three in a row.

The program is written in C++ and consists of several functions, including drawBoard(), playerMove(), computerMove(), checkWinner(), and checkTie(), each with a specific role in the game.

How to Play
Run the program in a C++ compiler.
The game starts with a blank 3x3 board. The human player plays as 'X', while the computer plays as 'O'.
The human player takes the first turn, and chooses a spot on the board to place their marker by entering a number between 1 and 9.
The computer then takes its turn, choosing a random empty spot on the board to place its marker.
The game continues in this way until one of the following conditions is met:
The human player gets three in a row, and wins the game.
The computer gets three in a row, and wins the game.
There are no more empty spots on the board, and the game ends in a tie.
After the game ends, the player is given the option to play again or quit.
Functions
- drawBoard()
This function takes an array of characters representing the board as input, and prints out the current state of the board on the console.

- playerMove()
This function takes an array of characters representing the board, and the character representing the human player ('X') as input. It prompts the user to enter a number between 1 and 9, representing the spot on the board where they want to place their marker, and updates the board accordingly.

- computerMove()
This function takes an array of characters representing the board, and the character representing the computer player ('O') as input. It chooses a random empty spot on the board, and updates the board with the computer's marker.

- checkWinner()
This function takes an array of characters representing the board, and the characters representing the human player and the computer player as input. It checks if either player has won the game by getting three in a row, and prints out the result on the console.

- checkTie()
This function takes an array of characters representing the board as input. It checks if there are any empty spots left on the board, and if not, it declares the game a tie.

Conclusion
This program provides a simple and fun way to play Tic Tac Toe against a computer opponent. With the functions provided, it can easily be expanded upon or modified to add more features or complexity to the game.
