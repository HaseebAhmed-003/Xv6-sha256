kernel/main.c is use for implementing kernel implementation of SHA-256
This file is the first file which runs in xv6 after we start executing it. 
Inside the file is the main function which acts the first function that is executed.
What I did was use the same functions as sha256.c file.
Called the shaVal2() function in main(void).
Calculated the cpu cycles before and calculated the cpu cycles after the function was called.
So when xv6 starts and kernel is booting the sha function is called on a hardcoded input and its hash is printed
the difference or its evalution is done by subtracting the cpu cycles
