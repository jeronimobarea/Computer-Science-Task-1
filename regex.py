import re

data = str(input())
print(data)

source, pattern = data.split(" ")

res = re.search(pattern, source)

print(bool(res))
