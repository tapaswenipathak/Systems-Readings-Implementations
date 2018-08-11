## Process Concepts

This has implementation of algorithms on Inter Process Communication and Synchronization
algorithms.

1. IPC
   * Shared Memory
   * Message Passing
2. Synchronization
   * Blocking Send
   * Non Blocking Send
   * Blocking Receive
   * Non Blocking Receive
3. Buffering
   * Zero capacity
   * Bounded capacity
   * Unbounded capacity
4. Pipes (Windows only)
   * Named pipes
   * Anonymous pipes

Do you know any other algorithm which is present in books mentioned that I missed
writing here, open a issue in the repository or a PR with the code following the
current structure. For advanced systems algorithm implementation see [this](https://github.com/tapasweni-pathak/Systems-Readings-Implementations/tree/master/AOS/Conferences).

#### Structure of files and Some code info on how to add a new algorithm implementaion
These are mostly independent, respective directories would have some info about how the
existing implementation can be extended to implement a new algorithm.

#### To run the codes

Right now run like normal cpp code.

```cpp
g++ file_name.cpp
./a.out
```

or if you want to provide output file

```
g++ -o output file_name.cpp
./output.out
```

#### TODO
1. Error handling and messages
2. Run C++ code like executable or add a Makefile
