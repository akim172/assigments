4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. Reversing an array using pointers.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
For the reversing assignment, I was trying to figure out how to do it without using indexing, and only pointers. So while I did use a for loop, I used it only to incrememnt the pointers of start and end, which would store the respective value that is being replaced first (start) and then the later one to replace it with. I store the value of start in temp so that when I swap the values I would be able to set end to temp. I also had the for loop only loop through until i < size/2 because even though I only look at half, because I already swap the last postion, I can cover all values with just size/2.


2. String handling with dynamic memory.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
For the main function in vowels: I first allocate memory with str = malloc(n), and then I use fgets to get the str from the user. For the countVowels function, I just set a check variable to the lowercase version of the value at that point in the string and check if it is equivalent to a, e, i, o, or u, and if it is, increment a counter. At the end of checking one character, I will then move the pointer forward to the next character with str++, and keep checking for vowels until the character the pointer is pointing to is equivalent to \0, which indicates the end of the string.


3. Implementing a binary search tree.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
For the BST assignment, I found that using recursion for the functions of insert, search, inOrderTraversal, and freeTree were the most efficient/reasonable. The createNode just allocates memory for a new node, and sets the data of the node to the value, and the others to null. For the insert, I check if the value is less than the current root data, and if it is, I recursively insert it to the left of root, or else, recursively insert it to the right. I follow a somewhat similar recursive pattern for the search where I check the left and the right of the data until I either find it or I don't, and return NULL if I do not. Then the inOrderTraversal and freeTree is just recursively traversing/printing each root left and right to make sure I get everything.

