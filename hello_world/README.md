# Learning Objectives
- **Why C programming is awesome**\n
C programming is awesome due to its efficiency, portability, wide range of applications, low-level operations, and strong foundation for learning. It enables code to be written faster and more resource-efficient. It provides control over low-level operations and memory manipulation. Learning C enhances understanding of computer architecture and software-hardware interactions.\n
- **Who invented C**\n
Dennis Ritchie in the early 1970s.\n
- **Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds**\n
Dennis Ritchie invented C.\n
Brian Kernighan wrote the hugely influential book 'The C Programming Language' with Ritchie.'\n
Linus Torvalds created the Linux operating system.\n
- **What happens when you type gcc main.c**\n
It complies the "main.c" file into an executable program.\n
- **What is an entry point**\n
The first function that is executed when a program is run.\n
- **What is main**\n
The name of the first function that serves as the entry point.\n
- **How to print text using printf, puts and putchar**\n
Use `printf` for formatted output, `puts` for printing a string, and `putchar` for printing a single character.\n
- **How to get the size of a specific type using the unary operator sizeof**\n
[6-size.c](https://github.com/aliciastudies/holbertonschool-low_level_programming/blob/master/hello_world/6-size.c)\n
`%zu` ensures correct printing of the `sizeof` operator's results, which is type `size_t`.\n
- **How to compile using gcc**\n
Run 'gcc filename.c -o outputfilename' in the command line.\n
- **What is the default program name when compiling with gcc**\n
`a.out`\n
- **What is the official C coding style and how to check your code with betty-style**\n
There is no offical coding style. Popular style guides include 'The C Programming Language' and the [Linux kernel](https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/plain/Documentation/process/coding-style.rst)\n
[How to run betty](https://github.com/hs-hq/Betty)\n
- **How to find the right header to include in your source code when using a standard library function**\n
Refer to the function's documentation. `man <function>`\n
- **How does the main function influence the return value of the program**\n
It influences the program's exit status.\n
0 = success.\n
!0 = an error.
