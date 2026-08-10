# Integration Project - printf
Implementing a version of printf
Printf is used to print formatted output to terminal
Format specifiers are special symbols that start with % to define what type of data

## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS
- _printf needs to return an int (character count)
- _printf needs to handle %d and %i
- _printf needs to handle %u
- _printf needs to handle negative numbers with %d
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Follows Betty style and checked using betty-style.pl and betty-doc.pl
- not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called main.h

## Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Expected Result
```bash
Let's try to printf a simple sentence.        // Print literal text as-is
Let's try to printf a simple sentence.        // Return the total character count as an int
Length:[39, 39]                               // Handle %d and %i
Length:[39, 39]
Negative:[-762534]                            // Handle %d and %i, including negative numbers
Negative:[-762534]
Unsigned:[2147484671]                         // Handle %u
Unsigned:[2147484671]
Unsigned octal:[20000017777]                  // Handle %o
Unsigned octal:[20000017777]
Unsigned hexadecimal:[800003ff, 800003FF]     // Handle %x and %X
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]                                 // Handle %c
Character:[H]
String:[I am a string !]                      // Handle %s
String:[I am a string !]
```

## File Structure
- TBC
- Testing Folder
	-	main.c file 
	-	Any test cases

## Contributors
- Shirleen Asre - https://github.com/bumble-beed
- Nathan Balshaw - https://github.com/14817-ui 
