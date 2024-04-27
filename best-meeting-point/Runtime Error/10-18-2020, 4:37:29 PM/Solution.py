// https://leetcode.com/problems/best-meeting-point

class Solution:
    
    def cal_distance(self, p_list, p):
        d=0
        for point in p_list:
            d += abs(point[0]-p[0]) + abs(point[1]-p[1])
            
        return d
        
        
    def minTotalDistance(self, grid: List[List[int]]) -> int:
        # find all points
        points =[]
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == 1:
                    points.append([row, col])
        
        # calculate all distance
        distance =[]
        for row in range(len(grid)-1):
            for col in range(len(grid[0])-1):
                if grid[row][col] != 1:
                    distance.append(self.cal_distance(points, [row, col]))
        
        # return
        return min(distance)