string=input()
org_string=string
length=len(org_string)
no=int(input())
li=list()
FIRSTCHARSTRING=''
if length>0 and length <=30:
    if no>0 and no<=10:
        for i in range(no):
            y=input()
            direction,val=y.split()
            li.append((direction,int(val)))
        for i,j in li:
            if i =='L':
                Lfirst = string[0 : j]
                Lsecond = string[j :]
                string=Lsecond+Lfirst
                first_letter=string[0]
                FIRSTCHARSTRING+=first_letter
            if i == 'R':
                 Rfirst = string[0 : len(string)-j]
                 Rsecond = string[len(string)-j : ]
                 string=Rsecond+Rfirst
                 first_letter=string[0]
                 FIRSTCHARSTRING+=first_letter
if FIRSTCHARSTRING in org_string:
    print("YES")
else:
    print("NO")
