## Introduction

The To-Do List Application is a simple console-based program developed in C++ that helps users manage their daily tasks efficiently. Users can add, view, delete, and mark tasks as completed. The program also stores tasks in a file to ensure data persistence.
## Objectives
To create a task management system using C++
To understand Object-Oriented Programming (OOP) concepts
To implement file handling for data storage
To provide a simple and user-friendly interface
## Technologies Used
Programming Language: C++
Concepts Used:
Classes & Objects
File Handling (fstream)
Vectors (vector)
Conditional statements & loops
## System Requirements
Hardware Requirements
Minimum 2GB RAM
Any basic computer
Software Requirements
C++ Compiler (e.g., GCC / Turbo C++)
Operating System: Windows / Linux / macOS
## System Design
5.1 Class Structure
Class: Task
Attribute	Type	Description
description	string	Stores task details
completed	bool	Task status (true/false)
Class: TodoList
Method	Description
loadFromFile()	Loads tasks from file
saveToFile()	Saves tasks to file
addTask()	Adds new task
viewTasks()	Displays all tasks
deleteTask()	Removes a task
markCompleted()	Marks a task as completed
## Working of the System
Program starts
Loads tasks from file (tasks.txt)
Displays menu:
Add Task
View Tasks
Delete Task
Mark Completed
Exit
Performs selected operation
Saves tasks before exiting
## Algorithm
Step-by-Step Algorithm
Start
Load tasks from file
Display menu
Take user input
Perform operation:
Add → Insert into vector
View → Display all tasks
Delete → Remove task
Complete → Update status
Repeat until exit
Save tasks to file
End
## Flowchart
<img width="213" height="236" alt="image" src="https://github.com/user-attachments/assets/1d20573c-4b1f-4a63-975b-40541b493e15" />

## File Handling
File used: tasks.txt
Data format:
Task 1 description
0
Task 2 description
1

Where:

0 = Not completed
1 = Completed
## Sample Output
--- TO-DO LIST ---
1. Add Task
2. View Tasks
3. Delete Task
4. Mark Task Completed
5. Exit

Enter choice: 1
Enter task: Complete C++ project
Task added!

Enter choice: 2
1. [ ] Complete C++ project
## Advantages
Simple and easy to use
Lightweight (runs in terminal)
Demonstrates core C++ concepts
Data persistence using file handling
## Limitations
No graphical user interface (GUI)
Limited features
No task deadlines or reminders
## Future Enhancements
Add GUI using Qt or C++ frameworks
Add deadlines and notifications
Add priority levels
Add task editing feature
Cloud storage integration
## Conclusion

The To-Do List Application successfully demonstrates the use of C++ programming concepts such as OOP and file handling. It provides a basic yet effective way to manage daily tasks and can be expanded with more advanced features.
