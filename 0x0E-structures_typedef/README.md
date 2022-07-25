# 0x0E. C - Structures, typedef

In this project, I learnt:
  * What are structures, when, why and how to use them
  * How to use `typedef`

## Header File :file_folder:

* **`dog.h`**: The header file containing the prototypes for all functions written in this project can be found here: [dog.h](./dog.h)

| File                     | Prototype                                                               |
| ------------------------ | ----------------------------------------------------------------------- |
| `1-init_dog.c`           | `void init_dog(struct dog *d, char *name, float age, char *owner);`     |
| `2-print_dog.c`          | `void print_dog(struct dog *d);`                                        |
| `4-new_dog.c`            | `dog_t *new_dog(char *name, float age, char *owner);`                   |
| `5-free_dog.c`           | `void free_dog(dog_t *d);`                                              |

## Tasks :page_with_curl:

* **0. Poppy**
  * Under the header file, we were to define a new type `struct dog` with the following elements:
     * `name`, type = `char *`
     * `age`, type = `float`
     * `owner`, type = `char *`
  
* **1. A dog is the only thing on earth that loves you more than you love yourself**
  * The file [1-init_dog.c](./1-init_dog.c) contains a function that initialize a variable of type `struct dog`

* **2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**
  * The [2-print_dog.c](./2-print_dog.c) file contains a function that prints a `struct dog`

* **3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**
  * Under this task, we are to define a new type `dog_t` as a new name for the type `struct dog` in the header file.

* **4. A door is what a dog is perpetually on the wrong side of**
  * The [4-new_dog.c](./4-new_dog.c) file contains a function that creates a new dog.

* **5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**
  * The file [5-free_dog.c](./5-free_dog.c) is a representation of a function that frees dogs.
