# Learning Objectives

**What are the arithmetic operators and how to use them**

They are used to perform mathematical calculations.

- `+` adds two values together.

- `-` subtracts the second value from the first.

- `*` multiplies two values.

- `/` divides the first value by the second.

- `%` calculates the remainder of the division between the first and second values.


**What are the logical operators (sometimes called boolean operators) and how to use them**

They evaluate conditions and return true or false.

- `&&` returns true if both conditions on its left and right are true.
- `||` returns true if either of the conditions on its left or right is true.
- `!` returns the opposite of the given condition (true becomes false and vice versa).


**What the the relational operators and how to use them**

They compare values and reutn true or false.

- `==` returns true if two values are equal.
- `!=` returns true if two values are not equal.
- `>` returns true if the first value is greater than the second.
- `<` returns true if the first value is less than the second.
- `>=` returns true if the first value is greater than or equal to the second.
- `<=` returns true if the first value is less than or equal to the second.


**What values are considered TRUE and FALSE in C**

Any none-zero value is considered `True` and zero is considered `False`


**What are the boolean operators and how to use them**

They combine multiple conditions to create more complex conditions. They are used with the logical operators.


**How to use the if, if ... else statements**

They are used for decision-making. `if` statement checks a condition and executes the code inside the block if the condition is true.
The `if...else` statement checks a condition and executes one block of code if it's true and another block if it's false.


**How to use comments**

`/* comments here */`


**How to declare variables of types char, int, unsigned int**

	char a;
	int b;
	unsigned int c;


**How to assign values to variables**

	char a = 'a';
	int b = -3;
	unsigned int c = 3;


**How to print the values of variables of type char, int, unsigned int with printf** && **How to print variables using printf**

	printf("%c", a);
	printf("%d", b);
	printf("%i", c);


**How to use the while loop** && **How to use variables with the while loop**
	int i;
	int j;

	i = 0;
	j = 10;
	while (i < j)
	{
		i = i + 1;
	}


**What is the ASCII character set**

ASCII is a character encoding standard that represents characters using numeric codes. Each character is assigned a unique number (0 to 127).


**What are the purpose of the gcc flags -m32 and -m64**

These are compiler flags used with the GCC compiler to specify the target architecture.
"-m32" indicates a 32-bit target, and "-m64" indicates a 64-bit target for the compiled code.
