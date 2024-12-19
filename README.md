

. (8 pts) Write a complete program in a cpp file that allows two players to play a
Halloween-themed game of Tic-Tac-Toe, set in a haunted house! Use a 2D char array
with three rows and three columns to represent rooms in the haunted house. Each element
of the array should be initialized with an asterisk (*) to show the room is unvisited.
Your program should run a loop that:
● Display the situations in the haunted house (board array).
● Allows Player 1 (The Witch) to cast a spell in a room by marking it with an “X”.
The program should ask the player to enter the row and column number.
● Allows Player 2 (the Ghost) to haunt a room by marking it with an “O”. The
program should ask the player to enter the row and column number.
● If that room has already been marked or haunted, the program should ask the
player to enter a new row and column number.
● Determines whether a player has successfully claimed the haunted house (won) or
if a stalemate (tie) has occurred.
If a player has won, your program should declare that player the “Master of the Haunted
House” and end the game. A win occurs when there are three matching symbols (three
X’s or three O’s) in a row, column, or diagonal. A tie occurs when all rooms in the
haunted house are occupied, but no player has claimed the house.
Sample input and output (Player 1 wins):
Chabot College
DAI CSCI 14, Fall 2024 Page 2
Become the Master of the Haunted House!
Haunted House:
* * *
* * *
* * *
Player 1 the Witch, in which room do you want to cast a
spell (row column)? 1 1
Haunted House:
X * *
* * *
* * *
Player 2 the Ghost, which room do you want to haunt (row
column)? 3 1
Haunted House:
X * *
* * *
O * *
Player 1 the Witch, in which room do you want to cast a
spell (row column)? 3 1
Room 3 1 is already taken, please choose another room: 2 2
Haunted House:
X * *
* X *
O * *
Player 2 the Ghost, which room do you want to haunt (row
column)? 1 3
Haunted House:
X * O
* X *
O * *
Player 1 the Witch, in which room do you want to cast a
spell (row column)? 3 3
Haunted House:
X * O
* X *
O * X
Player 1 the Witch has won. Player 1 is the Master of the
Haunted House!
