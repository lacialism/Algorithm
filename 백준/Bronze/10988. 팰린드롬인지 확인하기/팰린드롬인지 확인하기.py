cin = input()
for i in range(int(len(cin)/2)):
    if(cin[i] != cin[-i-1]):
        print(0)
        exit()
print(1)