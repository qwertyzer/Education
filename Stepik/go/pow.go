package main

import (
	"fmt"
	"math"
)

func main() {
	var a float64
	var b float64 = 2.0
	fmt.Scan(&a)
	fmt.Print(math.Pow(a, b))
}
