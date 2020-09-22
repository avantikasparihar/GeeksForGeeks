# GeeksForGeeks

My solutions to gfg problems.

*An effort to maintain consistency.*

**Important References** :

* [big int in C++](https://www.geeksforgeeks.org/advanced-c-boost-library/)
```cpp
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std;
```
* [lowerbound and upperbound](https://www.geeksforgeeks.org/upper_bound-and-lower_bound-for-vector-in-cpp-stl/)
```cpp
vector<int>::iterator lower,upper; 
lower = lower_bound (v.begin(), v.end(), val);  
upper = upper_bound (v.begin(), v.end(), val);  
```
* special case in strings as input
```cpp
cin >> b;    // int as input
cin.ignore();   // used when taking input of a string after a number
getline(cin, d);    // a sentence as input
```
