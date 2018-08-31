count=0
lis_of_num=list()
num=int(raw_input())
lis_of_num=range(1,(num/2)+1)
for i in lis_of_num:   # 1 is not a Prime Number
    if num%i==0:
        count=count+1
if count<2:
    print "Prime"
else:
    print "Not Prime"


