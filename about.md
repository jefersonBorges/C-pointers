# About

These exercises are a practice of C language inside the discipline of data structure 1, belonging to the course of Computer Engineering.

## content

- pointers
- arrays
- functions
- malloc()
- calloc()
- setlocale()
- system()
- printf()
- scanf()
- fflush()
- free()

---

## Arrays - Exercises

---

### Exercise - 0

- Pointer concepts review.

---

### Exercise - 1

- In the main() function, create an array with the following values:

~~~ C
array[3][3] = { {2,4,8}, {1,5,6}, {3,1,0} };
~~~

- Use a function called sum() to make the sum of all values in the array.

- The array must be scanned, using the concept of pointers.

- The sum value must be shown in the main() function.

---

### Exercise - 2

- In the main() function, create a vector with the following values:

~~~ C
vector[5] = {5,50,100,150,200};
~~~

- Use a function called sum() to make the sum of all vector values.

- The vector must be scanned, using the concept of pointers.

- The sum value must be shown in the main() function.

---

### Exercise - 3

- Scanning a vector of characters with pointer.

- Create two arrays of characters in the main() function: source and destination.

- Placing a content in origin.

- Use a function called copyword() that will copy, using the concept of pointers, the source content in the destination vector.

- Print the two character arrays in the main() function.

---

### Exercise - 4

- Pointer dynamic memory allocation concepts review.

---

### Exercise - 5

- Implement an algorithm that stores a vector of floats.

- This vector must be created dynamically through the malloc or calloc function.

- The programmer must ask the user how many float values he wants to store.

- In possession of the number of values, the adequate memory space must be allocated and later the reading of the values must be carried out.

- After reading all the values, a function list_floats must be called to show all the values on the screen.

---

### Exercise - 6

- Implement an algorithm that stores a vector of strings.

- This vector must be created dynamically through the malloc or calloc function.

- The programmer must ask the user how many strings he wants to store.

- In possession of the number of values, the adequate memory space must be allocated and later the reading of the values must be carried out.

- After reading all the values, a function list_strings must be called to show all registered values on the screen.

---

### Exercise - 7

- Given the structure below to store a student's data:

~~~ C
struct aluno {
int matricula;
char *nome;
float media;
};
~~~

- Implement an algorithm that stores a student struct vector.

- This vector must be created dynamically through the malloc or calloc function.

- The programmer must ask the user about how many students he wants to store.

- Having the number of students, the adequate memory space must be allocated and later the reading of the students' data must be carried out.

- After reading all the students, a list_students function must be called to show on the screen all the values related to the students.

---
