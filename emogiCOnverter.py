message=input(">")
words=message.split(' ')
emoji_converter={
    ":)" : "hello",
    ":(" : "chalo"
}
output=" "
for word in words:
    output+=emoji_converter.get(word,word)+" "
print(output)