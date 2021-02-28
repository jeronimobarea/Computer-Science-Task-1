import re
import sys

pattern = sys.argv[0]
source = sys.argv[1]

res = re.search(pattern, source)

print(bool(res))
