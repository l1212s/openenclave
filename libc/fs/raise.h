// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef _FS_RAISE_H
#define _FS_RAISE_H

// clang-format off
#define CHECK(ERR)                \
    do                            \
    {                             \
        fs_errno_t __err__ = ERR; \
        if (__err__ != OE_EOK)    \
        {                         \
            err = __err__;        \
            goto done;            \
        }                         \
    }                             \
    while (0)
// clang-format on

// clang-format off
#define RAISE(ERR) \
    do             \
    {              \
        err = ERR; \
        goto done; \
    }              \
    while (0)
// clang-format on

#endif /* _FS_RAISE_H */
