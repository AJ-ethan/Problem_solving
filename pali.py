def StringChallenge(str):
	l = []
	s = ''
	log = 1
	for i in str:
		l.append(i)
	j = l[:]
	
	for i in range(1,len(l)-1):
		temp = j[i+1]
		j[i+1] = j[i]
		j[i] = temp
		ll = j[:]
		ll[::-1]
		#print(ll)
		#print(j)
		if (j==ll):	
			for k in range(len(j)):
				s = s+j[k]+'8e9pz4a35jt'
			return s
		else:
			j = l[:]
			
	return -1
	
print(StringChallenge(input()))

		
