*This project has been created as part of the 42 curriculum by mabushaw.*

## Description
Libft is the first project in the 42 curriculum. The goal of this project is to create a custom C library containing implementations of standard libc functions, as well as additional utility functions for string, memory, and linked list manipulation. This library serves as a reusable foundation for future C projects at 42.

### Library Overview
The library includes three main categories of functions:
- Libc Functions: Re-implementations of standard C library functions (such as ft_strlen, ft_memset, ft_memcpy, ft_atoi, ft_calloc, and ft_strdup).
- Additional Functions: Utility functions for string manipulation and output generation (such as ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri, and ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd).
- Bonus Functions: A suite of linked list management functions using the t_list structure (such as ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, and ft_lstmap).

## Instructions

### Compilation
To compile the library and generate libft.a, run:
make

To compile the library including the bonus functions:
make bonus

### Clean-up Rules
- Remove object files:
  make clean

- Remove object files and the static library:
  make fclean

- Recompile everything from scratch:
  make re

### Usage
Include the header in your C source files:
#include "libft.h"

Compile your program by linking against libft.a:
cc main.c -L. -lft -o program

## Resources
- Standard C Library documentation (man pages for string.h, ctype.h, and stdlib.h).
- Peer discussions and campus evaluation guides.

### Use of AI
AI was used during this project as an interactive code-review and debugging assistant. Specifically, it was consulted for:
- Understanding edge cases and segmentation fault prevention in string manipulation algorithms (such as memory allocation failure handling in ft_split).
- Resolving Norminette formatting issues (tab alignment and 42 header standards).
- Structuring pre-submission testing workflows using community test suites (Tripouille/libFTtester).
