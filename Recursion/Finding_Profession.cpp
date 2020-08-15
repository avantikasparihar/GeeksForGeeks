#include <iostream>
using namespace std;

int recursion(int lvl, int pos) {	// 1 for engg and 0 for doc
    if (lvl == 1) 	// base case : the level parent is always engg
        return 1; 
        
    if (recursion(lvl-1, (pos+1)/2) == 0) 	// if parent is doctor, odd pos is doctor
        return (pos%2)? 0 : 1; 
 
    return (pos%2)?  1 : 0; 	// if parent is enginner, odd pos is engineer
}

int main() {
	// only gravity will pull me down

	// Finding Profession
	
	int t, lvl, pos;
	cin >> t;
	while (t--) {
	    cin >> lvl >> pos;
	    if (recursion(lvl, pos))
	        cout << "Engineer\n";
	    else
	        cout << "Doctor\n";
	}
	return 0;
}