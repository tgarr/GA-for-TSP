# Genetic Algorithm for Traveling Salesman Problem

https://arxiv.org/abs/1402.4699

![image](https://user-images.githubusercontent.com/2340878/122631117-f67feb80-d07d-11eb-81cb-a2f8648291ef.png)

This package includes a powerful genetic algorithm (GA) for solving the traveling salesman problem (TSP).

To construct a powerful GA, edge swapping(ES) is applied with a local search procedure to determine good combinations of building blocks of parent solutions for generating even better offspring solutions.

Experimental results on well studied TSP benchmarks demonstrate that the proposed GA is competitive in finding very high quality solutions on instances with about 15,000 cities.

This is a modified version with different inputs and outputs (and a Makefile).

## How to run

```
cd src
make
./eax <tsp_instance_file> <seed>
```

## License

[Apache License 2.0](LICENSE)
