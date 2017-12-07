#READING

f = open("example.txt",'r')
print(type(f))
content = f.read() ##reads all content to a str and moves pointer to EOF
print(content)
print(f.readline()) ## Empty line. fp at EOF
f.seek(0) ## set fp to start
print(f.readline()) ## now reads first line
print(f.readlines()) ## reads all lines in a list from fp
##['Line 2\r\n', 'Line 3\r\n', 'Line 4\r\n', 'Line 5\r\n', 'Line 6']

f.seek(0)
lines = [ i.rstrip("\r\n") for i in f.readlines()]
print(lines)

f.seek(0)
lines = [ i.strip() for i in f.readlines()]
print(lines)

f.close()

f = open("fruits.txt")
lines = [ i.strip() for i in f.readlines()]
print(lines)

##list of size of each line
lenLines = [len(i) for i in lines]
print(lenLines)

f.close()

#WRITING

f = open("new_file.txt",'w')
f.write("Hello\nWorld")
f.write("\n\nNewline\n")

for i in lenLines:
    f.write(str(i) + "\n")

f.close()

with open("new_file.txt", 'a+') as f: ## no need to close file
    f.seek(0)
    content  = f.read()
    print("New content " + content)
    f.write("Line Added")
