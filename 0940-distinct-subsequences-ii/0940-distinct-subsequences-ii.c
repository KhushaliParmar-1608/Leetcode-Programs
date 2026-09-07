int distinctSubseqII(char* s) {
    const long long MOD = 1000000007;
    
    long long dp[26] = {0};
    long long total = 1; 
    
    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';

        long long newSubseq = total;
        
        total = (total + newSubseq - dp[index] + MOD) % MOD;
        
        dp[index] = newSubseq;
    }
    return (int)((total - 1 + MOD) % MOD);
}