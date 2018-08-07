# Operating System Algorithms

This contains implementation of Operating System Algorithms.

These implementations outputs the result and not a visualization, to learn how these
work see [this](), for advanced operating system algorithms implementation see [this](https://github.com/tapasweni-pathak/implementations-and-notes)

1. System Structures
   * System call implementation from user program

2. Process Concept
   * Interprocess Communication (done)
     * Shared Memory
     * Message Passing
   * Synchronization (todo)
     * Blocking send
     * Nonblocking send
     * Blocking receive
     * Nonblocking receive
   * Buffering (todo)
     * Zero capacity
     * Bounded capacity
     * Unbounded capacity
   * Pipes (windows only)(todo)
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
     * Find visualization implementation [here](https://github.com/tapasweni-pathak/Visualization-of-CPU-Scheduling-Algorithms) with c graphics library

5. Synchronization (todo)
   * Peterson's Solution
   * Mutual exclusion with test and set()
   * Bounded Buffer (Producer Consumer)
   * Readers-Writers
   * Dining Philisopher (find [here]())
   * mutex but using PThread library

6. Deadlocks
   * Drawing resource allocation graph (no visualization)
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

Create an issue for the algorithm missing in this repository.
