 #include<iostream>
 
 
 
 class BOX{
private:
	int l,b,h;
	
public:

	BOX()
	{
		l = 0;
		b = 0;
		h = 0;	
	}
	
	BOX(int lenght,int breath,int height)
	{
		l = length;
		b = breath;
		h = height;
		
	}
	BOX(const BOX &B)
	{
		l = B.l;
		h = B.h;
		b = B.b;
	}
	int getLenght()
	{
		return l;
	}
	int getBreadth()
	{
		return b;
	}
	int getHeight()
		return h;
		
	long long CalculateVolune()
	{
		return (long long)(l*b*h);
	}
	
	bool operator <(BOX &B)
	{
		if(l<B.l)
		{
			return true;
		}
		else if(l==B.l){
			if(b<B.b)
				return true;
			else if(b==B.b)
			{
				if(h<B.h)
					return true;
			}
		}
		return false;
	}
	ostream &operator <<(ostream &out,BOX &B)
	{
		out << B.getLength() <<" "<<B.getBreadth()<<" " << B.getHeight();
		return out;
	}


};
