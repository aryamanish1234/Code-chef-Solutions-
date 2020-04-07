# cook your dish here
for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    s=""
    if n==1:
        print(l[0])
    else:
        c=0
        f=0
        for i in range(n):
            if (i!=(n-1)) and l[i]+1==l[i+1]:
                c+=1
                if c==1:
                    if i==(n-2):
                        s=s+str(l[i])+','
                    elif l[i+1]+1!=l[i+2]:
                        s=s+str(l[i])+','
                    else:
                        s=s+str(l[i])
                if c>=2 and f==0:
                    s=s+"..."
                    f=1
            else:
                if i!=(n-1):
                    s=s+str(l[i])+','
                    f=0
                    c=0
                else:
                    s=s+str(l[i])
        print(s)             
                
        