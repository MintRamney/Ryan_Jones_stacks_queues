#include <string>
#include <stack>
#include <deque>
#include "functions.h"

/**
 * Determines whether or not a string has a balanced
 * number of brackets, parenthases, and braces.
 * @param input string to check symbols of
 * @return true if symbols are balanced
 */
bool balancedSymbols ( std::string input ) {
        std::stack<char, std::deque<char> > sym_stack;

        for ( auto it = input.begin(); it != input.end(); it++ ){
            switch (*it) {
                // populate stack
                case '{':
                case '[':
                case '(':
                    sym_stack.push(*it);
                    break;

                // check pairs
                case '}':
                    if ( sym_stack.top() != '{' ) {
                        return false;
                    } else {
                        sym_stack.pop();
                    }
                    break;
                case ')':
                    if ( sym_stack.top() != '(' ) {
                        return false;
                    } else {
                        sym_stack.pop();
                    }
                    break;
                case ']':
                    if ( sym_stack.top() != '[' ) {
                        return false;
                    } else { 
                        sym_stack.pop();
                    }
                    break;
            }
        }
        // Checks if there are dangling left symbols
        return sym_stack.empty();
}

/**
 * Converts an infix expression to a postfix/Polish notation expression
 * @param input Correctly fomated infix expresssion
 * @return Postfix equivalent
 */
std::string iToP ( std::string input ) { 
    std::stack<char, std::deque<char> > operator_stack;
    std::string postfix;
    
    for ( auto it = input.begin(); it != input.end(); it++ ) {
        // Push on operators and parenthases
        if ( *it=='+' || *it=='-' || *it=='*' || *it=='/' || *it=='(' ) { 
            operator_stack.push(*it);
        
        // Construct parenthesized portions of expression
        } else if ( *it == ')' ) { 
            while ( operator_stack.top() != '(' ) {
                postfix += operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.pop(); // Discard the left parenthesis
        
        // Operands and spaces can be immediately added
        } else {
            postfix += *it;
        }
    }
    
    // Post-fix any remaining operators
    while ( !operator_stack.empty() ) {
        postfix+= operator_stack.top();
        operator_stack.pop();
    }

    return postfix;

}
