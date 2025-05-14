class Solution {
    public:
        string toHex(int num) {
         
           // here using the brute force solution
    
           if(num == 0){
            return to_string(0);
           }
    
          unsigned int n = num;
    
          string digit = "0123456789abcdef";
    
          string ans  = "";
    
    
          while(n>0){
             int rem = n%16;
            if(rem < 10){
              ans += rem +'0';  // number to  charector. 
            }
            else{
                ans += digit[rem];
            }
         n = n/16;
          }
           
    
            reverse(ans.begin(),ans.end());
            return ans;
    
    
    
        }
    };