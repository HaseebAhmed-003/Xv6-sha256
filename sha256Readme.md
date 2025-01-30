sha256.c is used for implementing the user implementation of SHA-256

This is the Main user implementation file in user folder in xv6.
Utilizes the normal sha-256 functions and creates a hash.
The hash is created of the command line input which is written after writing make qemu.
We write: $<file name> {string input}
the hash is then printed of the string input (keep in mind it takes maximum 8 seperate strings as argument).
The time calculated is in cpu cycles taken
