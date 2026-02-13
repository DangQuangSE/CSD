#include <iostream>
#include <vector>
using namespace std;
/*
* check list: jump, STL Search
- được sử dụng khi mảng đã được sắp xếp
- mục tiêu: tìm vị trí của x hoặc trả ra true/false
*/
int binarySearch(const vector<int>& arr, int key){
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        int mid = left + (right -left)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
/*
Cho mảng tăng dần a gồm n số nguyên.
Tìm vị trí của x. Nếu không tồn tại in -1.
*/
int findIndexKey(const vector<int>& arr, int key){
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == key) return mid;
        if(arr[mid] < key){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
/*
1 2 3 3 5 5 5 5 6 7 7 8
0 1 2 3 4 5 6 7 8 9 10 11
 find 5
Cho mảng đã sắp xếp (có thể trùng).
Đếm số lần xuất hiện của x.

*/
int firstIndex(const vector<int>& arr, int x){
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == x){
            result = mid;
            right = mid - 1;
        }
        if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = right - 1;
        }
    }
    return result;
}
int lastIndex(const vector<int>& arr, int x){
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == x){
            result = mid;
            left = mid + 1;
        }
        if(arr[mid] < x){
            left = mid - 1;
        }else{
            right = mid + 1;
        }
    }
    return result;
}
int countXInArray(const vector<int>& arr, int x){
    int first = firstIndex(arr, x);
    int last = lastIndex(arr, x);
    if(first == -1 || last == -1) return -1;
    return last - first + 1;

}
int main()
{

}
