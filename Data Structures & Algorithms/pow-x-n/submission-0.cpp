class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n==0) return ans;
        if(n%2==0 && n>0){
            n=n/2;
            while(n!=0){
                ans*=x;
                n--;
            }
            ans=ans*ans;

        }
        else if(n%2!=0 && n>0){
            n=n-1;
            n=n/2;
            while(n!=0){
                ans*=x;
                n--;
            }
            ans=ans*ans;
            ans*=x;
            
        }else if(n<0){
            x=1/x;
            n=n*-1;
            if(n%2==0 && n>0){
            n=n/2;
            while(n!=0){
                ans*=x;
                n--;
            }
            ans=ans*ans;

        }
        else if(n%2!=0 && n>0){
            n=n-1;
            n=n/2;
            while(n!=0){
                ans*=x;
                n--;
            }
            ans=ans*ans;
            ans*=x;
            
        }
        }
        return ans;
    }
};
