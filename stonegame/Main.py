class Main:
	t=int(input())
	i=1
	while(i<=t):
		c=0
		x=int(input())
		j=1
		str=raw_input()
		s=str.split(" ")
		
		while(x>=j):
			
			if(j<=int(s[j-1])):
				c+=1
			j+=1
		i+=1
	
		if(c%2==0):
			print "BOB"
		else:
			print "ALICE"	
