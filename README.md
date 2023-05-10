# Luhn's Algorithm in C

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

This repository contains an implementation of Luhn's algorithm in C. The algorithm can be used to determine the validity of credit card numbers based on a checksum calculation.

## Description

A credit or debit card typically has a unique number printed on it, which is also stored in a database. Luhn's algorithm allows for the quick detection of potential typos or errors in credit card numbers without requiring a database query.

The algorithm follows these steps:

1. Multiply every other digit by 2, starting from the second-to-last digit, and add the digits of the resulting products.
2. Add the sum of the products to the sum of the remaining digits.
3. If the total's last digit is 0 (i.e., the total modulo 10 is congruent to 0), the number is considered valid.

## Getting Started

### Prerequisites

To compile and run the code in this repository, you need:

- A C compiler, such as GCC or Clang
- Make utility

### Compiling the Code

Follow these steps to compile the code:

1. Clone this repository: git clone https://github.com/your-username/luhn-algorithm-c.git
2. Navigate to the project directory: cd luhn-algorithm-c
3. Compile the code using the provided Makefile: make compile_run

### Running the Code

After compiling the code, you can run the program. Execute the following command: ./credit


You will be prompted to enter a credit card number. The program will then determine if the number is valid or not.

## Contributing

Contributions to this repository are welcome! If you find any issues or want to enhance the code, feel free to open an issue or submit a pull request. Your feedback and suggestions are valuable.

Please make sure to follow the [code of conduct](CODE_OF_CONDUCT.md) in all your interactions with the project.

## License

This project is licensed under the [MIT License](LICENSE).
