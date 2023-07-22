//LEETCODE 67: Add Binary
//Given two binary strings a and b, return their sum as a binary string.


class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry=0;

        //doing binary addition

        int i=a.length()-1; //Pointing these to last position of the string
        int j=b.length()-1;

        while(i>=0 or j>=0){
            int sum=carry;
            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }

            if(sum>1) carry=1;//adding 1+1 in binary carry of 1-->(1+1=2>1 therefore carry is 1)
            else carry=0;


            //res+=to_string(sum%2);//if no. is odd append 1 and if even append 0
          //also can write like this
           if(sum%2==0) res+='0';
           else res+='1';
        }
        //if carry is left in end
        if(carry) res+=to_string(carry);

        reverse(res.begin(),res.end());

        return res;

    }
};