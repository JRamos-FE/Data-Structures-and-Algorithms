#include <iostream>
#include <random>
#include <vector>

using namespace std;

//Max Product Function
long long max_product_pair(vector<int> &nums){
    int n = nums.size();
    int maxIndex1 = -1;
    int maxIndex2 = -1;

    for (int i =  0; i < n; ++i){
        if ((maxIndex1 == -1) || (nums[i] > nums[maxIndex1])){
            maxIndex2 = maxIndex1;
            maxIndex1 = i;
        }
        else if ((maxIndex2 == -1 || nums[i] > nums[maxIndex2]) && i != maxIndex1){
            maxIndex2 = i;
        }
    }
    return static_cast<long long>(nums[maxIndex1]) * static_cast<long long>(nums[maxIndex2]);
}

//Main function
int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i){
        cin >> nums[i];
    }

    cout << max_product_pair(nums) << endl;

    return 0;
}