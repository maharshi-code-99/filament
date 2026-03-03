#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

int main() {
    int choice, a, b;
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1: printf("Result: %d\n", add(a, b)); break;
            case 2: printf("Result: %d\n", sub(a, b)); break;
            case 3: printf("Result: %d\n", mul(a, b)); break;
            case 4: printf("Result: %d\n", divide(a, b)); break;
            case 5: printf("Result: %d\n", mod(a, b)); break;
            default: printf("Invalid choice\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &again);
    }

    return 0;
}