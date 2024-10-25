

```markdown
# Libft

## Project Overview
**Libft** is a custom implementation of essential C library functions. The goal of this project is to re-implement functions from the standard C library (such as `libc`) and create a personal library that can be reused in future projects. By building this library from scratch, I developed a deeper understanding of how fundamental functions work, particularly in areas like memory management, string manipulation, and linked lists.

## Key Concepts Learned
- **Memory Management**: Allocating, freeing, and managing memory using functions like `malloc()` and `free()`.
- **String Manipulation**: Implementing basic string operations like copying, concatenation, and comparison.
- **Linked Lists**: Creating and managing singly linked lists with custom functions.
- **Error Handling**: Properly handling null pointers, invalid inputs, and boundary conditions.

## Implemented Functions
### Part 1 - Standard C Library Functions
1. **Memory Functions**
    - `memset`: Fill memory with a constant byte.
    - `bzero`: Zero out a block of memory.
    - `memcpy`: Copy memory area.
    - `memmove`: Copy memory area with overlap handling.
    - `memchr`: Scan memory for a character.
    - `memcmp`: Compare memory areas.

2. **String Functions**
    - `strlen`: Calculate the length of a string.
    - `strlcpy`: Copy strings with a size limit.
    - `strlcat`: Concatenate strings with a size limit.
    - `strchr`: Locate a character in a string.
    - `strrchr`: Locate the last occurrence of a character in a string.
    - `strncmp`: Compare two strings up to a certain number of bytes.
    - `strdup`: Duplicate a string.
    - `strnstr`: Locate a substring in a string with a length limit.

3. **Character Checking/Conversion**
    - `isalnum`: Check for an alphanumeric character.
    - `isalpha`: Check for an alphabetic character.
    - `isascii`: Check for an ASCII character.
    - `isdigit`: Check for a digit (0-9).
    - `isprint`: Check for any printable character.
    - `toupper`: Convert lowercase letters to uppercase.
    - `tolower`: Convert uppercase letters to lowercase.

4. **Other Utility Functions**
    - `atoi`: Convert a string to an integer.

### Part 2 - Additional Functions
- `substr`: Extract a substring from a string.
- `strjoin`: Concatenate two strings into a new string.
- `strtrim`: Trim leading and trailing whitespace from a string.
- `split`: Split a string into an array of substrings based on a delimiter.
- `itoa`: Convert an integer to a string.
- `strmapi`: Apply a function to each character of a string.
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`: Output characters, strings, and numbers to a file descriptor.

### Bonus Part - Linked List Functions
- `lstnew`: Create a new linked list element.
- `lstadd_front`: Add an element to the front of the list.
- `lstsize`: Count the number of elements in a list.
- `lstlast`: Return the last element of the list.
- `lstadd_back`: Add an element to the end of the list.
- `lstdelone`: Delete a single element from the list.
- `lstclear`: Delete and free all elements of the list.
- `lstiter`: Apply a function to each element of the list.
- `lstmap`: Apply a function to each element and create a new list from the results.

## How to Build the Library
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/libft.git
   cd libft
   ```

2. Compile the library using the provided `Makefile`:
   ```bash
   make
   ```

3. The `libft.a` static library will be created in the project directory. You can now link it to your C projects.

## How to Use
To use **Libft** in your own project, compile your project and link the generated `libft.a` file:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

- `-L.`: Specifies the directory containing the `libft.a` file.
- `-lft`: Links the `libft.a` library.

## Example Usage
Here's a simple example of using the **Libft** library in a program:

```c
#include "libft.h"

int main(void) {
    char *str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1); // Outputs: Hello, 42!
    free(str);
    return 0;
}
```

## Important Considerations
- **Memory Management**: Ensure that all allocated memory is freed after use to prevent memory leaks.
- **Null Pointer Handling**: Be careful when passing `NULL` to functions, and ensure proper error handling is in place.
- **Testing**: Thoroughly test all implemented functions, especially edge cases, to ensure correctness and stability.

---

This project is part of the **42 Seoul** curriculum and focuses on re-implementing key functions from the C standard library to gain a deeper understanding of how they work.
```


- **How to Build** 및 **How to Use**: 사용자가 라이브러리를 빌드하고 자신의 프로젝트에 적용하는 방법을 명확하게 설명했습니다.

이 README는 **Libft** 프로젝트의 목표와 구현된 기능을 간결하게 설명하며, 사용자가 이 라이브러리를 효과적으로 사용할 수 있도록 돕는 구조로 작성되었습니다.
