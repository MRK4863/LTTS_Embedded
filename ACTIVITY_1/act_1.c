#include <avr/io.h>
/**
 * @brief code for the fuse
 * 
 */
FUSES = {
    .low = LFUSE_DEFAULT,
    .high = HFUSE_DEFAULT,
    .extended = EFUSE_DEFAULT
};