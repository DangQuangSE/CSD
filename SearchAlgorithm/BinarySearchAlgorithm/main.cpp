#include <iostream>
#include <vector>
using namespace std;
/*
* check list: jump, STL Search
- được sử dụng khi mảng đã được sắp xếp
- mục tiêu: tìm vị trí của x hoặc trả ra true/false
*/
int binarySearch(const vector<int>& arr, int x){
    int left = 0;
    int right = arr.size() - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{

}
