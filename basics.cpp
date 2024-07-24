google made it
used to build application and multithreading
concurency already built in (multiple threads can run smoothly)

go is very fast and very simple
go is used on backend side on databases

go mod init booking-app  // to create the go.mod file in terminal



 package main
 import "fmt"                   //fmt package needed to print

 func main(){
 fmt.Print("Hello world")      //fmt.Print ya fmt.Println bhi chalega
}

ctrl + s to save
and then in terminal go run filename.go


var name = "Arush"             //also if you dont use the variable then it throws errors
var name string = "Arush"  

var name string ;     //variables ko only initialize karna he to u need datatype also
name = "Arush"


name := "Arush"   //if you dont want to use var keyword , also wont work for constants


const name = "Arush"      //constant variable

 fmt.Print("Hello world",name,"Bye Bye")  //so comma laga lagake u can print 

 placeholders
%v = yahi kaafi he 
%T = datatype dega 


 ya to u can use printf with placeholder
 fmt.Printf("Hello I am %v years old",name) 

 for new line in Prinf u can use \n
 fmt.Printf("Hello I am %v years old\ n",name) 


//if you want to define no of bits
 var x int8
 var x int16
 var x int32

 var x uint8   //unsigned int only positive



//cin kese karna he using Scan
fmt.Scan(&x);    //u need to tell it the adress of the variable


//c and c++ have pointers but java and js doesnt have it , golang is close to c so it has it

//array
var arr = [50]strings{"A","B"}   //array declare with size = 50 and all are strings 

var arr [50]strings
arr[0]="A"
arr[1]="B"

fmt.Printf("%v\n",arr);   //u can print the array just in a line 

//length = len(arr )

//slice is like vector of in c++
var arr []string     //without size definition
arr = append( arr, element)   //append karna he like push_back 





// we just have for loop in go lang

//infinite for loop
for{

}






//if else

if x==0 {

}





//u can also store a condition inside of a variable
var x_check int  =  x==0
//var            =  condition 

var x_check      =  x==0    //ye bhi chalega
 x_check        :=  x==0    // var hatake : laga diya 


 x_check        :=  x==0  && y==0   //put this condition in a var
 if(x_check)                        //if(variable which is a condition actually)





 //! Functions


 func f1{
    //this is a void jesa as it doesnt return anything
 }

 func f2(x int, s string, arr []string){

 }

 func f3(s string) int{
    
    //since here you defined int so u need to return an int
    return x
 }



 func main(){       //this is the entry point
    f1() 
    f2(x,s,arr)
 } 



//!packages

//!so package is like a folder having many main.go type files

u need to make separate folders for separate packages

//helper folder   (all have first line as : package helper)
h1.go
h2.go

//main folder      (all have first line as : package main)
m1.go
m2.go
