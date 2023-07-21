# Learning Objectives

**What are macros and how to use them**

Macros are like shortcuts that help simplify coding, and can represent fixed values or snippets of code that you can be reused. They can also be used for conditional compilation, where certain parts of the code are included or excluded based on specific conditions.


**What are the most common predefined macros**

- __FILE__: It gives you the name of the current source code file you are working with.

- __LINE__: It tells you the line number where this macro is used in your code.

- __DATE__: It gives you the current date in a specific format like "Jul 21 2023".

- __TIME__: It gives you the current time in a specific format like "13:45:30".

- __STDC__: It is used to check if the compiler follows the standard C rules. It usually has the value 1.


**How to include guard your header files**

	#ifndef HEADER_FILE_H
	#define HEADER_FILE_H
	/* Your header file contents go here. */
	#endif
