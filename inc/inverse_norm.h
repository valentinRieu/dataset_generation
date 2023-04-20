// Enzo CADONI - LIS - 2022/2023
// Table for reduced centered normal distribution

#ifndef INVERSE_H_
#define INVERSE_H_

// Inverse normal distribution table
double inverse_norm[] = {
  0.5, 0.50398, 0.50797, 0.51196, 0.51595, 0.51993, 0.52392,
  0.5279, 0.53188, 0.53585, 0.53982, 0.54379, 0.54775, 0.55171,
  0.55567, 0.55961, 0.56355, 0.56749, 0.57142, 0.57534, 0.57925,
  0.58316, 0.58706, 0.59095, 0.59483, 0.5987, 0.60256, 0.60641,
  0.61026, 0.61409, 0.61791, 0.62171, 0.62551, 0.6293, 0.63307,
  0.63683, 0.64057, 0.6443, 0.64802, 0.65173, 0.65542, 0.65909,
  0.66275, 0.6664, 0.67003, 0.67364, 0.67724, 0.68082, 0.68438,
  0.68793, 0.69146, 0.69497, 0.69846, 0.70194, 0.7054, 0.70884,
  0.71226, 0.71566, 0.71904, 0.7224, 0.72574, 0.72906, 0.73237,
  0.73565, 0.73891, 0.74215, 0.74537, 0.74857, 0.75174, 0.7549,
  0.75803, 0.76114, 0.76423, 0.7673, 0.77035, 0.77337, 0.77637,
  0.77935, 0.7823, 0.78523, 0.78814, 0.79102, 0.79389, 0.79673,
  0.79954, 0.80233, 0.8051, 0.80784, 0.81057, 0.81326, 0.81593,
  0.81858, 0.82121, 0.82381, 0.82639, 0.82894, 0.83147, 0.83397,
  0.83645, 0.83891, 0.84134, 0.84375, 0.84613, 0.84849, 0.85083,
  0.85314, 0.85542, 0.85769, 0.85992, 0.86214, 0.86433, 0.8665, 0.86864,
  0.87076, 0.87285, 0.87492, 0.87697, 0.87899, 0.88099, 0.88297, 0.88493,
  0.88686, 0.88876, 0.89065, 0.89251, 0.89435, 0.89616, 0.89795, 0.89972,
  0.90147, 0.90319, 0.9049, 0.90658, 0.90824, 0.90987, 0.91149, 0.91308,
  0.91465, 0.9162, 0.91773, 0.91924, 0.92073, 0.92219, 0.92364, 0.92506,
  0.92647, 0.92785, 0.92921, 0.93056, 0.93188, 0.93319, 0.93447, 0.93574,
  0.93699, 0.93821, 0.93942, 0.94062, 0.94179, 0.94294, 0.94408, 0.9452,
  0.9463, 0.94738, 0.94844, 0.94949, 0.95052, 0.95154, 0.95254, 0.95352,
  0.95448, 0.95543, 0.95636, 0.95728, 0.95818, 0.95907, 0.95994, 0.96079,
  0.96163, 0.96246, 0.96327, 0.96406, 0.96485, 0.96562, 0.96637, 0.96711,
  0.96784, 0.96855, 0.96925, 0.96994, 0.97062, 0.97128, 0.97193, 0.97257,
  0.97319, 0.97381, 0.97441, 0.975, 0.97558, 0.97614, 0.9767, 0.97724, 0.97778, 0.9783, 0.97882, 0.97932, 0.97981, 0.9803, 0.98077, 0.98123, 0.98169,
  0.98213, 0.98257, 0.98299, 0.98341, 0.98382, 0.98422, 0.98461, 0.98499,
  0.98537, 0.98573, 0.98609, 0.98644, 0.98679, 0.98712, 0.98745, 0.98777,
  0.98808, 0.98839, 0.98869, 0.98898, 0.98927, 0.98955, 0.98982, 0.99009,
  0.99035, 0.99061, 0.99086, 0.9911, 0.99134, 0.99157, 0.9918, 0.99202,
  0.99223, 0.99245, 0.99265, 0.99285, 0.99305, 0.99324, 0.99343, 0.99361,
  0.99379, 0.99396, 0.99413, 0.99429, 0.99445, 0.99461, 0.99476, 0.99491,
  0.99505, 0.9952, 0.99533, 0.99547, 0.9956, 0.99573, 0.99585, 0.99597,
  0.99609, 0.9962, 0.99631, 0.99642, 0.99653, 0.99663, 0.99673, 0.99683,
  0.99692, 0.99702, 0.9971, 0.99719, 0.99728, 0.99736, 0.99744, 0.99752,
  0.99759, 0.99767, 0.99774, 0.99781, 0.99788, 0.99794, 0.99801, 0.99807,
  0.99813, 0.99819, 0.99824, 0.9983, 0.99835, 0.99841, 0.99846, 0.99851,
  0.99855, 0.9986, 0.99865, 0.99869, 0.99873, 0.99877, 0.99881, 0.99885,
  0.99889, 0.99892, 0.99896, 0.99899, 0.99903, 0.99906, 0.99909, 0.99912,
  0.99915, 0.99918, 0.99921, 0.99923, 0.99926, 0.99928, 0.99931, 0.99933,
  0.99935, 0.99938, 0.9994, 0.99942, 0.99944, 0.99946, 0.99948, 0.99949,
  0.99951, 0.99953, 0.99954, 0.99956, 0.99958, 0.99959, 0.99961, 0.99962,
  0.99963, 0.99965, 0.99966, 0.99967, 0.99968, 0.99969, 0.9997, 0.99971,
  0.99972, 0.99973, 0.99974, 0.99975, 0.99976, 0.99977, 0.99978, 0.99979,
  0.99979, 0.9998, 0.99981, 0.99982, 0.99982, 0.99983, 0.99984, 0.99984,
  0.99985, 0.99985, 0.99986, 0.99986, 0.99987, 0.99987, 0.99988, 0.99988,
  0.99989, 0.99989, 0.9999, 0.9999, 0.9999, 0.99991, 0.99991, 0.99991, 0.99992,
  0.99992, 0.99992, 0.99993, 0.99993, 0.99993, 0.99993, 0.99994, 0.99994,
  0.99994, 0.99994, 0.99994, 0.99995, 0.99995, 0.99995, 0.99995, 0.99995,
  0.99996, 0.99996, 0.99996, 0.99996, 0.99996, 0.99996, 0.99996, 0.99997,
  0.99997, 0.99997, 0.99997, 0.99997, 0.99997, 0.99997, 0.99997, 0.99997,
  0.99998, 0.99998, 0.99998, 0.99998, 0.99998, 0.99998, 0.99998, 0.99998,
  0.99998, 0.99998, 0.99998, 0.99998, 0.99998, 0.99998, 0.99998, 0.99998,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999, 0.99999,
  0.99999
};

#endif