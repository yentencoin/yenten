#include "yespower.h"
#include "sysendian.h"

static const yespower_params_t v1 = {YESPOWER_0_5, 4096, 16, "Client Key", 10};

static const yespower_params_t v2 = {YESPOWER_1_0, 4096, 16, NULL, 0};

int yespower_hash(const char *input, char *output)
{
    uint32_t time = le32dec(&input[68]);
    if (time > 1553904000) {
        return yespower_tls(input, 80, &v2, (yespower_binary_t *) output);
    } else {
        return yespower_tls(input, 80, &v1, (yespower_binary_t *) output);
    }
}