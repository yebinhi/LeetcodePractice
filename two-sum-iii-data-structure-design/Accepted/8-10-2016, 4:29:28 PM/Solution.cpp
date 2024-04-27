// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:
    unordered_map<int, int> m;

    // Add the number to an internal data structure.
	void add(int number) {
	    m[number]++;
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    for(auto it : m){
	        int f = it.first;
	        int tmp=value-f;
	        if(tmp==f){
	            
	            if(it.second >=2) return true;
	            
	        }else if(m.find(tmp) != m.end()){
	            
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