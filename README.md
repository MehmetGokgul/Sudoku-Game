# Sudoku-Game
The project is a Sudoku game developed in C++ with a graphical interface designed using the Qt framework. We created for OOP course.

Overview
The game logic involves placing numbers in cells based on Sudoku rules. Players can choose difficulty levels, and an error counter tracks incorrect entries. Three hint options are available for player assistance during the game.

About Classes

MainWindow Class:
Constructs the main window and initializes its user interface.
Handles the change of game modes (changeMod function).
Handles the "Play" button click event to start a new game (on_btnPlay_clicked function).
Game Class:
Manages the gameplay logic, game state, user interactions, and timer functionality for the Sudoku game.
Sets up the game interface by connecting UI buttons to specific actions.
Implements methods to handle displaying the game area, deleting numbers, providing hints, updating the timer, exiting the game, and pausing/resuming the game.
Table Class:
Represents the underlying data structure for the Sudoku game grid.
Initializes the game table and sets random numbers based on a provided size.
Provides methods to display the current state of the table (with or without error limits), check if the game is finished, validate number placements, and retrieve table values at specific positions.

Getting Started

1.Install Qt 
2.Establish a C++ development environment.

Building and Running:

Open the project in Qt Creator or your preferred C++ Integrated Development Environment (IDE).
Compile the project using the suitable build configuration.
Execute the executable file to initiate the application.

Contributors
22050151040 Mehmet Gökgül 
