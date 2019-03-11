class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        mcode=[".-","-...","-.-.","-..",".","..-.","--.","....","..",\
               ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",\
               "...","-","..-","...-",".--","-..-","-.--","--.."]
        result=[]
        for i in range(len(words)):
            temp=''
            for j in range(len(words[i])):
                temp+=mcode[ord(words[i][j])-97]
            if temp not in result:
                result.append(temp)
        
        return len(result)