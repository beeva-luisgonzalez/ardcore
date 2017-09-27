#include "sample5.h"

prog_uchar sample5_data[sample5_size] = {
	127, 135, 141, 129, 77, 230, 205, 164, 182, 155, 219, 187, 166, 194, 165, 152, 
	185, 158, 155, 160, 140, 151, 117, 137, 120, 51, 122, 100, 46, 67, 44, 42, 
	21, 29, 21, 18, 12, 48, 19, 32, 75, 2, 64, 77, 23, 63, 70, 91, 
	89, 80, 118, 123, 112, 121, 194, 139, 143, 199, 201, 167, 238, 184, 193, 245, 
	208, 212, 187, 254, 193, 217, 207, 205, 239, 153, 180, 211, 142, 145, 150, 166, 
	124, 136, 133, 102, 94, 115, 86, 131, 57, 74, 142, 56, 115, 83, 61, 145, 
	66, 89, 31, 120, 107, 71, 120, 56, 97, 96, 61, 116, 67, 117, 121, 71, 
	88, 91, 110, 98, 84, 96, 121, 62, 123, 113, 83, 145, 98, 117, 134, 117, 
	128, 139, 146, 152, 107, 165, 165, 150, 175, 127, 214, 159, 141, 196, 163, 150, 
	216, 160, 163, 190, 195, 192, 216, 205, 166, 217, 231, 190, 225, 247, 239, 198, 
	255, 231, 226, 223, 209, 248, 219, 201, 236, 230, 186, 218, 187, 198, 205, 175, 
	171, 171, 173, 173, 125, 155, 163, 118, 127, 91, 157, 125, 92, 102, 101, 118, 
	75, 84, 98, 60, 51, 86, 48, 78, 31, 32, 89, 28, 35, 61, 39, 42, 
	22, 78, 16, 68, 40, 49, 49, 81, 49, 70, 77, 85, 86, 84, 94, 97, 
	108, 104, 113, 112, 119, 132, 123, 143, 145, 175, 143, 201, 176, 160, 206, 186, 
	215, 173, 210, 224, 189, 235, 184, 199, 239, 171, 231, 228, 186, 201, 203, 204, 
	178, 210, 205, 153, 195, 182, 159, 171, 141, 158, 178, 145, 141, 137, 142, 146, 
	96, 116, 163, 91, 121, 128, 94, 87, 123, 75, 110, 67, 79, 104, 41, 98, 
	71, 42, 57, 91, 67, 44, 53, 92, 71, 48, 67, 50, 79, 59, 63, 61, 
	65, 67, 55, 60, 87, 88, 48, 74, 136, 47, 89, 128, 54, 115, 90, 129, 
	110, 114, 113, 117, 136, 110, 140, 135, 145, 169, 139, 155, 147, 167, 190, 136, 
	193, 201, 196, 159, 161, 213, 232, 162, 216, 220, 163, 213, 202, 229, 176, 197, 
	235, 187, 138, 195, 225, 151, 183, 223, 145, 191, 221, 128, 214, 195, 102, 187, 
	149, 158, 148, 116, 167, 109, 112, 142, 48, 131, 97, 113, 126, 90, 74, 93, 
	98, 89, 86, 119, 84, 87, 99, 91, 84, 53, 99, 112, 91, 43, 108, 102, 
	101, 84, 93, 66, 107, 75, 121, 119, 47, 112, 112, 76, 119, 79, 79, 123, 
	92, 115, 85, 97, 124, 61, 86, 134, 82, 76, 98, 149, 65, 113, 121, 96, 
	67, 99, 132, 84, 126, 88, 104, 159, 77, 97, 153, 92, 119, 111, 123, 128, 
	109, 163, 132, 111, 154, 114, 127, 163, 129, 156, 147, 133, 114, 174, 149, 155, 
	128, 159, 184, 130, 144, 152, 144, 158, 135, 153, 178, 133, 172, 171, 130, 190, 
	160, 170, 159, 150, 160, 178, 167, 150, 207, 142, 163, 203, 139, 178, 191, 130, 
	178, 167, 157, 183, 149, 147, 168, 160, 138, 151, 152, 131, 150, 142, 127, 131, 
	142, 139, 101, 128, 118, 117, 135, 95, 106, 117, 122, 67, 96, 151, 60, 124, 
	121, 64, 112, 75, 96, 101, 93, 103, 75, 95, 84, 88, 81, 78, 92, 61, 
	79, 82, 76, 78, 67, 113, 75, 48, 128, 70, 81, 107, 72, 112, 62, 108, 
	112, 77, 99, 101, 117, 130, 107, 106, 119, 143, 104, 138, 152, 115, 138, 136, 
	142, 147, 128, 165, 167, 156, 172, 159, 177, 181, 155, 188, 183, 169, 179, 184, 
	182, 183, 190, 167, 210, 162, 181, 205, 160, 179, 179, 165, 180, 163, 177, 178, 
	161, 166, 182, 148, 180, 156, 146, 160, 160, 134, 171, 141, 135, 165, 128, 138, 
	135, 110, 141, 125, 133, 131, 120, 139, 124, 102, 116, 124, 118, 99, 135, 97, 
	112, 112, 102, 114, 85, 113, 124, 67, 122, 108, 105, 121, 84, 120, 105, 100, 
	108, 119, 110, 97, 107, 111, 108, 101, 97, 137, 95, 124, 117, 114, 111, 141, 
	107, 136, 116, 119, 121, 144, 127, 113, 174, 123, 129, 138, 139, 162, 125, 145, 
	150, 137, 155, 135, 151, 139, 133, 185, 143, 140, 167, 147, 162, 139, 163, 150, 
	139, 192, 144, 162, 156, 166, 151, 151, 160, 166, 141, 146, 178, 147, 158, 139, 
	162, 159, 153, 145, 161, 145, 132, 145, 137, 186, 116, 157, 144, 127, 123, 131, 
	156, 114, 143, 125, 103, 131, 134, 127, 146, 101, 96, 154, 117, 117, 153, 82, 
	147, 138, 122, 106, 101, 143, 128, 113, 115, 127, 115, 130, 120, 143, 97, 124, 
	114, 141, 112, 133, 119, 95, 129, 141, 102, 128, 103, 133, 107, 118, 136, 95, 
	107, 98, 136, 104, 102, 105, 140, 100, 135, 85, 108, 137, 111, 98, 130, 139, 
	91, 134, 108, 132, 111, 110, 111, 131, 120, 124, 128, 114, 121, 135, 111, 143, 
	102, 153, 120, 141, 121, 127, 167, 114, 141, 122, 141, 132, 120, 147, 137, 132, 
	155, 135, 124, 146, 147, 142, 145, 167, 144, 124, 179, 141, 132, 169, 170, 141, 
	142, 174, 152, 136, 153, 166, 138, 169, 170, 123, 159, 163, 153, 152, 146, 143, 
	160, 151, 135, 104, 164, 129, 135, 145, 117, 142, 120, 116, 145, 129, 119, 136, 
	108, 113, 133, 124, 98, 137, 123, 106, 103, 114, 136, 98, 128, 98, 105, 106, 
	103, 110, 122, 80, 111, 128, 75, 128, 81, 104, 115, 106, 112, 75, 118, 107, 
	99, 100, 104, 94, 91, 98, 105, 110, 98, 111, 99, 105, 133, 114, 90, 106, 
	115, 115, 139, 115, 97, 117, 146, 115, 123, 124, 108, 150, 115, 150, 134, 126, 
	146, 118, 128, 135, 133, 141, 164, 118, 128, 182, 134, 147, 167, 129, 134, 133, 
	158, 148, 143, 120, 172, 139, 141, 166, 97, 142, 175, 124, 145, 160, 114, 141, 
	163, 117, 146, 146, 120, 151, 138, 135, 120, 121, 128, 128, 114, 140, 119, 121, 
	137, 127, 118, 118, 110, 124, 122, 102, 144, 115, 97, 108, 105, 124, 137, 101, 
	96, 119, 130, 98, 133, 91, 111, 124, 111, 103, 103, 138, 110, 123, 104, 122, 
	119, 106, 111, 114, 107, 111, 118, 119, 100, 113, 133, 112, 121, 142, 101, 124, 
	110, 132, 117, 114, 150, 108, 106, 138, 128, 133, 112, 136, 125, 94, 146, 147, 
	105, 154, 128, 109, 139, 127, 130, 148, 116, 126, 132, 138, 125, 138, 141, 141, 
	123, 111, 174, 143, 110, 158, 136, 128, 149, 146, 113, 168, 127, 134, 147, 128, 
	158, 132, 121, 163, 128, 142, 122, 145, 129, 131, 140, 127, 166, 124, 101, 150, 
	136, 138, 148, 114, 131, 136, 133, 134, 143, 96, 166, 138, 115, 130, 126, 158, 
	117, 129, 153, 114, 117, 137, 133, 121, 137, 130, 139, 114, 128, 153, 93, 137, 
	140, 108, 132, 123, 128, 128, 115, 144, 123, 109, 133, 120, 97, 120, 153, 97, 
	121, 136, 114, 128, 107, 96, 147, 122, 125, 86, 136, 140, 106, 126, 106, 128, 
	116, 127, 123, 118, 114, 122, 124, 128, 113, 117, 148, 126, 98, 125, 128, 121, 
	106, 143, 140, 108, 138, 132, 135, 128, 113, 136, 147, 126, 136, 135, 131, 149, 
	128, 147, 120, 126, 177, 136, 131, 113, 184, 143, 126, 161, 123, 150, 151, 138, 
	154, 133, 131, 143, 137, 143, 138, 129, 156, 129, 133, 165, 117, 152, 135, 123, 
	134, 132, 143, 134, 129, 139, 130, 125, 126, 122, 140, 121, 130, 123, 135, 108, 
	130, 136, 117, 118, 144, 115, 109, 110, 140, 130, 118, 107, 107, 146, 107, 133, 
	113, 99, 128, 128, 113, 114, 129, 123, 118, 97, 143, 111, 111, 127, 101, 130, 
	118, 120, 100, 127, 126, 132, 117, 119, 128, 124, 110, 121, 125, 127, 128, 126, 
	134, 118, 132, 124, 125, 130, 126, 122, 142, 129, 117, 127, 152, 126, 138, 153, 
	121, 132, 132, 148, 125, 154, 123, 122, 161, 155, 103, 156, 152, 124, 166, 129, 
	144, 136, 135, 145, 142, 135, 139, 137, 133, 162, 121, 140, 142, 153, 142, 120, 
	161, 137, 126, 132, 136, 144, 133, 137, 141, 120, 153, 138, 125, 130, 142, 134, 
	116, 120, 146, 142, 134, 123, 126, 138, 126, 136, 128, 122, 140, 124, 122, 132, 
	120, 150, 136, 109, 115, 142, 137, 130, 125, 135, 114, 145, 122, 135, 128, 118, 
	140, 125, 120, 131, 135, 121, 143, 128, 133, 126, 122, 139, 126, 122, 128, 122, 
	130, 127, 124, 136, 126, 114, 122, 155, 118, 134, 134, 125, 117, 135, 133, 134, 
	124, 127, 135, 132, 126, 133, 127, 125, 142, 120, 135, 127, 129, 134, 125, 131, 
	135, 134, 131, 128, 136, 127, 126, 159, 115, 140, 147, 129, 132, 114, 133, 141, 
	131, 134, 140, 137, 122, 131, 152, 112, 141, 136, 113, 151, 144, 118, 136, 145, 
	128, 124, 147, 118, 150, 133, 144, 124, 132, 150, 132, 112, 144, 137, 125, 139, 
	138, 131, 132, 135, 112, 141, 142, 121, 128, 130, 135, 133, 132, 117, 126, 125, 
	127, 128, 136, 101, 129, 142, 116, 139, 129, 122, 109, 129, 123, 123, 133, 119, 
	115, 126, 128, 121, 123, 113, 137, 131, 111, 128, 127, 121, 127, 113, 118, 122, 
	110, 122, 144, 111, 114, 141, 114, 128, 131, 108, 135, 116, 121, 118, 138, 134, 
	110, 146, 131, 107, 136, 125, 135, 118, 135, 150, 103, 135, 147, 122, 137, 129, 
	129, 141, 126, 151, 145, 119, 144, 129, 146, 143, 132, 121, 150, 135, 135, 153, 
	128, 141, 128, 138, 132, 134, 138, 123, 143, 140, 117, 144, 132, 132, 126, 132, 
	136, 127, 132, 131, 128, 129, 127, 128, 131, 129, 125, 131, 128, 127, 129, 128, 
	128, 128, 128, 127, 128, 128, 128, 128, 127, 128, 128, 128, 128, 128, 128, 128
};

