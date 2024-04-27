// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:
     
     unordered_multiset<int> map;
    
    // Add the number to an internal data structure.
	void add(int number) {
	    map.insert(number);
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    for(int i:map){
	        if(2*i == value){
	            if(map.count(value-i)>=2)
	            return true;
	        }else{
	            if(map.count(value-i)>=1)
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