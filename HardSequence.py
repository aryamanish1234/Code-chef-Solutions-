# cook your dish here
try:
    for _ in range(int(input())):
        N=int(input())
        A=[]
        i=0
        while i<N:
            if i==0:
                A.append(0)
            elif i==1:
                A.append(0)
            elif N>=2:
                if A[i-1] not in A[:i-1]:
                    A.append(0)
                else:
                    A.append(1 + A[i-2::-1].index(A[i-1]))
            i+=1
        print(A.count(A[-1]))
except Exception as e:
    pass