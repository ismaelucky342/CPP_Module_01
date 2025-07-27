
# CPP Module 01 - Memory Allocation, Pointers, References & File I/O

## Overview

This module dives deep into **memory management** in C---

### ex03: Unnecessary violence
**Objective:** Understand object composition and the practical differences between references and pointers in class design.

**Description:**
Implement a weapon system with three interconnected classes that demonstrate different approaches to object relationships:

**Classes to Implement:**

1. **Weapon Class:**
   - Private attribute: `std::string type`
   - Public methods: `const std::string& getType()` and `void setType(std::string type)`

2. **HumanA Class:**
   - Private attributes: `std::string name`, `Weapon& weapon` (reference)
   - Constructor: `HumanA(std::string name, Weapon& weapon)`
   - Public method: `void attack()`

3. **HumanB Class:**
   - Private attributes: `std::string name`, `Weapon* weapon` (pointer)
   - Constructor: `HumanB(std::string name)`
   - Public methods: `void attack()`, `void setWeapon(Weapon& weapon)`

**Key Learning Points:**
- **References in composition**: HumanA must be initialized with a weapon and cannot change weapons
- **Pointers in composition**: HumanB can change weapons or have no weapon at all
- Object lifetime dependencies and initialization order
- When to choose references vs pointers in class design

**Implementation Details:**
The attack method should print: `"<name> attacks with their <weapon_type>"` or handle the case where HumanB has no weapon.

---

### ex04: Sed is for losers
**Objective:** Master file I/O operations and string manipulation without external libraries.

**Description:**
Create a text replacement program that demonstrates file handling and string processing:

**Program Requirements:**
- Accept three command-line arguments: filename, string to find (s1), replacement string (s2)
- Read the entire file content
- Replace ALL occurrences of s1 with s2
- Write the result to a new file named `<filename>.replace`
- Handle various error conditions gracefully

**Error Handling:**
- Invalid number of arguments
- File cannot be opened or read
- Empty filename or search string
- Permission issues

**Key Learning Points:**
- File stream operations (`std::ifstream`, `std::ofstream`)
- String searching and replacement algorithms
- Command-line argument processing
- Error handling and validation
- File system interactions

**Implementation Considerations:**
- Must handle overlapping occurrences correctly
- Should work with binary-safe strings
- Memory efficient for large files
- No use of regex or external string replacement functions

---

### ex05: Harl 2.0
**Objective:** Implement function pointers to create flexible, maintainable code architecture.

**Description:**
Create a logging system that uses function pointers to avoid lengthy conditional statements:

**Harl Class Design:**
- **Private Methods:**
  - `void debug()` - prints debug level messages
  - `void info()` - prints informational messages  
  - `void warning()` - prints warning messages
  - `void error()` - prints error messages

- **Public Method:**
  - `void complain(std::string level)` - calls appropriate private method

**Implementation Strategy:**
Use an array of function pointers and corresponding level strings to map input to the correct method, avoiding if/else chains.

**Key Learning Points:**
- Function pointer syntax and usage
- Creating lookup tables for function dispatch
- Code maintainability and extensibility
- Strategy pattern implementation in C++

**Function Pointer Declaration:**
```cpp
void (Harl::*functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
```

---

### ex06: Harl filter
**Objective:** Implement message filtering using switch statements and enhance the function pointer system.

**Description:**
Extend the Harl system to filter messages based on severity level, showing all messages from a specified level and above:

**Program Behavior:**
- Takes one command-line argument: the minimum log level
- Displays all messages from that level upward in severity
- Uses switch statement for level filtering
- Handles invalid input appropriately

**Severity Hierarchy:**
1. DEBUG (lowest)
2. INFO
3. WARNING  
4. ERROR (highest)

**Expected Output:**
```
[ DEBUG ]
Debug message content...

[ INFO ]
Info message content...
...
```

**Key Learning Points:**
- Switch statement with fallthrough behavior
- Enumeration or level mapping
- Command-line argument validation
- Hierarchical filtering logic
- Integration with existing function pointer system

---

## Build Instructions

Each exercise can be compiled individually:

```bash
cd ex00
make
./brainz

cd ../ex01  
make
./horde

# Continue for each exercise...
```

## Memory Management Best Practices

1. **Always pair allocation with deallocation**
   - `new` with `delete`
   - `new[]` with `delete[]`

2. **Initialize pointers to nullptr**
   ```cpp
   Weapon* weapon = nullptr;
   ```

3. **Check pointer validity before use**
   ```cpp
   if (weapon != nullptr) {
       // Safe to use weapon
   }
   ```

4. **Use RAII (Resource Acquisition Is Initialization)**
   - Acquire resources in constructors
   - Release resources in destructors

## Common Pitfalls to Avoid

- **Memory leaks**: Forgetting to delete dynamically allocated objects
- **Dangling pointers**: Using pointers after the object has been destroyed
- **Double deletion**: Calling delete twice on the same pointer
- **Array/non-array mismatch**: Using `delete` instead of `delete[]` for arrays
- **Uninitialized references**: References must be initialized when declared

---

**CPP Module 01** provides essential foundations for memory management, object relationships, and system programming in C++. From dynamic zombie hordes to modular complaint filtering, each exercise builds critical skills for larger projects and real-world applications.

---
*Born2code - 42 School*object lifecycle, the fundamental differences between **stack** and **heap** allocation, and the proper use of **pointers** and **references**. Through six comprehensive exercises, you'll master dynamic memory allocation, object destruction, file I/O operations, and function pointers.

## Learning Objectives

- Understanding the difference between **stack** and **heap** allocation
- Managing **dynamic memory** allocation and preventing memory leaks
- Working with **pointers** and **references** effectively
- Implementing proper **constructors** and **destructors**
- Handling **dynamic arrays** of objects
- Mastering **file I/O** operations in C++
- Using **function pointers** to create flexible code architecture
- Understanding **object composition** and lifetime management

## Key Concepts

### Stack vs Heap Allocation
- **Stack**: Automatic storage duration, fast allocation/deallocation, limited size
- **Heap**: Dynamic storage duration, manual management required, larger available space

### Pointers vs References
- **Pointers**: Can be reassigned, can be null, use `*` and `->` operators
- **References**: Cannot be reassigned, cannot be null, direct access to object

### Memory Management
- Use `new` and `delete` for single objects
- Use `new[]` and `delete[]` for arrays
- Always match allocation with appropriate deallocation
- Implement proper destructors to prevent memory leaks

### Function Pointers
Enable dynamic function selection at runtime, useful for implementing strategy patterns and avoiding long conditional chains.

## Project Structure

```
CPP_Module_01/
├── ex00/          # BraiiiiiiinnnzzzZ - Basic Memory Management
├── ex01/          # Moar brainz! - Dynamic Arrays
├── ex02/          # HI THIS IS BRAIN - Pointers & References
├── ex03/          # Unnecessary violence - Object Composition
├── ex04/          # Sed is for losers - File I/O & String Processing
├── ex05/          # Harl 2.0 - Function Pointers
├── ex06/          # Harl filter - Switch Statements & Filtering
└── README.md      # This file
```

## Exercises

### ex00: BraiiiiiiinnnzzzZ
**Objective:** Master the fundamentals of object lifecycle and memory allocation patterns.

**Description:**
Create a `Zombie` class that demonstrates the crucial differences between stack and heap allocation. The class must include:

- **Private Attributes:**
  - `std::string name` - stores the zombie's identifier

- **Public Methods:**
  - `void announce()` - displays the zombie's announcement message

- **Global Functions:**
  - `Zombie* newZombie(std::string name)` - allocates a zombie on the heap
  - `void randomChump(std::string name)` - creates a zombie on the stack

**Key Learning Points:**
- Objects created on the stack are automatically destroyed when going out of scope
- Objects created on the heap must be manually destroyed using `delete`
- Proper destructor implementation for resource cleanup
- Understanding when to use stack vs heap allocation

**Implementation Details:**
The destructor should print a debug message to track object destruction, helping visualize the difference in object lifetimes between stack and heap allocated zombies.

---

### ex01: Moar brainz!
**Objective:** Master dynamic array allocation and prevent memory leaks in object arrays.

**Description:**
Implement a function that creates and manages multiple zombie objects in a single memory allocation:

```cpp
Zombie* zombieHorde(int N, std::string name);
```

**Requirements:**
- Allocate `N` zombies in a single memory block using `new[]`
- Initialize all zombies with the provided name
- Return a pointer to the first zombie in the array
- Ensure proper cleanup with `delete[]` in the calling code

**Key Learning Points:**
- Dynamic array allocation vs individual object allocation
- Proper use of `new[]` and `delete[]` operators
- Constructor behavior in array allocation
- Memory layout of object arrays
- Preventing memory leaks in dynamic arrays

**Implementation Considerations:**
The function must handle edge cases like `N <= 0` and ensure all zombies are properly constructed before returning the array pointer.

---

### ex02: HI THIS IS BRAIN
**Objective:** Understand the fundamental differences and use cases of pointers and references.

**Description:**
Create a program that demonstrates pointer and reference behavior through direct comparison:

**Program Requirements:**
1. Create a string variable initialized with `"HI THIS IS BRAIN"`
2. Declare a pointer (`stringPTR`) pointing to the string
3. Declare a reference (`stringREF`) referencing the same string
4. Print memory addresses of the original variable, pointer, and reference
5. Print values accessed through the original variable, pointer, and reference

**Expected Output Format:**
```
The memory address of the string variable: [address]
The memory address held by stringPTR: [address]
The memory address held by stringREF: [address]
The value of the string variable: [value]
The value pointed to by stringPTR: [value]
The value pointed to by stringREF: [value]
```

**Key Learning Points:**
- References are aliases to existing objects
- Pointers store memory addresses
- Both provide indirect access to objects
- References cannot be reassigned or null
- Pointer arithmetic and dereferencing concepts

---

### ex03 - ex06
**Descripción:**
Ejercicios adicionales sobre entrada/salida de archivos, referencias y gestión de memoria.

---
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
