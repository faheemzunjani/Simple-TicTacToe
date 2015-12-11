# Tic Tac Toe : Player vs Computer
# Faheem Hassan Zunjani


from random import randint

data=[]

for i in range(3):
        listData=[' ',' ',' ']
        data.append(listData)

def check():
	if(data[0][0]=='X' and data[1][0]=='X' and data[2][0]=='X'):
		return 1
	elif(data[0][0]=='O' and data[1][0]=='O' and data[2][0]=='O'):
		return 2
	elif(data[0][1]=='X' and data[1][1]=='X' and data[2][1]=='X'):
		return 1
	elif(data[0][1]=='O' and data[1][1]=='O' and data[2][1]=='O'):
		return 2
	elif(data[0][2]=='X' and data[1][2]=='X' and data[2][2]=='X'):
		return 1
	elif(data[0][2]=='O' and data[1][2]=='O' and data[2][2]=='O'):
		return 2
	elif(data[0][0]=='X' and data[0][1]=='X' and data[0][2]=='X'):
		return 1
	elif(data[0][0]=='O' and data[0][1]=='O' and data[0][2]=='O'):
		return 2
	elif(data[1][0]=='X' and data[1][1]=='X' and data[1][2]=='X'):
		return 1
	elif(data[1][0]=='O' and data[1][1]=='O' and data[1][2]=='O'):
		return 2
	elif(data[2][0]=='X' and data[2][1]=='X' and data[2][2]=='X'):
		return 1
	elif(data[2][0]=='O' and data[2][1]=='O' and data[2][2]=='O'):
		return 2
	elif(data[0][0]=='X' and data[1][1]=='X' and data[2][2]=='X'):
		return 1
	elif(data[0][0]=='O' and data[1][1]=='O' and data[2][2]=='O'):
		return 2
	elif(data[0][2]=='X' and data[1][1]=='X' and data[2][0]=='X'):
		return 1
	elif(data[0][2]=='O' and data[1][1]=='O' and data[2][0]=='O'):
		return 2
	else:
		return 3

i=0
j=0
k=0
pos1=0
pos2=0
flag=3
chk=0
v=0

ch='|'

while(i<9 and (flag!=1 and flag!=2)):
	print("Tic Tac Toe (X vs O)!\n\n")
	print("Use positions as (1,0),(0,2),(2,2)! \n")

	for j in range(3):
		print("   %c  %c  %c  %c  %c \n"%(data[j][0],ch,data[j][1],ch,data[j][2]))
		if(j!=2):
			print("-------------------- \n")

	print("\n")

	if(i%2==0):
		pos1,pos2=input("Player: ").split(',')
		pos1=int(pos1)
		pos2=int(pos2)

		chk=0

		while True:
			if(data[pos1][pos2]=='X' or data[pos1][pos2]=='O'):
				print("\nAlready used! Re-enter: ")
				pos1,pos2=input("Player: ").split(',')
				pos1=int(pos1)
				pos2=int(pos2)
				chk=0
			else:
				chk=1

			if(chk==1):
				break

		data[pos1][pos2]='X'
		flag=check()
	else:
		chk=0

		while True:
			pos1=randint(0,2)
			pos2=randint(0,2)
			if(data[pos1][pos2]=='X' or data[pos1][pos2]=='O'):
				chk=0
			else:
				chk=1

			if(chk==1):
				break

		print("Computer: %d,%d \n"%(pos1,pos2))
		data[pos1][pos2]='O'
		flag=check()

	i=i+1

print("Tic Tac Toe (X vs O)!\n\n")
print("Use positions as (1,0),(0,2),(2,2)! \n")

for j in range(3):
	print("   %c  %c  %c  %c  %c \n"%(data[j][0],ch,data[j][1],ch,data[j][2]))
	if(j!=2):
		print("-------------------- \n")

print("\n")

if(flag==1):
	print("\n\n Player wins! :D \n\n")
elif(flag==2):
	print("\n\n Computer wins! :D \n\n")
else:
	print("\n\n Its a Tie! \n\n")


