#default IFS 
old_IFS=$IFS 
IFS=,  
read val1 val2 val3 <<< "5,60" 
echo "1st value: $val1 2nd value: $val2 3rd Value: $val3"
IFS=$old_IFS; 