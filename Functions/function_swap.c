/*
 * Program: Function Behavior in C – Pass by Value vs Pass by Reference
 *
 * Description:
 * This program demonstrates the fundamental difference between passing arguments
 * by value and by reference in C using two simple swap functions (f1 and f2).
 *
 * Relevance:
 * - In C programming, especially in systems or cybersecurity applications,
 *   understanding how data is passed to functions is critical.
 * - For example, in writing secure memory operations (e.g., sanitizing sensitive variables),
 *   using pointers ensures actual memory locations are altered — not just local copies.
 * - This basic understanding becomes foundational for secure coding practices,
 *   buffer manipulation, and exploit mitigation techniques.
 */

#include <stdio.h>

// f1 attempts to swap a and b, but uses pass-by-value (no effect outside)
void f1(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

// f2 correctly swaps *a and *b using pass-by-reference (actual memory is changed)
void f2(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 4, b = 5, c = 6;

    f1(a, b);        // No effect: swaps local copies
    f2(&b, &c);      // Swaps b and c by reference (b = 6, c = 5)

    // Prints result of c - a - b => 5 - 4 - 6 = -5
    printf("%d", c - a - b);

    return 0;
}
