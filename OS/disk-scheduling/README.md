## Operating Systems Disk Scheduling Algorithms

This contains implementation of Disk Scheduling Algorithms.

1. First Come First Serve
2. Shortest Seek Time First
3. SCAN
4. C-SCAN
5. LOOK
6. CLOOK

The programs outputs the total seek time taken by following the algorithm and sequence
in which the track number request were served. Do you know any other algorithm which
is present in books mentioned that I missed writing here, open a issue in the repository
or a PR with the code following the current structure. For advanced algorithm implementation
see [this](https://github.com/tapasweni-pathak/Systems-Readings-Implementations/tree/master/AOS/Conferences).

#### Structure of files and Some code info on how to add a new algorithm implementaion
`struct.h` has a structure declaration and definition and all files uses the object
and varibales in the structure.

Every algorithm is implemented as file-name.cpp.

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
