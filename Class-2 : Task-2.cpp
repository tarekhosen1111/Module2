class Solution {
public:
    long long int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector< int>vc(n+1);
        int i;
        for(i=1;i<=n;i++){
            vc[i]=vc[i-1]+arr[i-1];
        }
        int j;
        long long int sum=0;
        for(i=1;i<=n;i=i+2){
            for(j=i;j<=n;j++){
               int k=vc[j]-vc[j-i];
                sum=sum+k;
            }
        }
        return sum;
    }
};
