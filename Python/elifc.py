# str1="hello"
# str2="moto"
# str3="we are indians.\twe are hindu"
# print(str3)
# finalstr=str1+"   " +str2
# print(finalstr)
# ch=finalstr[3]
# print(len(finalstr))
#print(ch)
# str1="radhe radhe"

# p=str1[:len(str1)]    #slicing
# print(p)
# fu="apple"
# y=fu[-3:-1]
# print(y)
# print("enter first name:")
# p=input()
# print(len(p))
# print(p.count("$"))
# print("enter side")
# p=int(input())
# print("enter your first number")
# q=int(input())
# if(p>=q):
#     print("True")
# else:
#     print("False")
# 
# print("enter age")
# age=int(input())
# if(age >= 18):
#     print("adult\ncan drive")
# elif(age<18):
#     print("ok")
# print("Enter age:")
# a=int(input())
# if(a>=18):
#     if(a>80):
#         print("cannot")
#     else:
#         print("can drive")
# else:
#     print("cannot drive")

# print("enter a number")
# a=int(input())
# if(a%7==0):
#     print("multiple of 7")
# else:
#     print("not multiple of 7")    


a=int(input("enter first numbers"))
b=int(input("enter second numbers"))
c=int(input("enter three numbers"))
d=int(input("enter fourth numbers"))
if(a>=b and a>=c and a>=d):
    print("first number is greatest",a)
elif(b>=a and b>=c and b>=d):
    print("second number is greatest",b)
elif(c>=a and c>=b and c>=d): 
    print("third number is greatest",c)    
else:
    print("fourth number is greatest",d)       
