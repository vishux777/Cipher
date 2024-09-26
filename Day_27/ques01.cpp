#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

int precedence(char op) {
  if (op == '^') {
    return 3;
  } else if (op == '*' || op == '/') {
    return 2;
  } else if (op == '+' || op == '-') {
    return 1;
  }
  return 0;
}

bool isOperator(char c) {
  return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

std::string infixToPostfix(const std::string &infix) {
  std::stack<char> stack;
  std::string postfix;

  for (char c : infix) {
    if (isalnum(c)) {
      postfix += c; // If character is operand, add it to postfix expression
    } else if (c == '(') {
      stack.push(c);
    } else if (c == ')') {
      while (!stack.empty() && stack.top() != '(') {
        postfix += stack.top();
        stack.pop();
      }
      stack.pop(); // Remove the ( from stack
    } else if (isOperator(c)) {
      while (!stack.empty() && precedence(stack.top()) >= precedence(c)) {
        postfix += stack.top();
        stack.pop();
      }
      stack.push(c);
    }
  }

  // Pop all remaining operators from the stack
  while (!stack.empty()) {
    postfix += stack.top();
    stack.pop();
  }

  return postfix;
}

int main() {
  std::string infix;
  std::cout << "Enter infix expression: ";
  std::cin >> infix;

  std::string postfix = infixToPostfix(infix);
  std::cout << "Postfix expression: " << postfix << std::endl;

  return EXIT_SUCCESS;
}
