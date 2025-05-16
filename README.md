# Libft - 42 Custom C Library

## Description
Libft is a custom C library that recreates several standard C library functions along with additional utility functions. This project is part of the 42 school curriculum and serves as a foundation for future C programming projects.

## Functions
The library includes the following categories of functions:

### Standard Libc Functions
* `ft_isalpha` - Check if character is alphabetic
* `ft_isdigit` - Check if character is a digit
* `ft_isalnum` - Check if character is alphanumeric
* `ft_isascii` - Check if character is ASCII
* `ft_isprint` - Check if character is printable
* `ft_strlen` - Calculate string length
* `ft_memset` - Fill memory with a constant byte
* `ft_bzero` - Zero a byte string
* `ft_memcpy` - Copy memory area
* `ft_memmove` - Copy memory area with overlap handling
* `ft_strlcpy` - Copy string to a specific size
* `ft_strlcat` - Concatenate string to a specific size
* `ft_toupper` - Convert char to uppercase
* `ft_tolower` - Convert char to lowercase
* `ft_strchr` - Locate character in string
* `ft_strrchr` - Locate character in string from the end
* `ft_strncmp` - Compare two strings
* `ft_memchr` - Scan memory for a character
* `ft_memcmp` - Compare memory areas
* `ft_strnstr` - Locate a substring in a string
* `ft_atoi` - Convert string to integer
* `ft_calloc` - Allocate and zero memory
* `ft_strdup` - Create a duplicate of a string

### Additional Functions
* `ft_substr` - Extract substring from string
* `ft_strjoin` - Concatenate two strings
* `ft_strtrim` - Trim characters from string
* `ft_split` - Split string into array of substrings
* `ft_itoa` - Convert integer to string
* `ft_strmapi` - Apply function to each character in string
* `ft_striteri` - Apply function to each character with index
* `ft_putchar_fd` - Output char to file descriptor
* `ft_putstr_fd` - Output string to file descriptor
* `ft_putendl_fd` - Output string with newline to file descriptor
* `ft_putnbr_fd` - Output number to file descriptor

### Bonus Functions
* `ft_lstnew` - Create new list node
* `ft_lstadd_front` - Add node at beginning of list
* `ft_lstsize` - Count elements in list
* `ft_lstlast` - Get last node of list
* `ft_lstadd_back` - Add node at end of list
* `ft_lstdelone` - Delete node from list
* `ft_lstclear` - Delete sequence of nodes from list
* `ft_lstiter` - Apply function to content of all nodes
* `ft_lstmap` - Create new list resulting from applying function to all nodes

## Compilation
To compile the library, use the provided Makefile:

```bash
make        # Compile the library
make bonus  # Compile with bonus functions
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile the library
```

## Usage
Include the library in your C project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc your_program.c -L. -lft
```

## License
This project is part of the 42 school curriculum.