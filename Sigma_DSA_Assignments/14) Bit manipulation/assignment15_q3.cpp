#include<bits/stdc++.h>
using namespace std;    

int xorBeauty(vector<int>& nums) {
int a = 0, b = 0;
for(int i=0; i<nums.size(); i++){
a = a | nums[i];
b = b ^ nums[i];
}
return ( a & b );
}

int main() {
    vector<int> nums = {1, 2, 3};
    cout << xorBeauty(nums) << endl;
    return 0;
}