class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        for i in range(len(haystack)):
            if needle==haystack[i:i+len(needle)]:
                return i
        else:
            if len(needle)==0:
                return 0
            else:
                return -1
