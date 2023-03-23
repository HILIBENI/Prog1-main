import math
import random
import time

def numgen(rl):
    genstart = time.time()
    rstr = ''
    for i in range(rl):
         rstr += str(random.randrange(10))
    genend = time.time()
    print(f"Generating {math.floor(rl/1000000)}M numbers took {genend-genstart} seconds")
    return rstr



def convert():
    strf = str(input("the string you want to find: "))
    cstart = time.time()
    numl = ''
    for i in strf:
          numl += str(ord(i))
    print(f"Translated \"{strf}\" to {numl}.")
    cend = time.time()
    print(f"String conversion took {cend-cstart} seconds")
    return numl

def fstr(substr, fullstr):
    fstart = time.time()
    strindex = str(fullstr).find(str(substr))
    fend = time.time()
    try:
        if strindex == -1:
            raise Exception("your number sequence was not found within the specified larger set, please generate more numbers")
        else:
            print(f"your specified number sequence starts at: {strindex}-")
    finally:
            print(f"Looking for the number took {fend-fstart} seconds")
    
if __name__ == "__main__":
    numlen = 30000000

    cnum = convert()
    rnum = numgen(numlen)
    fstr(cnum,rnum)
    
