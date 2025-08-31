def largest(a,b,c):
    a=int(input("enter a number"))
    b=int(input("enter a number"))
    c=int(input("enter a number"))
    if(a>b or a>c):
        print("the largest is",a)
    elif(a<b or b>c):
        print("the largest is:",b) 
    else:
        print(c) 
largest(5,6,4)              
