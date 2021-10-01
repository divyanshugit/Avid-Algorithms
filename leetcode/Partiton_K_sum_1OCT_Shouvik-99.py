#My Submission to Leetcode Daily challege 30 Sept
#Link: https://leetcode.com/explore/challenge/card/september-leetcoding-challenge-2021/640/week-5-september-29th-september-30th/3993/
class Solution:
    def canPartitionKSubsets(self, nums: List[int], k: int) -> bool:
        s,n=sum(nums),len(nums)
        if s%k:
            return False
        
        each=s//k
        
        d=defaultdict(int)
        for i in nums:
            d[i]+=1
        nums.sort()
        def helper(i,curr,summ):
            #print(i,curr)
            if summ>each:
                return
            if i==n:
                sm=summ
                if sm==each:
                    possible=1
                    dd=defaultdict(int)
                    for j in curr:
                        dd[j]+=1
                        if dd[j]>d[j]:
                            possible=0
                            break
                    if possible:
                        for k in dd:
                            d[k]-=dd[k]
                return
            ll=curr.copy()
            curr.append(nums[i])
            helper(i+1,ll,summ)
            helper(i+1,curr,summ+nums[i])
        helper(0,[],0)
        #print(d)
        for i in d:
            if d[i]:
                return False
        return True
