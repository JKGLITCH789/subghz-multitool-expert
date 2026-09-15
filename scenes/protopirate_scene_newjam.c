// scenes/protopirate_scene_jam.c — Jammer with frequency selection
#include "../protopirate_app_i.h"
#include <lib/subghz/devices/devices.h>
#include <lib/subghz/transmitter.h>

#define TAG "Jammer"

typedef struct {
    SubGhzTransmitter* transmitter;
    FlipperFormat* ff;
    uint32_t frequency;
    bool active;
} JamContext;

static JamContext* jam_ctx = NULL;
