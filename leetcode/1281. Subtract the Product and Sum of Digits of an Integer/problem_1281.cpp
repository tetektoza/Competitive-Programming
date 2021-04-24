class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod_of_digs = 1;
        int sum_of_digs = 0;
        int remainder;
        while(n!=0) {
            remainder = n % 10;
            prod_of_digs *= remainder;
            sum_of_digs += remainder;
            n = n / 10;
        }




        return (prod_of_digs - sum_of_digs);
    }
};