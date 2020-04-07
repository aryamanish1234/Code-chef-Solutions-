n = int(input())
for i in range(n):
    num = int(input())
    dataset = {}
    for j in range(num):
        x,y = input().split()
        y=int(y)
        if dataset.get(x):
            dataset[x][y]+=1
        else:
            dataset[x]=[0,0]
            dataset[x][y]+=1
    count = 0
    for x in dataset:
        count+=max(dataset[x])
    print(count)