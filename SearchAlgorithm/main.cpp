#include <iostream>
#include<stdlib.h>
#include <vector>
#include <fstream>
using namespace std;
   //linear search: big-O: O(n), Space: O(1): memory use to save variables
        // - Unsorted array
        // - Small Data
        // - Browser 1 time

int linearSearch(const vector<int>& arr, int K){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == K){
            return i;
        }
    }
    return -1;
}
void readFile(const string& url, vector<int>& arr){
    ifstream file(url);
    if(!file.is_open()){
        cout<< "Read file error!" << endl;
        return;
    }
    int x;
    while(file >> x){
        arr.push_back(x);
    }
    file.close();
}
// Ex1: Cho mảng số nguyên chưa sắp xếp, tìm vị trí của K.
/*Input:  [5, 3, 9, 1, 7]
K = 9
Output: 2*/
int findIndexInt(const vector<int>& arr, int K){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == K){
            return i;
        }
    }
    return -1;
}
/*Kiểm tra xem user ID x có tồn tại trong danh sách user đang online không.

onlineUsers = [101, 205, 333, 401]
x = 205
→ true*/
bool checkExistID(const vector<int>& onlineUsers, int x){
    for(int i = 0; i < onlineUsers.size(); i++){
        if(x == onlineUsers[i]){
            return true;
        }
    }
    return false;
}
/*Tìm số đầu tiên > 100 trong mảng.

[20, 45, 60, 150, 200]
→ 150*/
int findNumberGreaterThan100(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 100){
            return arr[i];
        }
    }
    return -1;
}
/*
Tìm request có thời gian xử lý lâu nhất.

times = [120, 90, 300, 200]
→ 300
*/
int findLongestRequest(const vector<int>& requests){
    int max = requests[0];
    for(int i = 1; i < requests.size(); i++){
        if(requests[i] > max){
            max = requests[i];
        }
    }
    return max;
}
/*
Đếm số user có tuổi > 18.

ages = [15, 20, 22, 17, 30]
→ 3
*/
int countNumberRight(const vector<int>& arr, int condition){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > condition){
            count++;
        }
    }
    return count;
}
/*
Kiểm tra mảng A có chứa mảng B không.
A = [1, 3, 5, 7]
B = [3, 8]
→ false
*/
bool checkArrayContainsOrthers(const vector<int>& arrA, const vector<int>& arrB){
    if(arrA.empty()) return false;
    if(arrA.size() < arrB.size()) return false;
    bool flag = true;
    for(int i = 0; i + arrB.size() <= arrA.size(); i++){
        flag = true;
        if(arrA[i] == arrB[0]){
            for(int j = 1; j < arrB.size(); j++){
                if(arrA[i + j] != arrB[j]){
                    flag = false;
                    break;
                }
            }
            if(flag) return flag;
        }
    }
    return false;
}
int main()
{
    vector<int> arr;
    readFile("D:\\GitHub\\CSD\\SearchAlgorithm\\Input.txt", arr);
    int K = 6;
    int index = linearSearch(arr, K);
    if (index != -1) {
        cout << "Found " << K << " at index: " << index << endl;
    } else {
        cout << "Not found" << endl;
    }
}
