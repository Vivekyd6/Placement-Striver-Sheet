Problem Link :- https://leetcode.com/problems/powx-n/


Naive Approach :- 

  double myPow(double x, int n) {
      double ans = 1.0;
      for (int i = 0; i < n; i++) {
        ans = ans * x;
      }
      return ans;
}
TIME COMPLEXITY :- 0(N)



Optimised Approach :- 

    double myPow(double x, int n) {
       // return (double)pow(x,n); 
        double result = 1.0;
	    for(int i = n; i!=0; i/=2){
		    if (i%2) result *=x;
		    x*=x;
	     }
	 return n<0 ? 1/result :result;
    }


