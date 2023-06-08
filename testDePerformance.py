import time

start = time.time()

for i in range(0, 1000000000):''

end = time.time()

print(f'Temps d\'exécution : {(end - start) :.2}ms')