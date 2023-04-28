# ft_printf

ft_printf is a project at 42 that aims to recreate the functionality of the printf function from the standard C library and learn about variadic functions.

## Getting Started

To use this function, you need to clone this repository and compile it with `make`. This will generate a `libftprintf.a` file that you can link with your own source files.

The prototype of the function is:

```c
int ft_printf(const char *, ...);
```

The function takes a format string that can contain zero or more directives. Directives are introduced by a `%` character and end with a conversion specifier. The function writes the output to the standard output.

## Specifiers and Flags

The function supports the following conversion specifiers:

- `%c` : print a single character
- `%s` : print a string of characters
- `%p` : print a pointer address
- `%d` : print a decimal integer
- `%i` : print an integer
- `%u` : print an unsigned decimal integer
- `%x` : print an unsigned hexadecimal integer (lowercase)
- `%X` : print an unsigned hexadecimal integer (uppercase)
- `%%` : print a percent sign

The function also supports the following flags:

- `-` : left-justify within the given field width
- `0` : left-pads the number with zeroes instead of spaces
- `.` : precision, specifies the number of digits after the decimal point for floating-point values, or the maximum number of characters to be printed from a string
- `#` : used with x or X specifiers, it prefixes 0x or 0X to non-zero values
- `(space)` : used with d or i specifiers, it inserts a space before non-negative numbers
- `+` : used with d or i specifiers, it forces to precede the result with a plus or minus sign
## Usage

To use this function in your own project, you need to include the header file `ft_printf.h` in your source files and link the `libftprintf.a` file when compiling.
