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
