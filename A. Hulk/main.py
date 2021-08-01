length =int(input())
output = "I hate"
for i in range(1,length):
    if(i%2 != 0):
        output = output + " that I love"
    else:
        output = output + " that I hate"

output = output + " it"
print(output)