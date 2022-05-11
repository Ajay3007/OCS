<div align="center">
  <h1> STL </h1>
  <a class="header-badge" target="_blank" href="https://www.linkedin.com/in/ajay-gupt-a93b53192/">
  <img src="https://img.shields.io/badge/style--5eba00.svg?label=LinkedIn&logo=linkedin&style=social">
 
  <sub>Author:
  <a href="https://www.linkedin.com/in/ajay-gupt-a93b53192/" target="_blank">Ajay Gupt</a><br>
  <small>2022</small>
  </sub>
</div>
</div>

# CONTENT 

1. Monk and his Friends [Problem](https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/) [Solution](MonkAndHisFriends.java)
2. Andryusha and Socks [Problem](https://codeforces.com/problemset/problem/782/A?f0a28=1) [Solution](AndryushaAndSocks.java)
3. Second Order Statistics [Problem](https://codeforces.com/problemset/problem/22/A) [Solution](SecondOrderStatistics.java)
4. 



# Array

## Arrays in C++

```cpp
// Declaring 1-D arrays in C++
int myNum[3] = {10, 20, 30};    // array of 3 integers
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};   // array of 4 strings

// Accessing an element
cout << cars[1];    // Output : BMW

// Declaring 2-D arrays in C++
int arr[2][3] = {{2, 5, 1}, {3, 7, 2}};
int arr[2][];   // acceptable, 1st dimension must be mentioned
int arr[][];    // NOT acceptable
int arr[][3];   // NOT acceptable
```
## Arrays in Java

- Arrays in Java work differently than they do in C/C++.
- In Java, all arrays are dynamically allocated.
- Since arrays are objects in Java, we can find their length using the object property length.
- The size of an array must be specified by int or short value and not long.
- The elements in the array allocated by new will automatically be initialized to zero (for numeric types), false (for boolean), or null (for reference types).

```java
// Array declaration and initialization
int arr[] = new int[4];
Student st[] = new Student[5];
// initialize the first elements of the array
st[0] = new Student(1,"aman");    // Student class should be defined with proper constructors

// Declaring array literal
int intArray[] = { 1,2,3,4,5,6,7,8,9,10 };

// 2-D array
int B[][] = {{12, 4, 8, 9},{2, 8, 9},{78, 90, 5, 6}};
int A[][] = new int[4][];   // 1st dimension is Must

// 3-D array
int[][][] intArray = new int[10][20][10];
```


# Vectors

It is a dynamic sized array. Number of elements can be increased or decreased.
- `v.push_back(x)` - insert the value x to the end of the vector. O(1)
- `v.pop_back()` - erase the last element. O(1)
- `v.clear()` - erase all elements. O(n)
- `v.size()` - returns the current size of the vector. O(1)
- [] operator - can be used to access elements like an array. O(1)

```cpp
// definition
vector<data_type> name;
vector<int> v; // empty vector of integers
vector<int> v(10); // vector of integers with 10 elements (all 0)
vector<char> v(10,’h’); // vector of chars with 10 elements (all ‘h’)

// accessing elements
cout << v[0]; // prints the first element in the vector

```

# ArrayList in Java

- In Java same behaviour as vector is shown by ArrayList.
- ArrayList is a part of collection framework and is present in *java.util package*. It provides us with dynamic arrays in Java. 

```java
ArrayList<Integer> list = new ArrayList<Integer>(n);    // Declaring the ArrayList with initial size n
ArrayList<Integer> mylist = new ArrayList<Integer>();     // Declaring the ArrayList of initial size 0
ArrayList<Student> studentList = new ArrayList<Student>();  

list.add(0, 55);  // add 55 at 0th index
mylist.add(34);   // add 34 to the list
mylist.get(0);    // return element present at index 0
mylist.size();    // return size of the arraylist
mylist.remove(1); // remove element present at index 1

```

# Pair

- Pair is a way of creating a Composite-Datatype composed of 2 different primitive/composite datatypes.
- Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.

## Pairs in C++

```cpp
// Defining a pair
pair<data_type1, data_type2> pair_name;
pair<int, string> p;    // pair of int and string
pair<int, pair<int, string>> pp;  // a pair of int and (pair of int and string)
pair<vector<int>,string> p;     // a pair of a (vector of int) and a string

// Initializing values
p = make_pair(4, "Down");   // use make_pair() function
p = {4, "Down"};      // use {} to set the values

pair<string,int> p = {"hello",6};
cout << p.first << " " << p.second; // prints: hello 6

```

### Array of pairs

```cpp
pair<int, string> p[] = {{3, "Ana"}, {5, "david"}, make_pair(60, "Rome")};
for (auto e : p) {
	cout << e.first << " " << e.second << '\n';
}
```
*Output :*
```cmd
3 Ana
5 david
60 Rome
```


# Map

## Map in C++

