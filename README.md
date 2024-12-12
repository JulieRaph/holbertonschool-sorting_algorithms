# Sorting Algorithms & Big-O 

At least four different sorting algorithms.
What is the Big O notation, and how to evaluate the time complexity of an algorithm.
How to select the best sorting algorithm for a given input.
What is a stable sorting algorithm.

## Requirements

* Editor used is VI
* Files compiled on Ubuntu 24.04
* Respect the Betty style coding
* Not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library
* Header file is sort.h

## Project and Task

* Bubble sort
* Insertion sort
* Selection sort
* Quick sort

## Installation - Configuration

You create a repository on your github. It's a 2-person team. Either you work together directly on the main branch, which is not advisable. The best thing to do is to create a secondary branch each to share exercises and then merge on the main branch.For each project, it's important to create a README, a header file that records your function prototypes, and possibly a structure. Compile your program with the command : ![gcc](https://img.shields.io/badge/gcc-gcc%20--Wall%20--Wextra%20--Werror%20--pedantic%20--std=gnu89-grey?style=flat)

## Structure and Functions 

**The structure used to do all the tasks is :**

typedef struct listint_s

{

    const int n;
    struct listint_s *prev;
    struct listint_s *next;

} listint_t;

**The functions used to do all the tasks are :**

_void print_array(const int *array, size_t size)_
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

_void print_list(const listint_t *list)_
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
## Authors 

![Julie ](https://img.shields.io/badge/Julie-Tolve-green?style=social)

![Badr](https://img.shields.io/badge/Badr-Didi-green?style=social)


