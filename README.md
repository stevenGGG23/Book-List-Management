# Book-List-Management   
- Simple book list management program that reads book data from a file, stores it in a sorted list, and allows users to search for books by a specific author. 

- It displays all books with their title, author, and publication year, and then prompts the user to enter an author's name to show only the books by that author. 

- This program is useful for organizing and managing book information and can easily be adapted for larger-scale book databases or library systems.

# Example run 

```bash
(base) jovyan@jupyter-sjg4g:~$ g++ MAIN.cpp slist.cpp
(base) jovyan@jupyter-sjg4g:~$ ./a.out
The list of books are:
Title: A Couple of Blaguards
Author: Frank McCourt
Publication Year: 2013
Title: Angela's Ashes: A Memoir
Author: Frank McCourt
Publication Year: 2012
Title: Born Free
Author: Leo Johnson
Publication Year: 2012
Title: Cat Lovers
Author: Mary Johnson
Publication Year: 2013
Title: Catching Fire
Author: Suzanne Collins
Publication Year: 2013
Title: Emma
Author: Jane Austin
Publication Year: 2013
Title: Harry Potter And The Order Of The Phoenix
Author: J. K. Rowling
Publication Year: 2015
Title: Harry Potter and the Deathly Hallows
Author: J. K. Rowling
Publication Year: 2014
Title: Harry Potter and the Half-Blood Prince
Author: J. K. Rowling
Publication Year: 2015
Title: Mockingjay
Author: Suzanne Collins
Publication Year: 2014
Title: Persuasion
Author: Jane Austin
Publication Year: 2015
Title: Pride and Prejudice
Author: Jane Austin
Publication Year: 2012
Title: The Cat Bible
Author: John Eddleman
Publication Year: 2012
Title: The Fault in Our Stars
Author: John Green
Publication Year: 2013
Title: The Girl on the Train
Author: Paula Hawkins
Publication Year: 2014
Title: The Golden Compass: His Dark Materials
Author: Philips Pullman
Publication Year: 2012
Title: The Hunger Game
Author: Suzanne Collins
Publication Year: 2011
Title: The Jungle Cats
Author: Steve Martin
Publication Year: 2013

Please enter the name of an author: Suzanne Collins

Books by Suzanne Collins:
Catching Fire
Mockingjay
The Hunger Game
