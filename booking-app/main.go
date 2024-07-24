package main

import "fmt"

 func main(){
 
	var s string;
	s = "Arush";

	var arr = []string{"A","B"}
	arr = append(arr,"C")
	fmt.Printf("%v\n",arr);
	fmt.Printf("%v",s);
	// fmt.Printf("%T",arr[2]);
}