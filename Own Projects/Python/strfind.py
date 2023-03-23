import math
import random
import time
def main():
    iterations = 5000000 #number of times to generate
    step = 1000          #range of random number. The higher the num, the more variance in the length of the result, but also more efficient.

    cnum = convert()
    rnum = numgen(iterations,step)
    fstr(cnum,rnum)  

#---------------------------------------------------------

def numgen(rl,randstep):
    genstart = time.time()
    rstr = ''
    for i in range(rl):
         rstr += str(random.randrange(randstep))
    genend = time.time()
    print(f"Generating {round((len(rstr)/1000000),2)}M numbers took {round((genend-genstart),3)} seconds")
    return rstr



def convert():
    cstart = time.time()
    numl = ''
    for i in strf:
          numl += str(ord(i))
    print(f"Translated \"{strf}\" to {numl}.")
    cend = time.time()
    print(f"String conversion took {round((cend-cstart),3)} seconds")
    return numl

def fstr(substr, fullstr):
    fstart = time.time()
    strindex = str(fullstr).find(str(substr))
    fend = time.time()
    try:
        if strindex == -1:
            print(f"your number sequence was not found within the specified larger set, trying again. Total number of tries so far: {i}")
            main()
            i += 1
        else:
            print(f"your specified number sequence starts at: {strindex}-")
    finally:
            print(f"Looking for the number took {round((fend-fstart),3)} seconds")



if __name__ == "__main__":
    strf = str(input("the string you want to find: "))
    i = 0
    main()
    
