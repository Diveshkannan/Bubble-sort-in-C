## Optimized Bubble Sort in C

## Overview

This program implements an optimized Bubble Sort algorithm in C to sort an array of integers in ascending order.
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.

This implementation includes a swap-detection optimization, allowing the program to stop early if the array becomes sorted before completing all passes.

---

## Features

- Written in standard C
- Uses "stdbool.h" for readable boolean logic
- Automatic array size detection using "sizeof"
- Early termination optimization when the array is already sorted
- In-place sorting (no additional memory required)
- Clean and readable implementation suitable for learning algorithms
- Follows number of swaps rule-n(n-1)/2
- Avoids running extra loops

---

## Algorithm Concept

1. Compare adjacent elements.
2. Swap them if the left element is greater than the right.
3. After each pass, the largest unsorted element moves to its correct position.
4. If a pass completes without swaps, the algorithm stops early.

---


## Example Output

Input Array:

9 1 5 3 7 2

Program Output:

Sorted: 1 2 3 5 7 9

---

## Author's note

Developed as part of an early exploration into algorithm design and C programming, focusing on understanding sorting logic and implementing optimizations in low-level languages.
