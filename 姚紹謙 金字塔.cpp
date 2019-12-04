#include <iostream>
using namespace std;
int main() {
    
    int high;
    do {
        cout << "請輸入高";
        cin >> high;
    }while (high > 8 || high < 1);    
    
    
    for (int i = 0 ; i < high ; i++) {
    
        for (int j = 0 ; j < high ; j++){
        
            if (i + j < high - 1) {
                cout << " ";
            }else {
                cout << "#";
            }
        }
        cout << "\n";
    }
    
  
    
    
    
    


}
