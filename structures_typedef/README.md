# Learning Objectives


**What are structures, when, why and how to use them**

A structure is a collection of relaterd variables with different data types grouped together under a single name.
They are useful to represent a group of data types that contain multiple pieces of information.
Data can be organised and manipulated as a single entity. Structures create complex data structures like records and objects.


	struct dog
	{
		char *name;
		float age;
		char *owner;
	};


To use a structure, declare a variable. `.` accesses the members of the structure.

	int main(void)
	{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
	}

**How to use typedef**

typeof creates an alias for an ecisting data type. It can help make code more readable.

	typedef unsigned char byte;

	int main(void)
	{
		byte c;
		c = 200;
		return (0);
	}
