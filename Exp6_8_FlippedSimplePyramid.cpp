// VIDHI RATAN
// 24070123131
// B2
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number:";
    cin >> n;
  for(int i = 1;i <= n;i++){
    for(int k = n-i; k >=1; k--) {
        cout << "  "; 
    }
    for(int j = 1;j<=i;j++){
        cout << "* ";
    }
    cout << "\n";  
  }
  return 0;
}

/*
Output:
Enter Number:5
        * 
      * *
    * * *
  * * * *
* * * * *
*/
