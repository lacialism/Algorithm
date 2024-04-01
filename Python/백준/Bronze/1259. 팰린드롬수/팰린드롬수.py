while(True):
    uin = input()
    if(uin == '0'):
        break
    hs = int(len(uin) / 2)
    if( (uin[:hs])[::-1] != uin[hs + len(uin) % 2:] ):
        print('no')
        continue
    print('yes')