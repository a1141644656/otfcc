#include "aglfn.h"
#include "glyphorder.h"
// This table contains standard AGLFN 1.7 glyph names, mapped to Unicode.
void aglfn_setupNames(glyphorder_Map *map) {
	glyphorder_tryAssignName(map, 0x0041, sdsnew("A"));
	glyphorder_tryAssignName(map, 0x00C6, sdsnew("AE"));
	glyphorder_tryAssignName(map, 0x01FC, sdsnew("AEacute"));
	glyphorder_tryAssignName(map, 0x00C1, sdsnew("Aacute"));
	glyphorder_tryAssignName(map, 0x0102, sdsnew("Abreve"));
	glyphorder_tryAssignName(map, 0x00C2, sdsnew("Acircumflex"));
	glyphorder_tryAssignName(map, 0x00C4, sdsnew("Adieresis"));
	glyphorder_tryAssignName(map, 0x00C0, sdsnew("Agrave"));
	glyphorder_tryAssignName(map, 0x0391, sdsnew("Alpha"));
	glyphorder_tryAssignName(map, 0x0386, sdsnew("Alphatonos"));
	glyphorder_tryAssignName(map, 0x0100, sdsnew("Amacron"));
	glyphorder_tryAssignName(map, 0x0104, sdsnew("Aogonek"));
	glyphorder_tryAssignName(map, 0x00C5, sdsnew("Aring"));
	glyphorder_tryAssignName(map, 0x01FA, sdsnew("Aringacute"));
	glyphorder_tryAssignName(map, 0x00C3, sdsnew("Atilde"));
	glyphorder_tryAssignName(map, 0x0042, sdsnew("B"));
	glyphorder_tryAssignName(map, 0x0392, sdsnew("Beta"));
	glyphorder_tryAssignName(map, 0x0043, sdsnew("C"));
	glyphorder_tryAssignName(map, 0x0106, sdsnew("Cacute"));
	glyphorder_tryAssignName(map, 0x010C, sdsnew("Ccaron"));
	glyphorder_tryAssignName(map, 0x00C7, sdsnew("Ccedilla"));
	glyphorder_tryAssignName(map, 0x0108, sdsnew("Ccircumflex"));
	glyphorder_tryAssignName(map, 0x010A, sdsnew("Cdotaccent"));
	glyphorder_tryAssignName(map, 0x03A7, sdsnew("Chi"));
	glyphorder_tryAssignName(map, 0x0044, sdsnew("D"));
	glyphorder_tryAssignName(map, 0x010E, sdsnew("Dcaron"));
	glyphorder_tryAssignName(map, 0x0110, sdsnew("Dcroat"));
	glyphorder_tryAssignName(map, 0x2206, sdsnew("Delta"));
	glyphorder_tryAssignName(map, 0x0045, sdsnew("E"));
	glyphorder_tryAssignName(map, 0x00C9, sdsnew("Eacute"));
	glyphorder_tryAssignName(map, 0x0114, sdsnew("Ebreve"));
	glyphorder_tryAssignName(map, 0x011A, sdsnew("Ecaron"));
	glyphorder_tryAssignName(map, 0x00CA, sdsnew("Ecircumflex"));
	glyphorder_tryAssignName(map, 0x00CB, sdsnew("Edieresis"));
	glyphorder_tryAssignName(map, 0x0116, sdsnew("Edotaccent"));
	glyphorder_tryAssignName(map, 0x00C8, sdsnew("Egrave"));
	glyphorder_tryAssignName(map, 0x0112, sdsnew("Emacron"));
	glyphorder_tryAssignName(map, 0x014A, sdsnew("Eng"));
	glyphorder_tryAssignName(map, 0x0118, sdsnew("Eogonek"));
	glyphorder_tryAssignName(map, 0x0395, sdsnew("Epsilon"));
	glyphorder_tryAssignName(map, 0x0388, sdsnew("Epsilontonos"));
	glyphorder_tryAssignName(map, 0x0397, sdsnew("Eta"));
	glyphorder_tryAssignName(map, 0x0389, sdsnew("Etatonos"));
	glyphorder_tryAssignName(map, 0x00D0, sdsnew("Eth"));
	glyphorder_tryAssignName(map, 0x20AC, sdsnew("Euro"));
	glyphorder_tryAssignName(map, 0x0046, sdsnew("F"));
	glyphorder_tryAssignName(map, 0x0047, sdsnew("G"));
	glyphorder_tryAssignName(map, 0x0393, sdsnew("Gamma"));
	glyphorder_tryAssignName(map, 0x011E, sdsnew("Gbreve"));
	glyphorder_tryAssignName(map, 0x01E6, sdsnew("Gcaron"));
	glyphorder_tryAssignName(map, 0x011C, sdsnew("Gcircumflex"));
	glyphorder_tryAssignName(map, 0x0120, sdsnew("Gdotaccent"));
	glyphorder_tryAssignName(map, 0x0048, sdsnew("H"));
	glyphorder_tryAssignName(map, 0x25CF, sdsnew("H18533"));
	glyphorder_tryAssignName(map, 0x25AA, sdsnew("H18543"));
	glyphorder_tryAssignName(map, 0x25AB, sdsnew("H18551"));
	glyphorder_tryAssignName(map, 0x25A1, sdsnew("H22073"));
	glyphorder_tryAssignName(map, 0x0126, sdsnew("Hbar"));
	glyphorder_tryAssignName(map, 0x0124, sdsnew("Hcircumflex"));
	glyphorder_tryAssignName(map, 0x0049, sdsnew("I"));
	glyphorder_tryAssignName(map, 0x0132, sdsnew("IJ"));
	glyphorder_tryAssignName(map, 0x00CD, sdsnew("Iacute"));
	glyphorder_tryAssignName(map, 0x012C, sdsnew("Ibreve"));
	glyphorder_tryAssignName(map, 0x00CE, sdsnew("Icircumflex"));
	glyphorder_tryAssignName(map, 0x00CF, sdsnew("Idieresis"));
	glyphorder_tryAssignName(map, 0x0130, sdsnew("Idotaccent"));
	glyphorder_tryAssignName(map, 0x2111, sdsnew("Ifraktur"));
	glyphorder_tryAssignName(map, 0x00CC, sdsnew("Igrave"));
	glyphorder_tryAssignName(map, 0x012A, sdsnew("Imacron"));
	glyphorder_tryAssignName(map, 0x012E, sdsnew("Iogonek"));
	glyphorder_tryAssignName(map, 0x0399, sdsnew("Iota"));
	glyphorder_tryAssignName(map, 0x03AA, sdsnew("Iotadieresis"));
	glyphorder_tryAssignName(map, 0x038A, sdsnew("Iotatonos"));
	glyphorder_tryAssignName(map, 0x0128, sdsnew("Itilde"));
	glyphorder_tryAssignName(map, 0x004A, sdsnew("J"));
	glyphorder_tryAssignName(map, 0x0134, sdsnew("Jcircumflex"));
	glyphorder_tryAssignName(map, 0x004B, sdsnew("K"));
	glyphorder_tryAssignName(map, 0x039A, sdsnew("Kappa"));
	glyphorder_tryAssignName(map, 0x004C, sdsnew("L"));
	glyphorder_tryAssignName(map, 0x0139, sdsnew("Lacute"));
	glyphorder_tryAssignName(map, 0x039B, sdsnew("Lambda"));
	glyphorder_tryAssignName(map, 0x013D, sdsnew("Lcaron"));
	glyphorder_tryAssignName(map, 0x013F, sdsnew("Ldot"));
	glyphorder_tryAssignName(map, 0x0141, sdsnew("Lslash"));
	glyphorder_tryAssignName(map, 0x004D, sdsnew("M"));
	glyphorder_tryAssignName(map, 0x039C, sdsnew("Mu"));
	glyphorder_tryAssignName(map, 0x004E, sdsnew("N"));
	glyphorder_tryAssignName(map, 0x0143, sdsnew("Nacute"));
	glyphorder_tryAssignName(map, 0x0147, sdsnew("Ncaron"));
	glyphorder_tryAssignName(map, 0x00D1, sdsnew("Ntilde"));
	glyphorder_tryAssignName(map, 0x039D, sdsnew("Nu"));
	glyphorder_tryAssignName(map, 0x004F, sdsnew("O"));
	glyphorder_tryAssignName(map, 0x0152, sdsnew("OE"));
	glyphorder_tryAssignName(map, 0x00D3, sdsnew("Oacute"));
	glyphorder_tryAssignName(map, 0x014E, sdsnew("Obreve"));
	glyphorder_tryAssignName(map, 0x00D4, sdsnew("Ocircumflex"));
	glyphorder_tryAssignName(map, 0x00D6, sdsnew("Odieresis"));
	glyphorder_tryAssignName(map, 0x00D2, sdsnew("Ograve"));
	glyphorder_tryAssignName(map, 0x01A0, sdsnew("Ohorn"));
	glyphorder_tryAssignName(map, 0x0150, sdsnew("Ohungarumlaut"));
	glyphorder_tryAssignName(map, 0x014C, sdsnew("Omacron"));
	glyphorder_tryAssignName(map, 0x2126, sdsnew("Omega"));
	glyphorder_tryAssignName(map, 0x038F, sdsnew("Omegatonos"));
	glyphorder_tryAssignName(map, 0x039F, sdsnew("Omicron"));
	glyphorder_tryAssignName(map, 0x038C, sdsnew("Omicrontonos"));
	glyphorder_tryAssignName(map, 0x00D8, sdsnew("Oslash"));
	glyphorder_tryAssignName(map, 0x01FE, sdsnew("Oslashacute"));
	glyphorder_tryAssignName(map, 0x00D5, sdsnew("Otilde"));
	glyphorder_tryAssignName(map, 0x0050, sdsnew("P"));
	glyphorder_tryAssignName(map, 0x03A6, sdsnew("Phi"));
	glyphorder_tryAssignName(map, 0x03A0, sdsnew("Pi"));
	glyphorder_tryAssignName(map, 0x03A8, sdsnew("Psi"));
	glyphorder_tryAssignName(map, 0x0051, sdsnew("Q"));
	glyphorder_tryAssignName(map, 0x0052, sdsnew("R"));
	glyphorder_tryAssignName(map, 0x0154, sdsnew("Racute"));
	glyphorder_tryAssignName(map, 0x0158, sdsnew("Rcaron"));
	glyphorder_tryAssignName(map, 0x211C, sdsnew("Rfraktur"));
	glyphorder_tryAssignName(map, 0x03A1, sdsnew("Rho"));
	glyphorder_tryAssignName(map, 0x0053, sdsnew("S"));
	glyphorder_tryAssignName(map, 0x250C, sdsnew("SF010000"));
	glyphorder_tryAssignName(map, 0x2514, sdsnew("SF020000"));
	glyphorder_tryAssignName(map, 0x2510, sdsnew("SF030000"));
	glyphorder_tryAssignName(map, 0x2518, sdsnew("SF040000"));
	glyphorder_tryAssignName(map, 0x253C, sdsnew("SF050000"));
	glyphorder_tryAssignName(map, 0x252C, sdsnew("SF060000"));
	glyphorder_tryAssignName(map, 0x2534, sdsnew("SF070000"));
	glyphorder_tryAssignName(map, 0x251C, sdsnew("SF080000"));
	glyphorder_tryAssignName(map, 0x2524, sdsnew("SF090000"));
	glyphorder_tryAssignName(map, 0x2500, sdsnew("SF100000"));
	glyphorder_tryAssignName(map, 0x2502, sdsnew("SF110000"));
	glyphorder_tryAssignName(map, 0x2561, sdsnew("SF190000"));
	glyphorder_tryAssignName(map, 0x2562, sdsnew("SF200000"));
	glyphorder_tryAssignName(map, 0x2556, sdsnew("SF210000"));
	glyphorder_tryAssignName(map, 0x2555, sdsnew("SF220000"));
	glyphorder_tryAssignName(map, 0x2563, sdsnew("SF230000"));
	glyphorder_tryAssignName(map, 0x2551, sdsnew("SF240000"));
	glyphorder_tryAssignName(map, 0x2557, sdsnew("SF250000"));
	glyphorder_tryAssignName(map, 0x255D, sdsnew("SF260000"));
	glyphorder_tryAssignName(map, 0x255C, sdsnew("SF270000"));
	glyphorder_tryAssignName(map, 0x255B, sdsnew("SF280000"));
	glyphorder_tryAssignName(map, 0x255E, sdsnew("SF360000"));
	glyphorder_tryAssignName(map, 0x255F, sdsnew("SF370000"));
	glyphorder_tryAssignName(map, 0x255A, sdsnew("SF380000"));
	glyphorder_tryAssignName(map, 0x2554, sdsnew("SF390000"));
	glyphorder_tryAssignName(map, 0x2569, sdsnew("SF400000"));
	glyphorder_tryAssignName(map, 0x2566, sdsnew("SF410000"));
	glyphorder_tryAssignName(map, 0x2560, sdsnew("SF420000"));
	glyphorder_tryAssignName(map, 0x2550, sdsnew("SF430000"));
	glyphorder_tryAssignName(map, 0x256C, sdsnew("SF440000"));
	glyphorder_tryAssignName(map, 0x2567, sdsnew("SF450000"));
	glyphorder_tryAssignName(map, 0x2568, sdsnew("SF460000"));
	glyphorder_tryAssignName(map, 0x2564, sdsnew("SF470000"));
	glyphorder_tryAssignName(map, 0x2565, sdsnew("SF480000"));
	glyphorder_tryAssignName(map, 0x2559, sdsnew("SF490000"));
	glyphorder_tryAssignName(map, 0x2558, sdsnew("SF500000"));
	glyphorder_tryAssignName(map, 0x2552, sdsnew("SF510000"));
	glyphorder_tryAssignName(map, 0x2553, sdsnew("SF520000"));
	glyphorder_tryAssignName(map, 0x256B, sdsnew("SF530000"));
	glyphorder_tryAssignName(map, 0x256A, sdsnew("SF540000"));
	glyphorder_tryAssignName(map, 0x015A, sdsnew("Sacute"));
	glyphorder_tryAssignName(map, 0x0160, sdsnew("Scaron"));
	glyphorder_tryAssignName(map, 0x015E, sdsnew("Scedilla"));
	glyphorder_tryAssignName(map, 0x015C, sdsnew("Scircumflex"));
	glyphorder_tryAssignName(map, 0x03A3, sdsnew("Sigma"));
	glyphorder_tryAssignName(map, 0x0054, sdsnew("T"));
	glyphorder_tryAssignName(map, 0x03A4, sdsnew("Tau"));
	glyphorder_tryAssignName(map, 0x0166, sdsnew("Tbar"));
	glyphorder_tryAssignName(map, 0x0164, sdsnew("Tcaron"));
	glyphorder_tryAssignName(map, 0x0398, sdsnew("Theta"));
	glyphorder_tryAssignName(map, 0x00DE, sdsnew("Thorn"));
	glyphorder_tryAssignName(map, 0x0055, sdsnew("U"));
	glyphorder_tryAssignName(map, 0x00DA, sdsnew("Uacute"));
	glyphorder_tryAssignName(map, 0x016C, sdsnew("Ubreve"));
	glyphorder_tryAssignName(map, 0x00DB, sdsnew("Ucircumflex"));
	glyphorder_tryAssignName(map, 0x00DC, sdsnew("Udieresis"));
	glyphorder_tryAssignName(map, 0x00D9, sdsnew("Ugrave"));
	glyphorder_tryAssignName(map, 0x01AF, sdsnew("Uhorn"));
	glyphorder_tryAssignName(map, 0x0170, sdsnew("Uhungarumlaut"));
	glyphorder_tryAssignName(map, 0x016A, sdsnew("Umacron"));
	glyphorder_tryAssignName(map, 0x0172, sdsnew("Uogonek"));
	glyphorder_tryAssignName(map, 0x03A5, sdsnew("Upsilon"));
	glyphorder_tryAssignName(map, 0x03D2, sdsnew("Upsilon1"));
	glyphorder_tryAssignName(map, 0x03AB, sdsnew("Upsilondieresis"));
	glyphorder_tryAssignName(map, 0x038E, sdsnew("Upsilontonos"));
	glyphorder_tryAssignName(map, 0x016E, sdsnew("Uring"));
	glyphorder_tryAssignName(map, 0x0168, sdsnew("Utilde"));
	glyphorder_tryAssignName(map, 0x0056, sdsnew("V"));
	glyphorder_tryAssignName(map, 0x0057, sdsnew("W"));
	glyphorder_tryAssignName(map, 0x1E82, sdsnew("Wacute"));
	glyphorder_tryAssignName(map, 0x0174, sdsnew("Wcircumflex"));
	glyphorder_tryAssignName(map, 0x1E84, sdsnew("Wdieresis"));
	glyphorder_tryAssignName(map, 0x1E80, sdsnew("Wgrave"));
	glyphorder_tryAssignName(map, 0x0058, sdsnew("X"));
	glyphorder_tryAssignName(map, 0x039E, sdsnew("Xi"));
	glyphorder_tryAssignName(map, 0x0059, sdsnew("Y"));
	glyphorder_tryAssignName(map, 0x00DD, sdsnew("Yacute"));
	glyphorder_tryAssignName(map, 0x0176, sdsnew("Ycircumflex"));
	glyphorder_tryAssignName(map, 0x0178, sdsnew("Ydieresis"));
	glyphorder_tryAssignName(map, 0x1EF2, sdsnew("Ygrave"));
	glyphorder_tryAssignName(map, 0x005A, sdsnew("Z"));
	glyphorder_tryAssignName(map, 0x0179, sdsnew("Zacute"));
	glyphorder_tryAssignName(map, 0x017D, sdsnew("Zcaron"));
	glyphorder_tryAssignName(map, 0x017B, sdsnew("Zdotaccent"));
	glyphorder_tryAssignName(map, 0x0396, sdsnew("Zeta"));
	glyphorder_tryAssignName(map, 0x0061, sdsnew("a"));
	glyphorder_tryAssignName(map, 0x00E1, sdsnew("aacute"));
	glyphorder_tryAssignName(map, 0x0103, sdsnew("abreve"));
	glyphorder_tryAssignName(map, 0x00E2, sdsnew("acircumflex"));
	glyphorder_tryAssignName(map, 0x00B4, sdsnew("acute"));
	glyphorder_tryAssignName(map, 0x0301, sdsnew("acutecomb"));
	glyphorder_tryAssignName(map, 0x00E4, sdsnew("adieresis"));
	glyphorder_tryAssignName(map, 0x00E6, sdsnew("ae"));
	glyphorder_tryAssignName(map, 0x01FD, sdsnew("aeacute"));
	glyphorder_tryAssignName(map, 0x00E0, sdsnew("agrave"));
	glyphorder_tryAssignName(map, 0x2135, sdsnew("aleph"));
	glyphorder_tryAssignName(map, 0x03B1, sdsnew("alpha"));
	glyphorder_tryAssignName(map, 0x03AC, sdsnew("alphatonos"));
	glyphorder_tryAssignName(map, 0x0101, sdsnew("amacron"));
	glyphorder_tryAssignName(map, 0x0026, sdsnew("ampersand"));
	glyphorder_tryAssignName(map, 0x2220, sdsnew("angle"));
	glyphorder_tryAssignName(map, 0x2329, sdsnew("angleleft"));
	glyphorder_tryAssignName(map, 0x232A, sdsnew("angleright"));
	glyphorder_tryAssignName(map, 0x0387, sdsnew("anoteleia"));
	glyphorder_tryAssignName(map, 0x0105, sdsnew("aogonek"));
	glyphorder_tryAssignName(map, 0x2248, sdsnew("approxequal"));
	glyphorder_tryAssignName(map, 0x00E5, sdsnew("aring"));
	glyphorder_tryAssignName(map, 0x01FB, sdsnew("aringacute"));
	glyphorder_tryAssignName(map, 0x2194, sdsnew("arrowboth"));
	glyphorder_tryAssignName(map, 0x21D4, sdsnew("arrowdblboth"));
	glyphorder_tryAssignName(map, 0x21D3, sdsnew("arrowdbldown"));
	glyphorder_tryAssignName(map, 0x21D0, sdsnew("arrowdblleft"));
	glyphorder_tryAssignName(map, 0x21D2, sdsnew("arrowdblright"));
	glyphorder_tryAssignName(map, 0x21D1, sdsnew("arrowdblup"));
	glyphorder_tryAssignName(map, 0x2193, sdsnew("arrowdown"));
	glyphorder_tryAssignName(map, 0x2190, sdsnew("arrowleft"));
	glyphorder_tryAssignName(map, 0x2192, sdsnew("arrowright"));
	glyphorder_tryAssignName(map, 0x2191, sdsnew("arrowup"));
	glyphorder_tryAssignName(map, 0x2195, sdsnew("arrowupdn"));
	glyphorder_tryAssignName(map, 0x21A8, sdsnew("arrowupdnbse"));
	glyphorder_tryAssignName(map, 0x005E, sdsnew("asciicircum"));
	glyphorder_tryAssignName(map, 0x007E, sdsnew("asciitilde"));
	glyphorder_tryAssignName(map, 0x002A, sdsnew("asterisk"));
	glyphorder_tryAssignName(map, 0x2217, sdsnew("asteriskmath"));
	glyphorder_tryAssignName(map, 0x0040, sdsnew("at"));
	glyphorder_tryAssignName(map, 0x00E3, sdsnew("atilde"));
	glyphorder_tryAssignName(map, 0x0062, sdsnew("b"));
	glyphorder_tryAssignName(map, 0x005C, sdsnew("backslash"));
	glyphorder_tryAssignName(map, 0x007C, sdsnew("bar"));
	glyphorder_tryAssignName(map, 0x03B2, sdsnew("beta"));
	glyphorder_tryAssignName(map, 0x2588, sdsnew("block"));
	glyphorder_tryAssignName(map, 0x007B, sdsnew("braceleft"));
	glyphorder_tryAssignName(map, 0x007D, sdsnew("braceright"));
	glyphorder_tryAssignName(map, 0x005B, sdsnew("bracketleft"));
	glyphorder_tryAssignName(map, 0x005D, sdsnew("bracketright"));
	glyphorder_tryAssignName(map, 0x02D8, sdsnew("breve"));
	glyphorder_tryAssignName(map, 0x00A6, sdsnew("brokenbar"));
	glyphorder_tryAssignName(map, 0x2022, sdsnew("bullet"));
	glyphorder_tryAssignName(map, 0x0063, sdsnew("c"));
	glyphorder_tryAssignName(map, 0x0107, sdsnew("cacute"));
	glyphorder_tryAssignName(map, 0x02C7, sdsnew("caron"));
	glyphorder_tryAssignName(map, 0x21B5, sdsnew("carriagereturn"));
	glyphorder_tryAssignName(map, 0x010D, sdsnew("ccaron"));
	glyphorder_tryAssignName(map, 0x00E7, sdsnew("ccedilla"));
	glyphorder_tryAssignName(map, 0x0109, sdsnew("ccircumflex"));
	glyphorder_tryAssignName(map, 0x010B, sdsnew("cdotaccent"));
	glyphorder_tryAssignName(map, 0x00B8, sdsnew("cedilla"));
	glyphorder_tryAssignName(map, 0x00A2, sdsnew("cent"));
	glyphorder_tryAssignName(map, 0x03C7, sdsnew("chi"));
	glyphorder_tryAssignName(map, 0x25CB, sdsnew("circle"));
	glyphorder_tryAssignName(map, 0x2297, sdsnew("circlemultiply"));
	glyphorder_tryAssignName(map, 0x2295, sdsnew("circleplus"));
	glyphorder_tryAssignName(map, 0x02C6, sdsnew("circumflex"));
	glyphorder_tryAssignName(map, 0x2663, sdsnew("club"));
	glyphorder_tryAssignName(map, 0x003A, sdsnew("colon"));
	glyphorder_tryAssignName(map, 0x20A1, sdsnew("colonmonetary"));
	glyphorder_tryAssignName(map, 0x002C, sdsnew("comma"));
	glyphorder_tryAssignName(map, 0x2245, sdsnew("congruent"));
	glyphorder_tryAssignName(map, 0x00A9, sdsnew("copyright"));
	glyphorder_tryAssignName(map, 0x00A4, sdsnew("currency"));
	glyphorder_tryAssignName(map, 0x0064, sdsnew("d"));
	glyphorder_tryAssignName(map, 0x2020, sdsnew("dagger"));
	glyphorder_tryAssignName(map, 0x2021, sdsnew("daggerdbl"));
	glyphorder_tryAssignName(map, 0x010F, sdsnew("dcaron"));
	glyphorder_tryAssignName(map, 0x0111, sdsnew("dcroat"));
	glyphorder_tryAssignName(map, 0x00B0, sdsnew("degree"));
	glyphorder_tryAssignName(map, 0x03B4, sdsnew("delta"));
	glyphorder_tryAssignName(map, 0x2666, sdsnew("diamond"));
	glyphorder_tryAssignName(map, 0x00A8, sdsnew("dieresis"));
	glyphorder_tryAssignName(map, 0x0385, sdsnew("dieresistonos"));
	glyphorder_tryAssignName(map, 0x00F7, sdsnew("divide"));
	glyphorder_tryAssignName(map, 0x2593, sdsnew("dkshade"));
	glyphorder_tryAssignName(map, 0x2584, sdsnew("dnblock"));
	glyphorder_tryAssignName(map, 0x0024, sdsnew("dollar"));
	glyphorder_tryAssignName(map, 0x20AB, sdsnew("dong"));
	glyphorder_tryAssignName(map, 0x02D9, sdsnew("dotaccent"));
	glyphorder_tryAssignName(map, 0x0323, sdsnew("dotbelowcomb"));
	glyphorder_tryAssignName(map, 0x0131, sdsnew("dotlessi"));
	glyphorder_tryAssignName(map, 0x22C5, sdsnew("dotmath"));
	glyphorder_tryAssignName(map, 0x0065, sdsnew("e"));
	glyphorder_tryAssignName(map, 0x00E9, sdsnew("eacute"));
	glyphorder_tryAssignName(map, 0x0115, sdsnew("ebreve"));
	glyphorder_tryAssignName(map, 0x011B, sdsnew("ecaron"));
	glyphorder_tryAssignName(map, 0x00EA, sdsnew("ecircumflex"));
	glyphorder_tryAssignName(map, 0x00EB, sdsnew("edieresis"));
	glyphorder_tryAssignName(map, 0x0117, sdsnew("edotaccent"));
	glyphorder_tryAssignName(map, 0x00E8, sdsnew("egrave"));
	glyphorder_tryAssignName(map, 0x0038, sdsnew("eight"));
	glyphorder_tryAssignName(map, 0x2208, sdsnew("element"));
	glyphorder_tryAssignName(map, 0x2026, sdsnew("ellipsis"));
	glyphorder_tryAssignName(map, 0x0113, sdsnew("emacron"));
	glyphorder_tryAssignName(map, 0x2014, sdsnew("emdash"));
	glyphorder_tryAssignName(map, 0x2205, sdsnew("emptyset"));
	glyphorder_tryAssignName(map, 0x2013, sdsnew("endash"));
	glyphorder_tryAssignName(map, 0x014B, sdsnew("eng"));
	glyphorder_tryAssignName(map, 0x0119, sdsnew("eogonek"));
	glyphorder_tryAssignName(map, 0x03B5, sdsnew("epsilon"));
	glyphorder_tryAssignName(map, 0x03AD, sdsnew("epsilontonos"));
	glyphorder_tryAssignName(map, 0x003D, sdsnew("equal"));
	glyphorder_tryAssignName(map, 0x2261, sdsnew("equivalence"));
	glyphorder_tryAssignName(map, 0x212E, sdsnew("estimated"));
	glyphorder_tryAssignName(map, 0x03B7, sdsnew("eta"));
	glyphorder_tryAssignName(map, 0x03AE, sdsnew("etatonos"));
	glyphorder_tryAssignName(map, 0x00F0, sdsnew("eth"));
	glyphorder_tryAssignName(map, 0x0021, sdsnew("exclam"));
	glyphorder_tryAssignName(map, 0x203C, sdsnew("exclamdbl"));
	glyphorder_tryAssignName(map, 0x00A1, sdsnew("exclamdown"));
	glyphorder_tryAssignName(map, 0x2203, sdsnew("existential"));
	glyphorder_tryAssignName(map, 0x0066, sdsnew("f"));
	glyphorder_tryAssignName(map, 0x2640, sdsnew("female"));
	glyphorder_tryAssignName(map, 0x2012, sdsnew("figuredash"));
	glyphorder_tryAssignName(map, 0x25A0, sdsnew("filledbox"));
	glyphorder_tryAssignName(map, 0x25AC, sdsnew("filledrect"));
	glyphorder_tryAssignName(map, 0x0035, sdsnew("five"));
	glyphorder_tryAssignName(map, 0x215D, sdsnew("fiveeighths"));
	glyphorder_tryAssignName(map, 0x0192, sdsnew("florin"));
	glyphorder_tryAssignName(map, 0x0034, sdsnew("four"));
	glyphorder_tryAssignName(map, 0x2044, sdsnew("fraction"));
	glyphorder_tryAssignName(map, 0x20A3, sdsnew("franc"));
	glyphorder_tryAssignName(map, 0x0067, sdsnew("g"));
	glyphorder_tryAssignName(map, 0x03B3, sdsnew("gamma"));
	glyphorder_tryAssignName(map, 0x011F, sdsnew("gbreve"));
	glyphorder_tryAssignName(map, 0x01E7, sdsnew("gcaron"));
	glyphorder_tryAssignName(map, 0x011D, sdsnew("gcircumflex"));
	glyphorder_tryAssignName(map, 0x0121, sdsnew("gdotaccent"));
	glyphorder_tryAssignName(map, 0x00DF, sdsnew("germandbls"));
	glyphorder_tryAssignName(map, 0x2207, sdsnew("gradient"));
	glyphorder_tryAssignName(map, 0x0060, sdsnew("grave"));
	glyphorder_tryAssignName(map, 0x0300, sdsnew("gravecomb"));
	glyphorder_tryAssignName(map, 0x003E, sdsnew("greater"));
	glyphorder_tryAssignName(map, 0x2265, sdsnew("greaterequal"));
	glyphorder_tryAssignName(map, 0x00AB, sdsnew("guillemotleft"));
	glyphorder_tryAssignName(map, 0x00BB, sdsnew("guillemotright"));
	glyphorder_tryAssignName(map, 0x2039, sdsnew("guilsinglleft"));
	glyphorder_tryAssignName(map, 0x203A, sdsnew("guilsinglright"));
	glyphorder_tryAssignName(map, 0x0068, sdsnew("h"));
	glyphorder_tryAssignName(map, 0x0127, sdsnew("hbar"));
	glyphorder_tryAssignName(map, 0x0125, sdsnew("hcircumflex"));
	glyphorder_tryAssignName(map, 0x2665, sdsnew("heart"));
	glyphorder_tryAssignName(map, 0x0309, sdsnew("hookabovecomb"));
	glyphorder_tryAssignName(map, 0x2302, sdsnew("house"));
	glyphorder_tryAssignName(map, 0x02DD, sdsnew("hungarumlaut"));
	glyphorder_tryAssignName(map, 0x002D, sdsnew("hyphen"));
	glyphorder_tryAssignName(map, 0x0069, sdsnew("i"));
	glyphorder_tryAssignName(map, 0x00ED, sdsnew("iacute"));
	glyphorder_tryAssignName(map, 0x012D, sdsnew("ibreve"));
	glyphorder_tryAssignName(map, 0x00EE, sdsnew("icircumflex"));
	glyphorder_tryAssignName(map, 0x00EF, sdsnew("idieresis"));
	glyphorder_tryAssignName(map, 0x00EC, sdsnew("igrave"));
	glyphorder_tryAssignName(map, 0x0133, sdsnew("ij"));
	glyphorder_tryAssignName(map, 0x012B, sdsnew("imacron"));
	glyphorder_tryAssignName(map, 0x221E, sdsnew("infinity"));
	glyphorder_tryAssignName(map, 0x222B, sdsnew("integral"));
	glyphorder_tryAssignName(map, 0x2321, sdsnew("integralbt"));
	glyphorder_tryAssignName(map, 0x2320, sdsnew("integraltp"));
	glyphorder_tryAssignName(map, 0x2229, sdsnew("intersection"));
	glyphorder_tryAssignName(map, 0x25D8, sdsnew("invbullet"));
	glyphorder_tryAssignName(map, 0x25D9, sdsnew("invcircle"));
	glyphorder_tryAssignName(map, 0x263B, sdsnew("invsmileface"));
	glyphorder_tryAssignName(map, 0x012F, sdsnew("iogonek"));
	glyphorder_tryAssignName(map, 0x03B9, sdsnew("iota"));
	glyphorder_tryAssignName(map, 0x03CA, sdsnew("iotadieresis"));
	glyphorder_tryAssignName(map, 0x0390, sdsnew("iotadieresistonos"));
	glyphorder_tryAssignName(map, 0x03AF, sdsnew("iotatonos"));
	glyphorder_tryAssignName(map, 0x0129, sdsnew("itilde"));
	glyphorder_tryAssignName(map, 0x006A, sdsnew("j"));
	glyphorder_tryAssignName(map, 0x0135, sdsnew("jcircumflex"));
	glyphorder_tryAssignName(map, 0x006B, sdsnew("k"));
	glyphorder_tryAssignName(map, 0x03BA, sdsnew("kappa"));
	glyphorder_tryAssignName(map, 0x0138, sdsnew("kgreenlandic"));
	glyphorder_tryAssignName(map, 0x006C, sdsnew("l"));
	glyphorder_tryAssignName(map, 0x013A, sdsnew("lacute"));
	glyphorder_tryAssignName(map, 0x03BB, sdsnew("lambda"));
	glyphorder_tryAssignName(map, 0x013E, sdsnew("lcaron"));
	glyphorder_tryAssignName(map, 0x0140, sdsnew("ldot"));
	glyphorder_tryAssignName(map, 0x003C, sdsnew("less"));
	glyphorder_tryAssignName(map, 0x2264, sdsnew("lessequal"));
	glyphorder_tryAssignName(map, 0x258C, sdsnew("lfblock"));
	glyphorder_tryAssignName(map, 0x20A4, sdsnew("lira"));
	glyphorder_tryAssignName(map, 0x2227, sdsnew("logicaland"));
	glyphorder_tryAssignName(map, 0x00AC, sdsnew("logicalnot"));
	glyphorder_tryAssignName(map, 0x2228, sdsnew("logicalor"));
	glyphorder_tryAssignName(map, 0x017F, sdsnew("longs"));
	glyphorder_tryAssignName(map, 0x25CA, sdsnew("lozenge"));
	glyphorder_tryAssignName(map, 0x0142, sdsnew("lslash"));
	glyphorder_tryAssignName(map, 0x2591, sdsnew("ltshade"));
	glyphorder_tryAssignName(map, 0x006D, sdsnew("m"));
	glyphorder_tryAssignName(map, 0x00AF, sdsnew("macron"));
	glyphorder_tryAssignName(map, 0x2642, sdsnew("male"));
	glyphorder_tryAssignName(map, 0x2212, sdsnew("minus"));
	glyphorder_tryAssignName(map, 0x2032, sdsnew("minute"));
	glyphorder_tryAssignName(map, 0x00B5, sdsnew("mu"));
	glyphorder_tryAssignName(map, 0x00D7, sdsnew("multiply"));
	glyphorder_tryAssignName(map, 0x266A, sdsnew("musicalnote"));
	glyphorder_tryAssignName(map, 0x266B, sdsnew("musicalnotedbl"));
	glyphorder_tryAssignName(map, 0x006E, sdsnew("n"));
	glyphorder_tryAssignName(map, 0x0144, sdsnew("nacute"));
	glyphorder_tryAssignName(map, 0x0149, sdsnew("napostrophe"));
	glyphorder_tryAssignName(map, 0x0148, sdsnew("ncaron"));
	glyphorder_tryAssignName(map, 0x0039, sdsnew("nine"));
	glyphorder_tryAssignName(map, 0x2209, sdsnew("notelement"));
	glyphorder_tryAssignName(map, 0x2260, sdsnew("notequal"));
	glyphorder_tryAssignName(map, 0x2284, sdsnew("notsubset"));
	glyphorder_tryAssignName(map, 0x00F1, sdsnew("ntilde"));
	glyphorder_tryAssignName(map, 0x03BD, sdsnew("nu"));
	glyphorder_tryAssignName(map, 0x0023, sdsnew("numbersign"));
	glyphorder_tryAssignName(map, 0x006F, sdsnew("o"));
	glyphorder_tryAssignName(map, 0x00F3, sdsnew("oacute"));
	glyphorder_tryAssignName(map, 0x014F, sdsnew("obreve"));
	glyphorder_tryAssignName(map, 0x00F4, sdsnew("ocircumflex"));
	glyphorder_tryAssignName(map, 0x00F6, sdsnew("odieresis"));
	glyphorder_tryAssignName(map, 0x0153, sdsnew("oe"));
	glyphorder_tryAssignName(map, 0x02DB, sdsnew("ogonek"));
	glyphorder_tryAssignName(map, 0x00F2, sdsnew("ograve"));
	glyphorder_tryAssignName(map, 0x01A1, sdsnew("ohorn"));
	glyphorder_tryAssignName(map, 0x0151, sdsnew("ohungarumlaut"));
	glyphorder_tryAssignName(map, 0x014D, sdsnew("omacron"));
	glyphorder_tryAssignName(map, 0x03C9, sdsnew("omega"));
	glyphorder_tryAssignName(map, 0x03D6, sdsnew("omega1"));
	glyphorder_tryAssignName(map, 0x03CE, sdsnew("omegatonos"));
	glyphorder_tryAssignName(map, 0x03BF, sdsnew("omicron"));
	glyphorder_tryAssignName(map, 0x03CC, sdsnew("omicrontonos"));
	glyphorder_tryAssignName(map, 0x0031, sdsnew("one"));
	glyphorder_tryAssignName(map, 0x2024, sdsnew("onedotenleader"));
	glyphorder_tryAssignName(map, 0x215B, sdsnew("oneeighth"));
	glyphorder_tryAssignName(map, 0x00BD, sdsnew("onehalf"));
	glyphorder_tryAssignName(map, 0x00BC, sdsnew("onequarter"));
	glyphorder_tryAssignName(map, 0x2153, sdsnew("onethird"));
	glyphorder_tryAssignName(map, 0x25E6, sdsnew("openbullet"));
	glyphorder_tryAssignName(map, 0x00AA, sdsnew("ordfeminine"));
	glyphorder_tryAssignName(map, 0x00BA, sdsnew("ordmasculine"));
	glyphorder_tryAssignName(map, 0x221F, sdsnew("orthogonal"));
	glyphorder_tryAssignName(map, 0x00F8, sdsnew("oslash"));
	glyphorder_tryAssignName(map, 0x01FF, sdsnew("oslashacute"));
	glyphorder_tryAssignName(map, 0x00F5, sdsnew("otilde"));
	glyphorder_tryAssignName(map, 0x0070, sdsnew("p"));
	glyphorder_tryAssignName(map, 0x00B6, sdsnew("paragraph"));
	glyphorder_tryAssignName(map, 0x0028, sdsnew("parenleft"));
	glyphorder_tryAssignName(map, 0x0029, sdsnew("parenright"));
	glyphorder_tryAssignName(map, 0x2202, sdsnew("partialdiff"));
	glyphorder_tryAssignName(map, 0x0025, sdsnew("percent"));
	glyphorder_tryAssignName(map, 0x002E, sdsnew("period"));
	glyphorder_tryAssignName(map, 0x00B7, sdsnew("periodcentered"));
	glyphorder_tryAssignName(map, 0x22A5, sdsnew("perpendicular"));
	glyphorder_tryAssignName(map, 0x2030, sdsnew("perthousand"));
	glyphorder_tryAssignName(map, 0x20A7, sdsnew("peseta"));
	glyphorder_tryAssignName(map, 0x03C6, sdsnew("phi"));
	glyphorder_tryAssignName(map, 0x03D5, sdsnew("phi1"));
	glyphorder_tryAssignName(map, 0x03C0, sdsnew("pi"));
	glyphorder_tryAssignName(map, 0x002B, sdsnew("plus"));
	glyphorder_tryAssignName(map, 0x00B1, sdsnew("plusminus"));
	glyphorder_tryAssignName(map, 0x211E, sdsnew("prescription"));
	glyphorder_tryAssignName(map, 0x220F, sdsnew("product"));
	glyphorder_tryAssignName(map, 0x2282, sdsnew("propersubset"));
	glyphorder_tryAssignName(map, 0x2283, sdsnew("propersuperset"));
	glyphorder_tryAssignName(map, 0x221D, sdsnew("proportional"));
	glyphorder_tryAssignName(map, 0x03C8, sdsnew("psi"));
	glyphorder_tryAssignName(map, 0x0071, sdsnew("q"));
	glyphorder_tryAssignName(map, 0x003F, sdsnew("question"));
	glyphorder_tryAssignName(map, 0x00BF, sdsnew("questiondown"));
	glyphorder_tryAssignName(map, 0x0022, sdsnew("quotedbl"));
	glyphorder_tryAssignName(map, 0x201E, sdsnew("quotedblbase"));
	glyphorder_tryAssignName(map, 0x201C, sdsnew("quotedblleft"));
	glyphorder_tryAssignName(map, 0x201D, sdsnew("quotedblright"));
	glyphorder_tryAssignName(map, 0x2018, sdsnew("quoteleft"));
	glyphorder_tryAssignName(map, 0x201B, sdsnew("quotereversed"));
	glyphorder_tryAssignName(map, 0x2019, sdsnew("quoteright"));
	glyphorder_tryAssignName(map, 0x201A, sdsnew("quotesinglbase"));
	glyphorder_tryAssignName(map, 0x0027, sdsnew("quotesingle"));
	glyphorder_tryAssignName(map, 0x0072, sdsnew("r"));
	glyphorder_tryAssignName(map, 0x0155, sdsnew("racute"));
	glyphorder_tryAssignName(map, 0x221A, sdsnew("radical"));
	glyphorder_tryAssignName(map, 0x0159, sdsnew("rcaron"));
	glyphorder_tryAssignName(map, 0x2286, sdsnew("reflexsubset"));
	glyphorder_tryAssignName(map, 0x2287, sdsnew("reflexsuperset"));
	glyphorder_tryAssignName(map, 0x00AE, sdsnew("registered"));
	glyphorder_tryAssignName(map, 0x2310, sdsnew("revlogicalnot"));
	glyphorder_tryAssignName(map, 0x03C1, sdsnew("rho"));
	glyphorder_tryAssignName(map, 0x02DA, sdsnew("ring"));
	glyphorder_tryAssignName(map, 0x2590, sdsnew("rtblock"));
	glyphorder_tryAssignName(map, 0x0073, sdsnew("s"));
	glyphorder_tryAssignName(map, 0x015B, sdsnew("sacute"));
	glyphorder_tryAssignName(map, 0x0161, sdsnew("scaron"));
	glyphorder_tryAssignName(map, 0x015F, sdsnew("scedilla"));
	glyphorder_tryAssignName(map, 0x015D, sdsnew("scircumflex"));
	glyphorder_tryAssignName(map, 0x2033, sdsnew("second"));
	glyphorder_tryAssignName(map, 0x00A7, sdsnew("section"));
	glyphorder_tryAssignName(map, 0x003B, sdsnew("semicolon"));
	glyphorder_tryAssignName(map, 0x0037, sdsnew("seven"));
	glyphorder_tryAssignName(map, 0x215E, sdsnew("seveneighths"));
	glyphorder_tryAssignName(map, 0x2592, sdsnew("shade"));
	glyphorder_tryAssignName(map, 0x03C3, sdsnew("sigma"));
	glyphorder_tryAssignName(map, 0x03C2, sdsnew("sigma1"));
	glyphorder_tryAssignName(map, 0x223C, sdsnew("similar"));
	glyphorder_tryAssignName(map, 0x0036, sdsnew("six"));
	glyphorder_tryAssignName(map, 0x002F, sdsnew("slash"));
	glyphorder_tryAssignName(map, 0x263A, sdsnew("smileface"));
	glyphorder_tryAssignName(map, 0x0020, sdsnew("space"));
	glyphorder_tryAssignName(map, 0x2660, sdsnew("spade"));
	glyphorder_tryAssignName(map, 0x00A3, sdsnew("sterling"));
	glyphorder_tryAssignName(map, 0x220B, sdsnew("suchthat"));
	glyphorder_tryAssignName(map, 0x2211, sdsnew("summation"));
	glyphorder_tryAssignName(map, 0x263C, sdsnew("sun"));
	glyphorder_tryAssignName(map, 0x0074, sdsnew("t"));
	glyphorder_tryAssignName(map, 0x03C4, sdsnew("tau"));
	glyphorder_tryAssignName(map, 0x0167, sdsnew("tbar"));
	glyphorder_tryAssignName(map, 0x0165, sdsnew("tcaron"));
	glyphorder_tryAssignName(map, 0x2234, sdsnew("therefore"));
	glyphorder_tryAssignName(map, 0x03B8, sdsnew("theta"));
	glyphorder_tryAssignName(map, 0x03D1, sdsnew("theta1"));
	glyphorder_tryAssignName(map, 0x00FE, sdsnew("thorn"));
	glyphorder_tryAssignName(map, 0x0033, sdsnew("three"));
	glyphorder_tryAssignName(map, 0x215C, sdsnew("threeeighths"));
	glyphorder_tryAssignName(map, 0x00BE, sdsnew("threequarters"));
	glyphorder_tryAssignName(map, 0x02DC, sdsnew("tilde"));
	glyphorder_tryAssignName(map, 0x0303, sdsnew("tildecomb"));
	glyphorder_tryAssignName(map, 0x0384, sdsnew("tonos"));
	glyphorder_tryAssignName(map, 0x2122, sdsnew("trademark"));
	glyphorder_tryAssignName(map, 0x25BC, sdsnew("triagdn"));
	glyphorder_tryAssignName(map, 0x25C4, sdsnew("triaglf"));
	glyphorder_tryAssignName(map, 0x25BA, sdsnew("triagrt"));
	glyphorder_tryAssignName(map, 0x25B2, sdsnew("triagup"));
	glyphorder_tryAssignName(map, 0x0032, sdsnew("two"));
	glyphorder_tryAssignName(map, 0x2025, sdsnew("twodotenleader"));
	glyphorder_tryAssignName(map, 0x2154, sdsnew("twothirds"));
	glyphorder_tryAssignName(map, 0x0075, sdsnew("u"));
	glyphorder_tryAssignName(map, 0x00FA, sdsnew("uacute"));
	glyphorder_tryAssignName(map, 0x016D, sdsnew("ubreve"));
	glyphorder_tryAssignName(map, 0x00FB, sdsnew("ucircumflex"));
	glyphorder_tryAssignName(map, 0x00FC, sdsnew("udieresis"));
	glyphorder_tryAssignName(map, 0x00F9, sdsnew("ugrave"));
	glyphorder_tryAssignName(map, 0x01B0, sdsnew("uhorn"));
	glyphorder_tryAssignName(map, 0x0171, sdsnew("uhungarumlaut"));
	glyphorder_tryAssignName(map, 0x016B, sdsnew("umacron"));
	glyphorder_tryAssignName(map, 0x005F, sdsnew("underscore"));
	glyphorder_tryAssignName(map, 0x2017, sdsnew("underscoredbl"));
	glyphorder_tryAssignName(map, 0x222A, sdsnew("union"));
	glyphorder_tryAssignName(map, 0x2200, sdsnew("universal"));
	glyphorder_tryAssignName(map, 0x0173, sdsnew("uogonek"));
	glyphorder_tryAssignName(map, 0x2580, sdsnew("upblock"));
	glyphorder_tryAssignName(map, 0x03C5, sdsnew("upsilon"));
	glyphorder_tryAssignName(map, 0x03CB, sdsnew("upsilondieresis"));
	glyphorder_tryAssignName(map, 0x03B0, sdsnew("upsilondieresistonos"));
	glyphorder_tryAssignName(map, 0x03CD, sdsnew("upsilontonos"));
	glyphorder_tryAssignName(map, 0x016F, sdsnew("uring"));
	glyphorder_tryAssignName(map, 0x0169, sdsnew("utilde"));
	glyphorder_tryAssignName(map, 0x0076, sdsnew("v"));
	glyphorder_tryAssignName(map, 0x0077, sdsnew("w"));
	glyphorder_tryAssignName(map, 0x1E83, sdsnew("wacute"));
	glyphorder_tryAssignName(map, 0x0175, sdsnew("wcircumflex"));
	glyphorder_tryAssignName(map, 0x1E85, sdsnew("wdieresis"));
	glyphorder_tryAssignName(map, 0x2118, sdsnew("weierstrass"));
	glyphorder_tryAssignName(map, 0x1E81, sdsnew("wgrave"));
	glyphorder_tryAssignName(map, 0x0078, sdsnew("x"));
	glyphorder_tryAssignName(map, 0x03BE, sdsnew("xi"));
	glyphorder_tryAssignName(map, 0x0079, sdsnew("y"));
	glyphorder_tryAssignName(map, 0x00FD, sdsnew("yacute"));
	glyphorder_tryAssignName(map, 0x0177, sdsnew("ycircumflex"));
	glyphorder_tryAssignName(map, 0x00FF, sdsnew("ydieresis"));
	glyphorder_tryAssignName(map, 0x00A5, sdsnew("yen"));
	glyphorder_tryAssignName(map, 0x1EF3, sdsnew("ygrave"));
	glyphorder_tryAssignName(map, 0x007A, sdsnew("z"));
	glyphorder_tryAssignName(map, 0x017A, sdsnew("zacute"));
	glyphorder_tryAssignName(map, 0x017E, sdsnew("zcaron"));
	glyphorder_tryAssignName(map, 0x017C, sdsnew("zdotaccent"));
	glyphorder_tryAssignName(map, 0x0030, sdsnew("zero"));
	glyphorder_tryAssignName(map, 0x03B6, sdsnew("zeta"));
}
