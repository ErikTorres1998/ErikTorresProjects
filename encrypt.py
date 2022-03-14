class ShiftCipher():
    
    def __init__(self,secret,number):
        self._secret = secret
        self._number = number
        self.alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
        self.specialChars = ['!', '?', '@','#', '$', '*'];
        
    def encrypt(self):
        finalArr = []
        self._secret = list(self._secret.lower().replace(" ", ""))
        
        print(self._secret)
        for item in self._secret:
            for i in range(len(self.alphabet)):
                
                if self.alphabet[i] == item:
                    
                    if i + self._number >= len(self.alphabet):
                        finalArr.append(self.alphabet[i+self._number-len(self.alphabet)])
                    
                    else:
                        finalArr.append(self.alphabet[i+self._number])
                        
        if item in self.specialChars:
            finalArr.append(item)
        return ''.join(finalArr)
obj = ShiftCipher("eat ass",3)
print(obj.encrypt())
