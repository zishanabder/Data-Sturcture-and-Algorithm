#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
    vector<int> v(nums.size());
    for(int i = 0; i < nums.size(); i++){
        v[(i + k) % nums.size()] = nums[i];    // Right Rotated;]
        // v[(i - k) % nums.size()] = nums[i];    // Left Rotated;
    }
    nums = v;
    for(int i = 0; i < nums.size(); i++){
			cout << nums[i] << " ";
		}
}
int main(){
  	vector<int> nums = {3, 4, 5, 1, 2};
  	int k = 2;
	rotate(nums, k);
}
