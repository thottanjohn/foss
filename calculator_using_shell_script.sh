input="yes"
while [[ $input = "yes" ]]
do
    PS3="Press 1 for Addition, 2 for subtraction, 3 for multiplication and 4 for division: "
    select math in Addition Subtraction Multiplication Division
    do
        case "$math" in
        Addition)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=`expr $num1 + $num2`
            echo Answer: $result
            break
        ;;
        Subtraction)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=`expr $num1 - $num2`
            echo Answer: $result
            break
        ;;
        Multiplication)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=`expr $num1 \* $num2`
            echo Answer: $result
            break
        ;;
        Division)
            echo "Enter first no:"
            read num1
            echo "Enter second no:"
            read num2
            result=$(`expr "scale=2; $num1/$num2" | bc`)
            echo Answer = $result
            break
        ;;
        *)
            echo Choose 1 to 4 only!!!!
            break 
        ;;
    esac
    done

done


