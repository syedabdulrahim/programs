number_of_rock_samples=int(input())
number_of_ranges=int(input())
samples=list()
ranges=list()
cat=list()
count=0


for i in range(number_of_rock_samples):
    x=int(input())
    samples.append(x)

for i in range(number_of_ranges):
    x=int(input())
    y=int(input())
    ranges.append((x,y))

for x,y in ranges:
    y=range(x,y+1)
    for i in samples:
        if i in y:
            count=count+1
    cat.append(count)
    count=0
for i in cat:
    print(i)
