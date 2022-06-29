def SearchChallenge(str):
	c = 0
	l = []
	w = ''
	prev = 0
	word = ''
	for i in list(str.split()):
		for j in i:
			for f in i:
				if(j==f):
					c = c+1
					if(c>1):
						if(prev<c):
							w = j	
							prev = c
							word = i
			c=1
					
	if(prev>1):
		return word
	return -1
						
					
			 

if __name__ == '__main__':
    str = "hello apple pie"
    print("Maximum occurring character =",
                 SearchChallenge(str))
