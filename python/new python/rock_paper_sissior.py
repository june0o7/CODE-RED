import random
# p=0
# c=0
# p=int(p)
# c=int(c)


def checkwin(comp, p1):

    if comp == p1:
        print(f"computer : {comp} \nmatch tied...")
        # c==p
    elif comp == 'ROCK':
        if p1 == 'SISSIOR':
            print("computer : ROCK\n-->you lose")
            # c+=1
            # player choose sissior
        else:
            print("computer : ROCK\n-->you won")
        #    p+=1
            # the player chose paper....
    elif comp == 'PAPER':
        if p1 == 'SISSIOR':
            print("computer : PAPER\n-->you won")
        #  p+=1   # playser chosse sissor.....
        else:
            print("computer : PAPER\n-->you lose")
        #  c+=1
            # player chosse rock.....
    elif comp == 'SISSIOR':
        if p1 == 'ROCK':
            print("computer : SISSOR\n-->you won")
            # p+=1
            # player chose rock....
        else:
            print("computer : SISSOR\n-->you lose")
        #  c+=1
            # player chose paper
# print(f"........score........\nplayer={p}\ncomputer={c}")


b = str(input("enter your  name : "))
# c = int(input("best of : "))
# x=0
# x=int(x)
# y=0
# y=int(y)
# for i in range (c):
print("1>ROCK\/\/\/2>PAPER\/\/\/3>SISSIOR")
a = str(input(f"{b} : "))
r = random.randint(1, 3)
if r == 1:
    comp = 'ROCK'
elif r == 2:
    comp = 'PAPER'
else:
    comp = 'SISSIOR'
checkwin(comp, a)
