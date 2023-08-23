0x17. C - Doubly linked lists
What is a doubly linked list?
A doubly linked list is a type of data structure that consists of a sequence of elements, each of which contains both a value and references (or pointers) to the previous and next elements in the sequence. This allows for bidirectional traversal, meaning you can move forwards and backwards through the list.

In a doubly linked list, each element is called a node. Each node contains three components:

Value/Data: This is the actual data or value that the node holds.
Previous Pointer: This is a reference to the previous node in the list. In the first node, the previous pointer typically points to NULL, indicating the beginning of the list.
Next Pointer: This is a reference to the next node in the list. In the last node, the next pointer typically points to NULL, indicating the end of the list.
The structure of a doubly linked list allows for efficient insertion and deletion of elements at both the beginning and the end of the list, as well as constant-time insertions and deletions at any position when given a reference to the node.

Here's a basic representation of a doubly linked list with nodes containing integer values:
NULL <-> [prev: NULL, value: 5, next: node_2] <-> [prev: node_1, value: 10, next: node_3] <-> [prev: node_2, value: 15, next: NULL]
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free, printf and exit
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded
DATA STRUCTURE FOR THIS PROJECT
/**
*struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
