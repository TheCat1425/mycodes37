t = int(input())

for _ in range(t):
    s = input()
    freq = [0] * 26
    
    for c in s:
        freq[ord(c) - ord('a')] += 1
    
    palindrome = []
    odd_char = None
    
    for i in range(26):
        if freq[i] % 2 == 1:
            if odd_char is not None:
                print("NO SOLUTION")
                break
            odd_char = chr(i + ord('a'))
        
        for _ in range(freq[i] // 2):
            palindrome.append(chr(i + ord('a')))
    
    else:
        if odd_char is not None:
            palindrome.append(odd_char)
        
        palindrome += palindrome[::-1]
        print(''.join(palindrome))
