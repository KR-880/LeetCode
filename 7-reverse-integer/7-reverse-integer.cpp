class Solution {
public:
    int reverse(int x) {
        if(x>=2147483647 || x<=-2147483648)
            return 0;
        long int num=0;
        if(x>0){
            while(x>0){
                num=num*10;
                if(num>=2147483647 || num<=-2147483648)
                    return 0;
                num=num+(x%10);
                x=x/10;
            }
        }
        else{
            x=-1*x;
            while(x>0){
                num=num*10;
                if(num>=2147483647 || num<=-2147483648)
                    return 0;
                num=num+(x%10);
                x=x/10;
            }
            num=-1*num;
        }
        return int(num);
    }
};