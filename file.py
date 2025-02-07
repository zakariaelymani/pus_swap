import random, os

def tester(max):
    cases = [4, 13, 700, 5500]
    numbers = []
    if (max <= 3):
        j = 0
    elif (max <= 5):
        j = 1
    elif (max <= 100):
        j = 2
    elif (max <= 500):
        j = 3
    while(len(numbers) < max):
        i = random.randint(1, max) 
        if(i not in numbers):
            numbers.append(i)
    p = ' '.join(map(str, numbers))
    out = os.popen(f"./push_swap {p} | wc -l").read()
    checker = os.popen(f"./push_swap {p} | ./t {p}").read()
    if (int(out) > cases[j]):
        print(f"{p}\n\t{out}")
while True:
    tester(3)