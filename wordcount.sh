#!/bin/bash

maxlen=0;
for token in $1; do
  echo -n "$token: ";
  echo -n $token | wc -m;
    if [ ${#token} -gt $maxlen ]; then 
      maxlen=${#token}; fi;
done

echo "--------------------------";
echo -n "Total words: ";
echo "$1" | wc -w;
echo -n "Total chars: ";
echo "$1" | wc -m;
echo -n "Max length: "; 
echo $maxlen;
echo -n "No Of lines: ";
echo "$1" | wc -l;
