#include <iostream>

int main(int argc, char **argv) {
    if (std::strcmp(argv[1], "-h") == 0) {
        std::cout
                << "Please input two file arguments. First file must be in FASTA format. Second file can be in either FASTA or FASTQ format"
                << std::endl;
        return 0;
    }

    return 0;
}
