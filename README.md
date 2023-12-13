# 0x16. C - Building A Simple Shell
### C Programming, Group Project, System Call

![simple_shell](https://github.com/daviewisdm/simple_shell/assets/91734251/a7a97b4c-7f63-44bd-a21e-561395f8605f)

Simple shell in C programming is a basic implementation of a Unix-like command-line shell. A shell is a program that provides a text-based interface for users to interact with an operating system by entering commands. It parses user input, executes commands, and manages processes.

### A simple shell typically includes the following basic functionalities:

- Command Execution: The shell reads user input and executes the corresponding commands. This includes executing external programs and built-in shell commands.

- Parsing: The shell parses user input to separate commands and their arguments. It may also handle features like pipes (|), redirection (>, <), and background execution (&).

- Managing Processes: The shell creates, monitors, and manages child processes. It can launch processes in the foreground or background and track their status.

- Built-in Commands: Simple shells often include a few built-in commands, such as cd (change directory) and exit (exit the shell), which are executed directly by the shell without launching external programs.

- Error Handling: The shell should handle errors gracefully, providing appropriate error messages to the user.

- Environmental Variables: It manages environmental variables and allows users to set or modify them.

## System Call

A system call (often abbreviated as syscall) is a fundamental interface between a program and the operating system (OS). It allows a program to request services or perform various operations provided by the OS. System calls serve as a bridge between user-level applications and the lower-level kernel of the operating system, enabling processes to access the underlying hardware and perform privileged operations.

System calls are a fundamental building block of modern operating systems, allowing applications to access hardware resources, manage processes, and perform a wide range of tasks in a controlled and secure manner. They provide the foundation for the interaction between software and the underlying hardware of a computer system.

## Function Call

A function call is a fundamental concept in computer programming. It refers to invoking a function or subroutine within a program to perform a specific task or computation. Functions are blocks of code that are defined with a name and can be called or invoked multiple times from various parts of a program. Function calls allow for code reuse, organization, and the modularization of complex tasks.

Function calls are fundamental for organizing and structuring code in most programming languages. They allow developers to break down complex tasks into smaller, reusable components, improving code readability, maintainability, and modularity.

## Shell vs Terminal

"Shell" and "terminal" are related but distinct concepts in the context of computing, especially in Unix-like operating systems. Here's an explanation of each term:

### Shell:

- A shell is a command-line interface (CLI) program that interprets and executes user commands.
- It serves as an intermediary between the user and the operating system, allowing users to interact with the OS through text-based commands.
- Shells can execute both built-in commands and external programs.
- Shells provide features like command history, scripting capabilities, and the ability to create custom scripts or programs.
- Examples of popular Unix-like shells include Bash (Bourne-Again Shell), Zsh (Z Shell), and Fish.

### Terminal:

- A terminal, also known as a terminal emulator, is a graphical or text-based application that provides a user interface for interacting with the shell.
- It emulates a traditional computer terminal, where users can type commands and view the output.
- The terminal communicates with the shell to send user input and display command results.
- Terminals often support features like multiple tabs or windows, customizable fonts and colors, and the ability to open multiple shell sessions simultaneously.
- Common terminal emulators include GNOME Terminal, Konsole, macOS Terminal, and Windows Terminal.

In summary, the shell is the actual command-line environment and interpreter, responsible for executing commands and managing processes. The terminal, on the other hand, is the interface or application that provides a window or environment for interacting with the shell. Users type commands in the terminal, and the terminal communicates with the shell to execute those commands and display the results. Together, they allow users to work in a text-based, command-line environment in Unix-like operating systems.

## Contributors
- This `simple shell` project was executed by [`Obi`](https://github.com/obithelight) and [`David`](https://github.com/daviewisdm). All rights reserved.
