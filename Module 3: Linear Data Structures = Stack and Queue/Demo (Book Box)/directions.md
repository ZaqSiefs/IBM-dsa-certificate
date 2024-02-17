This is not the same code from the video. I solved this myself in the way I thought it should be solved.  I saw that they ended up using strings for the book identification, and that would be an easy enough change from my current code.

### Scenerio

Consider a scenario where Tom has stacked books in a book box. Initially, Tom wanted to take a book from the book stack. Since it was the last book of the book stack, he took it easily. After some time, he wanted to take the third book from the box. For that, he removed all the books kept above the third book and then took the third book.

### Operations

1. Adding a book in the box
2. Removing a book from the box
3. Displaying book box

if the box is full, display the message as "The box is full"

if the box is empty, display the message as "The box is empty"

Use the stack data structure for this scenario.

### Sample input and output

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 1

Enter the book No:bk101

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 1

Enter the book No:bk102

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 1

Enter the book No:bk103

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 1

Enter the book No:bk104

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 1

Enter the book No:bk105

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 1

The box is full

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 3

The books in the box: bk105 bk104 bk103 bk102 bk101

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 2

The book is deleted from the box: bk105

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 2

The book is deleted from the box: bk104

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 2

The book is deleted from the box: bk103

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 2

The book is deleted from the box: bk102

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 2

The book is deleted from the box: bk101

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 2

The box is empty

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 7

Invalid option

1. Insert a book in the box
2. Delete a book from the box
3. Display book box
4. Exit

Enter your choice: 4

