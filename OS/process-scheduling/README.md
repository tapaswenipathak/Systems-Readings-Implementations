## Operating Systems CPU Scheduling Algorithms

This contains implementation of Disk Scheduling Algorithms.

1. First Come First Serve
2. Shortest Seek Time First
3. Priority Based
4. Round Robin
5. Highest Response Ration Next
6. Multilevel Queue
7. Multilevel Feedback Queue

The programs outputs the waiting time, turnaround time, response time, CPU Utilization
and/or CPU idle time taken by following the algorithm. What else can you calculate from
Gantt chart? Do you know any other algorithm which is present in books mentioned that
I missed writing here, open a issue in the repository or a PR with the code following
the current structure. To learn these visually see [this](https://github.com/tapasweni-pathak/Visualization-of-CPU-Scheduling-Algorithms) For advanced algorithm implementation see [this](https://github.com/tapasweni-pathak/Systems-Readings-Implementations/tree/master/AOS/Conferences).

#### Structure of files and Some code info on how to add a new algorithm implementaion
`struct.h` has a structure declaration and definition of a process and all files uses the object
and varibales in the structure.

Every algorithm is implemented as algorithm-name.cpp.

#### To run the codes

Right now run like normal cpp code.

```cpp
g++ algorithm_name.cpp
./a.out
```

or if you want to provide output file

```
g++ -o output algorithm_name.cpp
./output.out
```

#### TODO
1. Error handling and messages
2. Run C++ code like executable or add a Makefile
