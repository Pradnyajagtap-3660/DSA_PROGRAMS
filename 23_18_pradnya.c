#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> 
#define SIZE 10
int stack[SIZE];
int top = -1;

void push(int item) {
    if (top >= SIZE - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = item;
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

int isEmpty() {
    return top == -1;
}


int evaluateExpression(char* expression) {
    int i;

    for (i = 0; expression[i] != '\0'; i++) {
        if (expression[i] == ' ') {
            continue; 
        }
         else if (isdigit(expression[i])) {
            int num = 0;
            while (isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            i--; 
            push(num);
        } else {
            int a = pop();
            int b = pop();
            switch (expression[i]) {
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(a - b);
                    break;
                case '*':
                    push(a * b);
                    break;
                case '/':
                    if (b== 0) {
                        printf("Division by zero\n");
                        exit(1);
                    }
                    push(a / b);
                    break;
                default:
                    printf("Invalid operator: %c\n", expression[i]);
                    exit(1);
            }
        }
    }

    if (!isEmpty()) {
        return pop();
    } else {
        printf("Invalid expression\n");
        exit(1);
    }
}

int main() {
    char expression[SIZE];
    printf("Enter an arithmetic expression: ");
    fgets(expression, sizeof(expression), stdin);

    int result = evaluateExpression(expression);
    printf("Result of the expression: %d\n", result);

    return 0;
}
