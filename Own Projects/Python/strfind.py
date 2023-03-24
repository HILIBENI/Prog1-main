
import random
import time

def main(i):
    i += curve
    #number of times to generate
    step = 10000
    #range of random number. The higher the num, the more variance in the length of the result, but also more efficient.
    cnum = convert()
    rnum = numgen(i,step)
    fstr(cnum,rnum,i)  
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
    numl = ''
    for i in strf:
          numl += str(ord(i))
    return numl

def fstr(substr, fullstr,i):
    strindex = str(fullstr).find(str(substr))
    if strindex == -1:
        print(f"your number sequence was not found within the specified larger set, trying again.")
        main(i)
    else:
        end = time.time()
        print(f"your specified number sequence starts at: {strindex} and took {round((end-start),3)} seconds to find")
            



if __name__ == "__main__":
    start = time.time()
    strf = str(input("the string you want to find: "))
    iterations = 5000000
    curve = 100000
    print(f"Translated \"{strf}\" to {convert()}.")
    main(iterations)

    
