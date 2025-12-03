# Major-Project-Anushka

------------------------------------------------------------

🎮 Hangman Console Game – C Programming Project
The Hangman Game is a console-based word guessing game implemented in C.
The program randomly selects a word from an external file (words.txt) and allows the player to guess the word letter by letter within a limited number of incorrect attempts. The project demonstrates file handling, modular programming, character validation, and loop-based logic. It is fully interactive and designed to strengthen the understanding of fundamental C programming concepts.

------------------------------------------------------------

🧠 Concepts Demonstrated
File operations (fopen, fgets, fclose)
Random word selection using rand() and srand()
String and character manipulation
Modular programming using header files
Loop structures & conditional execution
Array usage and input validation
ASCII-based hangman drawing progression

------------------------------------------------------------

✨ Features
Reads words dynamically from words.txt
Random word selection for every new game attempt
Tracks correct and incorrect guesses
Displays partial word status after each guess
Prevents repeated letter attempts
Maximum 6 incorrect attempts allowed
Visual hangman progression using text-based graphics
Simple and user-friendly interface

------------------------------------------------------------

📁 File Structure
Hangman-Project
│
├── src
│   └── hangman.c
│
├── include
│   └── functions.h
│
├── assets
│   └── words.txt
│
├── docs
│   └── ProjectReport.txt
│
└── README.md

------------------------------------------------------------

🛠️ Compilation & Execution Instructions
Navigate to the project directory
cd Hangman-Project
Compile the program
If your project has only hangman.c:
gcc src/hangman.c -o Hangman
If separated into modules:
gcc src/hangman.c -I include -o Hangman
Run the application
./Hangman   # or Hangman.exe on Windows

------------------------------------------------------------

🖥️ Sample Gameplay
====== HANGMAN GAME ======
Word: _ _ _ _ _

Enter your guess: a
Correct guess!

Attempts Left: 6
Word: A _ _ _ _

Wrong guess!

 +---+
 O   |
 |   |
     |
    ===

------------------------------------------------------------

🚀 Future Enhancements
Difficulty levels
Multiple rounds scoring system
Theme customization
Save game progress using file storage
Hint system

------------------------------------------------------------

📄 Purpose
This project has been submitted as an academic assignment for
B.Tech CSE – Semester 1 | Programming in C (CSEG1032) to demonstrate structured program development and logic building ability.
