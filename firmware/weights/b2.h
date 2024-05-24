//Numpy array shape [16]
//Min -0.062500000000
//Max 0.062500000000
//Number of zeros 5

#ifndef B2_H_
#define B2_H_

#ifndef __SYNTHESIS__
bias2_t b2[16];
#else
bias2_t b2[16] = {-0.06250, 0.96875, 0.12500, 0.96875, -0.25000, 0.18750, -0.12500, 0.18750, -0.09375, 0.40625, 0.96875, -0.15625, 0.28125, -0.40625, 0.96875, -0.03125};
#endif

#endif
