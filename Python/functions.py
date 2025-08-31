# def sum(a,b):
#     return a+b


# print(sum(2,3))
# print(sum(10,5))
# print(sum(6,5))

# def hello():
#     print("hello",end=' ')

# hello()
# hello()
# hello()
# hello()
# hello()

# def avg(a,b,c):
#     sum=a+b+c
#     avg=sum/3
#     return avg

# print(avg(5,10,15))
# def calm(a,b=4):
#     print(a*b)
#     return a*b
# calm(2)

#cities=["delhi","noida","pune","bengaluru"]
# river=["ganga","yamuna","krishna"]
# def length(list):
#     print(len(list))


# def printlist(list):
#     for item in list:
#         print(item,end=' ')

# printlist(cities)


# def fact(n):
#     facto=1
#     i=1
#     while i<=n:
#         facto=facto*i
#         i+=1
#     print(facto)       
        
# fact(4)    


# def invert(d):
#     ind=d*83
#     print(d,"usd=",ind,"inr")
    
# invert(73)



# def game(n):
#     if(n%2==0):
#         print("even")
#     else:
#         print("odd")

# game(5)            
#Recursion
# def show(n):
#     if(n==-1):
#         return
#     print(n)
#     show(n-1)
# show(5)    


# def fact(n):
#     if(n==1 or n==0):
#         return 1
#     else:
#         return n*fact(n-1)
# print(fact(5))    


# def calsum(n):
#     if(n==0):
#         return 0
    
#     return calsum(n-1)+n
# sum=calsum(5)
# print(sum)


leeter=["a","b","c"]
def printlist(list,index=0):
    if(index==len(list)):
        return
    print(list[index])
    printlist(list,index+1)


printlist(leeter)