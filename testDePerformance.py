import time

start = time.time()

for i in range(0, 1000000000):''

end = time.time()

print(f'Execution time: {(end - start) : .2} s')