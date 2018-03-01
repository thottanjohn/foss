i="y"
while [ $i="y" ] 
do
    echo " PRESS 1-Addition 2-subtraction 3-multiplication 4-division"
    read n
	case $n in
        1)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=`expr $num1 + $num2`
            echo Answer: $result;;
           

    	2)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=`expr $num1 - $num2`
            echo Answer: $result;;
           
        
        3)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=`expr $num1 \* $num2`
            echo Answer: $result;;
           
       
        4)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=$(`expr "scale=2; $num1/$num2" | bc`)
            echo Answer = $result;;
           
  
esac
echo "continue ?"
read i
if(i$ != "y")
then
	exit
fi
done




