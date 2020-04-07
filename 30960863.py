# cook your dish here
z=[]
for _ in range(int(input())):
    dict1={}
    dict2={}
    for _ in range(12):
        a,b,c,d,e= input().split()
        b,d= int(b),int(d)
        
        
        if b>d:
            j=3
            k=0
        elif b<d:
            j=0
            k=3
        else:
            j=1
            k=1
            
        if a in dict1.keys():
            dict1[a] +=j
            dict2[a] +=b-d

        else:
            dict1[a]=j
            dict2[a]=b-d

        if e in dict1.keys():
            dict1[e] +=k
            dict2[e] +=d-b
            
        else:
            dict1[e]=k
            dict2[e]=d-b
        
    p=list(dict1.keys())
    q=list(dict1.values())
    
    #r=list(dict2.keys())
    s=list(dict2.values())
    
    
    m=[]
    for _ in range(2):
        if q.count(max(q))==1:
            t=q.index(max(q))
            q[t] =-1
            m.append(p[t])
            
        else:
            while (True):
                t=s.index(max(s))
                if q[t]==max(q):
                    m.append(p[t])
                    s[t]=(min(s)-1)
                    break
                else:
                    s[t]=(min(s)-1)
                    continue
    
    z.append(m)

for i in z:
    print(" ".join(i))
            
            
    
        