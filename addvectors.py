l1=input("Enter 1st vector as a list:")
l2=input("Enter 2nd vector as a list:")
l3=[0,0,0]
for i in range(0,3):
    l3[i]=l1[i]+l2[i]
print "Sum of the vectors is "+str(l3[0])+"i+"+str(l3[1])+"j+"+str(l3[2])+"k"

