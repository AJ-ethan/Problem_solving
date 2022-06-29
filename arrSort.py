def ArrayChallenge(arr):
	#a = list(map(int, arr.split()))
	a = []
	for i in range(len(arr)):
		a.append(int(arr[i]))
	a.sort(reverse=True)
	s = 0
	for i in range(len(a)):
		if (i==4):
			break
		s =s+a[i]
	s  = str(s)[::-1]+'8e9pz4a35jt'
	return s
		
print(ArrayChallenge(input()))
		
