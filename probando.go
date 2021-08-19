package main

import "fmt"

func main() {
	var x float64 = 0
	for  i := 0; i < 100000; i++ {
		for  j := 0; j < 100000; j++ {
			x += 0.2
		}
	}
	fmt.Println(x)
}
