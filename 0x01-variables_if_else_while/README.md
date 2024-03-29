# 0x01. C - Variables, if, else, while

In this project, I learnt how to use the `if`/`if ... else`, `while` and `for` loops. I also learnt how to use `putchar` as another way of printing output apart from the commonly used `printf` function.

## Tasks :page_with_curl:

* **0. Positive anything is better than negative nothing**: The [0-positive_or_negative.c](./0-positive_or_negative.c) file contains a program that will assign a random number to the variable `n` each time it is executed. N.B;
  * The output of the program should be:
      * The number, followed by
          * if the number is greater than 0: `is positive`
          * if the number is 0: `is zero`
          * if the number is less than 0: `is negative`
      * followed by a new line

* **1. The last digit**: In this file, The output of the program should be:
  * The string `Last digit of`, followed by
  * `n`, followed by
  * the string `is`, followed by
    * if the last digit of n is greater than 5: `the string and is greater than 5`
    * if the last digit of n is 0: `the string and is 0`
    * if the last digit of n is less than 6 and not 0: `the string and is less than 6 and not 0`
  * followed by a new line
 
* **2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * This file contains a program that prints the alphabet in lowercase, followed by a new line using `putchar` function alone.

* **3. alphABET**: The [3-print_alphabets.c](./3-print_alphabets.c) file contains a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line using only `putchar`.

* **4. When I was having that alphabet soup, I never thought that it would pay off**
  * The [4-print_alphabt.c](./4-print_alphabt.c) file contains a C program that prints the alphabet in lowercase, followed by a new line using `putchar`.

* **5. Numbers**: The [5-print_numbers.c](./5-print_numbers.c) file contains a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

* **6. Numberz**: The [6-print_numberz.c](./6-print_numberz.c) file contains a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line using `putchar`.

* **7. Smile in the mirror**: The [7-print_tebahpla.c](./7-print_tebahpla.c) file contains a program that prints the lowercase alphabet in reverse, followed by a new line using `putchar`.

* **8. Hexadecimal**: The [8-print_base16.c](./8-print_base16.c) file contains a program that prints all the numbers of base 16 in lowercase, followed by a new line using `putchar`.

* **9. Patience, persistence and perspiration make an unbeatable combination for success**
  * The file [9-print_comb.c](./9-print_comb.c) file contains  a program that prints all possible combinations of single-digit numbers. N.B:
    * Numbers must be separated by `,`, followed by a space
    * Numbers should be printed in ascending order
    * You can only use the `putchar` function
* **10. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
  * The file [100-print_comb3.c](./100-print_comb3.c) contains a program that prints all possible different combinations of two digits. N.B:
    * Numbers must be separated by `,`, followed by a space
    * The two digits must be different
    * `01` and `10` are considered the same combination of the two digits `0` and `1`
 * **11. The success combination in business is: Do what you do better... and: do more of what you do...**
   * The [101-print_comb4.c](./101-print_comb4.c) file contains a program that prints all possible different combinations of three digits. N.B:
     * Numbers must be separated by `,`, followed by a space
     * The three digits must be different
     * `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
 * **12. Software is eating the World**: 
   * The [102-print_comb5.c](./102-print_comb5.c) file contains a program that prints all possible combinations of two two-digit numbers. N.B:
     * The numbers should range from `0` to `99`
     * The two numbers should be separated by a space
     * All numbers should be printed with two digits. `1` should be printed as `01`
     * The combination of numbers must be separated by comma, followed by a space
     * The combinations of numbers should be printed in ascending order
     * `00` `01` and `01` `00` are considered as the same combination of the numbers `0` and `1`
     * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     * You can only use `putchar` eight times maximum in your code
     * You are not allowed to use any variable of type `char`
     * All your code should be in the `main` function
