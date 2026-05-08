# 1.13 Arrays vs. Vectors
C++ supports two kinds of ordered list types.

## Arrays: 
Declared as int `myList[10]`, accessed as `myList[i]`.

## Vectors: 
Declared as `vector<int> myList(10)`, accessed as `myList.at(i)`.

Arrays have a simpler syntax than vectors, but vectors are safer to use. Thus,
using vectors rather than arrays is good practice.

Vectors are safer because the access `v.at(i)` is checked during execution to 
ensure the index is within the vector's valid range. An array access `a[i]` 
involves no such check. Such checking is important; trying to access an array 
with an out-of-range index is a very common error, and one of the hardest 
errors to debug.

### Example:
```c++
int arrayList[5]; 
vector<int> vectorList(5);
```
 - arrayList[6] = 777 will yield a compiler error.
   False

 - vectorList[6] = 777 will yield a compiler error.
   False

 - arrayList[6] = 777 will execute without an error message.
   True

 - vectorList.at(6) = 777 will execute without an error message.
   False

 - vectorList[6] = 777 will execute without an error message.
   True

Just because no compiler error occurs does not mean everything is ok. No range
checking occurs with bracket notation, and therefore `vectorList[6] = 777`
could write data to a memory location that another variable or object is using.

