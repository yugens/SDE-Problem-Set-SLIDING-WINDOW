//Brute force approach having time complexity o(n^2) and space complexity o(1)
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K)
{
   vector<long long> v;
   for(int i=0;i<=N-K;i++)
   {
       int flag=0;
       for(int j=i;j<i+K;j++)
       {
           if(A[j]<0)
           {
           v.push_back(A[j]);
           flag=1;
           break;
           }
       }
       if(flag==0)
       v.push_back(0);
   }
   return v;
}

//
