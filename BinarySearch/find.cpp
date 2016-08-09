/*
  This uses binary search algorithm
  to find an element in a sorted array
  
  If the element is found, then we return 
  it's index or else we return -1
  
  THIS IS THE MOST BASIC IMPLEMENTATION OF BINARY SEARCH
*/


#include <iostream>
#include <vector>

int find(std::vector<int> &v, int numnber){
    int start = 0;
    int end = (int)v.size() - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if (v[mid] == numnber)
            return mid;
        else if(v[mid] < numnber)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}


int main(){

    std::vector<int> v {10, 23, 45, 60, 92, 103};
    std::cout << find(v, 15) << std::endl;

    return 0;
}
