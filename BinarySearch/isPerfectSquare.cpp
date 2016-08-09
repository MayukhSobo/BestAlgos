/*
 This uses the binary search to
 find if a numner is perfect square or not
 and if it is, then return the square root
 of the number.

 THIS IS AN EXAMPLE WHERE BINARY SEARCH IS USED
 EVEN WITHOUT ANY SORTED ARRAY

*/

#include <iostream>
#include <vector>
#include <utility>

std::pair<bool, int> isPerfectSquare(int number){
    int start = 0;
    int end = number;
    std::pair <bool, int> ret = std::make_pair(false, -1);
    while(start <= end) {
        int mid = (start + end) / 2;
        if (mid * mid == number) {ret = std::make_pair(true, mid); break;}
        else if (mid * mid < number) start = mid + 1;
        else end = mid - 1;
    }

    return ret;

}


int main(){
    std::pair<bool, int> val = isPerfectSquare(49);
    if(val.first)
        std::cout << val.second << std::endl;

    val = isPerfectSquare(45);
    if(val.first)
        std::cout << val.second << std::endl;

    return 0;
}
