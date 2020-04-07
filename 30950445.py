# cook your dish here

for _ in range(int(input())):
    N,A,B,C,D,P,Q,Y=map(int,input().split())
    x=list(map(int,input().split()))
    bywalk=(abs(x[B-1]-x[A-1])*P)
    if (abs(x[C-1]-x[A-1])*P<=Y):
        bytrain=(abs(x[D-1]-x[B-1]))*P+(abs(x[D-1]-x[C-1]))*Q + Y
        print(min(bywalk,bytrain))
    else:
        print(bywalk)
    
        
