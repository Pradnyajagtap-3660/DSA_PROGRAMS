#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 15

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int getPrecedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

void infixToPostfix(char* infix, char* postfix) {
    int i, j;
    char stack[size];
    int top = -1;

    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        char token = infix[i];
        if (token == ' ')
            continue;
        if (isdigit(token) || isalpha(token)) {
            postfix[j++] = token;
        } else if (isOperator(token)) {
            while (top >= 0 && stack[top] != '(' && getPrecedence(stack[top]) >= getPrecedence(token)) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = token;
        } else if (token == '(') {
            stack[++top] = token;
        } else if (token == ')') {
            while (top >= 0 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top >= 0 && stack[top] == '(')
                top--;
        }
    }

    while (top >= 0) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';
}

int main() {
    char infix[size];
    char postfix[size];
    
    printf("Enter an infix expression: ");
    gets(infix);

    infixToPostfix(infix, postfix);
    
    printf("Postfix expression: %s\n", postfix);

    return 0;
}

