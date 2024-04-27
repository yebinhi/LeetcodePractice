// https://leetcode.com/problems/two-sum-iii-data-structure-design

class TwoSum {
public:

    map<int, int> mymap;
    // Add the number to an internal data structure.
	void add(int number) {
	    if(mymap.find(number) != mymap.end()){
	        mymap[number]++;
	    }else{
	        mymap[number]=1;
	    }
	}

    // Find if there exists any pair of numbers which sum is equal to the value.
	bool find(int value) {
	    for(auto it = mymap.begin(); it != mymap.end(); it++){
	        if(mymap.find(value - it->first) != mymap.end()){
	            if(it->first*2 == value && it->second <2){
	                return false;
	            }
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