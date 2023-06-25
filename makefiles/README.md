# Learning Objectives

- **What are make Makefiles**

Make is a build automation tool, and Makefiles are configuration files that define how to compile and build a program.


- **When, why and how to use Makefiles**

Makefiles are used to automate the compilation and building of programs. They are typically used in large projects with multiple source files to manage dependencies and ensure efficient and consistent compilation processes.


- **What are rules and how to set and use them**

Rules specify how to create target files from source files. They consist of a target, dependencies, and commands. They are defined using the syntax `target: dependencies` followed by the commands to generate the target.


- **What are explicit and implicit rules**

Explicit rules are defined explicitly in the Makefile, specifying how to build a target. Implicit rules are predefined rules that automatically apply based on file name patterns and predefined commands.


- **What are the most common / useful rules**

1. `all`: Builds all targets.
2. `clean`: Removes generated files or cleans the project.
3. `%.o`: A rule to compile object files from source files.


- **What are variables and how to set and use them**

Variables in Makefiles store values for reuse. They are set using `VARIABLE_NAME = value` and accessed with `$(VARIABLE_NAME)`. Useful for paths, compiler options, and more.
