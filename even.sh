echo "Enter the nth natural no.  limit"
read n
sum=0
for (( x=0; x <= n; x+= 2 ));do
  (( sum += x ))
done

echo "sum=$sum"
