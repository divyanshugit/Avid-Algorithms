n  = int(input())

for i in range(1, n):
    print(' '*n, end='') # repet space for n times
    print('* '*(i)) # repeat stars for i times
    n-=1