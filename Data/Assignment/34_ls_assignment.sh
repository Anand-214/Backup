<<Documentation
Name:- Anand Arvind Kulkarni.
Date:- 12/10/2021
Discription:- Script to calculate BMI of a person.
Sample i/p(1):- Enter the weight in kg(s): 45.5
		Enter the height in meter(s): 1.5
Sample o/p(1):- BMI is 20.2222
Sample i/p(2):- Enter the weight in kg(s): 45.5
		Enter the height in meter(s): -1.5
Sample o/p(2):- ERROR:Invalid input.
		Please enter only positive values
Documentation

#!/bin/bash
read -p "Enter the weight in kg(s): " weight       #input weight from the user
read -p "Enter the height in meter(s): " height    #input height from the user

if [ `echo "$weight<0 || $height<0" | bc` -eq 1 ]  #to check if the i/p weight and height are positive values.
then
    echo -e "Error:Invalid input.\nPlease enter only positive values." #error if the i/p values are negative and prompt user for valid values.
else
    bmi=`echo "scale=4;$weight/($height*$height)" | bc`   #formula to calculate BMI and scale used for the decimals generated in o/p.
    if [ `echo "$bmi<18.5" | bc` -eq 1 ]                  #condition for underweight category BMI.(range refered is "bmi<18.4"
    then
	echo "BMI is $bmi"                              
	echo "you are underweight"                       #o/p if the BMI is below 18.5 
    elif [ `echo "$bmi>=18.5 && $bmi<=24.9" | bc` -eq 1 ] #condition for Normal category BMI. (range refered is "18.5<bmi<24.9"
    then
	echo "BMI is $bmi"                              
	echo "You are Normal"                            #o/p if the BMI is between 18.5 to 24.9
    elif [ `echo "$bmi>=25 && $bmi<=29.9" | bc` -eq 1 ]  #condition for Overweight category BMI. (range regered id 25<bmi<29.9"
    then
	echo "BMI is $bmi"
	echo "You are overweight"                        #o/p is BMI is between 25 to 29.9
    else
	echo "BMI is $bmi"                                    
	echo "You are obese"                             #any o/p value above 30 is considered as obese.    
    fi
fi

