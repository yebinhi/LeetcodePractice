// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:
     
     vector<int> data;
     unordered_map<int, int> map;
    
    // Add the number to an internal data structure.
	void add(int number) {
	    data.push_back(number);
	    map[number]=map.size();
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    int size = data.size();
	    for(int i=0; i<size; i++){
	        int gap= value-data[i];
	        if(map.find(gap) != map.end() && i != map[gap){
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