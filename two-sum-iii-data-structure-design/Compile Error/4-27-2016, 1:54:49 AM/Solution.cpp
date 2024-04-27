// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:
     
     vector<int> data;

    // Add the number to an internal data structure.
	void add(int number) {
	    
	    data.push_back(number);
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    unordered_map<int> map;
	    int size=data.size();
	    for(int i=0; i<size;i++){
	        if(map.find(value-data[i])){
	            return true;
	        }
	    }
	    return false;
	}
};


// Your TwoSum object will be instantiated and called as such:
// TwoSum twoSum;
// twoSum.add(number);
// twoSum.find(value);