str = input('')

while(str != "."):
    stack = []
    bal = True
    for a in str:
        if(a == '[' or a == '('):
            stack.append(a)
        elif(a == ']'):
            if( (len(stack) == 0) or stack[-1] != '[' ):
                bal = False
            else:
                stack.pop()
        elif(a == ')'):
            if( (len(stack) == 0) or stack[-1] != '(' ):
                bal = False
            else:
                stack.pop()

        if(not(bal)):
            break
    
    if(not(bal) or (len(stack) != 0)):
        print('no')
    else:
        print('yes')

    str = input()