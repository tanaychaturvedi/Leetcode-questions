class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        self.isNextWild(p,0)
        dp = set()
        return self.isMatchHelper(s, p, 0, 0, dp)
        
    def isNextWild(self, p, p_idx):
        if (len(p) > p_idx + 1 and p[p_idx + 1] == '*'):
            return True
        else: return False
    
    def isNextReg(self, p, p_idx):
        return len(p) > p_idx + 1 and p[p_idx+1] != '*'
    
    def isCurReg(self, p, p_idx):
        return len(p) > p_idx and p[p_idx] != '*'
    
    def isCurSpecial(self, p, p_idx):
        return len(p) > p_idx and p[p_idx] == '.'
    
    def isMatchHelper(self, s, p, s_idx, p_idx, dp):
        if f"s{s_idx}p{p_idx}" in dp:
            return False
        else:
            dp.add(f"s{s_idx}p{p_idx}")
        if len(s) == s_idx and len(p) == p_idx:
            return True
        elif len(s) == s_idx:        
            if self.isNextWild(p, p_idx):
                return self.isMatchHelper(s, p, s_idx, p_idx + 2, dp)
            return False
        elif len(p) == p_idx:
                return False
        if self.isNextReg(p, p_idx):
            if p[p_idx] == s[s_idx] or self.isCurSpecial(p,p_idx):
                result = self.isMatchHelper(s, p, s_idx+1, p_idx+1, dp)
                return result
            else:
                return False
        elif self.isCurReg(p, p_idx) and self.isNextWild(p, p_idx):
            k = 0
            res = True
            while True:
                if (s_idx + k < len(s) and p[p_idx] == s[s_idx + k]) or (s_idx + k < len(s) and self.isCurSpecial(p, p_idx)):
                    res = self.isMatchHelper(s, p, s_idx + k + 1, p_idx + 2, dp)
                    if res:
                        return True          
                else:
                    break
                k += 1
            res = self.isMatchHelper(s, p, s_idx, p_idx + 2, dp)
            return res
        elif self.isCurSpecial(p,p_idx):
            return self.isMatchHelper(s, p, s_idx+1, p_idx+1, dp)
        elif self.isCurReg(p,p_idx) and p[p_idx] == s[s_idx]:
            return self.isMatchHelper(s, p, s_idx+1, p_idx+1, dp)
