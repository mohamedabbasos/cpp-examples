#include <iostream>
using namespace std;

void diamondDrawer(int x) {
    // Top part
    for (int i = 0; i <= x; i++) {
       // Single line spaces
        for (int j = 0; j < x - i; j++ ){
      	    cout << " ";
        }
        // Single line stars
        for (int k = 0; k < i * 2 + 1; k++ ){
            cout << "*";
        }
        cout << "\n";
    }
    // Bottom part
    for (int i = x - 1; i >= 0; i--) {
        // Single line spaces
        for (int j = 0; j < x - i; j++ ){
        	cout << " ";
        }
        // Single line stars
        for (int k = 0; k < i * 2 + 1; k++ ){
       	    cout << "*";
        }
        cout << "\n";
    }
}

int main() {
	
    diamondDrawer(10); // 10 for example
    
	return 0;
}
