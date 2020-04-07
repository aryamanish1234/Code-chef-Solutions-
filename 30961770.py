class _Node:
    def __init__(self, val, pos):
        self.val=val
        self.right=None
        self.left=None
        self.pos=pos

def min(val):
    current = val
    while current.left != None:
        current = current.left
    return current
    
        
def insert(node, val, pos):
    if node == None:
        print(pos)
        return _Node(val, pos)
    if val < node.val:
        node.left = insert(node.left, val, 2*pos)
    else:
        node.right = insert(node.right, val, 2*pos+1)
        
    return node
    

def delete(node, val):
    if node is None:
        return node
    if val < node.val:
        node.left = delete(node.left, val)
    elif val > node.val:
        node.right = delete(node.right, val)
    else:
        print(node.pos)
        if(node.left == None):
            temp = node.right
            node = None
            return temp
        elif(node.right == None):
            temp = node.left
            node = None
            return temp
        temp = min(node.right)
        node.val = temp.val
        node.right = delete(node.right,temp.val)
    return node



root = None 
for _ in range(int(input())):
    l=input().split()
    o=str(l[0])
    d=int(l[1])
    
    if(o == 'i'):
        root = insert(root, d, 1)
    elif(o == 'd'):
        root = delete(root,d)