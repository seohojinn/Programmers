#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int max_arr[3] = {0,};
    int arr[5] = {1,2,3,4,5};
    int arr2[8] = {2,1,2,3,2,4,2,5};
    int arr3[10] = {3,3,1,1,2,2,4,4,5,5};
    int idx = 0, max_value = 0;
    
    for(auto it : answers){
        if(it == arr[idx]){
            max_arr[0] += 1;
        }
        idx += 1;
        if(idx == 5){
            idx = 0;
        }
    }
    
    idx = 0;
    for(auto it : answers){
        if(it == arr2[idx]){
            max_arr[1] += 1;
        }
        idx += 1;
        if(idx == 8){
            idx = 0;
        }
    }
    
    idx = 0;
    
    for(auto it : answers){
        if(it == arr3[idx]){
            max_arr[2] += 1;
        }
        idx += 1;
        if(idx == 10){
            idx = 0;
        }
    }
    
    max_value = *max_element(max_arr, max_arr+3);
    
    for(int i=0;i<3;i++){
        if(max_value == max_arr[i]){
            answer.push_back(i+1);
        }
    }
    
    return answer;
}

int main(){
    
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(2);
    
    vector<int> value(solution(arr));
    
    for(auto it : value){
        cout << it << endl;
    }
    
    return 0;
}
