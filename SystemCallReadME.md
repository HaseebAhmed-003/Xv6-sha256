The system call implementation utilizes several files and i'll explain the flow below:
year.c (where system call shaVal() was called -> user.h -> usys.pl -> syscall.h -> syscall.c -> sysproc.c -> year.c

What happens is that the system call is called in year.c like a regular system call.
It then goes travels to sysproc.c the same way a regular system call but the only difference now is in the implementation.
What happens in shaVal() in sysproc. c is that all the relevant SHA-256 functions are used there and inside the shaVal() 
One hard coded input string is hashed using sha function and then displayed on the console/terminal via print hash function
the system call kinda acts like a void function which then calls the sha function in sysproc.c
