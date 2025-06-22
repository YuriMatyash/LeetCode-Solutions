class Solution(object):
    def divideString(self, s: str, k: int, fill: str) -> list[str]:
        """
        :type s: str
        :type k: int
        :type fill: str
        :rtype: List[str]
        """

        result = []

        # add chunks of k letts to result each time, till the string is less than 
        while (len(s) >= k):
            prefix = s[:k]
            result.append(prefix)
            s = s[k:]
        
        # if there are remaining letters(and length is less than k), fill the string and add to result
        if len(s) != 0:
            while (len(s) < k):
                s = s + fill
            result.append(s)
            
        return result