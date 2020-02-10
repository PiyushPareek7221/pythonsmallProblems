numbers=[5,7,3,2,5,3]
for item1 in numbers:
    for item2 in numbers:
        check=item1
        if check==item2:
            numbers.remove(check)
print(numbers)


