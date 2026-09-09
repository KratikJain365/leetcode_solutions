class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

if (n >= 1000) {//ek ek karke condition check hogi aur uske according uske commas ans mai add ho jayenge
    ans += n - 999;
}

if (n >= 1000000) {
    ans += n - 999999;
}

if (n >= 1000000000) {
    ans += n - 999999999;
}

if (n >= 1000000000000) {
    ans += n - 999999999999;
}

if (n >= 1000000000000000) {
    ans += n - 999999999999999;
}

return ans;
        
    }
};