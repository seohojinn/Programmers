#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

string solution(vector<string> seoul) {
    
    string answer = "";
    int size = 0, idx = 0;
    size = int(seoul.size());
    
    for(int i=0;i<size;i++){
        if(seoul[i] == "Kim"){
            idx = i;
            break;
        }
    }
    
    answer = "김서방은 " + to_string(idx) + "에 있다";
    
    
    return answer;
}
