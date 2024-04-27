// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:

     unordered_multiset<int> dict;
    // Add the number to an internal data structure.
	void add(int number) {
	    dict.insert(number);
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    for(auto i:dict){
	        if(dict.count(value-i)>=2){
	            return true;
	        }else if(dict.count(value-i)>=1 && 2*i != value){
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