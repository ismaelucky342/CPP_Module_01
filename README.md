# CPP_Module_01
My school 42 C++ projects, module 01

## Exercise 00: BraiiiiiiinnnzzzZ

**Description:**

In this exercise, you will create a `Zombie` class in C++.  
It includes:
- A private string attribute for the zombie's name.
- A `void announce()` member function to make the zombie speak.

Additionally, two functions are implemented:
- `Zombie* newZombie(std::string name)`: Creates and returns a zombie allocated on the heap.
- `void randomChump(std::string name)`: Creates a zombie on the stack and calls its `announce()` function.

**Objective:**
Understand the differences between stack and heap allocation. Ensure proper destruction of objects with a destructor that logs a debug message.

---

##  Exercise 01: Moar brainz!

**Description:**

This task focuses on managing multiple zombies by implementing a function:
- `Zombie* zombieHorde(int N, std::string name)`

It should:
- Allocate a horde of `N` zombies in one memory block.
- Initialize them with the given name.
- Use a destructor to free resources properly.

**Objective:**
Practice dynamic memory allocation for arrays and avoid memory leaks by properly using `delete[]`.

---

## Exercise 02: HI THIS IS BRAIN

**Description:**

This exercise demonstrates the use of pointers and references.

The program must:
- Create a string variable initialized with `"HI THIS IS BRAIN"`.
- Declare a pointer (`stringPTR`) and a reference (`stringREF`) to that string.
- Print the memory addresses and values from both the pointer and reference.

**Objective:**
Understand the similarities and differences between pointers and references in C++.

---

## Exercise 03: Unnecessary violence

**Description:**

Implement three classes:
- `Weapon`
- `HumanA`
- `HumanB`

The `Weapon` class should:
- Contain a private string `type`.
- Provide `getType()` and `setType()` methods.

`HumanA` and `HumanB`:
- Each have a name and a weapon.
- Use `attack()` to display an attack message.

**Objective:**
Demonstrate how references (HumanA) and pointers (HumanB) behave differently in class composition.

---

##  Exercise 04: Sed is for losers

**Description:**

Create a program that replaces all occurrences of a string `s1` with `s2` in a file.

The program must:
- Take three parameters: a filename, `s1`, and `s2`.
- Write the modified content into a new file named `<filename>.replace`.
- Handle errors gracefully.

**Objective:**
Reinforce file I/O operations and basic string processing in C++.

---

##  Exercise 05: Harl 2.0

**Description:**

Create a `Harl` class that simulates a logging system.

The class should have:
- Four private methods: `debug()`, `info()`, `warning()`, and `error()`.
- One public method: `complain(std::string level)` that calls the appropriate private method.

**Objective:**
Use function pointers to avoid lengthy `if/else` chains and improve code modularity.

---

##  Exercise 06: Harl filter

**Description:**

Filter Harl’s complaints based on severity level.

The program:
- Takes one argument: the log level.
- Prints all messages from the given level and above.
- Handles invalid input properly.

**Objective:**
Use the `switch` statement effectively and reinforce the use of function pointers.

---

# Extra

CPP Module 01 is packed with practical examples that illustrate the importance of memory management, object lifetime, references, and file handling. From dynamic zombie hordes to modular complaint filtering, each task builds essential C++ skills that are crucial for larger projects and systems programming.

-Born2code
![42madrid](https://github.com/ismaelucky342/Born2code/assets/153450550/3a377f34-9156-4eff-b04b-71c4b128523e)
