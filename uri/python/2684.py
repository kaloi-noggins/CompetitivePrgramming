n = int(input())
for i in range(n):

    temp = input()
    k = int(temp[0])
    tags = temp[2:len(temp)]
    tags.strip(" ")

    # debusg
    print(tags)

    if(tags[0] != "<" or tags[-1] != ">"):
        print("error")
    else:
        if(k == 1):
            # if("<" in tags[1:len(tags)-1] or ">" in tags[1:len(tags)-1]):
            #   print("error")
            # else:
            aux = tags.count("<", 1, len(tags)-1) + \
                tags.count(">", 1, len(tags)-1)
            print(aux)
            if(aux//2 == 0):
                aberto = True
                for j in range(1, len(tags)-1):
                    if (tags[j] == "<" and aberto == True):
                        print("error")
                        j = len(tags)
                    elif(tags[j] == ">" and aberto == False):
                        print("error")
                    elif (tags[j] == ">"):
                        aberto = False
