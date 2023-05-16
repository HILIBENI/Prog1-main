import random
import time

def fclear(fname):
    file = open(f"{fname}.txt",'w')
    file.close()


def find(fname, amount,phrase):
    ctime = time.time()
    sgen = time.time()
    file = open(f"{fname}.txt",'a')
    for i in range(amount):
        file.write(str(random.randrange(2)))
    file.close()
    egen = time.time()
    print(f"generation took {round(egen-sgen,2)}s")
    sfind = time.time()
    file = open(f"{fname}.txt",'r')
    for i in file:
        findex = i.find(phrase)
    file.close()
    efind = time.time()
    print(f"searching took {round(efind-sfind,2)}s")
    print(f"trying again, current time elapsed: {round(ctime - stime,2)}s, generation speed: {round(amount/(time.time()-ctime),2)}  numbers/s")
    print("----------------------------------------------------------")

    return findex



if __name__ == "__main__":
    #---------------------------------------
    #change these values if you want:
    filename = 'v1'
    step = 5000000
    searchphrase = '110110100101001101011101101' #binary number sequence
    #---------------------------------------

    stime = time.time()
    fclear(filename)
    sindex = find(filename,step,searchphrase)
    while sindex == -1:
        sindex = find(filename,step,searchphrase)
    if sindex != -1:
        print(sindex)

    
