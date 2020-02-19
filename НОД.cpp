    #include <iostream>
    using namespace std;
    int main() {
      int y, x;
      cout<<"x:";
      cin >> x;
      cout<<"y:";
	  cin >> y;
      while (x != y) {
        if (x>y) {
          x = x-y;
        }
        else {
          y = y-x;
        }
      }
      cout << x;
      return 0;
    }
