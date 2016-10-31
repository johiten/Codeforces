d=ord('A')-1
def dig_ch(row):
    ans=''
    while(row):
        #print(type(row))
        md=row%26
        #print(type(md))
        if md!=0:
            ans+=chr(int(md)+d)
            row=row//26
        else:
            ans+='Z'
            row=row//26-1
    return ans[::-1]
def colm(coord):
    x=0
    while(1):
        if coord[x].isdigit():
           return x
        else:
            x+=1
def ch_dig(row):
    row=row[::-1]
    ans=0
    i=0
    while(i<len(row)):
        md=pow(26,i)*(ord(row[i])-d)
        ans+=md
        i+=1
    return str(int(ans))

# n=int(raw_input())
n=int(input())
# num=['1','2','3','4','5','6','7','8','9','0']

while(n):
    coord=input()
    n-=1
    if coord[0]=='R' and coord[1].isdigit() and coord.find('C')!=-1:
        c=coord.find('C')
        col=coord[1:c]
        row=int(coord[c+1:])
        print (dig_ch(row)+col)
    else:
        x=colm(coord)
        col=coord[x:]
        row=coord[:x]
        print ('R'+col+'C'+ch_dig(row))

