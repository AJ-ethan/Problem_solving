int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    long long int c = 0,s=0,asize=0,bsize=0;
    //char op='a';
    //if(s+a[asize]<=maxSum)
        //s = s+a[asize++];c++;
    while(s<=maxSum &&asize<a.size()&&bsize<b.size())
    {
            
       if(b[bsize]<=a[asize])
        {   
            s = s+b[bsize++];
            if(s<=maxSum)
                c++;
            
            cout<<s<<"removed"<<b[bsize-1]<<"\n";
        }
        else if(a[asize]<b[bsize]) {
            s = s+a[asize++];
            if(s<=maxSum)
                 c++;
           
            cout<<s<<"removed"<<a[asize-1]<<"\n";
        }  
        
    }
    while(s<=maxSum && asize<a.size())
    {
        s = s+a[asize++];
            if(s<=maxSum)
                 c++;
    }
    while(s<=maxSum && bsize<b.size())
    {
        s = s+b[bsize++];
            if(s<=maxSum)
                 c++;
    }
    cout<<c;
    return c;
}
