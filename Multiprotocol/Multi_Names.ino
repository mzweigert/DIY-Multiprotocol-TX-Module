/*
 This project is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Multiprotocol is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Multiprotocol.  If not, see <http://www.gnu.org/licenses/>.
 */

#if defined(MULTI_NAMES)

const char STR_FLYSKY[]		="FlySky";
const char STR_HUBSAN[]		="Hubsan";
const char STR_FRSKYD[]		="FrSky D";
const char STR_HISKY[]		="Hisky";
const char STR_V2X2[]		="V2x2";
const char STR_DSM[]		="DSM";
const char STR_DSM_RX[]		="DSM_RX";
const char STR_DEVO[]		="Devo";
const char STR_YD717[]		="YD717";
const char STR_KN[]			="KN";
const char STR_SYMAX[]		="SymaX";
const char STR_SLT[]		="SLT";
const char STR_CX10[]		="CX10";
const char STR_CG023[]		="CG023";
const char STR_BAYANG[]		="Bayang";
const char STR_FRSKYL[]		="FrSky L";
const char STR_FRSKYX[]		="FrSky X";
const char STR_FRSKYX2[]	="FrSkyX2";
const char STR_ESKY[]		="ESky";
const char STR_MT99XX[]		="MT99XX";
const char STR_MJXQ[]		="MJXq";
const char STR_SHENQI[]		="Shenqi";
const char STR_FY326[]		="FY326";
const char STR_FUTABA[]		="Futaba";
const char STR_J6PRO[]		="J6 Pro";
const char STR_JJRC345[]	="JJRC345";
const char STR_FQ777[]		="FQ777";
const char STR_ASSAN[]		="Assan";
const char STR_FRSKYV[]		="FrSky V";
const char STR_HONTAI[]		="Hontai";
const char STR_AFHDS2A[]	="FlSky2A";
const char STR_Q2X2[]		="Q2x2";
const char STR_WK2x01[]		="Walkera";
const char STR_Q303[]		="Q303";
const char STR_Q90C[]		="Q90C";
const char STR_GW008[]		="GW008";
const char STR_DM002[]		="DM002";
const char STR_CABELL[]		="Cabell";
const char STR_ESKY150[]	="Esky150";
const char STR_ESKY150V2[]	="EskyV2";
const char STR_H8_3D[]		="H8 3D";
const char STR_CORONA[]		="Corona";
const char STR_CFLIE[]		="CFlie";
const char STR_HITEC[]		="Hitec";
const char STR_WFLY[]		="WFLY";
const char STR_WFLY2[]		="WFLY2";
const char STR_BUGS[]		="Bugs";
const char STR_BUGSMINI[]	="BugMini";
const char STR_TRAXXAS[]	="Traxxas";
const char STR_NCC1701[]	="NCC1701";
const char STR_E01X[]		="E01X";
const char STR_V911S[]		="V911S";
const char STR_GD00X[]		="GD00x";
const char STR_V761[]		="V761";
const char STR_KF606[]		="KF606";
const char STR_REDPINE[]	="Redpine";
const char STR_POTENSIC[]	="Potensi";
const char STR_ZSX[]		="ZSX";
const char STR_HEIGHT[]		="Height";
const char STR_SCANNER[]	="Scanner";
const char STR_FRSKY_RX[]	="FrSkyRX";
const char STR_AFHDS2A_RX[]	="FS2A_RX";
const char STR_HOTT[]		="HoTT";
const char STR_FX816[]		="FX816";
const char STR_BAYANG_RX[]	="BayanRX";
const char STR_PELIKAN[]	="Pelikan";
const char STR_TIGER[]		="Tiger";
const char STR_XK[]			="XK";
const char STR_XN297DUMP[]	="XN297DP";
const char STR_FRSKYR9[]	="FrSkyR9";
const char STR_PROPEL[]		="Propel";
const char STR_SKYARTEC[]	="Skyartc";
const char STR_KYOSHO[]		="Kyosho";
const char STR_RLINK[]		="RadLink";
const char STR_REALACC[]	="Realacc";
const char STR_OMP[]		="OMP";
const char STR_MLINK[]		="M-Link";
const char STR_TEST[]		="Test";
const char STR_NANORF[]		="NanoRF";
const char STR_E016HV2[]    ="E016Hv2";

const char STR_SUBTYPE_FLYSKY[] =     "\x04""Std\0""V9x9""V6x6""V912""CX20";
const char STR_SUBTYPE_HUBSAN[] =     "\x04""H107""H301""H501";
const char STR_SUBTYPE_FRSKYD[] =     "\x06""D8\0   ""Cloned";
const char STR_SUBTYPE_FRSKYX[] =     "\x07""D16\0   ""D16 8ch""LBT(EU)""LBT 8ch""Cloned\0""Clo 8ch";
const char STR_SUBTYPE_HISKY[] =      "\x05""Std\0 ""HK310";
const char STR_SUBTYPE_V2X2[] =       "\x06""Std\0  ""JXD506""MR101\0";
const char STR_SUBTYPE_DSM[] =        "\x04""2 1F""2 2F""X 1F""X 2F""Auto";
const char STR_SUBTYPE_DEVO[] =       "\x04""8ch\0""10ch""12ch""6ch\0""7ch\0";
const char STR_SUBTYPE_YD717[] =      "\x07""Std\0   ""SkyWlkr""Syma X4""XINXUN\0""NIHUI\0 ";
const char STR_SUBTYPE_KN[] =         "\x06""WLtoys""FeiLun";
const char STR_SUBTYPE_SYMAX[] =      "\x03""Std""X5C";
const char STR_SUBTYPE_SLT[] =        "\x06""V1_6ch""V2_8ch""Q100\0 ""Q200\0 ""MR100\0";
const char STR_SUBTYPE_CX10[] =       "\x07""Green\0 ""Blue\0  ""DM007\0 ""-\0     ""JC3015a""JC3015b""MK33041";
const char STR_SUBTYPE_CG023[] =      "\x05""Std\0 ""YD829";
const char STR_SUBTYPE_BAYANG[] =     "\x07""Std\0   ""H8S3D\0 ""X16 AH\0""IRDrone""DHD D4\0""QX100\0 ";
const char STR_SUBTYPE_MT99[] =       "\x06""MT99\0 ""H7\0   ""YZ\0   ""LS\0   ""FY805";
const char STR_SUBTYPE_MJXQ[] =       "\x07""WLH08\0 ""X600\0  ""X800\0  ""H26D\0  ""E010\0  ""H26WH\0 ""Phoenix";
const char STR_SUBTYPE_FY326[] =      "\x05""Std\0 ""FY319";
const char STR_SUBTYPE_HONTAI[] =     "\x07""Std\0   ""JJRC X1""X5C1\0  ""FQ_951";
const char STR_SUBTYPE_AFHDS2A[] =    "\x08""PWM,IBUS""PPM,IBUS""PWM,SBUS""PPM,SBUS""PWM,IB16""PPM,IB16""PWM,SB16""PPM,SB16";
const char STR_SUBTYPE_Q2X2[] =       "\x04""Q222""Q242""Q282";
const char STR_SUBTYPE_WK2x01[] =     "\x06""WK2801""WK2401""W6_5_1""W6_6_1""W6_HeL""W6_HeI";
const char STR_SUBTYPE_Q303[] =       "\x06""Std\0  ""CX35\0 ""CX10D\0""CX10WD";
const char STR_SUBTYPE_CABELL[] =     "\x07""V3\0    ""V3 Telm""-\0     ""-\0     ""-\0     ""-\0     ""F-Safe\0""Unbind\0";
const char STR_SUBTYPE_H83D[] =       "\x07""Std\0   ""H20H\0  ""H20Mini""H30Mini";
const char STR_SUBTYPE_CORONA[] =     "\x05""V1\0  ""V2\0  ""FD V3";
const char STR_SUBTYPE_HITEC[] =      "\x07""Optima\0""Opt Hub""Minima\0";
const char STR_SUBTYPE_BUGS_MINI[] =  "\x06""Std\0  ""Bugs3H";
const char STR_SUBTYPE_TRAXXAS[] =    "\x04""6519";
const char STR_SUBTYPE_E01X[] =       "\x05""E012\0""E015\0""E016H";
const char STR_SUBTYPE_GD00X[] =      "\x05""GD_V1""GD_V2";
const char STR_SUBTYPE_REDPINE[] =    "\x04""Fast""Slow";
const char STR_SUBTYPE_POTENSIC[] =   "\x03""A20";
const char STR_SUBTYPE_ZSX[] =        "\x07""280JJRC";
const char STR_SUBTYPE_HEIGHT[] =    "\x03""5ch""8ch";
const char STR_SUBTYPE_FX816[] =      "\x03""P38";
const char STR_SUBTYPE_XN297DUMP[] =  "\x07""250Kbps""1Mbps\0 ""2Mbps\0 ""Auto\0  ""NRF\0   ";
const char STR_SUBTYPE_ESKY150[] =    "\x03""4ch""7ch";
const char STR_SUBTYPE_ESKY150V2[] =  "\x05""150V2";
const char STR_SUBTYPE_V911S[] =      "\x05""V911S""E119\0";
const char STR_SUBTYPE_XK[] =         "\x04""X450""X420";
const char STR_SUBTYPE_FRSKYR9[] =    "\x07""915MHz\0""868MHz\0""915 8ch""868 8ch""FCC\0   ""--\0    ""FCC 8ch""-- 8ch\0";
const char STR_SUBTYPE_ESKY[] =       "\x03""Std""ET4";
const char STR_SUBTYPE_PROPEL[] =     "\x04""74-Z";
const char STR_SUBTYPE_FRSKY_RX[] =   "\x07""RX\0    ""CloneTX";
const char STR_SUBTYPE_FRSKYL[] =     "\x08""LR12\0   ""LR12 6ch";
const char STR_SUBTYPE_WFLY[] =       "\x05""WFR0x";
const char STR_SUBTYPE_WFLY2[] =      "\x05""RF20x";
const char STR_SUBTYPE_HOTT[] =       "\x07""Sync\0  ""No_Sync";
const char STR_SUBTYPE_PELIKAN[] =    "\x04""Pro\0""Lite";
const char STR_SUBTYPE_V761[] =       "\x03""3ch""4ch";
const char STR_SUBTYPE_RLINK[] =      "\x07""Surface""Air\0   ""DumboRC";
const char STR_SUBTYPE_REALACC[] =    "\x03""R11";
const char STR_SUBTYPE_KYOSHO[] =     "\x04""FHSS""Hype";
const char STR_SUBTYPE_FUTABA[] =     "\x05""SFHSS";
const char STR_SUBTYPE_JJRC345[] =    "\x08""JJRC345\0""SkyTmblr";

enum
{
	OPTION_NONE,
	OPTION_OPTION,
	OPTION_RFTUNE,
	OPTION_VIDFREQ,
	OPTION_FIXEDID,
	OPTION_TELEM,
	OPTION_SRVFREQ,
	OPTION_MAXTHR,
	OPTION_RFCHAN,
	OPTION_RFPOWER,
};

#define NO_SUBTYPE		nullptr

const mm_protocol_definition multi_protocols[] = {
// Protocol number, Protocol String, Number of sub_protocols, Sub_protocol strings, Option type
	#if defined(BAYANG_NRF24L01_INO)
		{PROTO_BAYANG,     STR_BAYANG,    6, STR_SUBTYPE_BAYANG,    OPTION_TELEM   },
	#endif
	#if defined(BUGSMINI_NRF24L01_INO)
		{PROTO_BUGSMINI,   STR_BUGSMINI,  2, STR_SUBTYPE_BUGS_MINI, OPTION_NONE    },
  #endif
	#if defined(MJXQ_NRF24L01_INO)
		{PROTO_MJXQ,       STR_MJXQ,      7, STR_SUBTYPE_MJXQ,      OPTION_RFTUNE  },
	#endif

		{0x00,             nullptr,       0, nullptr,               0 }
};

#endif
