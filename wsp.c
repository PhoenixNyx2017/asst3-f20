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

    //Base case
    //All cities have been visited
    //Either any city that it wants to go to already seen

    //recursive case
    //all cities that have not been seen, split up
    //add current city to seen
    //for each recurse, remove that city from not seen

}

int branchBoundParallel() {
    //how to do in parallel?

    //want to each path in parallel?
    //each recusion case?



}

int branchBoundWrapper() {
    //takes in matrix of data
    //sets up the seen and not seen arrays
    //also starts distance at 0

}

////////////////////////////////

void usage (const char* progname) {
    printf("Insert Help message here \n");


}

int main(int argc, char *argv[])
{
    int opt;

    // grab data
    while (opt != EOF){

    }

    //parse data into cities and where they map to
    //run through branch and bound program


    return 0;
}
