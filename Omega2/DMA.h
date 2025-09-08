//
//  DMA.h
//  Omega2
//
//  Created by Matt Parsons on 29/03/2022.
//

#ifndef DMA_h
#define DMA_h

#include <stdio.h>
#include <stdint.h>

void DMAExecute(void* ChipState, uint32_t* framebuffer);

#endif /* DMA_h */
