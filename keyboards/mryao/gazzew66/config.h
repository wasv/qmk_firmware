/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>
Copyright 2017 Sebastian Kaim <sebastian.kaim@sebb767.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VENDOR_ID       0x20A0
#define PRODUCT_ID      0x4246 // BF
#define DEVICE_VER      0x0103
#define MANUFACTURER    Mr.Yao
#define PRODUCT         Gazzew66

/* matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

//                        0   1   2   3   4   5   6   7   8   9   A   B   C   D   E
#define MATRIX_ROW_PINS { B4, B3, B2, B1, B0 }
#define MATRIX_COL_PINS { D7, C2, C3, C4, C5, C6, C7, A7, A6, A5, A4, A3, A2, A1, A0 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN D4
#define BACKLIGHT_LEVELS 3
