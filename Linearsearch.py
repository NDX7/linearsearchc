q=0
print("enter no. of elemnts ")
n=int(input())
l=[]
for i in range(0,n):
	ele=int(input())
	l.append(ele)
print("list ",l)

print("enter no. to be searched ")
s=int(input())
if q==0:
	for i in range(0,n):
		if l[i]==s:
			print("element found at",i+1)
			q=1
	if q==1:
		print("succesfull")
	else:
		print("element not found")
	
