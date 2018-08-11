# Operating System Algorithms

This contains implementation of Operating System Algorithms.

These implementations outputs the computed result. These implementations does not
contain visualization of these algorithms. To easily and interactively learn how these
work see [this](visualization-library-todo).

For advanced system algorithms or papers implementation see [this](https://github.com/tapasweni-pathak/Systems-Readings-Implementations/tree/master/AOS/Conferences). Feel free to PR an implementation in OS section,
the directories has info about how a new algorithm can be implemented extending the
exisiting code and structure.

1. System Structures
   * Implement a system call in Linux Kernel

2. Process Concept
   * Interprocess Communication
     * Shared Memory
     * Message Passing
   * Synchronization
     * Blocking send
     * Nonblocking send
     * Blocking receive
     * Nonblocking receive
   * Buffering
     * Zero capacity
     * Bounded capacity
     * Unbounded capacity
   * Pipes (Windows only)
     * Named pipes
     * Anonymous pipes

3. Mulithreaded Programming
   * Pthreads Libary usage

4. Process Scheduling
   * CPU Scheduling Algorithms
     * First Come First Serve
     * Shortest Job First
     * Priority Based
     * Round Robin
     * Highest Response Ratio Next
     * Multilevel Feedback Queue
     * Find visualization implementation of these algorithms [here](https://github.com/tapasweni-pathak/Visualization-of-CPU-Scheduling-Algorithms) using C graphics library.

5. Synchronization
   * Peterson's Solution
   * Mutual exclusion with test and set()
   * Bounded Buffer (Producer Consumer)
   * Readers-Writers
   * Dining Philisopher (find [here]())
   * mutex but using PThread library

6. Deadlocks
   * Drawing resource allocation graph
   * Banker's Algorithm
   * Resource Request Algorithm

7. Memory Management Strategies & Virtual Memory Management
   * Get page number and offset from virtual address
   * Page Replacement Algorithms
     * First in First out
     * Optimal Page Replacement
     * Least Recently Used
     * Least Frequently Used
     * Most Frequently Used
     * Not Recently Used Page Replacement
     * Second-Chance Page Replacement
     * Clock Page Replacement
     * Working Set Page Replacement

8. Secondary Storage
   * Disk Scheduling
     * First Come First Serve
     * Shortest Seek Time First
     * SCAN
     * C-SCAN
     * LOOK
     * C-LOOK

9. Distributed Operating Systems
   * Distributed Synchronization
     * Token Passing
     * Two Phase Commit
     * Ring Alogrithm
     * The Bully Algorithm

Please open an issue for a Operating Systems based algorithm missing in this repository.

If you want to learn about any of the algorithms from above, the books I like are

1. Operating Systems: Design and Implementation, Textbook by Andrew S. Tanenbaum.
2. Operating System Concepts 8 Edition  (Silberschatz, Galvin, Gagne)
3. Operating Systems: Internals and Design Principles, by William Stallings.
4. Modern Operating Systems Book by Andrew S. Tanenbaum

There are books on implementation in Linux, Windows and OSX. The above listed books
also have case studies of implementation details in Linux Kernel, OSX, Windows, MINIX,
UNIX.
