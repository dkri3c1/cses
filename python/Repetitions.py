inpt = input()

count=1

l=-1

arr=[]

if len(inpt) == 1:
    print(1)

else:
    for i in range(1,len(inpt)):
        if inpt[i-1] == inpt[i]:
            count+=1
            l+=1
            if l>=-1:
                arr.append(count)
        else:
            arr.append(count)
            l=0
            count=1
    print(max(arr))