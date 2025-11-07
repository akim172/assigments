4. Explain your answers (15 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. We shall trim!
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
The trim code was fairly simple, where the main loop is a for loop that iterates over each character of the string starting from the last (lenstr-1) and checking if they are any of the terminators/space, and if they are, changing that empty space into a '\0'. Once I do hit a non-empty variable, I break the loop. 


2. Checking if a string is a palindrome.
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
For the palindrome, I think there might be an easier way to do it, but for the moment, I just used a series of loops. First is to count the length of the string that is inputted. Second is to count how many non-space/alpha characters are in the string, then creating a new char string with the length of the number of alphas (+1 to account for the \0). Then I loop through the string again and add the alpha letters to a new string. Then I create another string to store the reverse of the alpha-only original, and then I check if they are equal.


3. Filtering and sorting zoo records
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
For the has_b function, that function was fairly simple, simply using the strchr() function to check if there is a b or not, and returning 1 if there is. The should keep function just was an if statement with multiple OR conditions so that if at least one criteria would be met, then it would return 1. Then the compare_animals function, I just had a series of if else loops following the different instructions on the doc, going down a list from species to age to name to sort. Then the sort_animals function I used bubble sorting, with two for loops and an if statement, so if a previous one was bigger strcmp from compare_animals would return a positive number. So if that happened, I temporarily stored the larger value, shifted the front value back, and then put the stored larger value in front.

