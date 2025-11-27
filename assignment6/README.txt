3. Explain your answers (10 points)

Please answer the following questions for each file you wrote as part of this assignment.

1. my-grep
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
For mygrep assignment, I first read the file with fopen, and read it with "r", which is only meant to read. Then I have a while loop that will loop and read each line from the file I am searching throuhg using fgets for each line. Then using the strstr function to see if s is in the full line (string), then I print out that string that contains s. I have one error check after opening the file if the file does not exist and thus will not open (if file == NULL), and later in the loop, while it isn't exactly an error check but rather just checking if the end of the file has been reached, if the string of the line I am reading in the file is null, then I break, having read through the entire file.


2. data-extract
"Why This Works" Explanation: Explain the underlying logic and reasoning that makes your code solve the problem. 
Focus on the core concepts and principles your solution utilizes.
for data-extract assigment, firstly in the main function, I just open the two files, which were passed as arguments into the respective variables infp for the first argument and outfp for the second argument. I also open infp with rb (read + the b meaning its a binary file), and for outfp, "wb" (write + b for binary file). (I also have an error check if either of the files do not open properlly). Now, in the copy_integers function, I mainly use fseek, then fread and fwrite. I first set my pointer to the correct start position with fseek(infp, start * sizeof(int), SEEK_SET). I use start * sizeof(int) because im counting in bytes. And SEEK_SET just starts at the beginning of the file. Then, I have a buffer array to store the string that I will read from the file infp, using the fread function. Then I write this buffer into outfp with the fwrite function. For both fwrite and fread, I have some error checkers that will check if the read and written match the expected length of end-start+1, meaning that all of it was successfully read/written from respective files.


