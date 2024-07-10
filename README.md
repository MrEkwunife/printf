# _printf

A custom implementation of the C standard library printf function.

## Table of Contents

- Build and Execute
- Usage
- Contributors
- Acknowledgments
- License

## Build and Execute

To install this project, follow these steps:

1. Clone the repository to your local machine.
2. Run the `make` command to compile the program.
3. Run the `printf` executable to use the program.

## Usage

To use this program, follow these steps:

1. Include the `main.h` header file in your program.
2. Call the `_printf` function with the desired format string and arguments.

Here's an example of how to use the `_printf` function:

```c
#include “main.h”

int main(void)
{
    _printf(“Hello, %s!\n”, “world”);
    return (0);
}
```

This will output:

`Hello world`


## Contributors

- Chimobi Ekwunife ([@MrEkwunife](https://github.com/MrEkwunife))
- Kenechukwu Akubue ([@kengoon](https://github.com/kengoon))

## Acknowledgments

This project is built on the foundation of the C programming language and the C standard library. We would like to thank the developers of C for creating such a powerful and versatile language.

We would also like to acknowledge ALX SE for providing us with the opportunity to work on this project and develop our skills as software engineers. Thank you for your support and guidance throughout this journey.

## License

This project is licensed under the MIT License - see the LICENSE.md file for details

