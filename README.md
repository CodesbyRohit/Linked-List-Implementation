# Linked-List-Implementation

Company: CODTECH IT SOLUTIONS

Name: Rohit Srivastava

Intern ID: CT04DR3118

Domain: Cyber Security and Ethical Hacking

Duration: 4 Weeks

Mentor: Neela Santosh

### **Task: Singly Linked List Implementation With Insertion, Deletion & Traversal**

A singly linked list is one of the most fundamental and widely used dynamic data structures in systems programming, and implementing it correctly is a core skill for any engineer working with low-level memory models, pointer-based algorithms, or custom data-structure frameworks. Unlike static arrays, which require contiguous memory and fixed size, a linked list offers flexible and dynamic memory usage, allowing the program to grow or shrink the structure at runtime without expensive reallocation. This makes linked lists especially useful in scenarios where memory efficiency, unpredictably changing data sizes, or frequent insertion and deletion operations are critical. The goal of this task is to create a modular, efficient, and robust implementation of a singly linked list in C—one that adheres to modern engineering practices and showcases a clear understanding of pointer manipulation, memory allocation, and safe data-structure design.

The program developed for this task implements three primary operations: **insertion**, **deletion**, and **traversal**. Each operation is encapsulated in its own function, reflecting clean modular design and aligning with industry standards such as the single-responsibility principle. These operations collectively demonstrate the full lifecycle management of a dynamically allocated list.

Insertion is implemented in two variants—at the front of the list and at the end of the list. Inserting at the front is an O(1) operation, requiring no traversal and simply adjusting a pointer. Inserting at the end, while O(n) in a standard singly linked list, demonstrates how pointer traversal works and how new memory must be safely allocated and linked. This two-mode insertion design mirrors real-world codebases where linked lists are used as queues, stacks, and generic element containers.

Deletion is implemented as removal of the **first occurrence of a value**. This operation emphasizes careful pointer handling and memory deallocation. The algorithm handles edge cases including deleting the head node, deleting nodes in the middle or end of the list, and attempting to delete a value that does not exist. Each case is managed cleanly and safely, with correct memory freeing to avoid leaks—an essential practice in systems-level C programming.

Traversal demonstrates how to iterate through a pointer-based structure, providing a view of the list’s current state. Printing the nodes one by one reinforces how sequential data can be processed without needing contiguous storage, making traversal both intuitive and memory-independent.

The design of this program intentionally avoids global variables and instead returns updated head pointers from each modifying function. This approach is standard in high-quality C libraries because it enhances predictability, reusability, and testability of the code. Additionally, all helper functions are marked `static`, ensuring internal linkage and preventing namespace pollution—another hallmark of professional and maintainable C design.

Memory management forms a critical part of this implementation. All node allocations use `malloc()`, and each allocation is checked to ensure that the request succeeded. Errors are handled gracefully through diagnostic messaging, preventing undefined behavior or segmentation faults. The program also includes a dedicated function to free the entire list, ensuring proper cleanup before program termination. This demonstrates that the developer understands the importance of memory hygiene in languages like C, which do not include automatic garbage collection.

The user interacts with the program through a menu-driven interface, a design choice that makes testing straightforward and improves usability. Each operation can be performed repeatedly, allowing the user to dynamically build, modify, and visualize the linked list in real time. This structure mirrors the command-line interfaces often used in debugging tools, data-structure utilities, or embedded systems consoles.

In conclusion, this task provides a complete and expertly designed implementation of a singly linked list using C. It demonstrates not only the fundamental mechanics of dynamic memory and pointer manipulation but also the engineering discipline required to write clean, modular, safe, and maintainable systems-level code. The program reflects industry-grade coding practices and showcases an understanding of data-structure implementation that is essential for software engineering roles, internships, and advanced system development.
