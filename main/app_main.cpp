#define FMT_HEADER_ONLY
#include "fmt/format.h"

extern "C" void app_main(void)
{
    fmt::print("Hello, world!\n");
    fmt::format("Test: {Test:.2f}", fmt::arg("Test", 125.0f));

}
