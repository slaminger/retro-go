#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#define RG_BASE_PATH           "/sd"
#define RG_BASE_PATH_CACHE     RG_BASE_PATH "/retro-go/cache"
#define RG_BASE_PATH_ROMART    RG_BASE_PATH "/romart"
#define RG_BASE_PATH_ROMS      RG_BASE_PATH "/roms"
#define RG_BASE_PATH_SYSTEM    RG_BASE_PATH "/retro-go/system"
#define RG_BASE_PATH_TEMP      RG_BASE_PATH "/retro-go/temp"

#ifdef RG_TARGET_ODROID_GO
#define RG_BASE_PATH_CONFIG    RG_BASE_PATH "/odroid"
#define RG_BASE_PATH_SAVES     RG_BASE_PATH "/odroid/data"
#else
#define RG_BASE_PATH_CONFIG    RG_BASE_PATH "/retro-go/config"
#define RG_BASE_PATH_SAVES     RG_BASE_PATH "/retro-go/saves"
#endif

bool rg_sdcard_mount(void);
bool rg_sdcard_unmount(void);
bool rg_sdcard_format(void);
void rg_sdcard_set_enable_activity_led(bool enable);
bool rg_sdcard_get_enable_activity_led(void);

bool rg_mkdir(const char *dir);

// These are similar to libgen's but they never modify the source
const char *rg_dirname(const char *path);
const char *rg_basename(const char *path);
const char* rg_extension(const char *path);