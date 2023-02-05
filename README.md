# CPP08
Introducing the STL! (Standard Template Library). Students are encouraged to use the Containers (vector/list/map/and so forth) and Algorithms templates as much as possible.

ex00: use a container
ex01: create a storage for N integers
ex02: make the std::stack container iterable. No var specified, so made class template
Here I used a class template and made it inherit from std::stack
What is a container?
An object that holds and manages a collection of elements. The C++ standard library provides several standard containers, such as vector, list, map, deque and set. and classes, wuch as vector, 

'Associated containers'
An associative container in C++ is a type of container in the Standard Template Library (STL) that stores elements in a sorted manner and allows for fast access, insertion and deletion of elements based on a key. The key can be used to index into the container to retrieve elements, instead of using a numerical index. Examples of associative containers in C++ are std::map, std::set, and std::unordered_map. These containers are implemented as balanced trees, hash tables, or other data structures that provide fast access to elements based on the key.

What is an iterator?
An iterator is an object that allows you to traverse and access the elements of a container, such as an array, a list, a vector, or a map. It acts like a pointer to the elements of the container, and you can use it to move through the elements one by one. Iterators provide a common interface for different types of containers, so you can write generic algorithms that work with any container that provides an iterator. **need to dereference it to find out what's in it**

Notes on ex01: I tried to use std::array, however this cannot take unsigned int as a parameter, so it was unsuitable. 
REMEMBER: [if you think a function migth throw and exception, put it in a try and catch block]

What is std::stack ?

std::stack is an abstract data type that implements a last-in-first-out (LIFO) data structure. It provides a limited set of operations, including push, pop, top, and empty, that allow you to add and remove elements from the top of the stack. The push and pop operations are constant-time operations, while top and empty are both constant-time operations.

std::vector, on the other hand, is a dynamic array that provides constant-time random access to elements, and it provides a rich set of operations for inserting, deleting, and manipulating elements. It can grow or shrink in size as needed, and its size can be changed dynamically at runtime.

In summary, a std::stack is designed to provide fast and efficient access to the top element of a LIFO data structure, while a std::vector provides constant-time random access to elements and a rich set of operations for managing elements. If you need to implement a LIFO data structure, use a std::stack, and if you need a dynamic array with constant-time random access to elements, use a std::vector.

