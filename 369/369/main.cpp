#include <iostream>

using namespace std;

int main() {
    
    int a = 0, b = 0;
    int count = 0, data = 0;
    
    cin >> a >> b;
    
    for(int i=a;i<=b;i++){
        data = i;
        while(data != 0){
            if(data % 10 == 3 || data % 10 == 6 || data % 10 == 9){
                count += 1;
            }
            data /= 10;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
