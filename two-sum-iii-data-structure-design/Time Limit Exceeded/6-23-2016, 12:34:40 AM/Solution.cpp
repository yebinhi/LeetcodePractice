// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:

    map<int, int> mymap;
    // Add the number to an internal data structure.
	void add(int number) {
	    mymap[number]++;
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    for(auto it = mymap.begin(); it != mymap.end(); it++){
	        int num= it->first;
	        int y=value-num;
	        if((num==y && it->second >1) || (num !=y && mymap.find(y) != mymap.end())){
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