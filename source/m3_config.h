//
//  m3_config.h
//
//  Created by Steven Massey on 5/4/19.
//  Copyright © 2019 Steven Massey. All rights reserved.
//

#ifndef m3_config_h
#define m3_config_h

#include "m3_config_platforms.h"

// general --------------------------------------------------------------------

# ifndef d_m3CodePageAlignSize
#   define d_m3CodePageAlignSize                4096
# endif

# ifndef d_m3EnableCodePageRefCounting
#   define d_m3EnableCodePageRefCounting        0
# endif

# ifndef d_m3MaxFunctionStackHeight
#   define d_m3MaxFunctionStackHeight           2000    // TODO: comment on upper limit
# endif

# ifndef d_m3MaxLinearMemoryPages
#   define d_m3MaxLinearMemoryPages             32768
# endif

# ifndef d_m3MaxFunctionSlots
#   define d_m3MaxFunctionSlots                 ((d_m3MaxFunctionStackHeight)*2)
# endif

# ifndef d_m3MaxConstantTableSize
#   define d_m3MaxConstantTableSize             120
# endif

# ifndef d_m3MaxDuplicateFunctionImpl
#   define d_m3MaxDuplicateFunctionImpl         3
# endif

# ifndef d_m3EnableExtendedOpcodes
#   define d_m3EnableExtendedOpcodes            1
# endif

# ifndef d_m3VerboseErrorMessages
#   define d_m3VerboseErrorMessages             1
# endif

# ifndef d_m3FixedHeap
#   define d_m3FixedHeap                        false
//# define d_m3FixedHeap                        (32*1024)
# endif

# ifndef d_m3FixedHeapAlign
#   define d_m3FixedHeapAlign                   16
# endif

# ifndef d_m3Use32BitSlots
#   define d_m3Use32BitSlots                    1
# endif

# ifndef d_m3ProfilerSlotMask
#   define d_m3ProfilerSlotMask                 0xFFFF
# endif

# ifndef d_m3RecordBacktraces
#   define d_m3RecordBacktraces                 0
# endif

# ifndef d_m3EnableExceptionBreakpoint
#   define d_m3EnableExceptionBreakpoint        0       // see m3_exception.h
# endif

# ifndef d_m3EnableExtensions
#   define d_m3EnableExtensions        			1		// enables the specialized APIs in wasm3_ext.h
# endif

// profiling and tracing ------------------------------------------------------

# ifndef d_m3EnableOpProfiling
#   define d_m3EnableOpProfiling                0       // opcode usage counters
# endif

# ifndef d_m3EnableOpTracing
#   define d_m3EnableOpTracing                  0       // only works with DEBUG
# endif

# ifndef d_m3EnableStrace
#   define d_m3EnableStrace                     0       // 1 - trace exported function calls
                                                        // 2 - trace all calls (structured) - requires DEBUG
                                                        // 3 - all calls + loops + memory operations
# endif


// logging --------------------------------------------------------------------

# ifndef d_m3LogParse
#   define d_m3LogParse                         0       // .wasm binary decoding info
# endif

# ifndef d_m3LogModule
#   define d_m3LogModule                        0       // wasm module info
# endif

# ifndef d_m3LogCompile
#   define d_m3LogCompile                       0       // wasm -> metacode generation phase
# endif

# ifndef d_m3LogWasmStack
#   define d_m3LogWasmStack                     0       // dump the wasm stack when pushed or popped
# endif

# ifndef d_m3LogEmit
#   define d_m3LogEmit                          0       // metacode generation info
# endif

# ifndef d_m3LogCodePages
#   define d_m3LogCodePages                     0       // dump metacode pages when released
# endif

# ifndef d_m3LogRuntime
#   define d_m3LogRuntime                       0       // higher-level runtime information
# endif

# ifndef d_m3LogNativeStack
#   define d_m3LogNativeStack                   0       // track the memory usage of the C-stack
# endif


// other ----------------------------------------------------------------------

# ifndef d_m3HasFloat
#   define d_m3HasFloat                         1       // implement floating point ops
# endif

#if !d_m3HasFloat && !defined(d_m3NoFloatDynamic)
#   define d_m3NoFloatDynamic                   1       // if no floats, do not fail until flops are actually executed
#endif

# ifndef d_m3SkipStackCheck
#   define d_m3SkipStackCheck                   0       // skip stack overrun checks
# endif

# ifndef d_m3SkipMemoryBoundsCheck
#   define d_m3SkipMemoryBoundsCheck            0       // skip memory bounds checks
# endif

#endif // m3_config_h
