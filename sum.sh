echo "Enter how many nos u want to : "
read n
s=0
for (( i=1,j=2;i<=n;i++,j=j+2 ))
do
s=`expr $s + $j`
done
echo “Sum of first $n = $s”




