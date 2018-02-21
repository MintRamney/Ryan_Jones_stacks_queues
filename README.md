# Stacks and Queues
GVSU CIS 263 with Ira Woodring

## Assignment description

Clone (don't fork) my project template, or follow the instructions I posted in the Youtube video to create a new repository.  Call this repo YOUR_NAME_stacks_queues.  Please remember to provide your actual name and not the words "YOUR_NAME" in the title (I only mention this because people have before...).

Create a ```functions.h file``` (should be in ```includes```).  In this file include the following function signatures:

```C++
  bool balancedSymbols(std::string input);
  std::string iToP(std::string input);
```

Create a ```functions.cpp``` (should be in ```src```) file.  In this file implement the functions from the \*.h file.  The functions specifics are:

- ```balancedSymbols``` takes as input a string of arbitrary length.  It checks the entire file to determine if there is a closing parenthesis, square bracket, and curly brace for every corresponding opening symbol.  Use a std::stack<char, std::deque<char> >.
- ```iToP``` takes as input a valid infix expression and returns the corresponding postfix expression.  

This is an individual assignment.  Talk to others but don't share code.
