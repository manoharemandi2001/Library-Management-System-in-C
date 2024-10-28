----------------------------
Library Management System
----------------------------

Overview:
----------
This project is a command-line Library Management System developed in C. It provides a menu-driven interface to manage book records, enabling users to add, list, search, edit, borrow, return, and save books in a library. The data is stored using a singly linked list, and file handling is used to preserve data across sessions.

Features:
----------

Add Book (A/a): Add a new book with details like title, author, and page count.
List Books (L/l): Display all books currently in the library.
Count Book (C/c): Show the count of a specific book.
Edit Book (E/e): Modify details of an existing book.
Issue Book (I/i): Issue a book from the library.
Return Book (R/r): Return a previously issued book.
Find Book (F/f): Search for a book by title or author.
Save Data (S/s): Save book records to a file to ensure persistence across sessions.
Clear Screen (z): Clear the terminal screen.
Quit (Q/q): Exit the application.

How to Compile and Run
-----------------------
Requirements: Ensure you have a GCC compiler installed.

Compilation:

Open a terminal in the project directory and run:
make

Running the Application:

Execute the compiled program:
./a.out

File Structure:
----------------
Source Files: Each function (e.g., Add, List, Issue, Return, etc.) is in its own file.
Header File (myheader.h): Contains structure definitions, function prototypes, and any global constants or typedefs.
Makefile: Compiles all source files and manages dependencies.

Usage:
------

After starting the application, a menu will display with options. Use the corresponding character (case-insensitive) to select an action:

A/a: Add a new book
L/l: List all books
C/c: Display count of a specific book
E/e: Edit book details
I/i: Issue a book
R/r: Return a book
F/f: Find a book by title or author
S/s: Save book information to a file
Q/q: Quit
z: Clear screen

Project Components:
--------------------

Data Management: Uses structures to store book data in a linked list.

File Persistence: save() and sync() functions manage saving/loading data to/from a file for persistence.

Error Handling: Prevents duplicate entries and ensures proper input validation.

Additional Information:
------------------------

The program maintains unique records to avoid duplicates and supports multiple authors for the same book or multiple books by the same author.

Modular Design: Each function is implemented separately, and the code is organized for clarity and maintainability.
