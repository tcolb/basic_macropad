#pragma once

#include "quantum.h"

#define LAYOUT( \
    k00, k01, k02, \
    k10, k11, k12  \
) \
{ \
    { k00, k01, k02 }, \
    { k10, k11, k12 }, \
}

#define LAYOUT_ansi( \
    k00, k01, k02, \
    k10, k11, k12  \
) \
{ \
    { k00, k01, k02 }, \
    { k10, k11, k12 }, \
}
