x = int(input())
outputs = []
for j in range(x):
    tests =[]
    n = int(input())
    tests = input().split(' ')
    for c in range(n):
        if(tests.count(tests[c]) == 1):
            outputs.append(c+1)
for k in range(x):
    print(outputs[k])