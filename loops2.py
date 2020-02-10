numbers=[1,1,1,1,5]
for x in numbers:
    print('x' * x)

for x in numbers:
    output = ''
    for count in range(x):
        output+='x'
    print(output)
