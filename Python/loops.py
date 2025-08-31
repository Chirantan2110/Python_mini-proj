#n=3
# list=[]
# i=1
# while i<=10:
#     p=i*i
#    # print(p,end=' ')
#     list.append(p)
#     i+=1
# print(list)

# print("\n")
# n=3
# i=1
# while i<=10:
#     print(i*n,end=' ')
#     i+=1  

# idx=0
# list=[1,4,9,16,25,36]
# while idx<=(len(list)-1):
#     print(list[idx],end=' ')
#     idx+=1

# list=[1,4,9,16,25,36,49,64,81,100]
# for num in list:
#     print(num,end=' ')

# num=(1,4,9,16,25,36,49,64,100,49)
# x=49
# i=0
# for el in num:
#     if(el==x):
#         print("number found at index",i)
#         i += 1
 

# for i in range(100,0,-1):
#     print(i)

# x=int(input("enter a number"))
# for i in range(0,11):
#     print(i*x)

# n=10
# sum=0
# i=0
# while i<=n:
#     sum=sum+i
#     i+=1
# print(sum)

# n=10
# fact=1
# i=1
# while i<=n:
#     fact=fact*i
#     i+=1
# print(fact)
n=5
fact=1
for i in range(1,n+1):
    fact*=i
print(fact)