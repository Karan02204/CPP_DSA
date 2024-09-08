#include <iostream>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            if(max < sum){
                max = sum;
            }

            if(sum < 0) sum = 0;
        }

        return max;
    }
};

int main(){
//     int arr={-4,-2,1,5,-3,7,-5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int max=0;
//     int sum=arr[0];
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum+=arr[j];
//             if(sum>max){
//                 max=sum;
//             }
//         }
//     }
//     cout << max;
// return 0;
}