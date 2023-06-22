// # Left Rotated and Right Rotated Array:

// Right Roatad Array:
void rotate(vector<int>& nums, int k) {
    vector<int> v(nums.size());
	
    for(int i = 0; i < nums.size(); i++){
        v[(i + k) % nums.size()] = nums[i];   			// Right roated Array
				v[(i - k) % nums.size()] = nums[i];   			// Left roated Array
    }
    nums = v;
}
                                   
*/
																	 K == Number of Rotated
																	 i == index
/*
