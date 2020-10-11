#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <opm.h>

int branchBoundSeq() {
    //takes in matrix of data
    //current city
    //seen cities
    //not yet visited cities
    //length of total distance traveled
    //global smallest length?

    //Base case
    //All cities have been visited
    //Either any city that it wants to go to already seen

    //recursive case
    //check for pruning
    //all cities that have not been seen, split up
    //add current city to seen
    //for each recurse, remove that city from not seen

}

int* branch


int branchBoundParallel(int** distances, int cities, int processors) {
    //how to do in parallel?

    //want to each path in parallel?
    //each recusion case?
    bool* visited = malloc(sizeof(bool)*cities);
    int smallest = INT_MAX;

    int* path;

    omp_set_num_threads(processors);

    //parallel for




}

int branchBoundWrapper() {
    //takes in matrix of data
    //sets up the seen and not seen arrays
    //also starts distance at 0

}

////////////////////////////////

//void usage (const char* progname) {
//    printf("Insert Help message here \n");
//}

int main(int argc, char *argv[])
{
    int opt;

    int processors;

    FILE * pFile;
    // grab data
    while ((opt = getopt(argc,argv,":p")) != -1){

        switch(opt){
            case 'p':
                processors = optarg;
                break;
        }
    }
    for (;optind < argc; optind++) {
        pFile = fopen(argv[optind],"r");
    }

    int cities;
    int** matrix;
    //malloc -> upper level array and then lower level
    //int* malloc
    //matric = malloc(sizeof(int*)*rows)
    //each row = mallow(sizeof(int)*cols)
    int dist;
    char myString[100];
    if (pFile != NULL){

        scanf("%d", &dist); //first line
        cities = dist;
        matrix = malloc(sizeof(int*)*cities);
        for (int k = 0; k < cities; k++) {
            matrix[k] = malloc(sizeof(int)*cities);
        }
        //nested for loop
        //rows -> numbers on each row
        //dulplicte
        for (int i = 0; i<cities; i ++) {
            for(int j = 0; j < i; j ++) {
                scanf("%d", &dist);
                matrix[i][j] = dist;
                matrix[j][i] = dist;
            }
        }

        fclose(pFile);
    }

    //parse data into cities and where they map to
    //run through branch and bound program


    return 0;
}
