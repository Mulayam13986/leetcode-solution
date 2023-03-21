class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        a = bin(left).replace("0b" , "")
        b = bin(right).replace("0b" , "")
        c = len(b)
        d = len(a)
        b = b[::-1][:d][::-1] # taking only last d bits 
        # print(b)
        ans = 0
        i = 0 
        if c > d : 
            return 0
        multiplier = 2**(d-1)
        while i < d :
            
            if b[i]==a[i] :
                ans+= int(b[i])*multiplier
                multiplier//=2
                i+=1
            else :
                break
        
        
        return ans