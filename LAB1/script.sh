#! /bin/bash

# NAME="Haldhar Dwivedi"
# ROLL="CED18I022"

#getting name and roll Num
read -p "Enter Your Name: " NAME   
read -p "Enter Your Roll Number: " ROLL 
#getting date
echo  "Enter Date: "
read -p "Day: " d
read -p "Month: " m
read -p "Year: " y

D=$m/$d/$y
#displaying message

echo "Happy $(date +%A -d$D) $NAME $ROLL" 

# echo "hey $NAME your roll number is $ROLL"