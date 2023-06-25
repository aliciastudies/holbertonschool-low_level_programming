#Learning Objectives
- **Why C programming is awesome**
C programming is awesome due to its efficiency, portability, wide range of applications, low-level operations, and strong foundation for learning. It enables code to be written faster and more resource-efficient. It provides control over low-level operations and memory manipulation. Learning C enhances understanding of computer architecture and software-hardware interactions.
- **Who invented C**
Dennis Ritchie in the early 1970s.
- **Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds**
Dennis Ritchie invented C.
Brian Kernighan wrote the hugely influential book 'The C Programming Language' with Ritchie.'
Linus Torvalds created the Linux operating system.
- **What happens when you type gcc main.c**
It complies the "main.c" file into an executable program.
- **What is an entry point**
The first function that is executed when a program is run.
- **What is main**
The name of the first function that serves as the entry point.
- **How to print text using printf, puts and putchar**
Use `printf` for formatted output, `puts` for printing a string, and `putchar` for printing a single character.
- **How to get the size of a specific type using the unary operator sizeof**
[6-size.c](https://github.com/aliciastudies/holbertonschool-low_level_programming/blob/master/hello_world/6-size.c)
`%zu` ensures correct printing of the `sizeof` operator's results, which is type `size_t`.
- **How to compile using gcc**
Run 'gcc filename.c -o outputfilename' in the command line.
- **What is the default program name when compiling with gcc**
`a.out`
- **What is the official C coding style and how to check your code with betty-style**
There is no offical coding style. Popular style guides include 'The C Programming Language' and the [Linux kernel](https://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git/plain/Documentation/process/coding-style.rst)
[How to run betty](https://github.com/hs-hq/Betty)
- **How to find the right header to include in your source code when using a standard library function**
Refer to the function's documentation. `man <function>`
- **How does the main function influence the return value of the program**
It influences the program's exit status.
0 = success.
!0 = an error.
