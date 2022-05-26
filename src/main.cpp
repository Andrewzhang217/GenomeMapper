#include <cstring>
#include <iostream>
#include <filesystem>
#include "parser/parser.h"
#include "parser/fasta_parser.h"
#include "parser/fastq_parser.h"

namespace genome_mapper {
int main(int argc, char **argv) {
    if (argc == 2 && std::strcmp(argv[1], "-h") == 0) {
        std::cout
                << "Please input two file arguments. First file must be in FASTA format. Following files can be in either FASTA or FASTQ format"
                << std::endl;
        return 0;
    } else {
        std::filesystem::path ref_path(argv[1]);
        std::vector<std::filesystem::path> segment_paths;
        for (int i = 2; i < argc; i++) {
            segment_paths.emplace_back(argv[i]);
        }
    }
    return 0;
}
}
