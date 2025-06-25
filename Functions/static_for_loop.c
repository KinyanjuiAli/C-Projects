/*
 * Program: Demonstration of static variables and for-loop control in C
 *
 * Description:
 * This program uses a function with a static variable to control a `for` loop.
 * The static variable `num` retains its state across calls, and is used to 
 * conditionally control the loop and print decreasing integers.
 *
 * Usefulness in C/Cybersecurity:
 * - Understanding static variables is critical in systems programming.
 * - Static variables are often used to maintain state across multiple invocations,
 *   such as in counter logic, security checks, or memory-sensitive contexts.
 * - This concept underpins many real-world mechanisms like session counters,
 *   embedded system flags, and stateful threat detection logic.
 */

#include <stdio.h>

// Function with a static variable that decreases with each call
int fun()
{
    static int num = 16;
    return num--;
}

int main()
{
    // The for loop is controlled by repeated calls to fun()
    // fun() is used in initialization, condition, increment
    // Each iteration, printf prints a new value from fun()
    for(fun(); fun(); fun())
        printf("%d ", fun());  // Added space for readability
    return 0;
}
