# Learning Objectives

**What are variadic functions**

They can accept a different number of arguments each time they are called.

	int sum(int num, ...)
	{
		int total;
		int index;

		total = 0;
		va_list args;
		va_start(args, num);

		index = 0;
		while (i < num)
		{
			total = total + va_args(args, int);
			index = index + 1;
		}
	}

**How to use va_start, va_arg and va_end macros**

- `va_start` helps set up the list of arguments so the function can access them.

- `va_arg` allows the function to get the actual values of the arguments one by one as it processes them.

- `va_end` is used to clean up after the function has finished using the variable arguments.


**Why and how to use the const type qualifier**

It means the value cannot be changed after it has been set. This helps to prevent mistakes and makes the code clearer.


