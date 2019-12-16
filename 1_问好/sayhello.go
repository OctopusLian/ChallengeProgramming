package main

import (
	"fmt"
)

func main() {
	var name string
	fmt.Println("Whay is your name?")
	fmt.Scan(&name)
	fmt.Printf("Hello,%s,nice to meet you!\n", name)
}
