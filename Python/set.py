# info = {
#     "key" :"value",
#     "name" : "rick",
#     "age":21,
#     "marks":98.3,
#     "really":True,
#     "list":[25,26,32],
#     "tupples":(21,65,89),
# }
# info["age"]="20"
# print((info["age"]))
# print(info)
# student={
#     "name": "rohit",
#     "score":{
#         "physics":98,
#         "chem":96,
#         "math":97,
#     }
# }
#print(len(student))
#print(student.values())
#print(list(student.items()))
#print(len(list(student.keys())))
# print(student.get("name2"))
# print(student.get("name"))
# student.update({"city":"delhi"})
# print(student)

#set
# collection={1,2,3,2,4,"hello"}
# print(collection)
# print(type(collection))
# # print(len (collection))
# collect=set()
# print(type(collect))
# collect.add(1)
# collect.add(2)
# print(collect)
#collect.remove(1)
# print(len(collect))
# collect.add("moon")

# print(collect)
# print(collection.pop())
# print(collection.union(collect))
# print(collection.intersection(collect))

# dict={
#     "cat":"a small animal",
#     "table":["a piece of furniture","list of facts and figures"],
# }
# #print(dict)
# set={"python","java","c++","javascript","java","python","java","c++","C"}
# print(len(set))

student={}
x=int(input("enter phy marks:"))
student.update({"phy":x})
y=int(input("enter chem marks:"))
student.update({"chem":y})
z=int(input("enter math marks:"))
student.update({"math":z})
print(student)

