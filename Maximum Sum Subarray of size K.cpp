//Time complexity o(n) and space complexity o(1)
class Solution{   
public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0,j=0,sum=0,maxx=INT_MIN;
        while(j<N)
        {
          sum+=Arr[j];
          if(j-i+1<K)
          {
            j++;
          }
          else if(j-i+1==K)
          {
              maxx=max(sum,maxx);
              sum -= Arr[i];
              i++;
              j++;
          }
        }
        return maxx;
        // code here 
    }
};
