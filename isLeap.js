/*
Check if a year is a Leap Year

A year is a leap year if:
  - A year is a leap year if it is evenly divisible by 4 ;
    except if that year is also evenly divisible by 100;
    unless that year is also evenly divisible by 400.

*/


function isLeap(year) {
    
/**************Don't change the code above****************/    
    var isLeapYear = false;
    //Write your code here.    
    if (year % 4 == 0){
        isLeapYear = true;
        
        if (year % 100 == 0){
            isLeapYear = false; 
            
            if (year % 400 == 0){
                isLeapYear = true;
            }
        }
    }
    if (isLeapYear){
        return "Leap year."
    }else{
        return "Not leap year."
    }

    

/**************Don't change the code below****************/    

}
