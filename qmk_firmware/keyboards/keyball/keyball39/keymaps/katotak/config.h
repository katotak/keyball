/*
This is the c configuration file for the keymap

Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

// 容量削減のため以下をオミット
#ifdef RGBLIGHT_ENABLE
// #    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #    define RGBLIGHT_EFFECT_SNAKE
// #    define RGBLIGHT_EFFECT_KNIGHT
// #    define RGBLIGHT_EFFECT_CHRISTMAS
// #    define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #    define RGBLIGHT_EFFECT_RGB_TEST
// #    define RGBLIGHT_EFFECT_ALTERNATING
// #    define RGBLIGHT_EFFECT_TWINKLE

#   undef RGBLED_NUM 
#   define RGBLED_NUM 46
#   undef RGBLED_SPLIT
#   define RGBLED_SPLIT { 24, 22 }  // (24 + 22)
#   undef RGBLIGHT_LIMIT_VAL
#   define RGBLIGHT_LIMIT_VAL 125
#   define RGBLIGHT_SPLIT

#   define LED_LAYOUT( \
L00, L01, L02, L03, L04,      R00, R01, R02, R03, R04, \
L10, L11, L12, L13, L14,      R10, R11, R12, R13, R14, \
L20, L21, L22, L23, L24,      R20, R21, R22, R23, R24, \
L30, L31, L32,                                    R34, \
L40, L41, L42, L43, L44, L45, R40, R41, R42, R43, R44, R45 \
    ) \
    { \
    L04, L14, L24, \
    L03, L13, L23, \
    L02, L12, L22, L32, \
    L01, L11, L21, L31, \
    L00, L10, L20, L30, \
    L40, L41, L42, L43, L44, L45, \
    R40, R41, R42, R43, R44, R45, \
    R04, R14, R24, R34, \
    R03, R13, R23, \
    R02, R12, R22, \
    R01, R11, R21, \
    R00, R10, R20 \
    }

#   define RGBLIGHT_LED_MAP LED_LAYOUT( \
     0,  1,  2,  3,  4,     18, 19, 20, 21, 22, \
     5,  6,  7,  8,  9,     23, 24, 25, 26, 27, \
    10, 11, 12, 13, 14,     28, 29, 30, 31, 32, \
    15, 16, 17,                             33, \
    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45 )
#endif

#define KEYBALL_SCROLLSNAP_ENABLE 0  // scrollsnapをオフにする

#define TAP_CODE_DELAY 5

#define KEYBALL_CPI_DEFAULT 700       // 光学センサーPMW3360DM の解像度 (CPI) の規定値
#define KEYBALL_CPI_SLOW 200       // 光学センサーの解像度 (CPI) の精密モード
#define KEYBALL_SCROLL_DIV_DEFAULT 5  // スクロール速度の規定値

// #define AUTO_CLICK_LAYER 4            // マウス入力が可能になった際に有効になるレイヤー
// #define AUTO_CLICK_CLICKED_STAY_TIME 300;     // CLICKEDの滞在時間（千分の一秒)。その後、クリックレイヤーが無効になる
// #define AUTO_CLICK_CLICKABLE_STAY_TIME 1000;  // CLICKABLEの滞在時間（千分の一秒)。その後、クリックレイヤーが無効になる

// ファームウェアのサイズを削減
#define NO_ACTION_ONESHOT  // 392バイト

// #define IGNORE_MOD_TAP_INTERRUPT  // 10バイト
// #define TAPPING_FORCE_HOLD  // 34バイト
// 下記三つで444バイト
#define TAPPING_TERM 175
// #define PERMISSIVE_HOLD
// #define RETRO_TAPPING
