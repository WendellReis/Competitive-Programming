import numpy as np

cos45 = sin45 = np.sqrt(2)/2

F = 0.3

B = np.zeros(40)
B[11] = F

# Create a 40x40 zero array
A = np.zeros((40, 40))

# Equation 1: F36cos45 + F37 + F38 = 0
A[0,37] = 1
A[0, 35] = cos45
A[0, 36] = 1

# Equation 2: F36sen45 + F39 = 0
A[1,38] = 1
A[1, 35] = sin45

# Equation 3: F37 - F34 = 0
A[2, 36] = 1
A[2, 33] = -1

# Equation 4: F35 = 0
A[3, 34] = 1

# Equation 5: F32 + F36cos45 + F33cos45 = 0
A[4, 31] = 1
A[4, 32] = cos45
A[4, 35] = cos45

# Equation 6: -F35 + F36sen45 - F33sin45 = 0
A[5, 34] = -1
A[5, 32] = -sin45
A[5, 35] = sin45

# Equation 7: -F34 + F28 + F33cos45 + F26cos45 = 0
A[6, 33] = -1
A[6, 27] = 1
A[6, 32] = cos45
A[6, 25] = cos45

# Equation 8: -F31 - F33sen45 + F26sen45 = 0
A[7, 30] = -1
A[7, 32] = -sin45
A[7, 25] = sin45

# Equation 9: F32 + F25 = 0
A[8, 31] = 1
A[8, 24] = 1

# Equation 10: -F31 = 0
A[9, 30] = -1

# Equation 11: F28 + F24 = 0
A[10, 27] = 1
A[10, 23] = 1

# Equation 12: -F27 = 0
A[11, 26] = -1

# Equation 13: F25 + F21 + F26cos45 + F23cos45 = 0
A[12, 24] = 1
A[12, 20] = 1
A[12, 25] = cos45
A[12, 22] = cos45

# Equation 14: -F27 - F23sen45 + F26sen45 = 0
A[13, 26] = -1
A[13, 22] = -sin45
A[13, 25] = sin45

# Equation 15: F24 + F20 + F23cos45 + F19cos45 = 0
A[14, 23] = 1
A[14, 19] = 1
A[14, 22] = cos45
A[14, 18] = cos45

# Equation 16: -F23sen45 + F22 + F19sen45 = 0
A[15, 22] = -sin45
A[15, 21] = 1
A[15, 18] = sin45

# Equation 17: F21 - F18 = 0
A[16, 20] = 1
A[16, 17] = -1

# Equation 18: F22 = 0
A[17, 21] = 1


# Equation 19: F20 - F3 = 0
A[18, 19] = 1
A[18, 2] = -1

# Equation 20: -F1 = 0
A[19, 0] = -1

# Equation 21: -F18 - F2cos45 + F4 + F19cos45 = 0
A[20, 17] = -1
A[20, 1] = -cos45
A[20, 3] = 1
A[20, 18] = cos45

# Equation 22: F19sen45 + F2sen45 - F1 = 0
A[21, 18] = sin45
A[21, 1] = sin45
A[21, 0] = -1

# Equation 23: -F3 - F8 - F7cos45 - F2cos45 = 0
A[22, 2] = -1
A[22, 7] = -1
A[22, 6] = -cos45
A[22, 1] = -cos45

# Equation 24: F6 + F2sen45 - F7sen45 = 0
A[23, 5] = 1
A[23, 1] = sin45
A[23, 6] = -sin45

# Equation 25: F4 - F5 = 0
A[24, 3] = 1
A[24, 4] = -1

# Equation 26: F6 = 0
A[25, 5] = 1

# Equation 27: -F8 - F12 = 0
A[26, 7] = -1
A[26, 11] = -1

# Equation 28: -F9 = 0
A[27, 8] = -1

# Equation 29: -F5 - F11 - F10cos45 - F7cos45 = 0
A[28, 4] = -1
A[28, 10] = -1
A[28, 9] = -cos45
A[28, 6] = -cos45

# Equation 30: -F9 - F7sen45 + F10sen45 = 0
A[29, 8] = -1
A[29, 6] = -sin45
A[29, 9] = sin45

# Equation 31: -F12 - F14cos45 - F10cos45 + F15 = 0
A[30, 11] = -1
A[30, 13] = -cos45
A[30, 9] = -cos45
A[30, 14] = 1

# Equation 32: -F29 - F14sen45 + F10sen45 = 0
A[31, 28] = -1
A[31, 13] = -sin45
A[31, 9] = sin45

# Equation 33: -F11 - F13 = 0
A[32, 10] = -1
A[32, 12] = -1

# Equation 34: -F29 = 0
A[33, 28] = -1

# Equation 35: F15 - F17 = 0
A[34, 14] = 1
A[34, 16] = -1

# Equation 36: -F30 = 0
A[35, 29] = -1

# Equation 37: -F13 - F16cos45 - F14cos45 = 0
A[36, 12] = -1
A[36, 15] = -cos45
A[36, 13] = -cos45

# Equation 38: -F30 - F14sen45 + F16sen45 = 0
A[37, 29] = -1
A[37, 13] = -sin45
A[37, 15] = +sin45

# Equation 39: -F17 - F16cos45 = 0
A[38, 16] = -1
A[38, 15] = -cos45

# Equation 40: F16sen45 +F40 = 0
A[39,39] = 1
A[39, 15] = sin45

x = np.linalg.lstsq(A, B, rcond=None)

with open('ponte.txt','w') as arq:
    arq.write(str(x[0]))

s = np.array(x[0])

print(s)

max_abs_value = -np.inf
max_index = -1

for i in range(len(s)):
    if abs(s[i]) > max_abs_value:
        max_abs_value = abs(s[i])
        max_index = i

print(f"Maior valor absoluto de forca: F{max_index+1} = {s[max_index]}kN")