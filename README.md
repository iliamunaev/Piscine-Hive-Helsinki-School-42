# C Functions from Hive Helsinki Piscine

This repository contains a collection of C functions developed during the Hive Helsinki Piscine, a rigorous coding bootcamp designed to introduce participants to the fundamentals of programming and computer science. The exercises cover a wide range of basic programming concepts, from simple input/output to more complex algorithms and data manipulation techniques.

## Purpose

The purpose of these exercises was to provide hands-on experience with the C programming language, which is known for its efficiency, portability, and close-to-the-metal memory manipulation capabilities. By working through these exercises, students gain a solid foundation in programming logic, algorithmic thinking, and problem-solving skills, which are essential for any software development career.

## Functions

### Library Equivalents

These functions are commonly found in C Libraries, and the exercises involved re-implementing them to better understand their inner workings.

1. **[ft_atoi.c](https://link-url-here.org](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_atoi.c))**
   - Converts a string to an integer. This function takes a string of characters representing a numerical value and converts it into its corresponding integer form.
   - **Library Equivalent**: `atoi` (in `<stdlib.h>`)

2. **[ft_strlen](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strlen.c)**
   - Computes the length of a string. This function takes a string as an argument and returns the number of characters in the string, excluding the null terminator.
   - **Library Equivalent**: `strlen` (in `<string.h>`)

3. **[ft_strcmp](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strcmp.c)**
   - Compares two strings. This function takes two strings as arguments and returns an integer based on the comparison of their ASCII values.
   - **Library Equivalent**: `strcmp` (in `<string.h>`)

4. **[ft_strncmp](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strncmp.c)**
   - Compares two strings up to `n` characters. This function takes two strings and an integer `n` as arguments and returns an integer based on the comparison of their ASCII values.
   - **Library Equivalent**: `strncmp` (in `<string.h>`)

5. **[ft_strcat](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strcat.c)**
   - Concatenates two strings. This function appends the source string to the destination string.
   - **Library Equivalent**: `strcat` (in `<string.h>`)

6. **[ft_strncat](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strncat.c)**
   - Concatenates two strings, but only up to `n` characters from the source string. This function appends up to `n` characters from the source string to the destination string.
   - **Library Equivalent**: `strncat` (in `<string.h>`)

7. **[ft_strdup](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strdup.c)**
   - Duplicates a string. This function takes a string as an argument and returns a pointer to a newly allocated space in memory containing a copy of the string.
   - **Library Equivalent**: `strdup` (in `<string.h>`)

8. **[ft_strstr](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_strstr.c)**
   - Locates a substring within a string. This function takes two strings as arguments and returns a pointer to the first occurrence of the substring in the main string.
   - **Library Equivalent**: `strstr` (in `<string.h>`)

### Algorithms

These functions implement basic algorithms and mathematical operations.

1. **[ft_fibonacci](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_fibonacci.c)**
   - Computes the nth Fibonacci number. This function takes an integer `n` as an argument and returns the nth number in the Fibonacci sequence.

2. **[ft_find_next_prime](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_find_next_prime.c)**
   - Finds the next prime number greater than or equal to a given integer. This function takes an integer as an argument and returns the smallest prime number that is greater than or equal to the input.

3. **[ft_is_prime](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_is_prime.c)**
   - Determines if a number is a prime number. This function takes an integer as an argument and returns 1 if the number is prime, otherwise returns 0.

4. **[ft_iterative_factorial](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_iterative_factorial.c)**
   - Calculates the factorial of a number using an iterative approach. This function takes an integer `n` as an argument and returns the factorial of `n`.

5. **[ft_iterative_power](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_iterative_power.c)**
   - Computes the power of a number using an iterative method. This function takes two integers, `base` and `exponent`, and returns the result of raising the base to the power of the exponent.

6. **[ft_print_comb](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_print_comb.c)**
   - Prints all possible combinations of three different digits in ascending order, separated by commas and spaces. Each combination is unique and does not repeat digits.

7. **[ft_range](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_range.c)**
   - Creates an array of integers containing all values between two given integers, inclusive. This function takes two integers, `min` and `max`, and returns an array filled with values from `min` to `max`.

8. **[ft_recursive_factorial](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_recursive_factorial.c)**
   - Calculates the factorial of a number using a recursive method. This function takes an integer `n` as an argument and returns the factorial of `n`.

9. **[ft_recursive_power](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_recursive_power.c)**
   - Computes the power of a number using a recursive method. This function takes two integers, `base` and `exponent`, and returns the result of raising the base to the power of the exponent.

10. **[ft_sort_params](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_sort_params.c)**
    - Sorts and prints all command-line arguments passed to the program in ascending order. Each argument is printed on a new line.

12. **[ft_sqrt](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_sqrt.c)**
    - Computes the square root of a number. This function takes an integer as an argument and returns the square root if it is a perfect square, otherwise returns 0.

### Custom Implementations

These functions are custom implementations designed to perform specific tasks or exercises.

1. **[ft_div_mod](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_div_mod.c)**
   - Computes the division and modulus of two integers. This function takes two integers as arguments and returns the quotient and remainder of their division.

2. **[ft_ft](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_ft.c)**
   - Sets the value of an integer to 42. This function takes a pointer to an integer and modifies the value it points to, setting it to 42.

3. **[ft_is_negative](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_is_negative.c)**
   - Checks if a number is negative. This function takes an integer as an argument and prints 'N' if the number is negative or 'P' if it is zero or positive.

4. **[ft_print_alphabet](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_print_alphabet.c)**
   - Prints all lowercase letters of the alphabet in ascending order, from 'a' to 'z'. This function does not take any arguments and outputs the alphabet directly to the standard output.

5. **[ft_print_numbers](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_print_numbers.c)**
   - Prints all single-digit numbers from 0 to 9. This function does not take any arguments and outputs the numbers directly to the standard output.

6. **[ft_print_params](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_print_params.c)**
   - Prints all command-line arguments passed to the program. Each argument is printed on a new line.

7. **[ft_print_program_name](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_print_program_name.c)**
   - Prints the name of the program. This function outputs the name of the executable file to the standard output.

8. **[ft_print_reverse_alphabet](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_print_reverse_alphabet.c)**
   - Prints all lowercase letters of the alphabet in descending order, from 'z' to 'a'. This function does not take any arguments and outputs the alphabet directly to the standard output.

9. **[ft_putchar](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_putchar.c)**
   - Outputs a single character to the standard output. This function takes a character as an argument and writes it to the console.

10. **[ft_putnbr](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_putnbr.c)**
    - Prints an integer to the standard output. This function takes an integer as an argument and displays its value on the console.

11. **[ft_putnbr_base](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_putnbr_base.c)**
    - Prints an integer in a specified base to the standard output. This function takes an integer and a base string as arguments, converting and displaying the integer in the given base.

12. **[ft_putstr](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_putstr.c)**
    - Outputs a string to the standard output. This function takes a string as an argument and prints it to the console.

13. **[ft_rev_params](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_rev_params.c)**
    - Prints all command-line arguments passed to the program in reverse order. Each argument is printed on a new line.

14. **[ft_swap](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_swap.c)**
    - Swaps the values of two integers. This function takes two pointers to integers as arguments and swaps the values they point to.

15. **[ft_ultimate_div_mod](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_ultimate_div_mod.c)**
    - Computes the division and modulus of two integers and updates their values. This function takes two pointers to integers and stores the quotient in the first integer and the remainder in the second.

16. **[ft_ultimate_ft](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_ultimate_ft.c)**
    - Sets the value of a pointed integer to 42 through multiple levels of indirection. This function takes a pointer to a pointer to an integer, going several levels deep, and modifies the value to 42.

17. **[ft_ultimate_range](https://github.com/iliamunaev/Piscine-Hive-Helsinki-School-42/blob/main/functions/ft_ultimate_range.c)**
    - Creates an array of integers containing all values between two given integers, exclusive. This function takes two integers, `min` and `max`, and returns an array filled with values from `min` to `max - 1`.
