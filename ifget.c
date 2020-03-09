#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if (argc > 2) {
        exit();
    }
    ifget(argc == 2 ? argv[1] : NULL);
    exit();
}
