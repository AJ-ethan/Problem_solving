st = input()

def func(st):
	res =0
	for i in range(len(st)):
		l = i
		r = i
		while l>=0 and r<len(st) and st[l]==st[r]:
			print(st[l:r])
			res += 1
			l = l-1
			r += 1
	for i in range(len(st)):
		l = i
		r = i+1
		while l>=0 and r<len(st) and st[l]==st[r]:
			print(st[l:r])
			res += 1
			l = l-1
			r += 1
	return res
print(func(st))

