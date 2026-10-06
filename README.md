*This project has been created as part of the 42 curriculum by mabushaw.*

## Description
Libft is a custom C library created as the first project of the 42 curriculum. The objective is to build a foundational, general-purpose library containing implementations of standard libc functions, string manipulation tools, memory utilities, and linked list management to be reused across future C assignments.

### Detailed Library Description
The library is composed of three mandatory sections:

#### Part 1: Libc Functions
- Character Checks (ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint): Test if a character belongs to a specific class. Returns 1 if true, 0 if false.
- Case Conversion (ft_toupper, ft_tolower): Converts a character to uppercase or lowercase.
- String Length & Search (ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr): Calculate string length, search for characters (from start or end), compare bounded strings, or locate a substring within a length limit.
- Memory Manipulation (ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp): Fill, zero-out, copy, locate bytes, and compare blocks of raw memory (ft_memmove safely handles overlapping memory areas).
- String Copying & Concatenation (ft_strlcpy, ft_strlcat): Size-bounded string copy and concatenation guaranteeing null-termination.
- Conversion & Dynamic Memory (ft_atoi, ft_calloc, ft_strdup): Convert strings to integers, allocate and zero-initialize heap memory, and duplicate a string using malloc.

#### Part 2: Additional Functions
- String Creation & Extraction (ft_substr, ft_strjoin, ft_strtrim): Allocate new strings by extracting a substring, joining two strings, or trimming specific characters from both ends.
- String Splitting & Formatting (ft_split, ft_itoa): Split a string into an array of words using a delimiter character, and convert an integer into its string representation.
- Functional String Iteration (ft_strmapi, ft_striteri): Apply a function to every character of a string by creating a new string or by modifying characters in-place.
- File Descriptor Output (ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd): Write characters, strings, strings with newline, and numbers directly to a given file descriptor.

#### Part 3: Linked List Functions
- Node Creation & Inspection (ft_lstnew, ft_lstsize, ft_lstlast): Allocate a new list node with content, count total nodes in a list, and return the last node.
- Insertion (ft_lstadd_front, ft_lstadd_back): Add a new node at the beginning or at the end of the list.
- Deletion & Iteration (ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap): Free a single node's content, clear and free an entire list with its content, apply a function to each node's content, or map a function across the list to produce a newly allocated list.

## Instructions

### Compilation
Compile the library and generate the static archive libft.a:
make

### Clean-up Rules
- Remove intermediate object files (.o):
  make clean

- Remove object files and the static archive libft.a:
  make fclean

- Rebuild the entire library from scratch:
  make re

### Usage
Include the library header in your source code:
#include "libft.h"

## Resources
- Standard C Library documentation (man pages for string.h, ctype.h, and stdlib.h).
- 42 peer-learning discussions and project evaluation guidelines.

### Use of AI
AI was used as an interactive code-review and debugging assistant. Specifically, it was consulted for:
- Understanding edge cases and preventing segmentation faults in memory allocation handling (such as allocation failure cleanups in ft_split).
- Designing pre-submission test workflows and debugging unit test cases.
