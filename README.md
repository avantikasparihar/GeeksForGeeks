# GeeksForGeeks

My solutions to gfg problems.

*An effort to maintain consistency.*

**Important References/Points** :

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
* [string class](https://www.cdn.geeksforgeeks.org/c-string-class-applications-set-2/)
```cpp
string str3(5, '#');    // str3="#####"
string str4(str1, 6, 6);    // next 6 chars starting from char at index 6 of str1
string str5(str2.begin(), str2.begin() + 5);    // same as above, uses iterator
```
