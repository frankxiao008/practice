class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
  	sort(nums.begin(), nums.end());
	vector<vector<int>> res;
	for(unsigned int i=0; i<nums.size(); i++){
		if((i>0) && (nums[i]==nums[i-1]))
			continue;
		int l=i+1, r = nums.size()-1;
		while(l<r){
			int s = nums[i] + nums[l] + nums[r];
			if(sum == 0){
				res.push_back(vector<int>{ nums[i], nums[l], nums[r]});
				while(l<r && nums[l]==nums[l+1]) l++;
				while(l<r && nums[j]==nums[j-1]) r--;
				l++;
				r--;
			}else if (sum < 0){
				l++;
			}else if( sum > 0) {
				r--;
			
			}
		}
	}
	return res;
    }
};
