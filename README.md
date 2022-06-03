# push_swap
Because Swap_push isn’t as natural
## Overview
This project will make you sort data on a stack, with a limited set of instructions, using \
the lowest possible number of actions. To succeed you’ll have to manipulate various \
types of algorithms and choose the one (of many) most appropriate solution for an \
optimized data sorting.
## Commands to sort
**sa** : swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements). \
**sb** : swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements). \
**ss** : sa and sb at the same time. \
**pa** : take the first element at the top of b and put it at the top of a. Do nothing if b is empty. \
**pb** : take the first element at the top of a and put it at the top of b. Do nothing if a is empty. \
**ra** : shift up all elements of stack a by 1. The first element becomes the last one. \
**rb** : shift up all elements of stack b by 1. The first element becomes the last one. \
**rr** : ra and rb at the same time. \
**rra** : shift down all elements of stack a by 1. The last element becomes the first one. \
**rrb** : shift down all elements of stack b by 1. The last element becomes the first one. \
**rrr** : rra and rrb at the same time.
## Output
The ptogram will output instructions that sort stack or error message in case of error.
## Running
1. Run `make` to compile
2. Run `./push_swap [integers to sort]`
