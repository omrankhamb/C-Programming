i = 0
def Display(Ans,left,right):
    if(right == len(Ans)):
        return
    global i
    i +=1
    Display(Ans,left,right + 1)
    print(f"Ans {i} : {Ans[left : right + 1]}")
    Display(Ans,left+1,right)
    print(f"Ans {i} : {Ans[left : right + 1]}")
    if(left == len(Ans)):
        return







Ans = '123'
print(len(Ans))
Display(Ans,0,0)