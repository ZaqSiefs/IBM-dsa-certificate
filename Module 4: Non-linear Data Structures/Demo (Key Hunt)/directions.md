# Directions

A teacher plans to conduct a game - Key Hunt for his students. 
There is a treasure box, the player needs to search for the key to open that treasure box.
So the teacher needs to construct a structre consisting of junctions, which has a key with a number.
Start with a single junction and each junction will habe a maximum of two or no branches to connect to other junctions.
The keys are arranged in such a way that the key numbers are lesser on the left side of the junction and greater or equal on the right side.
The rule for the game is that the player needs to check each junction for matching key numbers.
If he could find the matching key, then the player wins, else he loses.
Write a program to simulate this game.

Sample IO 1:

```html
Enter the key number:
1
Do you want to create another junction(yes/no)?
yes

Enter the key number:
2
Do you want to create another junction(yes/no)?
yes

Enter the key number:
3
Do you want to create another junction(yes/no)?
yes

Enter the key number:
4
Do you want to create another junction(yes/no)?
no

Enter the key to be searched
6

6 not found
```

Sample IO 2:

```html
Enter the key number:
1
Do you want to create another junction(yes/no)?
yes

Enter the key number:
2
Do you want to create another junction(yes/no)?
yes

Enter the key number:
3
Do you want to create another junction(yes/no)?
yes

Enter the key number:
4
Do you want to create another junction(yes/no)?
no

Enter the key to be searched
1

6 found
```