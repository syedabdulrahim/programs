count=0
num=int(raw_input())
for i in range(1,num+1):
    if i*i==num:
        count=count+1
        break
print i
if count==1:
    print "Perfect Square"
else:
    print "Not Perfect"
