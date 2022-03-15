class ShiftCipher():
    
    def __init__(self,secret,number):
        self._secret = secret
        self._number = number
        self.alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
        self.specialChars = ['!', '?', '@','#', '$', '*'];
        
    def encrypt(self):
        finalArr = []
        self._secret = list(self._secret.lower())
        
        for item in range(len(self._secret)):
            
            if self._secret[item] == " ":
                finalArr.insert(item,self._secret[item]) # insert at specific index and specific element list.insert(position, element)
                
            if self._secret[item] in self.specialChars:
                finalArr.append(self._secret[item])
            
            for i in range(len(self.alphabet)):
                
                if self.alphabet[i] == self._secret[item]:
                    
                    if i + self._number >= len(self.alphabet):
                        finalArr.append(self.alphabet[i+self._number-len(self.alphabet)])
                    
                    else:
                        finalArr.append(self.alphabet[i+self._number])
                        
        return ''.join(finalArr)
obj = ShiftCipher("eat ass",3)
print(obj.encrypt())
