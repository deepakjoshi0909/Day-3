class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = 0;
        
        for (int i = 0; i < k; i++) {
            totalSum += cardPoints[i];
        }
        
        int maxSum = totalSum;
        
        for (int i = 0; i < k; i++) {
            totalSum += cardPoints[n - 1 - i] - cardPoints[k - 1 - i];
            maxSum = max(maxSum, totalSum);
        }
        
        return maxSum;
    }
};
