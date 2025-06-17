class Solution {
public:
    const int MOD=1e9+7;
    long long mod_pow(int a, int k){
        int res=1;
        while (k){
            if (k&1) res=(1ll*res*a)%MOD; 
            k>>=1;
            a=(1LL*a*a)%MOD;
        }
        return res;
    }

    int countGoodArrays(int n, int m, int k) {
        int nn=n-1;
        int r=min(k,(n-k-1));
        int res=1, d=1;
        for (int i=0;i<r;i++){
            res=(1LL*res*(nn-i))%MOD;
            d=(1LL*d*(i+1))%MOD;
        }
        res=(res*mod_pow(d,MOD-2))%MOD;
        return ((1LL*res*m)%MOD*mod_pow(m-1,n-k-1))%MOD;
    }
};