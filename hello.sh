a="1"
b="2"

echo "Hello, World!" > output.txt

if [ $a -lt $b ]; then
 echo "$a is less than $b."
else
 echo "$a is greater than or equal to $b."
fi

if (( $a > $b ))
then
 echo "$a is greater than $b."
else
 echo "$a is less than or equal to $b."
fi
