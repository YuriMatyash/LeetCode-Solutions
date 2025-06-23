class Solution:
    def kMirror(self, k: int, n: int) -> int:
        result = 0
        counter = 0

        # Too slow and inefficient
        '''
        while counter < n:
            if not self.isPalindrome(currentNum):                   # Current num isn't a palindrome
                currentNum += 1 
            else:
                modCurrentNum = self.convertModK(currentNum, k)

                if not self.isPalindrome(modCurrentNum):            # mod k current num isn't a palindrome
                    currentNum += 1
                else:                                               # they're both palindromes!
                    result += currentNum
                    counter += 1
                    currentNum += 1

        return result
        '''

        for p in self.generateDecimalPalindromes():
            if self.isPalindrome(self.convertModK(p, k)):
                result += p
                counter += 1
                if counter == n:
                    break
        return result


    def sumArray(self, arr: list) -> int:
        result = 0

        while arr:
            result += arr[-1]
            arr.pop()

        return result

    '''
    def convertModK(self, n: int, k: int) -> int:
        stringNum = ''

        while n:
            remainder = n % k
            stringNum = str(remainder) + stringNum
            n = int(n / k)

        return int(stringNum)
    '''
    
    def convertModK(self, n: int, k: int) -> str:
        digits = []

        while n:
            digits.append(str(n % k))
            n //= k
            
        return ''.join(digits[::-1])

    '''
    def isPalindrome(self, n: int) -> bool:
        stringNum = str(n)

        while len(stringNum) >= 1:
            if stringNum[0] != stringNum[-1]:
                return False
            stringNum = stringNum[1:-1]

        return True    
    '''

    def isPalindrome(self, n: int) -> bool:
        stringNum = str(n)
        flipped = stringNum[::-1]
        return stringNum == flipped
    

    def generateDecimalPalindromes(self):
        for i in range(1, 10):
            yield i

        length = 2
        while True:
            half = 10 ** ((length - 1) // 2)
            end = 10 ** ((length + 1) // 2)
            for i in range(half, end):
                s = str(i)
                if length % 2 == 0:
                    yield int(s + s[::-1])
                else:
                    yield int(s + s[-2::-1])
            length += 1