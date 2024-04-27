// https://leetcode.com/problems/merge-intervals

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    struct compInterval{
        bool operator()(const Interval& a, const Interval& b) {
            return a.start<b.start;
        }
    };

    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
       int n=intervals.size();
       if(n<=0) return res;
       
       sort(intervals.begin(), intervals.end(), compInterval());
       for(int i=0; i<n; i++){
           if(res.empty() || res.back().end < intervals[i].start)
               res.push_back(intervals[i]);
           else
               res.back().end=max(res.back().end, intervals[i].end);
       }
       return res;
    }
};