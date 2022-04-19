import random
import timeit
n=512
A=[]
B=[]
C=[]

for i in range(n):
    temp=[]
    for j in range(n):
        temp.append(random.randint(0,10000))
    A.append(temp)

for i in range(n):
    temp=[]
    for j in range(n):
        temp.append(random.randint(0,10000))
    B.append(temp)

# Initializing the array
for i in range(n):
    temp=[]
    for j in range(n):
        temp.append(0)
    C.append(temp)

start = timeit.default_timer()
for j in range(n):
    for k in range(n):
        for i in range(n):
            count=A[i][k]*B[k][j]
            C[i][j]+=count
stop = timeit.default_timer()

for i in range(n):
    for j in range(n-1):
        print(C[i][j],end=" ")
    print(C[i][n-1])
    

print('')
print('Time measured: ', stop - start)