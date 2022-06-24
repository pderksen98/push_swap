# push_swap

## Project

The challenge of this project was to sort a random list of integers using the smallest number of moves, 2 stacks and a limited set of operations.

You start of with two empty stacks: **A** and **B**. You are given a random list of integers via command line arguments.

The following moves are allowed:

| Instructions | Description   
| -------------| ------------- | 
| `sa`         | Swap first two elements of stack A       |
| `sb`         | swap first two elements of stack B         |
| `ss`         | `sa` and `sb` at the same time         |
| `pa`         | Take the first element at the top of B and put it at the top of A         |
| `pb`         | Take the first element at the top of A and put it at the top of B        |
| `ra`         | First element of stack A becomes the last one         |
| `rb`         | First element of stack B becomes the last one           |
| `rr`         | `ra` and `rb` at the same time         |
| `rra`        | The last element of stack A becomes the first one         |
| `rrb`        | The last element of stack B becomes the first one         |
| `rrr`        | `rra` and `rrb` at the same time |
