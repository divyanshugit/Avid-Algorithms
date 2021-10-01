class Solution:
    # recursive solution with memoization

    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        t1=len(text1)
        t2=len(text2)
        
        def helper(t1, t2, d={}):
            if t1==0 or t2==0:
                return 0

            k = (t1, t2)
            if k not in d:

                if text1[t1-1] == text2[t2-1]:
                    d[k] = helper(t1-1,t2-1,d) + 1
                else:
                    d[k] = max(helper(t1,t2-1,d), helper(t1-1,t2,d))
                    
            return d[k] # return currrent key
        
        return helper(t1, t2)

if __name__=="__main__":
    text1=input("Enter text-1: ")
    text2=input("Enter text-2: ")
    obj=Solution()
    print(obj.longestCommonSubsequence(text1, text2))
