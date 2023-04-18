// Special thanks to koopa1338: https://github.com/koopa1338/qmk_firmware
#pragma once

#include QMK_KEYBOARD_H
#include "process_ucis.h"

enum {
    KC_UCIS = SAFE_RANGE,
};

// clang-format off
const ucis_symbol_t ucis_symbol_table[] = UCIS_TABLE(
    UCIS_SYM("amore", 0x2665,0x203f,0x2665), /* ♥‿♥ */
    UCIS_SYM("anger", 0x03a3,0x0028,0x25bc,0x25a1,0x25bc,0x30e1,0x0029), /* Σ(▼□▼メ) */
    UCIS_SYM("annoyed", 0x0028,0x00ac,0x005f,0x00ac,0x0022,0x0029), /* (¬_¬") */
    UCIS_SYM("anticipation", 0x0028,0x2283,0x203f,0x2282,0x0029), /* (⊃‿⊂) */
    UCIS_SYM("applause", 0x0028,0x005e,0x005e,0x0029,0x002f,0x002f), /* (^^)// */
    UCIS_SYM("archer", 0x003c,0x0028,0x0020,0xff65,0xff6a,0x002d,0x0029,0x003c,0x007d), /* <( ･ｪ-)<} */
    UCIS_SYM("armwrestle", 0x0028,0x0020,0x0060,0x005f,0x0029,0x4e42,0x0028,0x005f,0x0027,0x0020,0x0029), /* ( `_)乂(_' ) */
    UCIS_SYM("ashamed", 0x0028,0xff1b,0x4e00,0x005f,0x4e00,0x0029), /* (；一_一) */
    UCIS_SYM("attentive", 0x0028,0x2312,0x0020,0x035c,0x0296,0x2312,0x0029,0x0062), /* (⌒ ͜ʖ⌒)b */
    UCIS_SYM("bat", 0x002f,0x007c,0x005c,0x0028,0x0020,0x003b,0x002c,0x003b,0x0020,0x0029,0x002f,0x007c,0x005c), /* /|\( ;,; )/|\ */
    UCIS_SYM("bear", 0x0295,0x2022,0x0361,0x1d25,0x2022,0x0294), /* ʕ•͡ᴥ•ʔ */
    UCIS_SYM("bestbuddies", 0x2514,0x0028,0x005e,0x006f,0x005e,0x0020,0x0029,0xff38,0x0028,0x0020,0x005e,0x006f,0x005e,0x0029,0x2518), /* └(^o^ )Ｘ( ^o^)┘ */
    UCIS_SYM("bestbuds", 0xff08,0x3000,0xff3e,0xff3e,0xff09,0x4eba,0xff08,0xff3e,0xff3e,0x3000,0xff09), /* （　＾＾）人（＾＾　） */
    UCIS_SYM("biggrin", 0x0028,0xffe3,0x25bc,0xffe3,0x0029), /* (￣▼￣) */
    UCIS_SYM("boo", 0x30fe,0x0028,0xff40,0x03b5,0x00b4,0x0029,0xff89), /* ヾ(｀ε´)ﾉ */
    UCIS_SYM("boogie", 0x30fd,0x0028,0x2310,0x25a0,0x005f,0x25a0,0x0029,0x30ce,0x266a,0x266c), /* ヽ(⌐■_■)ノ♪♬ */
    UCIS_SYM("bowling", 0xff1d,0x0028,0x0020,0x005e,0x006f,0x005e,0x0029,0x30ce,0x005f,0x005f,0x005f,0xff4f), /* ＝( ^o^)ノ___ｏ */
    UCIS_SYM("brofist", 0x0028,0x00f3,0x0020,0x00ec,0x005f,0x00ed,0x0029,0x003d,0x00f3,0x00f2,0x003d,0x0028,0x00ec,0x005f,0x00ed,0x0020,0x00f2,0x0029), /* (ó ì_í)=óò=(ì_í ò) */
    UCIS_SYM("butterfly", 0x01b8,0x0335,0x0321,0x04dc,0x0335,0x0328,0x0304,0x01b7), /* Ƹ̵̡Ӝ̵̨̄Ʒ */
    UCIS_SYM("caroling", 0xff3c,0x0028,0x005e,0x006f,0x0029,0x0028,0x005e,0x0030,0x005e,0x0029,0x0028,0x006f,0x005e,0x0029,0xff0f), /* ＼(^o)(^0^)(o^)／ */
    UCIS_SYM("celebrate", 0xff3c,0x0028,0xff3e,0x004f,0xff3e,0x0029,0xff0f), /* ＼(＾O＾)／ */
    UCIS_SYM("chameleon", 0x161b,0x2050,0x0324,0x1550,0x1437), /* ᘛ⁐̤ᕐᐷ */
    UCIS_SYM("chasing", 0x0028,0x25cb,0xff40,0x0434,0x00b4,0x0029,0xff89,0xff7c,0x0020,0x03a3,0x0028,0x3063,0xff9f,0x0414,0xff9f,0x0029,0x3063), /* (○｀д´)ﾉｼ Σ(っﾟДﾟ)っ */
    UCIS_SYM("chasingbutterfly", 0x301c,0x301c,0x0028,0xff0f,0xffe3,0x25bd,0x0029,0xff0f,0x3000,0x301c,0x0444), /* 〜〜(／￣▽)／　〜ф */
    UCIS_SYM("chubby", 0x005e,0x0029,0x005f,0x0028,0x005e), /* ^)_(^ */
    UCIS_SYM("clap", 0x0028,0xffe3,0x30fc,0xffe3,0x0029,0x002f,0x002f,0x201d,0x201d), /* (￣ー￣)//”” */
    UCIS_SYM("coffee", 0x0028,0x0020,0x002d,0x005f,0x002d,0x0029,0x65e6,0x007e), /* ( -_-)旦~ */
    UCIS_SYM("cold", 0x2579,0xfe4f,0x2579), /* ╹﹏╹ */
    UCIS_SYM("comfort", 0x0028,0x3002,0x3002,0x003b,0x0029,0xff3c,0x0028,0x002d,0x005f,0x002d,0x0029), /* (。。;)＼(-_-) */
    UCIS_SYM("confused", 0xff62,0x0028,0xff9f,0xff8d,0xff9f,0x0029), /* ｢(ﾟﾍﾟ) */
    UCIS_SYM("couple", 0x0028,0x0254,0x02c6,0x0020,0x00b3,0x0028,0x02c6,0x2323,0x02c6,0x0063,0x0029), /* (ɔˆ ³(ˆ⌣ˆc) */
    UCIS_SYM("crazy", 0x0028,0x25d0,0x203f,0x25d1,0x0029), /* (◐‿◑) */
    UCIS_SYM("cry", 0x0ca5,0x005f,0x0ca5), /* ಥ_ಥ */
    UCIS_SYM("cunning", 0x0028,0x00ac,0x203f,0x00ac,0x0029), /* (¬‿¬) */
    UCIS_SYM("cuttingarug", 0x250c,0x007c,0x00b0,0x0437,0x00b0,0x007c,0x2518), /* ┌|°з°|┘ */
    UCIS_SYM("cyborg", 0x0028,0x256c,0x2609,0x0414,0x2299,0x0e3a,0x0029), /* (╬☉Д⊙ฺ) */
    UCIS_SYM("dance", 0x266a,0x250f,0x0028,0x30fb,0x006f,0xff65,0x0029,0x251b,0x266a), /* ♪┏(・o･)┛♪ */
    UCIS_SYM("darthvader", 0x0028,0xff61,0x25bc,0x76bf,0x25bc,0x0029), /* (｡▼皿▼) */
    UCIS_SYM("dead", 0x0028,0x0023,0x00d7,0x005f,0x00d7,0x0029), /* (#×_×) */
    UCIS_SYM("deadperson", 0x2716,0x203f,0x2716), /* ✖‿✖ */
    UCIS_SYM("dealwithit", 0x0028,0x2580,0x033f,0x0139,0x032f,0x2580,0x033f,0x0020,0x033f,0x0029), /* (▀̿Ĺ̯▀̿ ̿) */
    UCIS_SYM("discontent", 0xff08,0xffe3,0x3078,0xffe3,0xff09), /* （￣へ￣） */
    UCIS_SYM("dissatisfied", 0x0028,0x002a,0xffe3,0x006d,0xffe3,0x0029), /* (*￣m￣) */
    UCIS_SYM("distraught", 0x0f3c,0x0020,0x0f0e,0x0eb6,0x0020,0x0df4,0x0020,0x0f0e,0x0eb6,0x0f3d), /* ༼ ༎ຶ ෴ ༎ຶ༽ */
    UCIS_SYM("dog", 0x25e4,0x25e1,0x1d25,0x25e1,0x25e5), /* ◤◡ᴥ◡◥ */
    UCIS_SYM("doggy", 0x0056,0x25cf,0x1d25,0x25cf,0x0056), /* V●ᴥ●V */
    UCIS_SYM("dreaming", 0x0028,0x005f,0x0020,0x005f,0x0029,0x002e,0x002e,0x006f,0x006f,0x004f,0x004f), /* (_ _)..ooOO */
    UCIS_SYM("evillaugh", 0x0028,0x0e51,0x2256,0x0e34,0x0e34,0x76ca,0x2256,0x0e34,0x0e51,0x0029), /* (๑≖ิิ益≖ิ๑) */
    UCIS_SYM("excited", 0x30fd,0x0028,0x2605,0x03c9,0x2605,0x0029,0x30ce), /* ヽ(★ω★)ノ */
    UCIS_SYM("exorcism", 0x2020,0x005f,0x0028,0xff9f,0xff70,0xff9f,0x002a,0x0029,0x03b2), /* †_(ﾟｰﾟ*)β */
    UCIS_SYM("fallingasleep", 0x0028,0x002b,0x002e,0x002b,0x0029,0x0028,0x002d,0x002e,0x002d,0x0029,0x0028,0x005f,0x0020,0x005f,0x0029), /* (+.+)(-.-)(_ _) */
    UCIS_SYM("fedup", 0xff3c,0x0028,0xff40,0x0030,0x00b4,0x0029,0xff0f), /* ＼(｀0´)／ */
    UCIS_SYM("fighting", 0x0028,0x0e07,0x0020,0x2022,0x0300,0x309d,0x2022,0x0301,0x0029,0x0e07), /* (ง •̀ゝ•́)ง */
    UCIS_SYM("fish", 0x03f5,0x0028,0x0020,0x0027,0x0398,0x0027,0x0020,0x0029,0x03f6), /* ϵ( 'Θ' )϶ */
    UCIS_SYM("fistup", 0x0028,0x0e07,0x0020,0x2022,0x0300,0x005f,0x2022,0x0301,0x0029,0x0e07), /* (ง •̀_•́)ง */
    UCIS_SYM("flex", 0x1566,0x0028,0x00f2,0x005f,0x00f3,0x02c7,0x0029,0x1564), /* ᕦ(ò_óˇ)ᕤ */
    UCIS_SYM("flip", 0x0028,0x256f,0x00b0,0x25a1,0x00b0,0xff09,0x256f,0xfe35,0x0020,0x253b,0x2501,0x253b), /* (╯°□°）╯︵ ┻━┻ */
    UCIS_SYM("fliptable", 0x0028,0x256e,0x00b0,0x002d,0x00b0,0x0029,0x256e,0x2533,0x2501,0x2501,0x2533,0x0020,0x0028,0x0020,0x256f,0x00b0,0x25a1,0x00b0,0x0029,0x256f,0x0020,0x253b,0x2501,0x2501,0x253b), /* (╮°-°)╮┳━━┳ ( ╯°□°)╯ ┻━━┻ */
    UCIS_SYM("fliptableanger", 0x0028,0x256f,0x00b0,0x76ca,0x00b0,0x0029,0x256f,0x5f61,0x253b,0x2501,0x253b), /* (╯°益°)╯彡┻━┻ */
    UCIS_SYM("frantic", 0x30fd,0x0028,0x00b4,0x0414,0xff40,0x30fd,0x30df,0x30ce,0x00b4,0x0414,0xff40,0x0029,0x30ce), /* ヽ(´Д｀ヽミノ´Д｀)ノ */
    UCIS_SYM("freakout", 0x30fd,0x0028,0xff9f,0x0414,0xff9f,0x0029,0xff89), /* ヽ(ﾟДﾟ)ﾉ */
    UCIS_SYM("frightened", 0x0028,0xff0f,0x3002,0xff3c,0x0029), /* (／。＼) */
    UCIS_SYM("frog", 0x003a,0x0028,0x00a6,0x0029), /* :(¦) */
    UCIS_SYM("furious", 0x0028,0x00f2,0x005f,0x00f3,0x0029), /* (ò_ó) */
    UCIS_SYM("ge", 0xff08,0xffe3,0x25a1,0xffe3,0xff1b,0xff09), /* （￣□￣；） */
    UCIS_SYM("ghost", 0x0028,0x0028,0x0028,0x0f3c,0x2022,0x032b,0x0361,0x2022,0x0f3d,0x0029,0x0029,0x0029), /* (((༼•̫͡•༽))) */
    UCIS_SYM("gift", 0x0028,0x00b4,0x30fb,0x03c9,0x30fb,0x0029,0x3063,0x7531), /* (´・ω・)っ由 */
    UCIS_SYM("giggling", 0x0028,0x043e,0xff3e,0x03c9,0xff3e,0x043e,0x0029), /* (о＾ω＾о) */
    UCIS_SYM("givingup", 0x0028,0x003b,0x002d,0x005f,0x002d,0x0029,0x30ce), /* (;-_-)ノ */
    UCIS_SYM("glad", 0xff3c,0xff08,0xff3e,0x0020,0xff3e,0xff09,0xff0f), /* ＼（＾ ＾）／ */
    UCIS_SYM("gleeful", 0xff61,0x25d5,0x203f,0x25d5,0xff61), /* ｡◕‿◕｡ */
    UCIS_SYM("golfclap", 0x0028,0x00b4,0x30fc,0xff40,0x0029,0x250c,0xff8c,0xff6f), /* (´ー｀)┌ﾌｯ */
    UCIS_SYM("goodbye", 0x0028,0x005e,0x0020,0x005f,0x0020,0x005e,0x0029,0x002f,0x007e,0x007e), /* (^ _ ^)/~~ */
    UCIS_SYM("grandma", 0x25d6,0x0dbb,0x25de,0x0296,0x25df,0x0dbb,0x25d7), /* ◖ර◞ʖ◟ර◗ */
    UCIS_SYM("grooving", 0x2514,0x0028,0x005e,0x006f,0x005e,0x0029,0x2510), /* └(^o^)┐ */
    UCIS_SYM("gun", 0xffe2,0x006f,0x0028,0xffe3,0x002d,0xffe3,0xff92,0x0029), /* ￢o(￣-￣ﾒ) */
    UCIS_SYM("hammerthrow", 0x0028,0xff89,0x002d,0x006f,0x002d,0x0029,0xff89,0x0020,0x4e2d), /* (ﾉ-o-)ﾉ 中 */
    UCIS_SYM("happycryin", 0x0028,0x00b0,0x0325,0x0325,0x0325,0x0325,0x0325,0x0325,0x0325,0x0325,0x1d17,0x00b0,0x0325,0x0325,0x0325,0x0325,0x0325,0x0325,0x0325,0x0325,0x0029), /* (°̥̥̥̥̥̥̥̥ᴗ°̥̥̥̥̥̥̥̥) */
    UCIS_SYM("happydance", 0x1555,0x0028,0x0020,0x141b,0x0020,0x0029,0x1557), /* ᕕ( ᐛ )ᕗ */
    UCIS_SYM("header", 0x0028,0x0028,0x0020,0xff3f,0x0020,0xff3f,0x0029,0x2606,0x0020,0x2261,0x3007), /* (( ＿ ＿)☆ ≡〇 */
    UCIS_SYM("heartbroken", 0x0028,0x223f,0x00b0,0x25cb,0x00b0,0x0029,0x223f,0x0020,0xfe35,0x0020,0x01dd,0x028c,0x006f,0x006c), /* (∿°○°)∿ ︵ ǝʌol */
    UCIS_SYM("hidewall", 0x252c,0x2534,0x252c,0x2534,0x2524,0x0028,0xff65,0x005f,0x251c,0x252c,0x2534,0x252c,0x2534), /* ┬┴┬┴┤(･_├┬┴┬┴ */
    UCIS_SYM("hiding", 0x252c,0x2534,0x252c,0x2534,0x2524,0xff65,0x03c9,0xff65,0x0029,0xff89), /* ┬┴┬┴┤･ω･)ﾉ */
    UCIS_SYM("highfive", 0x0028,0x002a,0x005e,0x006f,0x005e,0x0029,0x4eba,0x0028,0x005e,0x006f,0x005e,0x002a,0x0029), /* (*^o^)人(^o^*) */
    UCIS_SYM("hipster", 0x0028,0x0020,0x02c7,0x0df4,0x02c7,0x0020,0x0029), /* ( ˇ෴ˇ ) */
    UCIS_SYM("hit", 0xff08,0x3002,0x005f,0x00b0,0x2606,0xff3c,0x0028,0x002d,0x0020,0x2013,0x0020,0x0029), /* （。_°☆＼(- – ) */
    UCIS_SYM("hitting", 0x0028,0x0020,0xff40,0x76bf,0x00b4,0x0029,0xff61,0xff90,0x002f), /* ( ｀皿´)｡ﾐ/ */
    UCIS_SYM("hoo", 0x0028,0xff89,0xff9f,0x0030,0xff9f,0x0029,0xff89,0x007e,0x0009,0x0059,0x006f,0x006f,0x002d), /* (ﾉﾟ0ﾟ)ﾉ~	Yoo- */
    UCIS_SYM("hopeful", 0x006f,0x0028,0x005e,0x005e,0x006f,0x0029,0x0028,0x006f,0x005e,0x005e,0x0029,0x006f), /* o(^^o)(o^^)o */
    UCIS_SYM("howiknow", 0x2517,0x0028,0xff65,0x03c9,0xff65,0x003b,0x0029,0x251b), /* ┗(･ω･;)┛ */
    UCIS_SYM("hug", 0x0028,0x3063,0x2312,0x203f,0x2312,0x0029,0x3063), /* (っ⌒‿⌒)っ */
    UCIS_SYM("hugging", 0x0028,0x003e,0x005e,0x005f,0x005e,0x0029,0x003e,0x003c,0x0028,0x005e,0x006f,0x005e,0x003c,0x0029), /* (>^_^)><(^o^<) */
    UCIS_SYM("hugme", 0x2282,0x0028,0x0028,0x30fb,0x25bd,0x30fb,0x0029,0x0029,0x2283), /* ⊂((・▽・))⊃ */
    UCIS_SYM("huh", 0x005b,0x2022,0x002e,0x2022,0x0e34,0x005d), /* [•.•ิ] */
    UCIS_SYM("hurt", 0x2517,0x0028,0x0020,0x25cf,0x002d,0xfe4f,0x0020,0xff40,0xff61,0x0029,0x3065), /* ┗( ●-﹏ ｀｡)づ */
    UCIS_SYM("inlove", 0x0028,0x2665,0x005f,0x2665,0x0029), /* (♥_♥) */
    UCIS_SYM("jamming", 0x266b,0x002e,0x0028,0x25e0,0x0c6a,0x25e0,0x0029,0x002e,0x266b), /* ♫.(◠౪◠).♫ */
    UCIS_SYM("johnlennon", 0x23b0,0x2240,0x002e,0x262e,0x002d,0x262e,0x2240,0x23b0), /* ⎰≀.☮-☮≀⎰ */
    UCIS_SYM("kicking", 0x0028,0x0020,0xff40,0x006f,0x00b4,0x0029,0x005f,0x03b8,0x2606), /* ( ｀o´)_θ☆ */
    UCIS_SYM("kirby", 0x0028,0x3063,0x005e,0x203f,0x005e,0x0029,0x3063), /* (っ^‿^)っ */
    UCIS_SYM("kiss", 0x0028,0xff89,0x00b4,0x0020,0x0437,0x0020,0x0060,0x0029,0x30ce), /* (ﾉ´ з `)ノ */
    UCIS_SYM("kissing", 0x0028,0x002a,0x0020,0xffe3,0x0029,0x0028,0xffe3,0x0020,0x002a,0x0029), /* (* ￣)(￣ *) */
    UCIS_SYM("kissme", 0x0028,0x0020,0x02d8,0x0020,0x00b3,0x02d8,0x0029,0x2665), /* ( ˘ ³˘)♥ */
    UCIS_SYM("kitty", 0x0028,0x003d,0x005e,0xff65,0xff6a,0xff65,0x005e,0x003d,0x0029), /* (=^･ｪ･^=) */
    UCIS_SYM("kittycat", 0x22df,0x005e,0x224f,0x005e,0x22de), /* ⋟^≏^⋞ */
    UCIS_SYM("koala", 0x0295,0x0020,0x2022,0x1d25,0x2022,0x0294), /* ʕ •ᴥ•ʔ */
    UCIS_SYM("konn", 0x266a,0x0028,0x25cf,0x2032,0x25bd,0x0060,0x0029,0xff89), /* ♪(●′▽`)ﾉ */
    UCIS_SYM("kyu", 0xff0f,0x4eba,0x25d5,0x0020,0x203f,0x203f,0x0020,0x25d5,0x4eba,0xff3c), /* ／人◕ ‿‿ ◕人＼ */
    UCIS_SYM("laser", 0x006d,0x0028,0x0020,0xff9f,0x76bf,0xff9f,0x0029,0x006d,0x2605,0x2501,0x2501), /* m( ﾟ皿ﾟ)m★━━ */
    UCIS_SYM("lethargic", 0x0028,0x203e,0x0296,0x032b,0x203e,0x0029), /* (‾ʖ̫‾) */
    UCIS_SYM("litter", 0x0028,0x002a,0x30fb,0x005f,0x30fb,0x0029,0x30ce,0x2312,0x002a), /* (*・_・)ノ⌒* */
    UCIS_SYM("look", 0x0ca0,0x005f,0x0ca0), /* ಠ_ಠ */
    UCIS_SYM("mad", 0x006f,0x0028,0x003e,0x003c,0x0020,0x0029,0x006f,0x2312,0x002a), /* o(>< )o⌒* */
    UCIS_SYM("matte", 0x0028,0x2033,0xff65,0x0e34,0x005f,0xff65,0x0e34,0x0029,0x3063), /* (″･ิ_･ิ)っ */
    UCIS_SYM("meh", 0xff08,0xff3e,0xff5e,0xff3e,0xff09), /* （＾～＾） */
    UCIS_SYM("mellow", 0x30fd,0xff08,0x00b4,0x30fc,0xff40,0xff09,0x250c), /* ヽ（´ー｀）┌ */
    UCIS_SYM("monkey", 0x0040,0x0028,0x0020,0x006f,0xff65,0x03c9,0xff65,0x0029,0x0040), /* @( o･ω･)@ */
    UCIS_SYM("monocle", 0x0ca0,0x005f,0x0cb0,0x0cc3), /* ಠ_ರೃ */
    UCIS_SYM("mustache", 0x0028,0x0020,0xffe3,0x250f,0xff3f,0x2513,0xffe3,0x0029), /* ( ￣┏＿┓￣) */
    UCIS_SYM("ninjastar", 0x0028,0x0020,0x002d,0x002d,0x0029,0x002f,0x0020,0x003d,0x003d,0x534d), /* ( --)/ ==卍 */
    UCIS_SYM("nodd", 0x0028,0xffe3,0x30fc,0xffe3,0xff08,0xff3f,0x3000,0xff3f,0xff08), /* (￣ー￣（＿　＿（ */
    UCIS_SYM("nyancat", 0x005b,0x005e,0x002e,0x005f,0x002e,0x005e,0x005d,0xff89,0x5f61), /* [^._.^]ﾉ彡 */
    UCIS_SYM("ohaiyou", 0xff3c,0xff08,0xff5e,0xff2f,0xff5e,0xff09,0xff0f), /* ＼（～Ｏ～）／ */
    UCIS_SYM("ohno", 0x004c,0x0028,0x00b4,0x25a1,0xff40,0x004c,0x0029,0x0009), /* L(´□｀L)	 */
    UCIS_SYM("pain", 0x0028,0x003e,0x005f,0x003c,0x0029), /* (>_<) */
    UCIS_SYM("paint", 0x0028,0x3002,0xff65,0x005f,0xff65,0x0029,0x30ce,0x201d,0x3010,0x3011), /* (。･_･)ノ”【】 */
    UCIS_SYM("panda", 0x25d6,0x3220,0x0020,0x03c9,0x0020,0x3220,0x25d7), /* ◖㈠ ω ㈠◗ */
    UCIS_SYM("panic", 0x005c,0x005c,0x0028,0x003c,0x002e,0x003c,0x007c,0x003e,0x002e,0x003e,0x0029,0x002f,0x002f), /* \\(<.<|>.>)// */
    UCIS_SYM("peace", 0x270c,0x0028,0x25d5,0x203f,0x002d,0x0029,0x270c), /* ✌(◕‿-)✌ */
    UCIS_SYM("peering", 0x0028,0x002f,0x03c9,0xff65,0xff3c,0x0029), /* (/ω･＼) */
    UCIS_SYM("perplexed", 0x0f3c,0x09a2,0x005f,0x0f3d,0x09a2,0x0f3d), /* ༼ঢ_༽ঢ༽ */
    UCIS_SYM("phew", 0x03b5,0x002d,0x0028,0x00b4,0x30fb,0xff40,0x0029,0x0020,0xff8c), /* ε-(´・｀) ﾌ */
    UCIS_SYM("pleased", 0x0028,0x2500,0x203f,0x203f,0x2500,0x0029), /* (─‿‿─) */
    UCIS_SYM("pointing", 0x0028,0x261e,0xff9f,0x30ee,0xff9f,0x0029,0x261e), /* (☞ﾟヮﾟ)☞ */
    UCIS_SYM("poke", 0x0028,0x002a,0x30fb,0x0029,0x03c3,0x03c3,0x0028,0x002a,0x309c,0x004f,0x309c,0x0029), /* (*・)σσ(*゜O゜) */
    UCIS_SYM("pray", 0x0028,0x256f,0x02d8,0x0020,0x002d,0x02d8,0x0020,0x0029,0x256f), /* (╯˘ -˘ )╯ */
    UCIS_SYM("precious", 0xff08,0x4eba,0x2019,0x2200,0x2019,0xff09), /* （人’∀’） */
    UCIS_SYM("proposal", 0x0028,0x0020,0x00b0,0x0020,0x1d17,0x00b0,0x0029,0x007e,0x00f0), /* ( ° ᴗ°)~ð */
    UCIS_SYM("psycho", 0x30d8,0xff08,0x3002,0x25a1,0x00b0,0xff09,0x30d8), /* ヘ（。□°）ヘ */
    UCIS_SYM("pumped", 0x30fd,0x0028,0x0020,0x2605,0x03c9,0x2605,0x0029,0x30ce), /* ヽ( ★ω★)ノ */
    UCIS_SYM("punched", 0x0028,0x3002,0x005f,0x00b0,0x0029,0x2606), /* (。_°)☆ */
    UCIS_SYM("punching", 0x0028,0x006f,0xffe3,0x2207,0xffe3,0x0029,0x003d,0x25ef,0x0029,0x0060,0x03bd,0x309c,0x0029,0xff65), /* (o￣∇￣)=◯)`ν゜)･ */
    UCIS_SYM("puppy", 0x0055,0xff3e,0x30a7,0xff3e,0x0055), /* U＾ェ＾U */
    UCIS_SYM("puppylove", 0x220a,0x2661,0x005f,0x1d25,0x005f,0x2661,0x220d), /* ∊♡_ᴥ_♡∍ */
    UCIS_SYM("putemup", 0x0051,0x0028,0x0027,0x002e,0x0027,0x0051,0x0029), /* Q('.'Q) */
    UCIS_SYM("puzzled", 0x300c,0x0028,0x00b0,0x30d8,0x00b0,0x0029), /* 「(°ヘ°) */
    UCIS_SYM("radio", 0x007c,0x0332,0x0305,0x0305,0x25cf,0x0332,0x0305,0x0305,0x007c,0x0332,0x0305,0x0305,0x003d,0x0332,0x0305,0x0305,0x007c,0x0332,0x0305,0x0305,0x25cf,0x0332,0x0305,0x0305,0x007c), /* |̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅| */
    UCIS_SYM("romantic", 0x0028,0x0254,0x02d8,0x0437,0x02d8,0x0029,0x0254), /* (ɔ˘з˘)ɔ */
    UCIS_SYM("run", 0x03b5,0x003d,0x250f,0x0028,0x0020,0x003e,0x005f,0x003c,0x0029,0x251b), /* ε=┏( >_<)┛ */
    UCIS_SYM("sadcry", 0x0028,0x0ca5,0xfe4f,0x0ca5,0x0029), /* (ಥ﹏ಥ) */
    UCIS_SYM("sankyu", 0xff3c,0x0028,0x002d,0x005f,0x002d,0x0020,0x0029), /* ＼(-_- ) */
    UCIS_SYM("satan", 0x2190,0xff5e,0xff08,0x006f,0x0020,0xff40,0x25bd,0x00b4,0x0020,0x0029,0x006f,0x03a8), /* ←～（o ｀▽´ )oΨ */
    UCIS_SYM("satisfied", 0x0028,0x25b0,0x02d8,0x25e1,0x02d8,0x25b0,0x0029), /* (▰˘◡˘▰) */
    UCIS_SYM("scaring", 0x0028,0x2604,0x0e3a,0x25e3,0x0434,0x25e2,0x0029,0x2604,0x0e3a), /* (☄ฺ◣д◢)☄ฺ */
    UCIS_SYM("scary", 0x0028,0x256f,0x2035,0x0414,0x2032,0x0029,0x256f), /* (╯‵Д′)╯ */
    UCIS_SYM("scheming", 0x0ca0,0x1d17,0x0ca0), /* ಠᴗಠ */
    UCIS_SYM("scratching", 0x003c,0x0028,0x003b,0xffe3,0x0020,0xff65,0xffe3,0x0029), /* <(;￣ ･￣) */
    UCIS_SYM("seal", 0x1d98,0x0020,0x1d52,0x1d25,0x1d52,0x1d85), /* ᶘ ᵒᴥᵒᶅ */
    UCIS_SYM("shocked", 0x2299,0x2582,0x2299), /* ⊙▂⊙ */
    UCIS_SYM("shooting", 0x0028,0x2605,0x25bc,0x25bc,0x0029,0x006f,0x2533,0x002a,0x002d,0x002d), /* (★▼▼)o┳*-- */
    UCIS_SYM("shrug", 0x00af,0x005c,0x005f,0x0028,0x30c4,0x0029,0x005f,0x002f,0x00af), /* ¯\_(ツ)_/¯ */
    UCIS_SYM("shrugconfused", 0x00af,0x005c,0x0028,0x00b0,0x005f,0x006f,0x0029,0x002f,0x00af), /* ¯\(°_o)/¯ */
    UCIS_SYM("shrugfliptable", 0x253b,0x2501,0x253b,0x0020,0xfe35,0x0020,0x00af,0x005c,0x0020,0x0028,0x30c4,0x0029,0x002f,0x00af,0x0020,0xfe35,0x0020,0x253b,0x2501,0x253b), /* ┻━┻ ︵ ¯\ (ツ)/¯ ︵ ┻━┻ */
    UCIS_SYM("shrugsad", 0x00af,0x005c,0x005f,0x2590,0x0020,0x262f,0x0020,0xfe3f,0x0020,0x262f,0x0020,0x2590,0x005f,0x002f,0x00af), /* ¯\_▐ ☯ ︿ ☯ ▐_/¯ */
    UCIS_SYM("shy", 0xff08,0x002f,0xff61,0xff3c,0x0029), /* （/｡＼) */
    UCIS_SYM("sick", 0x005b,0x0020,0x00b1,0x0020,0x005f,0x0020,0x00b1,0x0020,0x005d), /* [ ± _ ± ] */
    UCIS_SYM("skeptic", 0x0028,0x2022,0x0361,0x002e,0x2022,0x0361,0x0029), /* (•͡.•͡) */
    UCIS_SYM("slapping", 0x0028,0xff1b,0x005e,0xff3f,0x005e,0x0029,0x30c3,0x2606,0x0028,0x3000,0x309c,0x006f,0x309c,0x0029), /* (；^＿^)ッ☆(　゜o゜) */
    UCIS_SYM("sleeping", 0x0028,0x222a,0xff61,0x222a,0x0029,0xff61,0xff61,0xff61,0x007a,0x007a,0x005a), /* (∪｡∪)｡｡｡zzZ */
    UCIS_SYM("sleepy", 0x0028,0x002d,0x0020,0x006f,0x0020,0x002d,0x0020,0x0029,0x0020,0x007a,0x007a,0x005a,0x0020,0x263d), /* (- o - ) zzZ ☽ */
    UCIS_SYM("smile", 0x0028,0x0298,0x203f,0x0298,0x0029), /* (ʘ‿ʘ) */
    UCIS_SYM("smiling", 0x0028,0x0020,0x0361,0x00b0,0x0020,0x035c,0x0296,0x0020,0x0361,0x00b0,0x0029), /* ( ͡° ͜ʖ ͡°) */
    UCIS_SYM("smitten", 0x0028,0xff61,0x2665,0x203f,0x2665,0xff61,0x0029), /* (｡♥‿♥｡) */
    UCIS_SYM("smooch", 0x0028,0x3065,0xffe3,0x0020,0x00b3,0xffe3,0x0029,0x3065), /* (づ￣ ³￣)づ */
    UCIS_SYM("sniper", 0x0028,0x0020,0x00b4,0x002d,0x03c9,0xff65,0x0029,0xfe3b,0x253b,0x2533,0x2550,0x2550,0x2501,0x4e00), /* ( ´-ω･)︻┻┳══━一 */
    UCIS_SYM("snowing", 0x2746,0x2745,0x2749), /* ❆❅❉ */
    UCIS_SYM("sobby", 0x0028,0x0942,0x02c3,0x0323,0x0323,0x0323,0x0323,0x0323,0x0323,0xfe3f,0x02c2,0x0323,0x0323,0x0323,0x0323,0x0323,0x0323,0x0020,0x0942,0x0029), /* (ू˃̣̣̣̣̣̣︿˂̣̣̣̣̣̣ ू) */
    UCIS_SYM("sonic", 0x0a6f,0x0942,0x2022,0x0301,0x0942,0x0020,0x0ed2,0xa4b1,0x207c,0x00b3,0x208c,0x2083), /* ੯ू•́ू ໒꒱⁼³₌₃ */
    UCIS_SYM("sorry", 0x0028,0x30b7,0x005f,0x0020,0x005f,0x0029,0x30b7), /* (シ_ _)シ */
    UCIS_SYM("spongebob", 0x007c,0x2234,0x3081,0x0020,0x03d6,0x0020,0x3081,0x2234,0x007c), /* |∴め ϖ め∴| */
    UCIS_SYM("sprint", 0x03b5,0x003d,0x03b5,0x003d,0x03b5,0x003d,0x250c,0x0028,0x0e51,0x0298,0x2200,0x0298,0x0029,0x2518), /* ε=ε=ε=┌(๑ʘ∀ʘ)┘ */
    UCIS_SYM("squid", 0x003c,0x30b3,0x003a,0x5f61), /* <コ:彡 */
    UCIS_SYM("superhero", 0x2500,0x003d,0x2261,0x03a3,0x0028,0x0028,0x005b,0x0020,0x2290,0x2022,0x0300,0x2302,0x2022,0x0301,0x005d,0x2290), /* ─=≡Σ(([ ⊐•̀⌂•́]⊐ */
    UCIS_SYM("surprisedarms", 0x0028,0x0020,0xff63,0xff61,0x2579,0x006f,0x2579,0xff61,0x0029,0xff63), /* ( ｣｡╹o╹｡)｣ */
    UCIS_SYM("surprisedglee", 0xff08,0xff61,0x25d5,0x0020,0x006f,0x0020,0x25d5,0xff61,0xff09), /* （｡◕ o ◕｡） */
    UCIS_SYM("sweatdrop", 0x002d,0x005f,0x002d,0x003b), /* -_-; */
    UCIS_SYM("swordfighting", 0x0028,0x00b4,0x003e,0x005f,0x25cf,0x0029,0x30e1,0x0028,0x25cf,0x005f,0x003c,0xff40,0x0029), /* (´>_●)メ(●_<｀) */
    UCIS_SYM("tableback", 0x252c,0x2500,0x252c,0x30ce,0x0028,0x0020,0x00ba,0x0020,0x005f,0x0020,0x00ba,0x30ce,0x0029), /* ┬─┬ノ( º _ ºノ) */
    UCIS_SYM("tableflipsyou", 0x252c,0x2500,0x252c,0xfe35,0x002f,0x0028,0x002e,0x25a1,0x002e,0x0029,0x256f) /* ┬─┬︵/(.□.)╯ */
    UCIS_SYM("takemyenergy", 0x0f3c,0x0020,0x3064,0x0020,0x25d5,0x005f,0x25d5,0x0020,0x0f3d,0x3064), /* ༼ つ ◕_◕ ༽つ */
    UCIS_SYM("tasty", 0x0028,0x0e51,0x2579,0x06a1,0x2579,0x0e51,0x0029), /* (๑╹ڡ╹๑) */
    UCIS_SYM("tripping", 0x002d,0x002d,0x002d,0x0028,0x006f,0x005f,0x3000,0x005f,0x0029,0x006f), /* ---(o_　_)o */
    UCIS_SYM("unimpressed", 0xff08,0xffe3,0xff5e,0xffe3,0xff09), /* （￣～￣） */
    UCIS_SYM("upinarms", 0x007b,0x007b,0x007c,0x2514,0x0028,0x003e,0x006f,0x003c,0x0020,0x0029,0x2518,0x007c,0x007d,0x007d), /* {{|└(>o< )┘|}} */
    UCIS_SYM("vampire", 0x0028,0x002a,0x25bf,0x25bf,0x002a,0x0020,0x01aa,0x0029), /* (*▿▿* ƪ) */
    UCIS_SYM("vaping", 0x25ef,0xff10,0x006f,0x3002,0x0028,0x30fc,0x3002,0x30fc,0x0029,0x0079), /* ◯０o。(ー。ー)y */
    UCIS_SYM("waiter", 0x4e14,0x005f,0x0028,0xff9f,0x25c7,0xff9f,0xff1b,0x0029,0x30ce,0xff9e), /* 且_(ﾟ◇ﾟ；)ノﾞ */
    UCIS_SYM("walrus", 0x0028,0x003a,0x0033,0x0020,0x3063,0x0029,0x3063), /* (:3 っ)っ */
    UCIS_SYM("waving", 0x0028,0x0020,0x005e,0x005f,0x005e,0x0029,0x30ce), /* ( ^_^)ノ */
    UCIS_SYM("weary", 0x0028,0x00b4,0x007e,0x0060,0x0029), /* (´~`) */
    UCIS_SYM("weeping", 0x0028,0x003b,0x00b4,0x0f0e,0x0eb6,0x0414,0x0f0e,0x0eb6,0x0060,0x0029), /* (;´༎ຶД༎ຶ`) */
    UCIS_SYM("why", 0x10da,0x0028,0x0ca0,0x76ca,0x0ca0,0x0029,0x10da), /* ლ(ಠ益ಠ)ლ */
    UCIS_SYM("wink", 0x0028,0x005e,0x203f,0x25d5,0x0029), /* (^‿◕) */
    UCIS_SYM("wizard", 0x0028,0x2229,0xff40,0x002d,0x00b4,0x0029,0x2283,0x2501,0x2606,0xff9f,0x002e,0x002a,0xff65,0xff61,0xff9f), /* (∩｀-´)⊃━☆ﾟ.*･｡ﾟ */
    UCIS_SYM("worried", 0x0028,0x00b4,0x2579,0x303d,0x2579,0x0060,0x0029), /* (´╹〽╹`) */
    UCIS_SYM("worriedarms", 0x0028,0x256f,0x2022,0xfe4f,0x2022,0x2570,0x0029), /* (╯•﹏•╰) */
    UCIS_SYM("worriedsimple", 0x0028,0x25cd,0x2022,0xfe4f,0x2022,0x0029), /* (◍•﹏•) */
    UCIS_SYM("writing", 0xff3f,0x3006,0x0028,0x3002,0x3002,0x0029), /* ＿〆(。。) */
    UCIS_SYM("yelling", 0x30fe,0x0028,0x002a,0xffe3,0x004f,0xffe3,0x0029,0x30c4), /* ヾ(*￣O￣)ツ */
    UCIS_SYM("yikes", 0x0028,0x2609,0x005f,0x005f,0x2609,0x201d,0x0029), /* (☉__☉”) */
    UCIS_SYM("yummy", 0x0028,0x3063,0x02d8,0x06a1,0x02d8,0x03c2,0x0029), /* (っ˘ڡ˘ς) */
    UCIS_SYM("zombie", 0x005b,0x00ac,0x00ba,0x002d,0x00b0,0x005d,0x00ac), /* [¬º-°]¬ */
);
// clang-format on
