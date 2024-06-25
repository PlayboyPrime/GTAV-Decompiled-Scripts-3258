#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = -1;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<1652> Local_116 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<8> Local_125[32];
	struct<1583> Local_126 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<26> Local_131 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_132 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135[4] = { 0, 0, 0, 0 };
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	bool bLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0,001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0,0375f;
	fLocal_31 = 0,17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	fLocal_63 = 0f;
	iLocal_136 = 1;
	func_450();
	while (true)
	{
		system::wait(0);
		if (func_442())
		{
			func_438();
		}
		if (Global_1964414)
		{
			Global_1964414 = 0;
			func_438();
		}
		if (Global_2635563.f_2981 && Global_2640096 != 0)
		{
			if (Global_2640096 != 6)
			{
				func_438();
			}
		}
		if (func_437() && unk_0x15CCE8886267624F())
		{
			func_438();
		}
		if ((!func_436(unk_0x259BE71D8A81D4FA()) && !func_435(unk_0x259BE71D8A81D4FA())) && !func_434(unk_0x259BE71D8A81D4FA()))
		{
			func_438();
		}
		if (unk_0x834C960822A4683F() && !BitTest(Global_4718592.f_34, 7))
		{
			func_438();
		}
		if (func_435(unk_0x259BE71D8A81D4FA()) && func_430() != func_429())
		{
			if (BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 1) && unk_0x15CCE8886267624F())
			{
				func_438();
			}
		}
		if (func_435(unk_0x259BE71D8A81D4FA()) && func_430() != func_429())
		{
			if (Global_2657971[func_430() /*465*/].f_457 != Global_1964424 && unk_0x15CCE8886267624F())
			{
				func_438();
			}
		}
		if (func_435(unk_0x259BE71D8A81D4FA()) && func_427() != 0)
		{
			func_438();
		}
		if (func_435(unk_0x259BE71D8A81D4FA()) && func_425(unk_0x259BE71D8A81D4FA()))
		{
			func_438();
		}
		iVar0 = 0;
		while (iVar0 < Local_126.f_257)
		{
			if (!func_424())
			{
				if (unk_0x2FC2FDC413532977(Local_116.f_1595[iVar0]) && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iVar0]))
				{
					unk_0x8FC511FC963C67E5(Local_116.f_1595[iVar0], 1);
				}
			}
			iVar0++;
		}
		func_87();
		if (func_424())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_86();
	func_83();
	func_76();
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		switch (Local_116.f_1520[iVar0])
		{
			case 0:
				if (Global_2708677 != iVar0 && (Global_2708677 != -1 || func_435(unk_0x259BE71D8A81D4FA())))
				{
					Local_116.f_1560[iVar0] = 1;
					func_75(&(Local_116.f_1[iVar0 /*211*/]));
					func_74(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0])))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iVar0]))
					{
						Local_116.f_1590[iVar0] = unk_0x643DC062EE904FCA(Local_116.f_1580[iVar0]);
						if (Local_116.f_1590[iVar0] != -1)
						{
							if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), func_73(), func_72(iVar0), 3))
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iVar0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), 2116425869))
								{
									Local_116.f_1580[iVar0] = unk_0xBC5D9A293974F095(func_71(iVar0), 0f, 0f, func_70(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_73(), func_69(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iVar0]);
								}
							}
							else if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iVar0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), 2116425869))
							{
								Local_116.f_1580[iVar0] = unk_0xBC5D9A293974F095(func_71(iVar0), 0f, 0f, func_70(iVar0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_73(), func_72(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iVar0]);
							}
						}
					}
					else
					{
						unk_0x460D2A8B2C7DC7D4(Local_116.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_116.f_1600[(iVar0 * 4 + iVar1)] != func_429() && Global_2708677 != iVar0) && (Global_2708677 != -1 || func_435(unk_0x259BE71D8A81D4FA())))
					{
						func_74(2, iVar0);
						Local_116.f_1585[iVar0] = iVar1;
						func_68(&(Local_116.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0])))
				{
					if (func_67(&(Local_116.f_1651[iVar0 /*2*/])) && func_66(&(Local_116.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_116.f_1580[iVar0] = unk_0xBC5D9A293974F095(func_71(iVar0), 0f, 0f, func_70(iVar0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]), Local_116.f_1580[iVar0], func_73(), func_65(iVar0, Local_116.f_1585[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_116.f_1580[iVar0]);
						func_64(&(Local_116.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var11;
	
	bVar5 = false;
	if (Local_116.f_1515[iParam0] > 4 && Local_116.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_63(iParam0, bVar5) || Global_2708677 == iParam0) || Local_116.f_1530[iParam0])
	{
		Local_116.f_1530[iParam0] = 1;
		func_62(iParam0);
		return;
	}
	if (unk_0x2FC2FDC413532977(Local_116.f_1595[iParam0]))
	{
		if (!unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
		{
			Local_116.f_1540[iParam0] = 0;
			unk_0x460D2A8B2C7DC7D4(Local_116.f_1595[iParam0]);
		}
		else if (!Local_116.f_1540[iParam0])
		{
			unk_0x8FC511FC963C67E5(Local_116.f_1595[iParam0], 0);
			Local_116.f_1540[iParam0] = 1;
		}
	}
	Local_116.f_1590[iParam0] = unk_0x643DC062EE904FCA(Local_116.f_1580[iParam0]);
	switch (Local_116.f_1515[iParam0])
	{
		case 0:
			func_61(1, iParam0);
			break;
		
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_125[iVar2 /*8*/] != 0 || Local_125[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_60(&(Local_116.f_1[iParam0 /*211*/]));
				func_61(2, iParam0);
			}
			break;
		
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!BitTest(Local_125[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]))) && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
				{
					Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_58(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
					func_48(4, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_61(3, iParam0);
			}
			break;
		
		case 3:
			bVar1 = true;
			if ((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]))) && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
			{
				if ((Local_116.f_1590[iParam0] != -1 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_58(iParam0), 3)) && ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869)))
				{
					Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
				}
			}
			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
				{
					if (Local_116.f_1590[iParam0] != -1)
					{
						if (Local_116.f_1570[iParam0] == 1)
						{
							if (((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_47(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							}
						}
						else if (((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 0), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 1), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 2), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 3), 3))
						{
							Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_46(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
						}
						else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
						{
							if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_69(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							}
						}
						else if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
						{
							Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
						}
					}
				}
				else
				{
					unk_0x460D2A8B2C7DC7D4(Local_116.f_1595[iParam0]);
				}
			}
			if (!func_67(&(Local_116.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (BitTest(Local_125[iVar2 /*8*/], 15))
						{
							func_68(&(Local_116.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_116.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!BitTest(Local_125[iVar2 /*8*/], 15) && !BitTest(Local_125[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						func_64(&(Local_116.f_1642[iParam0 /*2*/]));
						func_48(16, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1);
						func_61(4, iParam0);
					}
					else if (func_66(&(Local_116.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_45(iParam0, 22))
						{
							if (func_48(14, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_44(iParam0, 22);
							}
						}
					}
				}
				else
				{
					func_64(&(Local_116.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_37(iParam0);
			break;
		
		case 5:
			if (func_36(Local_116.f_846[iParam0 /*13*/][1]) == 10 || func_36(Local_116.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
				{
					if (func_35(&(Local_116.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_34(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
							}
							else if (((Local_116.f_1590[iParam0] == -1 || unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
							{
								unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_30(iParam0);
								func_61(9, iParam0);
							}
							else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
							{
								Local_116.f_1525[iParam0] = 1;
							}
						}
					}
					else if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
					{
						if (!BitTest(Local_116.f_1555[iParam0], 12))
						{
							Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_29(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
						}
						else if (((Local_116.f_1590[iParam0] == -1 || unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
						{
							unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
							func_64(&(Local_116.f_1633[iParam0 /*2*/]));
							Local_116.f_1535[iParam0] = 0;
							func_61(6, iParam0);
						}
					}
				}
				else
				{
					func_64(&(Local_116.f_1633[iParam0 /*2*/]));
					Local_116.f_1535[iParam0] = 0;
					func_61(6, iParam0);
				}
			}
			else
			{
				func_64(&(Local_116.f_1633[iParam0 /*2*/]));
				Local_116.f_1535[iParam0] = 0;
				func_61(6, iParam0);
			}
			break;
		
		case 6:
			iVar3 = (iParam0 * 4 + Local_116.f_1575[iParam0]);
			bVar4 = Local_116.f_1600[iVar3];
			if (Local_116.f_1575[iParam0] < 4)
			{
				if ((bVar4 != func_429() && BitTest(Local_125[bVar4 /*8*/], 15)) && !((!BitTest(Local_125[bVar4 /*8*/], 14) && func_28(&(Local_116.f_899[bVar4 /*9*/])) == 21) && Local_116.f_899[bVar4 /*9*/].f_8 == 2))
				{
					if ((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]))) && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
					{
						if (!BitTest(Local_116.f_1555[iParam0], (0 + Local_116.f_1575[iParam0] * 3)))
						{
							if (((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_27(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), (0 + Local_116.f_1575[iParam0] * 3));
							}
						}
						else if (!BitTest(Local_116.f_1555[iParam0], (1 + Local_116.f_1575[iParam0] * 3)))
						{
							if ((Local_116.f_1590[iParam0] != -1 && ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))) && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_27(iParam0, Local_116.f_1575[iParam0], bVar4), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
							}
						}
						if (BitTest(Local_125[bVar4 /*8*/], 14) && (BitTest(Local_125[bVar4 /*8*/], 13) || BitTest(Local_125[bVar4 /*8*/], 11)))
						{
							if (((((((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 0, 1), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 1, 1), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 2, 1), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 3, 1), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 0, 0), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 1, 0), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 2, 0), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_25(iParam0, 3, 0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_24(iParam0);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
							}
						}
						if (((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 0, bVar4, 0), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 1, bVar4, 0), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 2, bVar4, 0), 3)) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_26(iParam0, 3, bVar4, 0), 3))
						{
							if (!func_67(&(Local_116.f_1633[iParam0 /*2*/])))
							{
								func_68(&(Local_116.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (func_66(&(Local_116.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							}
						}
						else
						{
							func_64(&(Local_116.f_1633[iParam0 /*2*/]));
						}
					}
					if (BitTest(Local_116.f_1555[iParam0], (1 + Local_116.f_1575[iParam0] * 3)))
					{
						if ((BitTest(Local_125[bVar4 /*8*/], 14) && !BitTest(Local_125[bVar4 /*8*/], 13)) && !(BitTest(Local_125[bVar4 /*8*/], 11) && Local_116.f_1188[bVar4 /*9*/].f_8 > 2))
						{
							if (!BitTest(Local_116.f_1565[iParam0], bVar4))
							{
								if (!BitTest(Local_116.f_1555[iParam0], 12))
								{
									if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
									{
										if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
										{
											Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_23(iParam0, Local_116.f_1575[iParam0]), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
											Local_116.f_1535[iParam0] = 0;
											func_15(func_22(iParam0, 0, Local_116.f_1575[iParam0], 1), Local_116.f_899[bVar4 /*9*/][1], 0, 0);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
									if ((fVar7 >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
									{
										if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
										{
											if (Local_116.f_899[bVar4 /*9*/].f_8 == 1)
											{
												Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
												Local_116.f_1535[iParam0] = 1;
												func_15(func_22(iParam0, Local_116.f_899[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_116.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1148846080, 0);
												unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
												func_15(func_22(iParam0, Local_116.f_1188[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
												unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1565[iParam0]), bVar4);
												unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
												unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
												if (Local_116.f_899[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_899[bVar4 /*9*/][1] = uVar0;
													Local_116.f_899[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_116.f_1188[bVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_1188[bVar4 /*9*/][1] = uVar0;
													Local_116.f_1188[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 3))
									{
										if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
										{
											Local_116.f_1535[iParam0] = 1;
											if (Local_116.f_1188[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_1188[bVar4 /*9*/][1] = uVar0;
												Local_116.f_1188[bVar4 /*9*/].f_8++;
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 3))
									{
										if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
										{
											if (Local_116.f_899[bVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_899[bVar4 /*9*/][1] = uVar0;
												Local_116.f_899[bVar4 /*9*/].f_8++;
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_23(iParam0, Local_116.f_1575[iParam0]), 3))
									{
										if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), -1345695206))
										{
											if (Local_116.f_899[bVar4 /*9*/].f_8 == 2)
											{
												Local_116.f_0 = Local_116.f_899[bVar4 /*9*/][1];
												Local_116.f_899[bVar4 /*9*/][1] = 0;
												Local_116.f_899[bVar4 /*9*/].f_8 = 1;
											}
										}
										else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
										{
											if (Local_116.f_1188[bVar4 /*9*/].f_8 == 0)
											{
												Local_116.f_1188[bVar4 /*9*/][0] = Local_116.f_0;
												Local_116.f_1188[bVar4 /*9*/].f_8 = 1;
												Local_116.f_899[bVar4 /*9*/][1] = 0;
												Local_116.f_899[bVar4 /*9*/].f_8 = 1;
												unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
											}
											Local_116.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!BitTest(Local_125[bVar4 /*8*/], 11))
							{
								if ((((func_28(&(Local_116.f_1188[bVar4 /*9*/])) < 21 && !BitTest(Local_125[bVar4 /*8*/], 13)) && Local_116.f_1188[bVar4 /*9*/].f_8 <= 6) && Local_116.f_1188[bVar4 /*9*/].f_8 > 0) || BitTest(Local_116.f_1555[iParam0], 12))
								{
									if ((((((BitTest(Local_125[bVar4 /*8*/], 5) && Local_116.f_1188[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_125[bVar4 /*8*/], 6) && Local_116.f_1188[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_125[bVar4 /*8*/], 7) && Local_116.f_1188[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_125[bVar4 /*8*/], 8) && Local_116.f_1188[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_125[bVar4 /*8*/], 9) && Local_116.f_1188[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_116.f_1555[iParam0], 12))
									{
										if (!BitTest(Local_116.f_1555[iParam0], 12))
										{
											if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
											{
												if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
												{
													Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
													unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
													unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
													func_15(func_22(iParam0, Local_116.f_1188[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
													unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
										{
											fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
											if ((fVar7 >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
											{
												if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
												{
													Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
													unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
													unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1565[iParam0]), bVar4);
													if (!BitTest(Local_116.f_1555[iParam0], 19))
													{
														func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
														Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
														Local_116.f_1188[bVar4 /*9*/].f_8++;
														func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
														unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
													}
													unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
													unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
												}
											}
											else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
											{
												if (!BitTest(Local_116.f_1555[iParam0], 19))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
													Local_116.f_1188[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
													unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_45(iParam0, 20))
									{
										if (func_48(2, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_44(iParam0, 20);
										}
									}
									else if (func_66(&(Local_116.f_1642[Local_125[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_45(iParam0, 21))
										{
											if (func_48(15, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_44(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_116.f_1188[bVar4 /*9*/].f_8 == 2 || BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (!BitTest(Local_116.f_1555[iParam0], 12))
								{
									if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
									{
										if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
										{
											Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
											func_15(func_22(iParam0, Local_116.f_1188[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 1);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
									if ((fVar7 >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
									{
										if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
										{
											Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1565[iParam0]), bVar4);
											if (!BitTest(Local_116.f_1555[iParam0], 19))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
												Local_116.f_1188[bVar4 /*9*/].f_8++;
												unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
											}
											unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
											unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
										}
									}
									else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
									{
										if (!BitTest(Local_116.f_1555[iParam0], 19))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_1188[bVar4 /*9*/][Local_116.f_1188[bVar4 /*9*/].f_8] = uVar0;
											Local_116.f_1188[bVar4 /*9*/].f_8++;
											unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
											func_24(iParam0);
											func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_1188[bVar4 /*9*/])), Local_116.f_1188[bVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!BitTest(Local_125[bVar4 /*8*/], 10))
						{
							if ((((func_28(&(Local_116.f_899[bVar4 /*9*/])) < 21 && !BitTest(Local_125[bVar4 /*8*/], 12)) && Local_116.f_899[bVar4 /*9*/].f_8 <= 6) && Local_116.f_899[bVar4 /*9*/].f_8 > 0) || BitTest(Local_116.f_1555[iParam0], 12))
							{
								if ((((((BitTest(Local_125[bVar4 /*8*/], 0) && Local_116.f_899[bVar4 /*9*/].f_8 == 2) || (BitTest(Local_125[bVar4 /*8*/], 1) && Local_116.f_899[bVar4 /*9*/].f_8 == 3)) || (BitTest(Local_125[bVar4 /*8*/], 2) && Local_116.f_899[bVar4 /*9*/].f_8 == 4)) || (BitTest(Local_125[bVar4 /*8*/], 3) && Local_116.f_899[bVar4 /*9*/].f_8 == 5)) || (BitTest(Local_125[bVar4 /*8*/], 4) && Local_116.f_899[bVar4 /*9*/].f_8 == 6)) || BitTest(Local_116.f_1555[iParam0], 12))
								{
									if (!BitTest(Local_116.f_1555[iParam0], 12))
									{
										if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
										{
											if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
											{
												Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
												unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
												func_15(func_22(iParam0, Local_116.f_899[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
												unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
									{
										fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
										if ((fVar7 >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
										{
											if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
											{
												if (((!BitTest(Local_125[bVar4 /*8*/], 10) && func_28(&(Local_116.f_899[bVar4 /*9*/])) < 21) && !BitTest(Local_125[bVar4 /*8*/], 12)) && Local_116.f_899[bVar4 /*9*/].f_8 <= 6)
												{
													Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
													unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_26(iParam0, Local_116.f_1575[iParam0], bVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
												}
												unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1565[iParam0]), bVar4);
												if (!BitTest(Local_116.f_1555[iParam0], 19))
												{
													func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
													Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
													Local_116.f_899[bVar4 /*9*/].f_8++;
													func_24(iParam0);
													func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
													unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
												}
												unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
												unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
											}
										}
										else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
										{
											if (!BitTest(Local_116.f_1555[iParam0], 19))
											{
												func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
												Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
												Local_116.f_899[bVar4 /*9*/].f_8++;
												func_24(iParam0);
												func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
												unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_45(iParam0, 20))
								{
									if (func_48(2, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_44(iParam0, 20);
									}
								}
								else if (func_66(&(Local_116.f_1642[Local_125[bVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_45(iParam0, 21))
									{
										if (func_48(15, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_44(iParam0, 21);
										}
									}
								}
							}
							else if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_12(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
									func_24(iParam0);
									Local_116.f_1575[iParam0]++;
									Local_116.f_1535[iParam0] = 0;
									func_64(&(Local_116.f_1633[iParam0 /*2*/]));
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
								if ((fVar7 >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_12(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
									func_24(iParam0);
									Local_116.f_1575[iParam0]++;
									Local_116.f_1535[iParam0] = 0;
									func_64(&(Local_116.f_1633[iParam0 /*2*/]));
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_116.f_899[bVar4 /*9*/].f_8 == 2 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
								{
									if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
									{
										Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_14(iParam0, Local_116.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
										func_15(func_22(iParam0, Local_116.f_899[bVar4 /*9*/].f_8, Local_116.f_1575[iParam0], 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 1);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
								if ((fVar7 >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
									{
										Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_12(iParam0, Local_116.f_1575[iParam0], bVar4), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
										if (!BitTest(Local_116.f_1555[iParam0], 19))
										{
											func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
											Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
											Local_116.f_899[bVar4 /*9*/].f_8++;
											func_24(iParam0);
											func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
										}
										unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
										unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
										func_24(iParam0);
										Local_116.f_1575[iParam0]++;
										Local_116.f_1535[iParam0] = 0;
										func_64(&(Local_116.f_1633[iParam0 /*2*/]));
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (!BitTest(Local_116.f_1555[iParam0], 19))
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[bVar4 /*9*/][Local_116.f_899[bVar4 /*9*/].f_8] = uVar0;
										Local_116.f_899[bVar4 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[bVar4 /*9*/])), Local_116.f_899[bVar4 /*9*/].f_8, 0, -1);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), (0 + Local_116.f_1575[iParam0] * 3));
					unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), (1 + Local_116.f_1575[iParam0] * 3));
					unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), (2 + Local_116.f_1575[iParam0] * 3));
					func_24(iParam0);
					Local_116.f_1575[iParam0]++;
					Local_116.f_1535[iParam0] = 0;
					func_64(&(Local_116.f_1633[iParam0 /*2*/]));
					unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
					unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
				}
			}
			if (Local_116.f_1575[iParam0] >= 4)
			{
				if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
				{
					if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
					{
						if (Local_116.f_1590[iParam0] != -1 && ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869)))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
								func_61(7, iParam0);
							}
						}
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
						func_61(7, iParam0);
					}
				}
				else
				{
					unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
					func_61(7, iParam0);
				}
			}
			break;
		
		case 7:
			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
			{
				if (!BitTest(Local_116.f_1555[iParam0], 12))
				{
					if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
					{
						Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_11(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
					}
				}
				else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
				{
					if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
					{
						unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
						unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
						func_24(iParam0);
						func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_61(8, iParam0);
					}
					else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
					{
						Local_116.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
				unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
				func_24(iParam0);
				func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_61(8, iParam0);
			}
			break;
		
		case 8:
			Local_116.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				bVar4 = Local_116.f_1600[iVar3];
				if (bVar4 != func_429())
				{
					if (((((func_28(&(Local_116.f_899[bVar4 /*9*/])) == 21 && Local_116.f_899[bVar4 /*9*/].f_8 > 2) && Local_116.f_899[bVar4 /*9*/].f_8 < 7) || ((func_28(&(Local_116.f_1188[bVar4 /*9*/])) == 21 && Local_116.f_1188[bVar4 /*9*/].f_8 > 2) && Local_116.f_1188[bVar4 /*9*/].f_8 < 7)) || ((func_28(&(Local_116.f_899[bVar4 /*9*/])) < 21 && Local_116.f_899[bVar4 /*9*/].f_8 >= 2) && Local_116.f_899[bVar4 /*9*/].f_8 < 7)) || ((func_28(&(Local_116.f_1188[bVar4 /*9*/])) < 21 && Local_116.f_1188[bVar4 /*9*/].f_8 >= 2) && Local_116.f_1188[bVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_35(&(Local_116.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || BitTest(Local_116.f_1555[iParam0], 12))
			{
				if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
				{
					if (!BitTest(Local_116.f_1555[iParam0], 12))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_10(iParam0, Local_116.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_116.f_846[iParam0 /*13*/].f_12), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 1, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
						}
					}
					else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
					{
						fVar7 = unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]);
						if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 19))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][Local_116.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
							}
							unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
							unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 19);
						}
						else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 19))
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][Local_116.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 0), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_30(iParam0);
				func_61(9, iParam0);
			}
			break;
		
		case 9:
			Var10 = 11;
			Var11 = 7;
			func_30(iParam0);
			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
			{
				if (!BitTest(Local_116.f_1555[iParam0], 13))
				{
					if (!BitTest(Local_116.f_1555[iParam0], 12))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_116.f_1590[iParam0] != -1 && ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))) && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
					{
						unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 13);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 14);
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 14);
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 14);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 15);
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 15);
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 15);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 16);
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 16);
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 16);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					bVar4 = Local_116.f_1600[iVar3];
					if (bVar4 != func_429() && bVar4 > -1)
					{
						if (Local_116.f_899[bVar4 /*9*/].f_8 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (!BitTest(Local_116.f_1555[iParam0], 12))
							{
								if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
								}
							}
							else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 17);
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), -1345695206))
								{
									Local_116.f_899[bVar4 /*9*/] = { Var11 };
									Local_116.f_1188[bVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 17);
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 17);
					}
				}
				else if (!BitTest(Local_116.f_1555[iParam0], 18))
				{
					if (Local_116.f_846[iParam0 /*13*/].f_12 > 0 || BitTest(Local_116.f_1555[iParam0], 12))
					{
						if (!BitTest(Local_116.f_1555[iParam0], 12))
						{
							if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 12);
							}
						}
						else if (Local_116.f_1590[iParam0] != -1 && unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
							{
								if (Local_116.f_1570[iParam0] == 1)
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_47(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								}
								else
								{
									Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								}
								unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 12);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 18);
								Local_116.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), -1345695206))
							{
								Local_116.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), 18);
					}
				}
				else if (!func_67(&(Local_116.f_1642[iParam0 /*2*/])))
				{
					func_68(&(Local_116.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (func_66(&(Local_116.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_116.f_1525[iParam0] = 0;
					Local_116.f_1575[iParam0] = 0;
					Local_116.f_1555[iParam0] = 0;
					Local_116.f_1565[iParam0] = 0;
					func_64(&(Local_116.f_1633[iParam0 /*2*/]));
					func_64(&(Local_116.f_1642[iParam0 /*2*/]));
					Local_116.f_1560[iParam0]++;
					func_61(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_28(&(Local_116.f_846[iParam0 /*13*/]));
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
		{
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else if (iVar0 == 21)
		{
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0xC5935DFB3F39785A(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 21)
	{
		switch (unk_0xC5935DFB3F39785A(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else if (iVar0 == 21)
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 8)
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, bool bParam2)
{
	if (((bParam2 != func_429() && BitTest(Local_125[bParam2 /*8*/], 14)) && !BitTest(Local_125[bParam2 /*8*/], 13)) && !(BitTest(Local_125[bParam2 /*8*/], 11) && Local_116.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			
			case 1:
				return "dealer_focus_player_02_idle_outro";
			
			case 2:
				return "dealer_focus_player_03_idle_outro";
			
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				
				case 1:
					return "female_hit_second_card_player_02";
				
				case 2:
					return "female_hit_second_card_player_03";
				
				case 3:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				
				case 1:
					return "female_hit_card_player_02";
				
				case 2:
					return "female_hit_card_player_03";
				
				case 3:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			
			case 1:
				return "hit_second_card_player_02";
			
			case 2:
				return "hit_second_card_player_03";
			
			case 3:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			
			case 1:
				return "hit_card_player_02";
			
			case 2:
				return "hit_card_player_03";
			
			case 3:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<7> Var0;
	
	Var0.f_0 = -725328141;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam2;
	Var0.f_6 = iParam3;
	unk_0x71A6F836422FDD2B(1, &Var0, 7, func_16(1, 1), Var0.f_0);
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = unk_0xB23E0F9B63D009A8(bVar1);
		if (func_21(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x259BE71D8A81D4FA() || iParam0)
			{
				if (bParam1)
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
				else if (!func_17(iVar2, 0))
				{
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			bVar0 = unk_0x1864096A95E36EBA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1575063[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1574926;
}

int func_20(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x762604C40829DB72(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x75EAB09F5E974116(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_126.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_23(int iParam0, int iParam1)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			
			case 1:
				return "female_split_card_player_02";
			
			case 2:
				return "female_split_card_player_03";
			
			case 3:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			
			case 1:
				return "split_card_player_02";
			
			case 2:
				return "split_card_player_03";
			
			case 3:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_24(int iParam0)
{
	unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 20);
	unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 21);
	unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 22);
	unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 23);
	unk_0x8744D2E3FC95740E(&(Local_116.f_1555[iParam0]), 24);
}

char* func_25(int iParam0, int iParam1, bool bParam2)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			
			case 1:
				return "dealer_focus_player_02_idle_split";
			
			case 2:
				return "dealer_focus_player_03_idle_split";
			
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (((bParam2 != func_429() && BitTest(Local_125[bParam2 /*8*/], 14)) && !BitTest(Local_125[bParam2 /*8*/], 13)) && !(BitTest(Local_125[bParam2 /*8*/], 11) && Local_116.f_1188[bParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				
				case 1:
					return "dealer_focus_player_02_idle_split";
				
				case 2:
					return "dealer_focus_player_03_idle_split";
				
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				
				case 1:
					return "female_dealer_focus_player_02_idle";
				
				case 2:
					return "female_dealer_focus_player_03_idle";
				
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			
			case 1:
				return "dealer_focus_player_02_idle";
			
			case 2:
				return "dealer_focus_player_03_idle";
			
			case 3:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_27(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_429() && BitTest(Local_125[iParam2 /*8*/], 14)) && !BitTest(Local_125[iParam2 /*8*/], 13)) && !(BitTest(Local_125[iParam2 /*8*/], 11) && Local_116.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_116.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			
			case 1:
				return "dealer_focus_player_02_idle_intro";
			
			case 2:
				return "dealer_focus_player_03_idle_intro";
			
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_28(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_36((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_29(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_30(int iParam0)
{
	if (func_45(iParam0, 23))
	{
		return;
	}
	if (func_45(iParam0, 24))
	{
		if (func_48(13, &(Local_116.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_44(iParam0, 23);
		}
		return;
	}
	if (func_31(iParam0))
	{
		func_44(iParam0, 24);
	}
	else
	{
		func_44(iParam0, 23);
	}
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_116.f_1600[iVar1];
		if (iVar2 == func_429())
		{
		}
		else if (!func_32(&iVar2, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_35(&(Local_116.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_116.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_28(&(Local_116.f_899[iVar0 /*9*/]));
	iVar4 = Local_116.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_28(&(Local_116.f_1188[iVar0 /*9*/]));
	iVar6 = Local_116.f_1188[iVar0 /*9*/].f_8;
	if (func_33(iVar1, iVar2, iVar3, iVar4) && func_33(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_34(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_36((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		
		default:
	}
	return 0;
}

void func_37(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_116.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_116.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_43(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_43(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 0, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(1, iParam0);
			}
			break;
		
		case 1:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_41(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_41(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 1, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(2, iParam0);
			}
			break;
		
		case 2:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_40(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 2, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(3, iParam0);
			}
			break;
		
		case 3:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_39(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 3, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][0] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][0] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(4, iParam0);
			}
			break;
		
		case 4:
			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
				{
					if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_38(iParam0), 3))
					{
						Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_116.f_1590[iParam0] != -1)
					{
						if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
						{
							bVar1 = true;
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][0] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
							}
						}
						else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
						{
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][0] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_116.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_846[iParam0 /*13*/][0] = uVar0;
							Local_116.f_846[iParam0 /*13*/].f_12++;
							func_24(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(5, iParam0);
			}
			break;
		
		case 5:
			iVar2 = Local_116.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_43(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_43(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 0, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(6, iParam0);
			}
			break;
		
		case 6:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_41(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_41(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 1, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(7, iParam0);
			}
			break;
		
		case 7:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_40(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 2, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(8, iParam0);
			}
			break;
		
		case 8:
			iVar2 = Local_116.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_125[iVar2 /*8*/].f_4 == iParam0 && BitTest(Local_125[iVar2 /*8*/], 15))
				{
					if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
					{
						if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_39(iParam0), 3))
							{
								Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
								func_15(func_22(iParam0, Local_116.f_899[iVar2 /*9*/].f_8, 3, 0), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_116.f_1590[iParam0] != -1)
							{
								if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
								{
									if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
										Local_116.f_899[iVar2 /*9*/][1] = uVar0;
										Local_116.f_899[iVar2 /*9*/].f_8++;
										func_24(iParam0);
										func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_116.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
									Local_116.f_899[iVar2 /*9*/][1] = uVar0;
									Local_116.f_899[iVar2 /*9*/].f_8++;
									func_24(iParam0);
									func_48(3, &(Local_116.f_1595[iParam0]), func_28(&(Local_116.f_899[iVar2 /*9*/])), Local_116.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_42(9, iParam0);
			}
			break;
		
		case 9:
			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
			{
				if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
				{
					if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_59(), func_10(iParam0, 0), 3))
					{
						Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_59(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_116.f_1[iParam0 /*211*/][Local_116.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_116.f_1590[iParam0] != -1)
					{
						if ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869))
						{
							Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][1] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 585557868))
						{
							if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
								Local_116.f_846[iParam0 /*13*/][1] = uVar0;
								Local_116.f_846[iParam0 /*13*/].f_12++;
								func_24(iParam0);
								func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
						bVar1 = true;
						if (Local_116.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_116.f_1[iParam0 /*211*/]), &uVar0);
							Local_116.f_846[iParam0 /*13*/][1] = uVar0;
							Local_116.f_846[iParam0 /*13*/].f_12++;
							func_24(iParam0);
							func_48(3, &(Local_116.f_1595[iParam0]), func_35(&(Local_116.f_846[iParam0 /*13*/]), 1), Local_116.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_42(0, iParam0);
				func_61(5, iParam0);
			}
			break;
	}
}

char* func_38(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_39(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_40(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_41(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_42(int iParam0, int iParam1)
{
	Local_116.f_1510[iParam1] = iParam0;
}

char* func_43(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1 < 0 || bParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1555[iParam0]), bParam1);
}

int func_45(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return BitTest(Local_116.f_1555[iParam0], iParam1);
}

char* func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_47(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_116.f_1600[(iParam0 * 4 + iVar2)] != func_429())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_47(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_429())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

int func_48(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	var uVar1;
	var uVar2;
	
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_50(iParam0, iParam2, iParam5), 64);
	if (unk_0xD6F9DEE4765092A9(&cVar0))
	{
		return 0;
	}
	uVar1 = unk_0xC35A3A4C05A4831B(*uParam1);
	if (unk_0x1C2F771CDC87A3A5(uVar1, 0))
	{
		return 0;
	}
	if (!unk_0x93BF17E19A9F0E9B(*uParam1))
	{
		return 0;
	}
	if (!unk_0x1B1A446EFA398EB5(uVar1))
	{
		return 0;
	}
	if (unk_0x912159A05BE6B52E(uVar1))
	{
		return 0;
	}
	uVar2 = func_49(7);
	unk_0x04C016145CE6A18B(uVar1, &cVar0, uVar2, 1);
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_50(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 3:
			return func_57(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 6:
			return func_51(uParam2);
		
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		
		case 13:
			return "MINIGAME_DEALER_WINS";
		
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF0C9E5565CB32F4B(uParam0);
	if (!unk_0x7206AEB20960CCC8(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x4470BE79F5771783(iVar0);
	if (!func_21(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x56E414973C2A8C0E(iVar1);
	if (func_55(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_53(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_52(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_52(int iParam0)
{
	if (unk_0x4B423FAA24E8ABF0(unk_0x56E414973C2A8C0E(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_125[*iParam0 /*8*/].f_4;
	return func_54(iVar0, Local_126.f_257);
}

int func_54(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_56(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_45036[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_57(int iParam0)
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_58(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_59()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_60(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = unk_0x4AFA59A11CC00538(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_61(int iParam0, int iParam1)
{
	Local_116.f_1515[iParam1] = iParam0;
}

void func_62(int iParam0)
{
	struct<13> Var0;
	
	Local_116.f_1530[iParam0] = 1;
	if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0])))
	{
		if (!unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), func_73(), func_72(iParam0), 3))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iParam0]))
			{
				Local_116.f_1590[iParam0] = unk_0x643DC062EE904FCA(Local_116.f_1580[iParam0]);
				if (Local_116.f_1590[iParam0] == -1 || ((unk_0xBD3B265153D3BA2D(Local_116.f_1590[iParam0]) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), joaat("blend_out"))) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), 2116425869)))
				{
					Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
				}
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_116.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_116.f_1555[iParam0] = 0;
	Local_116.f_1565[iParam0] = 0;
	func_64(&(Local_116.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_116.f_846[iParam0 /*13*/] = { Var0 };
	Local_116.f_1525[iParam0] = 0;
	Local_116.f_1575[iParam0] = 0;
	func_64(&(Local_116.f_1642[iParam0 /*2*/]));
	func_74(1, iParam0);
	func_61(0, iParam0);
	func_42(0, iParam0);
	Local_116.f_1560[iParam0]++;
	Local_116.f_1530[iParam0] = 0;
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_429() && Local_116.f_899[Local_116.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_116.f_1600[(iParam0 * 4 + iVar1)] != func_429())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_116.f_1570[iParam0] != iVar0)
	{
		Local_116.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_65(int iParam0, int iParam1)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_66(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_68(uParam0, bParam2, 0);
	if (unk_0x76CD105BCAC6EB9F() && !bParam2)
	{
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_67(var uParam0)
{
	return uParam0->f_1;
}

void func_68(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x76CD105BCAC6EB9F() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7E3F74F641EE6B27();
			}
			else
			{
				*uParam0 = unk_0x0728E77B2BF91D54();
			}
		}
		else
		{
			*uParam0 = unk_0x1DD05E817C89C737();
		}
		uParam0->f_1 = 1;
	}
}

char* func_69(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_70(int iParam0)
{
	if (Local_126.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134,69f;
			
			case 1:
				return 45,31f;
			
			case 2:
				return 135,31f;
			
			case 3:
				return 135,31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_71(int iParam0)
{
	if (Local_126.f_257 == 1)
	{
		return 967,33f, 32,0191f, 115,1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148,837f, 269,747f, -52,8409f;
			
			case 1:
				return 1151,84f, 266,747f, -52,8409f;
			
			case 2:
				return 1129,406f, 262,3578f, -52,041f;
			
			case 3:
				return 1144,429f, 247,3352f, -52,041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_72(int iParam0)
{
	if (Local_116.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_73()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_74(int iParam0, int iParam1)
{
	Local_116.f_1520[iParam1] = iParam0;
}

void func_75(var uParam0)
{
	var uVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = 208;
	iVar3 = 0;
	while (iVar3 < 208)
	{
		iVar1 = unk_0x4AFA59A11CC00538(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 208)
		{
			iVar6 = (iVar4 / 32);
			bVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !BitTest(uVar0[iVar6], bVar7))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(uVar0[iVar6]), bVar7);
				while (iVar4 + 1 > 52)
				{
					iVar4 = (iVar4 - 52);
				}
				(*uParam0)[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!BitTest(uVar0[iVar6], bVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_210 = 208;
}

void func_76()
{
	int iVar0;
	
	if (!func_81(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = iLocal_160;
		if (Global_2708677 != iVar0 && (Global_2708677 != -1 || func_435(unk_0x259BE71D8A81D4FA())))
		{
			if (!unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar0]))
			{
				func_78(iVar0);
			}
		}
		else if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar0]))
		{
			if (unk_0xEADBDBE0422CF7E6(Local_116.f_1595[iVar0]))
			{
				func_77(&(Local_116.f_1595[iVar0]));
			}
			else
			{
				unk_0x460D2A8B2C7DC7D4(Local_116.f_1595[iVar0]);
			}
		}
	}
	iLocal_160++;
	if (iLocal_160 >= Local_126.f_257)
	{
		iLocal_160 = 0;
	}
}

void func_77(var uParam0)
{
	var uVar0;
	
	if (unk_0x2FC2FDC413532977(*uParam0))
	{
		if (!unk_0xEADBDBE0422CF7E6(*uParam0))
		{
		}
	}
	if (unk_0x93BF17E19A9F0E9B(*uParam0))
	{
		uVar0 = unk_0xF5014688C9788D5F(*uParam0);
		unk_0x81A7F3CD719DD53B(&uVar0);
	}
}

void func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("s_m_y_casino_01");
	if (Local_116.f_1550[iParam0] >= 7)
	{
		iVar0 = joaat("s_f_y_casino_01");
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	if (!unk_0x6252BC0DD8A320DB(iVar0))
	{
		return;
	}
	unk_0x80813AC549A1E8AE(func_73());
	if (!unk_0xE100DD4F82A51BDE(func_73()))
	{
		return;
	}
	if (!unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iParam0]))
	{
		if (unk_0xADCE9BCAFCB83364(1))
		{
			iVar1 = unk_0xB1DBFEB95C0EFB88(26, iVar0, func_71(iParam0), func_70(iParam0), 1, 1);
			unk_0x55098D9E9AD58806(iVar0);
			unk_0x999C62072AF920FD(iVar1, 0);
			unk_0x4BD214FCF7332FF6(iVar1, 0);
			unk_0xAAA71DD7E9059338(iVar1, 1);
			unk_0x0FB8E752BCC547A9(iVar1, 249, 1);
			unk_0x0428AFDCAA63B06E(iVar1, 185, 1);
			unk_0x0428AFDCAA63B06E(iVar1, 108, 1);
			unk_0x32C336953C18A3CE(iVar1, 1);
			unk_0x8FEAF7F0538CEF55(iVar1, 1);
			unk_0x84D421ACEBF9E529(iVar1, 0);
			unk_0x00941975834A0817(iVar1, 1);
			unk_0x81E9E7612B0E4BCE(iVar1, 0);
			unk_0x0428AFDCAA63B06E(iVar1, 208, 1);
			unk_0x9FF00EA9A61211D2(iVar1, 0);
			func_80(Local_116.f_1550[iParam0], &iVar1);
			func_79(Local_116.f_1550[iParam0], &iVar1);
			unk_0x62C438C53BB57AFD(iVar1, func_71(iParam0), 0, 0, 1);
			unk_0x5C96CEA06531AB03(iVar1, func_70(iParam0));
			Local_116.f_1595[iParam0] = unk_0x9F7A52B1537567AC(iVar1);
			unk_0x8FC511FC963C67E5(Local_116.f_1595[iParam0], 0);
			Local_116.f_1540[iParam0] = 1;
			Local_116.f_1580[iParam0] = unk_0xBC5D9A293974F095(func_71(iParam0), 0f, 0f, func_70(iParam0), 2, 0, 1, 1065353216, 0, 1065353216);
			unk_0x0B94AB707B44E754(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iParam0]), Local_116.f_1580[iParam0], func_73(), func_72(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
			unk_0xE7101255AD6F1952(Local_116.f_1580[iParam0]);
			unk_0x268BE77F77533D03(func_59());
		}
	}
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			unk_0x996F4A3208DAD314(*iParam1, unk_0x70E57E9927B6BA58("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 2, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 2, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 2, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 3, 3, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 0, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(*iParam1, 1, 0, 0, 0, 1);
			break;
		
		case 12:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 3, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 3, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 1, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			unk_0x77EFA99E6A8FFC43(*iParam1);
			unk_0xD1C578C204015E1F(*iParam1, 0, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 1, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 2, 4, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 3, 2, 1, 0);
			unk_0xD1C578C204015E1F(*iParam1, 4, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 6, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 7, 1, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 8, 2, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 10, 0, 0, 0);
			unk_0xD1C578C204015E1F(*iParam1, 11, 0, 0, 0);
			unk_0x7F08C4791E6D6969(*iParam1, 1, 0, 0, 0, 1);
			break;
	}
}

int func_81(int iParam0)
{
	if (iParam0 != func_429() && func_21(iParam0, 1, 1))
	{
		if (func_82(iParam0) && !func_434(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_429() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 3);
	}
	return 0;
}

void func_83()
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	
	Var0 = 7;
	bVar1 = false;
	iVar2 = iLocal_159;
	if (Local_125[iVar2 /*8*/].f_4 == -1)
	{
		Local_116.f_899[iVar2 /*9*/] = { Var0 };
		Local_116.f_1188[iVar2 /*9*/] = { Var0 };
	}
	if (Local_125[iVar2 /*8*/].f_6 == 0)
	{
		if (Local_116.f_1477[iVar2] != 0)
		{
			Local_116.f_1477[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_84(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_159++;
	if (iLocal_159 >= 32)
	{
		iLocal_159 = 0;
	}
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_424())
	{
		return 0;
	}
	iVar0 = unk_0xF0C9E5565CB32F4B(iParam0);
	if (!unk_0x7206AEB20960CCC8(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x4470BE79F5771783(iVar0);
	if (!func_21(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_125[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 1)
	{
		if (func_48(6, &(Local_116.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_85(iParam0, 1);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 2)
	{
		if (func_48(7, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 2);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 4)
	{
		if (func_48(8, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 4);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 5)
	{
		if (func_48(9, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 5);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 6)
	{
		if (func_48(10, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 6);
		}
		return 1;
	}
	if (Local_125[iParam0 /*8*/].f_6 == 7)
	{
		if (func_48(11, &(Local_116.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_85(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Local_116.f_1477[iParam0]), iVar0);
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_158;
	if (Local_116.f_1600[iVar0] != func_429())
	{
		iVar1 = Local_116.f_1600[iVar0];
		if (((!func_21(Local_116.f_1600[iVar0], 1, 1) || Local_125[iVar1 /*8*/].f_3 == -1) || Local_125[iVar1 /*8*/].f_3 != iVar0) || !unk_0xCCD470854FB0E643(Local_116.f_1600[iVar0]))
		{
			Local_116.f_1600[iVar0] = func_429();
			if (Local_116.f_1477[iVar0] != 0)
			{
				Local_116.f_1477[iVar0] = 0;
			}
		}
	}
	if (func_21(iVar0, 1, 1) && unk_0xCCD470854FB0E643(iVar0))
	{
		if (Local_125[iVar0 /*8*/].f_3 > -1 && Local_125[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_116.f_1600[Local_125[iVar0 /*8*/].f_3] == func_429())
			{
				if (func_21(unk_0xB23E0F9B63D009A8(iVar0), 1, 1))
				{
					Local_116.f_1600[Local_125[bVar0 /*8*/].f_3] = unk_0xB23E0F9B63D009A8(bVar0);
				}
			}
		}
	}
	iLocal_158++;
	if (iLocal_158 >= 32)
	{
		iLocal_158 = 0;
	}
}

void func_87()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	struct<3> Var7;
	
	func_421();
	if (!Local_126.f_236)
	{
		if (func_435(unk_0x259BE71D8A81D4FA()) && func_430() != func_429())
		{
			if (BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 4))
			{
				Local_126.f_236 = 1;
				func_420();
				func_419();
				iLocal_153 = 1;
			}
		}
	}
	else if (iLocal_153)
	{
		if (func_418())
		{
			iLocal_153 = 0;
		}
	}
	func_414();
	func_413();
	Local_126.f_248 = func_409();
	func_390();
	if (Local_126.f_1 > 2)
	{
		unk_0x66EFB3D6110055C4(2, 210, 1);
		unk_0x4CC1CF98851922CE(2, 210);
		unk_0x66EFB3D6110055C4(2, 26, 1);
		if (unk_0x61C3701AD6D746B2(2, 210))
		{
		}
		if (func_389(Local_126.f_247) >= 0 && unk_0xED977E2AE2CB16EE(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), func_71(func_389(Local_126.f_247)), 1) > 5f)
		{
			func_383(0);
		}
	}
	if (Local_126.f_1 > 5)
	{
		unk_0x43AE50D2A33F6E2A();
		unk_0x0C9B2F8C2BD128C2();
		unk_0xD10838CEA97E4725(19);
		func_381(1);
		func_380(1, 0);
	}
	if (Local_126.f_1 > 6)
	{
		unk_0x66EFB3D6110055C4(2, 0, 1);
		if (unk_0x61C3701AD6D746B2(2, 0))
		{
			if (unk_0xBCF87EE3DC296C2A(0) == 0)
			{
				unk_0x07938654FF332D78(0, 4);
			}
			else if (unk_0xBCF87EE3DC296C2A(0) == 4)
			{
				unk_0x07938654FF332D78(0, 0);
			}
		}
		unk_0xE71B1E03F658C30C();
	}
	if (Local_126.f_1 > 7)
	{
		func_376(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]));
	}
	if (func_375())
	{
		bLocal_155 = true;
	}
	else if (bLocal_155)
	{
		func_374(&uLocal_156, 0, 0);
		bLocal_155 = false;
	}
	else if (func_67(&uLocal_156) && func_66(&uLocal_156, 500, 0))
	{
		func_64(&uLocal_156);
	}
	switch (Local_126.f_1)
	{
		case 0:
			if (func_369())
			{
				Local_126.f_1582 = "idle_cardgames";
				Local_126.f_252 = 0;
				Local_125[unk_0x259BE71D8A81D4FA() /*8*/] = 0;
				Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 = -1;
				Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 = -1;
				Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5 = 0;
				func_368(unk_0x259BE71D8A81D4FA());
				func_367(1);
			}
			break;
		
		case 1:
			switch (func_389(Local_126.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_126.f_245 = 5000;
					Local_126.f_246 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_126.f_245 = 50000;
					Local_126.f_246 = 1000;
					break;
			}
			if (Local_126.f_257 == 1)
			{
				bVar0 = true;
				Local_126.f_245 = 50000;
				Local_126.f_246 = 1000;
			}
			Local_126.f_244 = Local_126.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26506 && !(Global_262145.f_26508 && !bVar0)) && !(Global_262145.f_26507 && bVar0)) && ((func_366(joaat("rm_GamingFloor_02")) || func_366(joaat("rm_GamingFloor_03"))) || func_435(unk_0x259BE71D8A81D4FA()))) && func_364(unk_0x4A8C381C258A124D(), func_365(Local_126.f_247), 1,5f, 1)) && func_359(unk_0x4A8C381C258A124D(), func_363(Local_126.f_247), 40f)) && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 0) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 0) && !BitTest(Global_1943520.f_4, 2)) && !Global_2635563.f_2981) && Global_2708677 != func_389(Local_126.f_247)) && (Global_2708677 != -1 || func_435(unk_0x259BE71D8A81D4FA()))) && func_358()) && !func_354()) && !unk_0x15CCE8886267624F()) && !unk_0x78ABC1D11B34F324()) && func_351(unk_0x4A8C381C258A124D()) <= 9) && !Global_2635563.f_2981) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !func_350()) && !func_349()) && !func_347()) && !Global_2696212.f_12) && Global_1943513 != 33) && !func_346())
			{
				func_367(2);
			}
			else
			{
				Local_126.f_247++;
				if (Local_126.f_247 >= Local_126.f_257 * 4)
				{
					Local_126.f_247 = 0;
				}
			}
			break;
		
		case 2:
			func_345();
			func_368(unk_0x259BE71D8A81D4FA());
			if (((((((((((((((((((((func_366(joaat("rm_GamingFloor_02")) || func_366(joaat("rm_GamingFloor_03"))) || func_435(unk_0x259BE71D8A81D4FA())) && func_364(unk_0x4A8C381C258A124D(), func_365(Local_126.f_247), 1,5f, 1)) && func_359(unk_0x4A8C381C258A124D(), func_363(Local_126.f_247), 40f)) && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 0) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 0) && Global_2708677 != func_389(Local_126.f_247)) && (Global_2708677 != -1 || func_435(unk_0x259BE71D8A81D4FA()))) && func_358()) && !func_354()) && !unk_0x15CCE8886267624F()) && !unk_0x78ABC1D11B34F324()) && func_351(unk_0x4A8C381C258A124D()) <= 9) && !Global_2635563.f_2981) && !unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) && !func_350()) && !func_349()) && !func_347()) && !Global_2696212.f_12) && Global_1943513 != 33) && !func_346())
			{
				if ((((((func_21(unk_0x259BE71D8A81D4FA(), 1, 1) && unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA())) && !func_344()) && !func_343()) && !unk_0xB11671B812399BA2()) && !bLocal_155) && !func_67(&uLocal_156))
				{
					if (func_342(1, &uVar1))
					{
						if (!func_341("BJACK_NA"))
						{
							func_340("BJACK_NA");
						}
					}
					else if (Local_116.f_1600[Local_126.f_247] != func_429())
					{
						if (!func_341("BJACK_USED"))
						{
							func_340("BJACK_USED");
						}
					}
					else if (func_339())
					{
						if (func_335() == 2)
						{
							if (!func_341("CAS_MG_CTIME"))
							{
								func_340("CAS_MG_CTIME");
							}
						}
						else if (!func_341("CAS_MG_CBAN"))
						{
							func_340("CAS_MG_CBAN");
						}
					}
					else if ((!func_334(unk_0x259BE71D8A81D4FA()) && (func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3)) && !(func_333(1) && func_334(func_332())))
					{
						if (!func_341("CAS_MG_SUITE2"))
						{
							func_340("CAS_MG_SUITE2");
						}
					}
					else if (!func_331() && !(func_333(1) && func_330(func_332())))
					{
						if (!func_328("CAS_MG_MEMB2", func_329(1)))
						{
							func_327("CAS_MG_MEMB2", func_329(1));
						}
						else if (unk_0x875A214D5EBCA509(2, 52))
						{
							unk_0x428C32CC68809A35(1);
							func_326();
							func_367(3);
						}
					}
					else if (Local_126.f_248 <= 0)
					{
						if (func_435(unk_0x259BE71D8A81D4FA()))
						{
							if (!func_341("CAS_MG_NOCHIPS6"))
							{
								func_340("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_341("CAS_MG_NOCHIPS2"))
						{
							func_340("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_126.f_248 < Local_126.f_246)
					{
						if (func_435(unk_0x259BE71D8A81D4FA()))
						{
							if (!func_341("CAS_MG_LOWCHIPS6"))
							{
								func_340("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_341("CAS_MG_LOWCHIPS2"))
						{
							func_340("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_126.f_259 == -1)
					{
						if (func_325())
						{
							unk_0x428C32CC68809A35(1);
						}
						if (((!func_334(unk_0x259BE71D8A81D4FA()) && (func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3)) && !(func_333(1) && func_334(func_332()))) || (!func_331() && (func_333(1) && func_330(func_332()))))
						{
							if (func_322(func_332()) == 1)
							{
								Local_126.f_256 = 1;
								func_321(&(Local_126.f_259), 4, "BJACK_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_320(func_332()))
							{
								Local_126.f_256 = 2;
								func_321(&(Local_126.f_259), 4, "BJACK_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_126.f_256 = 3;
								func_321(&(Local_126.f_259), 4, "BJACK_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_126.f_256 = 0;
							func_321(&(Local_126.f_259), 4, "BJACK_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_319(Local_126.f_259, 1))
					{
						func_317(&(Local_126.f_259));
						Local_126.f_259 = -1;
						unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 185, 1);
						func_316();
						func_305(unk_0x259BE71D8A81D4FA(), 0, 1048832, 0);
						if (unk_0xBCF87EE3DC296C2A(0) == 4 && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							unk_0x19626F992DC71FB9(unk_0x4A8C381C258A124D());
							unk_0xD8ED11B32DF72E0B(unk_0x4A8C381C258A124D(), 0, 0);
						}
						func_367(4);
					}
				}
				else
				{
					if (func_325())
					{
						unk_0x428C32CC68809A35(1);
					}
					if (Local_126.f_259 != -1)
					{
						func_317(&(Local_126.f_259));
						Local_126.f_259 = -1;
					}
					Local_126.f_247 = 0;
					func_367(1);
				}
			}
			else
			{
				if (func_325())
				{
					unk_0x428C32CC68809A35(1);
				}
				if (Local_126.f_259 != -1)
				{
					func_317(&(Local_126.f_259));
					Local_126.f_259 = -1;
				}
				Local_126.f_247 = 0;
				func_367(1);
			}
			break;
		
		case 3:
			if (!func_304())
			{
				func_367(2);
			}
			break;
		
		case 4:
			func_381(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3) || func_435(unk_0x259BE71D8A81D4FA()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (BitTest(Global_1943520.f_5, 21))
			{
				func_374(&(Local_126.f_1578), 0, 0);
				func_303(Local_126.f_247);
				if (unk_0xBCF87EE3DC296C2A(0) == 4)
				{
					func_305(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
				}
				else
				{
					func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
				}
				func_367(5);
			}
			else
			{
				unk_0xD0D00ED689D6CA81(sVar2, 0);
				if (func_301(0, -1, 0) && unk_0x38D063D8CF6D1967(sVar2))
				{
					if (!iLocal_154)
					{
						unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_300(0, 0);
						func_298(1, sVar2, sVar2);
						func_297("BJACK_TITLE");
						func_296(-1, 1, 1);
						func_295("BJACK_DIS", 0, 0);
						func_294("BJACK_DIS1");
						func_294("BJACK_DIS2");
						func_294("BJACK_DIS3");
						func_293(202, "BJACK_EXIT", -1);
						func_293(201, "BJACK_CONT", -1);
						iLocal_154 = 1;
					}
					func_254(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x61C3701AD6D746B2(2, 202))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_251(1, -1);
					unk_0x633E3833FB96BCCB(sVar2);
					iLocal_154 = 0;
					func_242();
				}
				else if (unk_0x61C3701AD6D746B2(2, 201))
				{
					unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_251(1, -1);
					unk_0x633E3833FB96BCCB(sVar2);
					iLocal_154 = 0;
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1943520.f_5), 21);
					func_374(&(Local_126.f_1578), 0, 0);
					func_303(Local_126.f_247);
					if (unk_0xBCF87EE3DC296C2A(0) == 4)
					{
						func_305(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
					}
					else
					{
						func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
					}
					func_367(5);
				}
			}
			break;
		
		case 5:
			if ((((func_241(Local_126.f_247) && !func_343()) && !func_375()) && func_358()) && !func_354())
			{
				func_64(&(Local_126.f_1578));
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4), 2);
				func_232(1);
				func_367(6);
			}
			else
			{
				if (func_343())
				{
					func_242();
				}
				if (func_375())
				{
					func_242();
				}
				if (func_231(Local_126.f_247))
				{
					func_242();
				}
				if (func_230())
				{
					func_242();
				}
				if (!func_358())
				{
					func_242();
				}
				if (func_354())
				{
					func_242();
				}
			}
			break;
		
		case 6:
			if (!func_343() && !func_375())
			{
				if (func_229())
				{
					if (unk_0xBCF87EE3DC296C2A(0) == 1 || unk_0xBCF87EE3DC296C2A(0) == 2)
					{
						unk_0x07938654FF332D78(0, 0);
					}
					fVar3 = func_227(unk_0x4A8C381C258A124D(), func_228(Local_126.f_247, 0), 1);
					fVar4 = func_227(unk_0x4A8C381C258A124D(), func_228(Local_126.f_247, 1), 1);
					fVar5 = func_227(unk_0x4A8C381C258A124D(), func_228(Local_126.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_126.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_126.f_251 = 2;
					}
					else
					{
						Local_126.f_251 = 0;
					}
					unk_0x63C8DCBEC1CF8225(unk_0x4A8C381C258A124D(), func_228(Local_126.f_247, Local_126.f_251), 1f, 5000, func_226(Local_126.f_247, Local_126.f_251), 0,01f);
					func_367(7);
				}
			}
			else
			{
				func_242();
			}
			break;
		
		case 7:
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_go_straight_to_coord")) != 0)
			{
				Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_126.f_247), func_224(Local_126.f_247), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), func_222(Local_126.f_251), 2f, -2f, 13, 16, 2f, 0);
				unk_0xE7101255AD6F1952(Local_126.f_255);
				Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_6.f_1 = Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4;
				func_367(8);
			}
			break;
		
		case 8:
			unk_0xC1AAF981A4F50898(-2124244681);
			Local_126.f_258 = unk_0x643DC062EE904FCA(Local_126.f_255);
			if (func_221())
			{
				func_220(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 2);
			}
			else
			{
				func_220(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 1);
			}
			if (Local_126.f_258 != -1)
			{
				if ((unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("ShowUi"))) || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out")))
				{
					Local_126.f_1582 = "idle_cardgames";
					Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_126.f_247), func_224(Local_126.f_247), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), Local_126.f_1582, 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_126.f_255);
					func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
					Local_132 = { Var6 };
					if (func_435(unk_0x259BE71D8A81D4FA()))
					{
						Local_132.f_0 = 1695074466;
					}
					else if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 == 2 || Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 == 3)
					{
						Local_132.f_0 = 1952785842;
					}
					else
					{
						Local_132.f_0 = joaat("standard");
					}
					Local_132.f_1 = Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4;
					Local_132.f_6 = 1;
					if (func_334(unk_0x259BE71D8A81D4FA()))
					{
						Local_132.f_15 = 1983458449;
					}
					else if (func_331())
					{
						Local_132.f_15 = 1334658487;
					}
					else if (func_333(1) && (func_334(func_332()) || func_218(unk_0x259BE71D8A81D4FA())))
					{
						Local_132.f_15 = 980726932;
					}
					else
					{
						Local_132.f_15 = 939907746;
					}
					func_374(&uLocal_129, 0, 0);
					func_217();
					Local_126.f_249 = func_409();
					func_367(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Table_Games"))
			{
				unk_0xCAC4020CCF361AC8("DLC_VW_Casino_Table_Games");
			}
			unk_0xC1AAF981A4F50898(-2124244681);
			func_91();
			break;
		
		case 10:
			if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Table_Games"))
			{
				unk_0xB43467C43086A6A1("DLC_VW_Casino_Table_Games");
			}
			if (unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), joaat("script_task_synchronized_scene")) == 1)
			{
				func_220(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), func_90());
				Var7 = { unk_0xB504E1B50AA21FC5(2, 218), unk_0xB504E1B50AA21FC5(2, 219), 0f };
				Local_126.f_258 = unk_0x643DC062EE904FCA(Local_126.f_255);
				if (Local_126.f_258 != -1 && ((unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))) || (system::vmag(Var7) >= 0,24f && unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 2116425869))))
				{
					unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
					func_305(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
					unk_0x268BE77F77533D03(func_59());
					unk_0x268BE77F77533D03(func_73());
					unk_0x268BE77F77533D03(func_89());
					unk_0x268BE77F77533D03(func_223());
					unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4), 2);
					func_345();
					func_88();
					func_367(2);
				}
			}
			else
			{
				unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
				func_305(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
				unk_0x268BE77F77533D03(func_59());
				unk_0x268BE77F77533D03(func_73());
				unk_0x268BE77F77533D03(func_89());
				unk_0x268BE77F77533D03(func_223());
				unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4), 2);
				func_345();
				func_88();
				func_367(2);
			}
			break;
	}
}

void func_88()
{
	unk_0x8744D2E3FC95740E(&(Local_126.f_252), 21);
	unk_0x8744D2E3FC95740E(&(Local_126.f_252), 22);
}

char* func_89()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_409();
	iVar1 = (iVar0 - Local_126.f_249);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_91()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var4;
	struct<26> Var5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	char* sVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	bool bVar25;
	char* sVar26;
	
	if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 * 4 + Local_116.f_1575[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]);
		iVar0 = Local_116.f_1600[iVar1];
	}
	if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0)
	{
		if (func_216(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4))
		{
			func_215("BJACK_ERROR", -1);
			return;
		}
	}
	bVar2 = false;
	if (func_54(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, Local_126.f_257))
	{
		bVar2 = true;
	}
	func_201();
	if (func_424())
	{
		Local_132.f_10 = 1;
	}
	Local_132.f_11 = func_199();
	if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] != 6 || Local_116.f_1575[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] != (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)))
	{
		if ((((((unk_0x875A214D5EBCA509(2, 202) && !unk_0xA43CD45F18522E3F()) && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0)) && !Local_126.f_234) && !func_198())
		{
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
			{
				Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
			}
			Local_131.f_18 = func_424();
			Local_131.f_19 = func_199();
			Local_131.f_17 = func_197(&uLocal_127, 0, 0);
			Local_131.f_7 = func_409();
			Local_132.f_2 = joaat("quit");
			Local_131.f_4 = joaat("quit");
			Local_131.f_25 = joaat("quit");
			if (Local_126.f_0 > 1 || Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26383)
				{
					unk_0xD2C8AF03369DD71B(&Local_131);
				}
			}
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 > 0 && !Local_126.f_232)
			{
				func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
			}
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 > 0 && !Local_126.f_233)
			{
				func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
			}
			unk_0xA759D3AD1579CBCB(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1));
			unk_0xA759D3AD1579CBCB(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2));
			func_383(1);
			unk_0x428C32CC68809A35(1);
			return;
		}
	}
	if (((Global_2708677 == Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 || Global_2696212.f_12) || Global_1943513 == 33) || !func_194())
	{
		if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
		{
			Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
		}
		Local_131.f_18 = func_424();
		Local_131.f_19 = func_199();
		Local_131.f_17 = func_197(&uLocal_127, 0, 0);
		Local_131.f_7 = func_409();
		if (Global_262145.f_26383)
		{
			unk_0xD2C8AF03369DD71B(&Local_131);
		}
		func_383(1);
		unk_0x428C32CC68809A35(1);
		return;
	}
	if (Local_126.f_255 > -1)
	{
		Local_126.f_258 = unk_0x643DC062EE904FCA(Local_126.f_255);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && !Local_126.f_234)
		{
			if (!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_223(), "idle_cardgames", 3))
			{
				if (Local_126.f_258 != -1 && (unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))))
				{
					Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_126.f_255);
					Local_126.f_1582 = "idle_cardgames";
					unk_0x8744D2E3FC95740E(&(Local_126.f_252), 0);
				}
			}
			else if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_223(), "idle_cardgames", 3))
			{
				if (Local_126.f_258 != -1 && (unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,99f || unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), joaat("blend_out"))))
				{
					Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), func_193(0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xE7101255AD6F1952(Local_126.f_255);
					unk_0x8744D2E3FC95740E(&(Local_126.f_252), 0);
				}
			}
		}
	}
	if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0)
	{
		func_191(&(Local_126.f_874));
		if ((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]))) && !BitTest(Local_126.f_250, 0))
		{
			if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] != 6 || Local_116.f_1575[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] != (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)))
			{
				func_190(unk_0xE934399D6F2C3AC5(0, 202, 1), "BJACK_EXIT", &(Local_126.f_874), 0);
			}
			else if (((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_26(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)), iVar0, 0), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_26(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_116.f_1555[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 12)) && !BitTest(Local_126.f_252, 0))
			{
				if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14))
				{
					if (((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 12) && !(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2 && func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21)) && func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21) && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 <= 7)
					{
						func_190(unk_0xE934399D6F2C3AC5(0, 201, 1), "BJACK_HIT", &(Local_126.f_874), 0);
						func_190(unk_0xE934399D6F2C3AC5(0, 203, 1), "BJACK_STAND", &(Local_126.f_874), 0);
					}
				}
				else if ((((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 12) && !(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2 && func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21)) && func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21) && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 <= 7) || (((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 13) && !(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2 && func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) == 21)) && func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 <= 7))
				{
					func_190(unk_0xE934399D6F2C3AC5(0, 201, 1), "BJACK_HIT", &(Local_126.f_874), 0);
					func_190(unk_0xE934399D6F2C3AC5(0, 203, 1), "BJACK_STAND", &(Local_126.f_874), 0);
				}
				if (Local_126.f_248 >= Local_126.f_244)
				{
					if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14))
					{
						if ((func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) < 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 10))
						{
							func_190(unk_0xE934399D6F2C3AC5(0, 204, 1), "BJACK_DOUBLE", &(Local_126.f_874), 0);
						}
					}
					else if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 13) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11))
					{
						if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
						{
							if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) < 21)
							{
								func_190(unk_0xE934399D6F2C3AC5(0, 204, 1), "BJACK_DOUBLE", &(Local_126.f_874), 0);
							}
						}
					}
					else if ((func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) < 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 10))
					{
						func_190(unk_0xE934399D6F2C3AC5(0, 204, 1), "BJACK_DOUBLE", &(Local_126.f_874), 0);
					}
				}
				if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2 && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14))
				{
					if (Local_126.f_248 >= Local_126.f_244)
					{
						if (func_36(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][0]) == func_36(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][1]))
						{
							func_190(unk_0xE934399D6F2C3AC5(0, 206, 1), "BJACK_SPLIT", &(Local_126.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] == 3 && !BitTest(Local_126.f_250, 0)) && (Local_126.f_248 >= Local_126.f_246 || Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 != 0))
		{
			if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15) && !BitTest(Local_126.f_252, 0))
			{
				func_190(unk_0xE934399D6F2C3AC5(0, 201, 1), "BJACK_PLACE", &(Local_126.f_874), 0);
				if (!BitTest(Local_126.f_252, 20))
				{
					func_190(unk_0xE934399D6F2C3AC5(0, 204, 1), "BJACK_BET_MAX", &(Local_126.f_874), 0);
				}
				func_189(2, 7, "BJACK_BET_NUM", &(Local_126.f_874));
			}
		}
		if (BitTest(Local_126.f_250, 0))
		{
			func_190(unk_0xE934399D6F2C3AC5(0, 202, 1), "IB_BACK", &(Local_126.f_874), 0);
			func_189(2, 8, "IB_TAB", &(Local_126.f_874));
		}
		if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] < 9 || !BitTest(Local_116.f_1555[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 13))
		{
			if (Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				func_190(unk_0xE934399D6F2C3AC5(0, 208, 1), "BJACK_DLR", &(Local_126.f_874), 0);
			}
			if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 0)
			{
				func_190(unk_0xE934399D6F2C3AC5(0, 207, 1), "BJACK_CARDS", &(Local_126.f_874), 0);
			}
		}
		if (bLocal_146 && Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] > 1)
		{
			func_190(unk_0xE934399D6F2C3AC5(0, 195, 1), "BJACK_LR", &(Local_126.f_874), 0);
		}
		if (!BitTest(Local_126.f_250, 0))
		{
			func_190(unk_0xE934399D6F2C3AC5(2, 210, 1), "BJACK_RULESb", &(Local_126.f_874), 0);
		}
		Var3 = { func_188() };
		func_187(&(Local_126.f_874), 1f);
		func_179(&(Local_126.f_873), &Var3, &(Local_126.f_874), func_186(&(Local_126.f_874)));
		func_178(1);
	}
	func_173();
	switch (Local_126.f_0)
	{
		case 0:
			if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] == 3)
			{
				if ((Local_126.f_244 > Local_126.f_248 || Local_126.f_244 < Local_126.f_246) || Local_126.f_244 > Local_126.f_245)
				{
					Local_126.f_244 = Local_126.f_246;
				}
				Var4 = 7;
				Local_126.f_213 = { Var4 };
				Local_126.f_222 = { Var4 };
				Local_131 = { Var5 };
				Local_131.f_10 = 1;
				Local_131.f_0 = joaat("blackjack");
				Local_131.f_11 = func_334(unk_0x259BE71D8A81D4FA());
				if (func_334(unk_0x259BE71D8A81D4FA()))
				{
					Local_131.f_20 = 1983458449;
				}
				else if (func_331())
				{
					Local_131.f_20 = 1334658487;
				}
				else if (func_333(1) && (func_334(func_332()) || func_218(unk_0x259BE71D8A81D4FA())))
				{
					Local_131.f_20 = 980726932;
				}
				else
				{
					Local_131.f_20 = 939907746;
				}
				if (func_435(unk_0x259BE71D8A81D4FA()))
				{
					Local_131.f_1 = 1695074466;
				}
				else if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 == 2 || Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 == 3)
				{
					Local_131.f_1 = 1952785842;
				}
				else
				{
					Local_131.f_1 = joaat("standard");
				}
				func_374(&uLocal_127, 0, 0);
				Local_131.f_3 = Local_116.f_1560[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
				Local_131.f_2 = Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4;
				func_172(1);
			}
			break;
		
		case 1:
			if ((!func_331() && !(func_333(1) && func_330(func_332()))) || ((!func_334(unk_0x259BE71D8A81D4FA()) && (func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3)) && !(func_333(1) && func_334(func_332()))))
			{
				if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
				}
				Local_131.f_18 = func_424();
				Local_131.f_19 = func_199();
				Local_131.f_17 = func_197(&uLocal_127, 0, 0);
				Local_131.f_7 = func_409();
				Local_132.f_2 = 939907746;
				Local_131.f_4 = 939907746;
				if (Global_262145.f_26383)
				{
					unk_0xD2C8AF03369DD71B(&Local_131);
				}
				func_383(1);
				unk_0x428C32CC68809A35(1);
				if (Local_126.f_256 == 1)
				{
					func_215("IT_MEMBOc", -1);
				}
				else if (Local_126.f_256 == 2)
				{
					func_215("IT_MEMBOa", -1);
				}
				else if (Local_126.f_256 == 3)
				{
					func_215("IT_MEMBOb", -1);
				}
				return;
			}
			if ((Local_126.f_248 < Local_126.f_246 && Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 == 0) && !Local_126.f_234)
			{
				if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
				}
				Local_131.f_18 = func_424();
				Local_131.f_19 = func_199();
				Local_131.f_17 = func_197(&uLocal_127, 0, 0);
				Local_131.f_7 = func_409();
				Local_132.f_2 = -1275559872;
				Local_131.f_4 = -1275559872;
				if (Global_262145.f_26383)
				{
					unk_0xD2C8AF03369DD71B(&Local_131);
				}
				func_383(1);
				unk_0x428C32CC68809A35(1);
				if (func_435(unk_0x259BE71D8A81D4FA()))
				{
					if (Local_126.f_248 <= 0)
					{
						func_215("CAS_MG_NOCHIPS6", -1);
					}
					else
					{
						func_215("CAS_MG_LOWCHIPS6", -1);
					}
				}
				else if (Local_126.f_248 <= 0)
				{
					func_215("CAS_MG_NOCHIPS2", -1);
				}
				else
				{
					func_215("CAS_MG_LOWCHIPS2", -1);
				}
				return;
			}
			if (func_339())
			{
				switch (func_335())
				{
					case 0:
						Local_132.f_2 = 1982714739;
						break;
					
					case 1:
						Local_132.f_2 = -633175758;
						break;
					
					case 2:
						Local_132.f_2 = -1625999354;
						break;
				}
				switch (func_335())
				{
					case 0:
						Local_131.f_4 = 1982714739;
						break;
					
					case 1:
						Local_131.f_4 = -633175758;
						break;
					
					case 2:
						Local_131.f_4 = -1625999354;
						break;
				}
				if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
				}
				Local_131.f_18 = func_424();
				Local_131.f_19 = func_199();
				Local_131.f_17 = func_197(&uLocal_127, 0, 0);
				Local_131.f_7 = func_409();
				if (Global_262145.f_26383)
				{
					unk_0xD2C8AF03369DD71B(&Local_131);
				}
				func_383(1);
				unk_0x428C32CC68809A35(1);
				if (func_335() == 2)
				{
					func_215("CAS_MG_CTIME", -1);
				}
				else
				{
					func_215("CAS_MG_CBAN", -1);
				}
				return;
			}
			if ((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15) && !BitTest(Local_126.f_252, 0)) && (!func_358() || func_354()))
			{
				if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
				{
					Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
				}
				Local_131.f_18 = func_424();
				Local_131.f_19 = func_199();
				Local_131.f_17 = func_197(&uLocal_127, 0, 0);
				Local_131.f_7 = func_409();
				if (Global_262145.f_26383)
				{
					unk_0xD2C8AF03369DD71B(&Local_131);
				}
				func_383(1);
				unk_0x428C32CC68809A35(1);
				return;
			}
			if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 16))
			{
				if (!BitTest(Local_126.f_252, 0))
				{
					if (((((!BitTest(Local_126.f_253, 1) && !unk_0xA43CD45F18522E3F()) && !unk_0x875A214D5EBCA509(2, 204)) && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0))
					{
						bVar7 = unk_0x6D05C5731A838CB3(2, 188);
						bVar8 = unk_0x6D05C5731A838CB3(2, 187);
						if (bVar8 || (((((bVar7 && !unk_0x875A214D5EBCA509(2, 204)) && !unk_0xA43CD45F18522E3F()) && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0)))
						{
							func_68(&(Local_126.f_1574), 0, 0);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_253), true);
						}
					}
					else if (func_66(&(Local_126.f_1574), 100, 0))
					{
						func_64(&(Local_126.f_1574));
						unk_0x8744D2E3FC95740E(&(Local_126.f_253), 1);
					}
					if (((((((unk_0x875A214D5EBCA509(2, 204) && !bVar8) && !bVar7) && !unk_0xA43CD45F18522E3F()) && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0)) && !BitTest(Local_126.f_252, 20))
					{
						unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar6 = true;
					}
					if (bVar6)
					{
						while (bVar6)
						{
							if (Local_126.f_244 >= 10000)
							{
								iVar9 = 5000;
							}
							else if (Local_126.f_244 >= 5000)
							{
								iVar9 = 1000;
							}
							else if (Local_126.f_244 >= 500)
							{
								iVar9 = 500;
							}
							else if (Local_126.f_244 >= 100)
							{
								iVar9 = 50;
							}
							else
							{
								iVar9 = 10;
							}
							if (Local_126.f_244 > Local_126.f_248)
							{
								Local_126.f_244 = (Local_126.f_244 - iVar9);
							}
							if (Local_126.f_244 < Local_126.f_246)
							{
								Local_126.f_244 = Local_126.f_246;
							}
							Local_126.f_244 = (Local_126.f_244 + iVar9);
							if (Local_126.f_244 > Local_126.f_245)
							{
								bVar6 = false;
								Local_126.f_244 = Local_126.f_245;
							}
							if (Local_126.f_244 > Local_126.f_248)
							{
								bVar6 = false;
								Local_126.f_244 = (Local_126.f_244 - iVar9);
							}
						}
					}
					else
					{
						if (Local_126.f_244 >= 10000)
						{
							iVar9 = 5000;
						}
						else if (Local_126.f_244 >= 5000)
						{
							iVar9 = 1000;
						}
						else if (Local_126.f_244 >= 500)
						{
							iVar9 = 500;
						}
						else if (Local_126.f_244 >= 100)
						{
							iVar9 = 50;
						}
						else
						{
							iVar9 = 10;
						}
						if (Local_126.f_244 > Local_126.f_248)
						{
							Local_126.f_244 = (Local_126.f_244 - iVar9);
						}
						if (Local_126.f_244 < Local_126.f_246)
						{
							Local_126.f_244 = Local_126.f_246;
						}
						iVar10 = Local_126.f_244;
						if (bVar7)
						{
							Local_126.f_244 = (Local_126.f_244 + iVar9);
							if (Local_126.f_244 > Local_126.f_245)
							{
								Local_126.f_244 = Local_126.f_245;
							}
							if (Local_126.f_244 > Local_126.f_248)
							{
								Local_126.f_244 = (Local_126.f_244 - iVar9);
							}
							if (Local_126.f_244 == iVar10)
							{
								if (unk_0x875A214D5EBCA509(2, 188) || !BitTest(Local_126.f_252, 23))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 23);
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_126.f_252), 23);
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar8)
						{
							if (Local_126.f_244 <= 100)
							{
								iVar9 = 10;
							}
							else if (Local_126.f_244 <= 500)
							{
								iVar9 = 50;
							}
							else if (Local_126.f_244 <= 5000)
							{
								iVar9 = 500;
							}
							else if (Local_126.f_244 <= 10000)
							{
								iVar9 = 1000;
							}
							else
							{
								iVar9 = 5000;
							}
							Local_126.f_244 = (Local_126.f_244 - iVar9);
							if (Local_126.f_244 < Local_126.f_246)
							{
								Local_126.f_244 = Local_126.f_246;
							}
							if (Local_126.f_244 == iVar10)
							{
								if (unk_0x875A214D5EBCA509(2, 187) || !BitTest(Local_126.f_252, 23))
								{
									unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 23);
								}
							}
							else
							{
								unk_0x8744D2E3FC95740E(&(Local_126.f_252), 23);
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_126.f_244 == Local_126.f_245 || (Local_126.f_244 + iVar9) > Local_126.f_245) || (Local_126.f_244 + iVar9) > Local_126.f_248)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 20);
					}
					else
					{
						unk_0x8744D2E3FC95740E(&(Local_126.f_252), 20);
					}
					unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_253), false);
					iVar11 = (30 - (func_197(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar11 > 0 || !func_67(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/])))
					{
						if (((((((unk_0x875A214D5EBCA509(2, 201) && !unk_0x6D05C5731A838CB3(2, 202)) && !unk_0x6D05C5731A838CB3(2, 203)) && Local_126.f_244 >= Local_126.f_246) && !unk_0xA43CD45F18522E3F()) && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
							Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
							unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), func_171(Local_126.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_126.f_255);
							unk_0x428C32CC68809A35(1);
						}
						if (!func_341("BJACK_BET") && !BitTest(Local_126.f_252, 0))
						{
							if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
							{
								func_170("BJACK_BET");
							}
						}
					}
					else if (func_67(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/])) && func_66(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_126.f_258 != -1 && unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844)) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15))
					{
						Local_126.f_234 = 1;
					}
					if (Local_126.f_234 && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15))
					{
						if (func_161(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
						{
							if (Local_126.f_243 == 3)
							{
								Local_126.f_234 = 0;
								Local_126.f_243 = 0;
							}
							else
							{
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = Local_126.f_244;
								unk_0xFAF127E6FF05E72E(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1));
								Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
								Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
								if (BitTest(Local_126.f_252, 20))
								{
									Local_131.f_5 = 1;
								}
								Local_132.f_12++;
								Local_132.f_7 = (Local_132.f_7 + Local_126.f_244);
								Local_131.f_12 = (Local_131.f_12 + Local_126.f_244);
								unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 15);
								Local_126.f_234 = 0;
							}
						}
					}
				}
			}
			if ((func_67(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/])) && Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] > 1) && (30000 - func_197(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (func_197(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					func_160((30000 - func_197(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_160((30000 - func_197(&(Local_116.f_1642[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] > 3)
			{
				if (BitTest(Local_126.f_253, 0) && !Local_126.f_234)
				{
					unk_0x428C32CC68809A35(1);
					unk_0x8744D2E3FC95740E(&(Local_126.f_252), 0);
					if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 15))
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 16);
					}
					func_172(2);
				}
			}
			func_156(Local_126.f_244, "BJACK_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0);
			break;
		
		case 2:
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0)
			{
				if (Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					func_64(&(Local_126.f_1576));
					iLocal_149 = 0;
					func_172(3);
				}
			}
			break;
		
		case 3:
			iVar12 = func_35(&(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/]), 0);
			iVar13 = func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/]));
			iVar14 = func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/]));
			iVar15 = Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/].f_12;
			iVar16 = Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8;
			iVar17 = Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8;
			bVar18 = (iVar15 == 2 && iVar12 == 21);
			bVar19 = (iVar16 == 2 && iVar13 == 21);
			bVar20 = (iVar17 == 2 && iVar14 == 21);
			if (((bVar20 || iVar14 >= 21) || iVar17 == 7) && !BitTest(Local_116.f_1555[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 12))
			{
				unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 13);
			}
			if (((bVar19 || iVar13 >= 21) || iVar16 == 7) && !BitTest(Local_116.f_1555[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 12))
			{
				if (iVar13 > 21)
				{
					if (!BitTest(Local_126.f_252, 19))
					{
						Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
						unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), func_155(), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xE7101255AD6F1952(Local_126.f_255);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 19);
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 12);
			}
			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4])))
			{
				if ((unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_26(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)), iVar0, 0), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_26(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)), iVar0, 1), 3)) && !BitTest(Local_116.f_1555[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 12))
				{
					if (func_67(&(Local_126.f_1576)))
					{
						if ((30000 - func_197(&(Local_126.f_1576), 0, 0)) >= 0)
						{
							if (func_197(&(Local_126.f_1576), 0, 0) <= 24000)
							{
								func_160((30000 - func_197(&(Local_126.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_160((30000 - func_197(&(Local_126.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (func_66(&(Local_126.f_1576), 30000, 0))
						{
							unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 12);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 13);
							func_64(&(Local_126.f_1576));
							return;
						}
					}
					else if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
					{
						if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_223(), func_193(1), 3))
						{
							func_374(&(Local_126.f_1576), 0, 0);
						}
					}
					if (bVar18)
					{
						unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 12);
						unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 13);
					}
					else if (((BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14) && BitTest(Local_116.f_1565[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], unk_0x259BE71D8A81D4FA())) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 13)) && !(BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 2))
					{
						if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11) || BitTest(Local_126.f_252, 0))
						{
							if (!BitTest(Local_126.f_252, 0))
							{
								if (((!unk_0xA43CD45F18522E3F() && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0))
								{
									if (unk_0x875A214D5EBCA509(2, 201))
									{
										Local_131.f_22 = 1;
										if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 6);
										}
										else if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 3)
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 7);
										}
										else if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 4)
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 8);
										}
										else if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 5)
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 9);
										}
										else if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 6)
										{
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 10);
										}
										switch (unk_0xC5935DFB3F39785A(0, 3))
										{
											case 0:
												sVar21 = "request_card";
												break;
											
											case 1:
												sVar21 = "request_card_alt1";
												break;
											
											case 2:
												sVar21 = "request_card_alt2";
												break;
										}
										Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), sVar21, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_126.f_255);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
										func_64(&(Local_126.f_1576));
									}
									else if (unk_0x875A214D5EBCA509(2, 203))
									{
										Local_131.f_21 = 1;
										switch (unk_0xC5935DFB3F39785A(0, 3))
										{
											case 0:
												sVar22 = "decline_card_001";
												break;
											
											case 1:
												sVar22 = "decline_card_alt1";
												break;
											
											case 2:
												sVar22 = "decline_card_alt2";
												break;
										}
										Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), sVar22, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_126.f_255);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 14);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
										func_64(&(Local_126.f_1576));
									}
									else if (unk_0x875A214D5EBCA509(2, 204))
									{
										if (Local_126.f_248 >= Local_126.f_244 && iVar17 == 2)
										{
											Local_131.f_23 = 1;
											Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), func_171(Local_126.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xE7101255AD6F1952(Local_126.f_255);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 12);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
											func_64(&(Local_126.f_1576));
										}
									}
								}
							}
							else if (Local_126.f_258 != -1)
							{
								if (((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "request_card", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "request_card_alt1", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "request_card_alt2", 3)) && unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,3f)
								{
									if (BitTest(Local_126.f_252, 6))
									{
										unk_0x8744D2E3FC95740E(&(Local_126.f_252), 6);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 5);
									}
									else if (BitTest(Local_126.f_252, 7))
									{
										unk_0x8744D2E3FC95740E(&(Local_126.f_252), 7);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 6);
									}
									else if (BitTest(Local_126.f_252, 8))
									{
										unk_0x8744D2E3FC95740E(&(Local_126.f_252), 8);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 7);
									}
									else if (BitTest(Local_126.f_252, 9))
									{
										unk_0x8744D2E3FC95740E(&(Local_126.f_252), 9);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 8);
									}
									else if (BitTest(Local_126.f_252, 10))
									{
										unk_0x8744D2E3FC95740E(&(Local_126.f_252), 10);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 9);
									}
								}
								if (((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "decline_card_001", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "decline_card_alt1", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "decline_card_alt2", 3)) && unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,3f)
								{
									if (BitTest(Local_126.f_252, 14))
									{
										unk_0x8744D2E3FC95740E(&(Local_126.f_252), 14);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 13);
									}
								}
								if (BitTest(Local_126.f_252, 12))
								{
									if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844))
									{
										Local_126.f_234 = 1;
									}
									if (!BitTest(Local_126.f_252, 17) && Local_126.f_234)
									{
										if (func_161(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
										{
											if (Local_126.f_243 == 3)
											{
												unk_0x8744D2E3FC95740E(&(Local_126.f_252), 12);
												Local_126.f_234 = 0;
												Local_126.f_243 = 0;
											}
											else
											{
												Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
												Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
												Local_132.f_8 = (Local_132.f_8 + Local_126.f_244);
												Local_131.f_13 = (Local_131.f_13 + Local_126.f_244);
												Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 + Local_126.f_244);
												unk_0xFAF127E6FF05E72E(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2));
												unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 17);
												unk_0x8744D2E3FC95740E(&(Local_126.f_252), 12);
												unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 11);
												Local_126.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 10) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 12)) || BitTest(Local_126.f_252, 0))
					{
						if (!BitTest(Local_126.f_252, 0))
						{
							if (((!unk_0xA43CD45F18522E3F() && !func_343()) && !unk_0xB11671B812399BA2()) && !BitTest(Local_126.f_250, 0))
							{
								if (unk_0x875A214D5EBCA509(2, 201))
								{
									Local_131.f_22 = 1;
									if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), true);
									}
									else if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 3)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 2);
									}
									else if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 4)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 3);
									}
									else if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 5)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 4);
									}
									else if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 6)
									{
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 5);
									}
									switch (unk_0xC5935DFB3F39785A(0, 3))
									{
										case 0:
											sVar23 = "request_card";
											break;
										
										case 1:
											sVar23 = "request_card_alt1";
											break;
										
										case 2:
											sVar23 = "request_card_alt2";
											break;
									}
									Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), sVar23, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_126.f_255);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
									func_64(&(Local_126.f_1576));
								}
								else if (unk_0x875A214D5EBCA509(2, 203))
								{
									Local_131.f_21 = 1;
									switch (unk_0xC5935DFB3F39785A(0, 3))
									{
										case 0:
											sVar24 = "decline_card_001";
											break;
										
										case 1:
											sVar24 = "decline_card_alt1";
											break;
										
										case 2:
											sVar24 = "decline_card_alt2";
											break;
									}
									Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
									unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), sVar24, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0xE7101255AD6F1952(Local_126.f_255);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 13);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
									func_64(&(Local_126.f_1576));
								}
								else if (unk_0x875A214D5EBCA509(2, 204))
								{
									if (Local_126.f_248 >= Local_126.f_244 && iVar16 == 2)
									{
										Local_131.f_23 = 1;
										Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
										unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), func_171(Local_126.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xE7101255AD6F1952(Local_126.f_255);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 11);
										unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
										func_64(&(Local_126.f_1576));
									}
								}
								else if (unk_0x875A214D5EBCA509(2, 206))
								{
									if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14))
									{
										if ((func_36(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][0]) == func_36(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][1]) && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2) && Local_126.f_248 >= Local_126.f_244)
										{
											Local_131.f_24 = 1;
											Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 1, 0, 1065353216, 0, 1065353216);
											unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_89(), func_171(Local_126.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xE7101255AD6F1952(Local_126.f_255);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 15);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), false);
											func_64(&(Local_126.f_1576));
										}
									}
								}
							}
						}
						else if (Local_126.f_258 != -1)
						{
							if (((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "request_card", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "request_card_alt1", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "request_card_alt2", 3)) && unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,3f)
							{
								if (BitTest(Local_126.f_252, 1))
								{
									unk_0x8744D2E3FC95740E(&(Local_126.f_252), 1);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), false);
								}
								else if (BitTest(Local_126.f_252, 2))
								{
									unk_0x8744D2E3FC95740E(&(Local_126.f_252), 2);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), true);
								}
								else if (BitTest(Local_126.f_252, 3))
								{
									unk_0x8744D2E3FC95740E(&(Local_126.f_252), 3);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 2);
								}
								else if (BitTest(Local_126.f_252, 4))
								{
									unk_0x8744D2E3FC95740E(&(Local_126.f_252), 4);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 3);
								}
								else if (BitTest(Local_126.f_252, 5))
								{
									unk_0x8744D2E3FC95740E(&(Local_126.f_252), 5);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 4);
								}
							}
							if (((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "decline_card_001", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "decline_card_alt1", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), func_89(), "decline_card_alt2", 3)) && unk_0xBD3B265153D3BA2D(Local_126.f_258) >= 0,3f)
							{
								if (BitTest(Local_126.f_252, 13))
								{
									unk_0x8744D2E3FC95740E(&(Local_126.f_252), 13);
									unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 12);
								}
							}
							if (BitTest(Local_126.f_252, 11))
							{
								if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844))
								{
									Local_126.f_234 = 1;
								}
								if (!BitTest(Local_126.f_252, 16) && Local_126.f_234)
								{
									if (func_161(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
									{
										if (Local_126.f_243 == 3)
										{
											unk_0x8744D2E3FC95740E(&(Local_126.f_252), 11);
											Local_126.f_234 = 0;
											Local_126.f_243 = 0;
										}
										else
										{
											Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
											Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
											Local_132.f_7 = (Local_132.f_7 + Local_126.f_244);
											Local_131.f_12 = (Local_131.f_12 + Local_126.f_244);
											Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 + Local_126.f_244);
											unk_0xFAF127E6FF05E72E(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1));
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 16);
											unk_0x8744D2E3FC95740E(&(Local_126.f_252), 11);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 10);
											Local_126.f_234 = 0;
										}
									}
								}
							}
							if (BitTest(Local_126.f_252, 15))
							{
								if (unk_0x5D640DD02AFD9F75(unk_0x4A8C381C258A124D(), 1503712844))
								{
									Local_126.f_234 = 1;
								}
								if (!BitTest(Local_126.f_252, 18) && Local_126.f_234)
								{
									if (func_161(Local_126.f_244, &(Local_126.f_243), 1, Local_126.f_231))
									{
										if (Local_126.f_243 == 3)
										{
											unk_0x8744D2E3FC95740E(&(Local_126.f_252), 15);
											Local_126.f_234 = 0;
											Local_126.f_243 = 0;
										}
										else
										{
											Local_132.f_3 = (Local_132.f_3 - Local_126.f_244);
											Local_131.f_6 = (Local_131.f_6 - Local_126.f_244);
											Local_132.f_8 = (Local_132.f_8 + Local_126.f_244);
											Local_131.f_13 = (Local_131.f_13 + Local_126.f_244);
											Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 + Local_126.f_244);
											unk_0xFAF127E6FF05E72E(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2));
											unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 18);
											unk_0x8744D2E3FC95740E(&(Local_126.f_252), 15);
											unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/]), 14);
											Local_126.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != unk_0x259BE71D8A81D4FA() && iVar0 != func_429())
				{
					if (!func_341("BJACK_WAIT"))
					{
						if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
						{
							func_170("BJACK_WAIT");
						}
					}
				}
				else if (func_341("BJACK_WAIT"))
				{
					unk_0x428C32CC68809A35(1);
				}
			}
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0)
			{
				if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] == 6)
				{
					if ((Local_116.f_1575[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] == (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)) && !(!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14) && BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 12))) && !((BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14) && BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 12)) && BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 13)))
					{
						if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_26(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)), iVar0, 0), 3) || unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_26(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2 && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14)) && Local_126.f_248 >= Local_126.f_244) && func_36(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][0]) == func_36(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][1]))
							{
								if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
								{
									if (!func_341("BJACK_TURN_S"))
									{
										func_170("BJACK_TURN_S");
									}
								}
							}
							else if (Local_126.f_248 >= Local_126.f_244 && (((((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14) && func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) < 21) && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 10)) || (((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 13) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11)) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2) && func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) < 21)) || ((func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) < 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 10))))
							{
								if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
								{
									if (!func_341("BJACK_TURN_D"))
									{
										func_170("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_145 && !bLocal_146) && !bLocal_137)
							{
								if (!func_341("BJACK_TURN"))
								{
									func_170("BJACK_TURN");
								}
							}
						}
						else if ((func_341("BJACK_TURN") || func_341("BJACK_TURN_D")) || func_341("BJACK_TURN_S"))
						{
							unk_0x428C32CC68809A35(1);
						}
					}
					else if ((func_341("BJACK_TURN") || func_341("BJACK_TURN_D")) || func_341("BJACK_TURN_S"))
					{
						unk_0x428C32CC68809A35(1);
					}
				}
				if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] == 1)
				{
					if (BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 16))
					{
						bVar25 = true;
					}
					if (Local_126.f_259 != -1)
					{
						func_317(&(Local_126.f_259));
						Local_126.f_259 = -1;
					}
					Local_125[unk_0x259BE71D8A81D4FA() /*8*/] = 0;
					Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
					Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
					Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5 = 0;
					Local_126.f_232 = 0;
					Local_126.f_233 = 0;
					Local_126.f_235 = 0;
					Local_126.f_252 = 0;
					unk_0x428C32CC68809A35(1);
					func_172(0);
					Local_131.f_18 = func_424();
					Local_131.f_19 = func_199();
					Local_131.f_17 = func_197(&uLocal_127, 0, 0);
					Local_131.f_7 = func_409();
					if (!func_358() || func_354())
					{
						func_383(1);
						unk_0x428C32CC68809A35(1);
						if (Global_262145.f_26383 && !bVar25)
						{
							unk_0xD2C8AF03369DD71B(&Local_131);
						}
						return;
					}
					if (func_339())
					{
						switch (func_335())
						{
							case 0:
								Local_132.f_2 = 1982714739;
								break;
							
							case 1:
								Local_132.f_2 = -633175758;
								break;
							
							case 2:
								Local_132.f_2 = -1625999354;
								break;
						}
						switch (func_335())
						{
							case 0:
								Local_131.f_4 = 1982714739;
								break;
							
							case 1:
								Local_131.f_4 = -633175758;
								break;
							
							case 2:
								Local_131.f_4 = -1625999354;
								break;
						}
						if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
						{
							Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
						}
						Local_131.f_18 = func_424();
						Local_131.f_19 = func_199();
						Local_131.f_17 = func_197(&uLocal_127, 0, 0);
						Local_131.f_7 = func_409();
						if (Global_262145.f_26383 && !bVar25)
						{
							unk_0xD2C8AF03369DD71B(&Local_131);
						}
						func_383(1);
						unk_0x428C32CC68809A35(1);
						if (func_335() == 2)
						{
							func_215("CAS_MG_CTIME", -1);
						}
						else
						{
							func_215("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26383 && !bVar25)
					{
						unk_0xD2C8AF03369DD71B(&Local_131);
					}
				}
				if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] > 6)
				{
					if ((func_341("BJACK_TURN") || func_341("BJACK_TURN_D")) || func_341("BJACK_TURN_S"))
					{
						unk_0x428C32CC68809A35(1);
					}
				}
				if (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] == 9 && iVar13 > 0)
				{
					if (Local_126.f_232 && Local_126.f_233)
					{
						if (!BitTest(Local_126.f_252, 19))
						{
							if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
							{
								Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
							}
							Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), func_224(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3), 2, 0, 1, 1065353216, 0, 1065353216);
							sVar26 = func_154(Local_131.f_6);
							if (func_54(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, Local_126.f_257))
							{
								if (Local_126.f_244 >= 35000)
								{
									if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
									{
										sVar26 = func_153();
									}
									else if (Local_126.f_244 >= 45000)
									{
										if ((((iVar16 >= 2 && iVar13 < 21) && iVar12 == iVar13 + 1) && iVar15 > 2) || (((iVar17 >= 2 && iVar14 < 21) && iVar12 == iVar14 + 1) && iVar15 > 2))
										{
											sVar26 = func_151();
										}
									}
								}
							}
							else if (Local_126.f_244 >= 4500)
							{
								if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
								{
									sVar26 = func_153();
								}
							}
							unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), sVar26, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xE7101255AD6F1952(Local_126.f_255);
							unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_252), 19);
						}
					}
					if ((Local_126.f_232 && Local_126.f_233) && !Local_126.f_235)
					{
						if (Local_131.f_14 > 0)
						{
							if (func_107(Local_131.f_14, &(Local_126.f_243), 1))
							{
								unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
								Local_126.f_235 = 1;
							}
						}
					}
					if ((((Local_126.f_232 && Local_126.f_233) && !bLocal_145) && !bLocal_146) && !bLocal_137)
					{
						if (Local_131.f_14 > 0)
						{
							if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 <= 0)
							{
								if (bVar19 && !bVar18)
								{
									if (!func_106("BJACK_WIN_2", "BJACK_BJ", Local_131.f_14))
									{
										func_105("BJACK_WIN_2", "BJACK_BJ", Local_131.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (!func_106("BJACK_WIN_2", "BJACK_7CC", Local_131.f_14))
									{
										func_105("BJACK_WIN_2", "BJACK_7CC", Local_131.f_14);
									}
								}
								else if (iVar13 == iVar12)
								{
									if (!func_341("BJACK_PUSH"))
									{
										func_170("BJACK_PUSH");
									}
								}
								else if (!func_104("BJACK_WIN_1", iVar13, Local_131.f_14))
								{
									func_103("BJACK_WIN_1", iVar13, Local_131.f_14);
								}
							}
							else if ((bVar19 || bVar20) && !bVar18)
							{
								if (bVar19 && bVar20)
								{
									if (!func_102("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_131.f_14))
									{
										func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_131.f_14);
									}
								}
								else if (bVar19)
								{
									if (iVar14 <= 21 && iVar17 == 7)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_131.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_131.f_14);
										}
									}
									else if (iVar14 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_131.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_131.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_131.f_14))
									{
										func_99("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_131.f_14);
									}
								}
								else if (bVar20)
								{
									if (iVar13 <= 21 && iVar16 == 7)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_131.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_131.f_14);
										}
									}
									else if (iVar13 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_131.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_131.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_131.f_14))
									{
										func_99("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_131.f_14);
									}
								}
							}
							else if ((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7))
							{
								if ((iVar13 <= 21 && iVar16 == 7) && (iVar14 <= 21 && iVar17 == 7))
								{
									if (!func_102("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_131.f_14))
									{
										func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_131.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (iVar14 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_131.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_131.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_131.f_14))
									{
										func_99("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_131.f_14);
									}
								}
								else if (iVar14 <= 21 && iVar17 == 7)
								{
									if (iVar13 > 21)
									{
										if (!func_102("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_131.f_14))
										{
											func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_131.f_14);
										}
									}
									else if (!func_100("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_131.f_14))
									{
										func_99("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_131.f_14);
									}
								}
							}
							else if (iVar13 == iVar12 && iVar14 == iVar12)
							{
								if (!func_341("BJACK_PUSH"))
								{
									func_170("BJACK_PUSH");
								}
							}
							else if (iVar13 <= 21 && iVar14 <= 21)
							{
								if (!func_98("BJACK_WIN_3", iVar13, iVar14, Local_131.f_14))
								{
									func_97("BJACK_WIN_3", iVar13, iVar14, Local_131.f_14);
								}
							}
							else if (iVar13 <= 21)
							{
								if (!func_100("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_131.f_14))
								{
									func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_131.f_14);
								}
							}
							else if (iVar14 <= 21)
							{
								if (!func_100("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_131.f_14))
								{
									func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_131.f_14);
								}
							}
						}
						else if (bVar18)
						{
							if (!func_96("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_95("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 <= 0)
						{
							if (iVar13 > 21)
							{
								if (!func_96("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_95("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_328("BJACK_LOSE_1", iVar12))
							{
								func_94("BJACK_LOSE_1", iVar12);
							}
						}
						else if (iVar13 > 21 && iVar14 > 21)
						{
							if (!func_93("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_328("BJACK_LOSE_1", iVar12))
						{
							func_94("BJACK_LOSE_1", iVar12);
						}
					}
					if (!BitTest(iLocal_149, 0))
					{
						if (bVar19)
						{
							Local_132.f_17++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, false);
					}
					if (!BitTest(iLocal_149, 1))
					{
						if (bVar20)
						{
							Local_132.f_17++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, true);
					}
					if (!BitTest(iLocal_149, 2))
					{
						if (iVar16 == 7 && iVar13 <= 21)
						{
							Local_132.f_20++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, 2);
					}
					if (!BitTest(iLocal_149, 3))
					{
						if (iVar17 == 7 && iVar14 <= 21)
						{
							Local_132.f_20++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, 3);
					}
					if (!BitTest(iLocal_149, 4))
					{
						if (iVar13 > 21)
						{
							Local_132.f_19++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, 4);
					}
					if (!BitTest(iLocal_149, 5))
					{
						if (iVar14 > 21)
						{
							Local_132.f_19++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, 5);
					}
					if (!BitTest(iLocal_149, 6))
					{
						if (bVar18)
						{
							Local_132.f_16++;
						}
						unk_0x0B0C9A0F9AAEB7F0(&iLocal_149, 6);
					}
					if (bVar18 && !bVar19)
					{
						if (!Local_126.f_232)
						{
							func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
							Local_131.f_4 = 1183160994;
							Local_131.f_25 = 1183160994;
							Local_132.f_14++;
							Local_126.f_232 = 1;
							Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
						}
					}
					else if (iVar13 <= 21)
					{
						unk_0x3AABE0CD8115D72E();
						if (bVar19 && !bVar18)
						{
							if (!Local_126.f_232)
							{
								Local_132.f_3 = (Local_132.f_3 + system::floor((IntToFloat(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1) * 2,5f)));
								Local_131.f_6 = (Local_131.f_6 + system::floor((IntToFloat(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1) * 2,5f)));
								Local_131.f_14 = (Local_131.f_14 + system::floor((IntToFloat(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1) * 2,5f)));
								Local_131.f_15 = 1;
								Local_132.f_13++;
								Local_131.f_4 = -67503841;
								Local_131.f_25 = -67503841;
								Local_126.f_232 = 1;
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
							}
						}
						else if (iVar16 == 7 && !bVar18)
						{
							if (!Local_126.f_232)
							{
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 * 2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 * 2);
								Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 * 2);
								Local_131.f_15 = 1;
								Local_132.f_13++;
								Local_131.f_4 = 579613221;
								Local_131.f_25 = 579613221;
								Local_126.f_232 = 1;
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 > iVar12 || iVar12 > 21)
						{
							if (!Local_126.f_232)
							{
								Local_131.f_25 = joaat("win");
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 * 2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 * 2);
								Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 * 2);
								Local_131.f_15 = 1;
								Local_132.f_13++;
								Local_131.f_4 = joaat("win");
								Local_131.f_25 = joaat("win");
								Local_126.f_232 = 1;
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 < iVar12 || (bVar18 && !bVar19))
						{
							if (!Local_126.f_232)
							{
								func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
								Local_131.f_4 = joaat("lose");
								Local_131.f_25 = joaat("lose");
								Local_132.f_14++;
								Local_126.f_232 = 1;
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_126.f_232)
						{
							Local_131.f_25 = joaat("push");
							Local_131.f_4 = joaat("push");
							Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
							Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
							Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
							Local_131.f_15 = 0;
							Local_126.f_232 = 1;
							func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
							Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_126.f_232)
					{
						func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1);
						Local_131.f_4 = joaat("Bust");
						Local_131.f_25 = joaat("Bust");
						Local_132.f_14++;
						Local_126.f_232 = 1;
						Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
					}
					unk_0xA759D3AD1579CBCB(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1));
					if (BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 14))
					{
						if (bVar18 && !bVar20)
						{
							if (!Local_126.f_233)
							{
								func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
								if (Local_131.f_25 == joaat("Bust"))
								{
									Local_131.f_4 = 1702151977;
									Local_131.f_25 = 1702151977;
								}
								else if (Local_131.f_25 == 579613221)
								{
									Local_131.f_4 = -2136370424;
									Local_131.f_25 = -2136370424;
								}
								else if (Local_131.f_25 == joaat("lose"))
								{
									Local_131.f_4 = -1858785397;
									Local_131.f_25 = -1858785397;
								}
								else if (Local_131.f_25 == joaat("win"))
								{
									Local_131.f_4 = 1946656957;
									Local_131.f_25 = 1946656957;
								}
								else if (Local_131.f_25 == -67503841)
								{
									Local_131.f_4 = -2105313098;
									Local_131.f_25 = -2105313098;
								}
								else if (Local_131.f_25 == joaat("push"))
								{
									Local_131.f_4 = -185627827;
									Local_131.f_25 = -185627827;
								}
								else if (Local_131.f_25 == 1183160994)
								{
									Local_131.f_4 = -1498042471;
									Local_131.f_25 = -1498042471;
								}
								Local_132.f_14++;
								Local_126.f_233 = 1;
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
							}
						}
						else if (iVar14 <= 21)
						{
							unk_0x3AABE0CD8115D72E();
							if (bVar20 && !bVar18)
							{
								if (!Local_126.f_233)
								{
									Local_132.f_3 = (Local_132.f_3 + system::floor((IntToFloat(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2) * 2,5f)));
									Local_131.f_6 = (Local_131.f_6 + system::floor((IntToFloat(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2) * 2,5f)));
									Local_131.f_14 = (Local_131.f_14 + system::floor((IntToFloat(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2) * 2,5f)));
									Local_131.f_15 = 1;
									Local_132.f_13++;
									if (Local_131.f_25 == joaat("Bust"))
									{
										Local_131.f_4 = 124952027;
										Local_131.f_25 = 124952027;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = 670083824;
										Local_131.f_25 = 670083824;
									}
									else if (Local_131.f_25 == joaat("lose"))
									{
										Local_131.f_4 = 446908156;
										Local_131.f_25 = 446908156;
									}
									else if (Local_131.f_25 == joaat("win"))
									{
										Local_131.f_4 = -1508284701;
										Local_131.f_25 = -1508284701;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = 179647057;
										Local_131.f_25 = 179647057;
									}
									else if (Local_131.f_25 == joaat("push"))
									{
										Local_131.f_4 = -890276844;
										Local_131.f_25 = -890276844;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = 1647364704;
										Local_131.f_25 = 1647364704;
									}
									Local_126.f_233 = 1;
									Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
								}
							}
							else if (iVar17 == 7 && !bVar18)
							{
								if (!Local_126.f_233)
								{
									Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 * 2);
									Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 * 2);
									Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 * 2);
									Local_131.f_15 = 1;
									Local_132.f_13++;
									if (Local_131.f_25 == joaat("Bust"))
									{
										Local_131.f_4 = -1196919212;
										Local_131.f_25 = -1196919212;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = 505925496;
										Local_131.f_25 = 505925496;
									}
									else if (Local_131.f_25 == joaat("lose"))
									{
										Local_131.f_4 = 2012692421;
										Local_131.f_25 = 2012692421;
									}
									else if (Local_131.f_25 == joaat("win"))
									{
										Local_131.f_4 = 326925312;
										Local_131.f_25 = 326925312;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = 487743337;
										Local_131.f_25 = 487743337;
									}
									else if (Local_131.f_25 == joaat("push"))
									{
										Local_131.f_4 = 526318358;
										Local_131.f_25 = 526318358;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = -1506449922;
										Local_131.f_25 = -1506449922;
									}
									Local_126.f_233 = 1;
									Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 > iVar12 || iVar12 > 21)
							{
								if (!Local_126.f_233)
								{
									Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 * 2);
									Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 * 2);
									Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 * 2);
									Local_131.f_15 = 1;
									Local_132.f_13++;
									if (Local_131.f_25 == joaat("Bust"))
									{
										Local_131.f_4 = -1738969561;
										Local_131.f_25 = -1738969561;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = -67385374;
										Local_131.f_25 = -67385374;
									}
									else if (Local_131.f_25 == joaat("lose"))
									{
										Local_131.f_4 = 299063546;
										Local_131.f_25 = 299063546;
									}
									else if (Local_131.f_25 == joaat("win"))
									{
										Local_131.f_4 = 639742496;
										Local_131.f_25 = 639742496;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = -833750355;
										Local_131.f_25 = -833750355;
									}
									else if (Local_131.f_25 == joaat("push"))
									{
										Local_131.f_4 = 656184401;
										Local_131.f_25 = 656184401;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = 1380168920;
										Local_131.f_25 = 1380168920;
									}
									Local_126.f_233 = 1;
									Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 < iVar12 || (bVar18 && !bVar20))
							{
								if (!Local_126.f_233)
								{
									func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
									if (Local_131.f_25 == joaat("Bust"))
									{
										Local_131.f_4 = 1702151977;
										Local_131.f_25 = 1702151977;
									}
									else if (Local_131.f_25 == 579613221)
									{
										Local_131.f_4 = -2136370424;
										Local_131.f_25 = -2136370424;
									}
									else if (Local_131.f_25 == joaat("lose"))
									{
										Local_131.f_4 = -1858785397;
										Local_131.f_25 = -1858785397;
									}
									else if (Local_131.f_25 == joaat("win"))
									{
										Local_131.f_4 = 1946656957;
										Local_131.f_25 = 1946656957;
									}
									else if (Local_131.f_25 == -67503841)
									{
										Local_131.f_4 = -2105313098;
										Local_131.f_25 = -2105313098;
									}
									else if (Local_131.f_25 == joaat("push"))
									{
										Local_131.f_4 = -185627827;
										Local_131.f_25 = -185627827;
									}
									else if (Local_131.f_25 == 1183160994)
									{
										Local_131.f_4 = -1498042471;
										Local_131.f_25 = -1498042471;
									}
									Local_132.f_14++;
									Local_126.f_233 = 1;
									Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_126.f_233)
							{
								Local_132.f_3 = (Local_132.f_3 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
								Local_131.f_6 = (Local_131.f_6 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
								Local_131.f_14 = (Local_131.f_14 + Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
								Local_131.f_15 = 1;
								func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
								if (Local_131.f_25 == joaat("Bust"))
								{
									Local_131.f_4 = -546469405;
									Local_131.f_25 = -546469405;
								}
								else if (Local_131.f_25 == 579613221)
								{
									Local_131.f_4 = -1749032290;
									Local_131.f_25 = -1749032290;
								}
								else if (Local_131.f_25 == joaat("lose"))
								{
									Local_131.f_4 = 1067415172;
									Local_131.f_25 = 1067415172;
								}
								else if (Local_131.f_25 == joaat("win"))
								{
									Local_131.f_4 = 297125168;
									Local_131.f_25 = 297125168;
								}
								else if (Local_131.f_25 == -67503841)
								{
									Local_131.f_4 = 2030981611;
									Local_131.f_25 = 2030981611;
								}
								else if (Local_131.f_25 == joaat("push"))
								{
									Local_131.f_4 = -684984318;
									Local_131.f_25 = -684984318;
								}
								else if (Local_131.f_25 == 1183160994)
								{
									Local_131.f_4 = 497946612;
									Local_131.f_25 = 497946612;
								}
								Local_126.f_233 = 1;
								Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_126.f_233)
						{
							func_196(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2);
							if (Local_131.f_25 == joaat("Bust"))
							{
								Local_131.f_4 = 1449908402;
								Local_131.f_25 = 1449908402;
							}
							else if (Local_131.f_25 == 579613221)
							{
								Local_131.f_4 = 1210238154;
								Local_131.f_25 = 1210238154;
							}
							else if (Local_131.f_25 == joaat("lose"))
							{
								Local_131.f_4 = 1540383360;
								Local_131.f_25 = 1540383360;
							}
							else if (Local_131.f_25 == joaat("win"))
							{
								Local_131.f_4 = -457084933;
								Local_131.f_25 = -457084933;
							}
							else if (Local_131.f_25 == -67503841)
							{
								Local_131.f_4 = -740134090;
								Local_131.f_25 = -740134090;
							}
							else if (Local_131.f_25 == joaat("push"))
							{
								Local_131.f_4 = -1825077928;
								Local_131.f_25 = -1825077928;
							}
							else if (Local_131.f_25 == 1183160994)
							{
								Local_131.f_4 = 1676117351;
								Local_131.f_25 = 1676117351;
							}
							Local_132.f_14++;
							Local_126.f_233 = 1;
							Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
						}
						unk_0xA759D3AD1579CBCB(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2));
					}
					else
					{
						Local_126.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_92(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_93(char* sParam0, char* sParam1, char* sParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_94(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

void func_95(char* sParam0, char* sParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_96(char* sParam0, char* sParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_98(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_99(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_100(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_101(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_102(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0xACF853FB3F6EA7D4(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_103(char* sParam0, int iParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_104(char* sParam0, int iParam1, int iParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_105(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

bool func_106(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0xACF853FB3F6EA7D4(sParam1);
	unk_0x511D14ED2DA887E1(iParam2);
	return unk_0x7EBCD400E7DE179C(0);
}

bool func_107(int iParam0, var uParam1, int iParam2)
{
	return func_108(iParam0, 3, uParam1, iParam2, -1);
}

int func_108(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_150(iParam1))
	{
	}
	else
	{
		iVar0 = func_409();
		iVar1 = (Global_262145.f_26736 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_148();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_129(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_409() - Global_1964421);
			func_128(iVar4, 1);
			func_126();
			func_125();
			Global_1964421 = (Global_1964421 + iVar4);
			if (iParam1 == 0)
			{
				func_119(iVar4);
				Global_2696123 = 1;
			}
			else if (iParam1 == 3)
			{
				func_112(iVar4);
				if (iVar4 >= Global_262145.f_26744)
				{
					Global_2696122 = 1;
				}
				else if (iVar4 >= Global_262145.f_26743)
				{
					Global_2696123 = 1;
				}
			}
			Var5.f_0 = func_111(iParam1);
			Var5.f_1 = func_110(iParam1, iParam3, iParam4);
			if (func_109(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x00BDC89742B13CD2(-1) + unk_0x227D0C27EB51D76C());
			Var5.f_6 = Global_1964421;
			unk_0x3537BA3FCD2A039A(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
			case 12:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_111(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("ccur_buy");
			break;
		
		case 1:
			iVar0 = joaat("ccur_sell");
			break;
		
		case 2:
			iVar0 = joaat("ccur_bet");
			break;
		
		case 3:
			iVar0 = joaat("ccur_payout");
			break;
		
		case 4:
			iVar0 = joaat("ccur_collectible_reward");
			break;
		
		case 5:
			iVar0 = joaat("ccur_membership_purchase");
			break;
		
		case 6:
			iVar0 = joaat("ccur_mission_reward");
			break;
		
		case 11:
			iVar0 = joaat("ccur_mission_reward");
			break;
		
		case 7:
			iVar0 = joaat("ccur_daily_bonus");
			break;
		
		case 8:
			iVar0 = joaat("ccur_payout");
			break;
		
		case 9:
			iVar0 = joaat("ccur_veh_purchase_reward");
			break;
		
		case 10:
			iVar0 = joaat("ccu_purchase_shop_item");
			break;
		
		case 12:
			iVar0 = joaat("ccur_mission_reward");
			break;
	}
	return iVar0;
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_118();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_116();
	if (iVar0 == 0)
	{
		func_115();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26738)
	{
		func_114();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26740)
	{
		func_113(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26740);
		func_114();
		Global_2696123 = 1;
	}
	else
	{
		func_113(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x1164A75E490C27B6(iVar0, iParam1, 1);
	}
}

void func_114()
{
	func_115();
}

void func_115()
{
	func_113(joaat("mpply_casino_chips_wontim"), unk_0x39D1D336459711BE());
}

int func_116()
{
	return func_117(joaat("mpply_casino_chips_won_gd"));
}

int func_117(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_118()
{
	return func_117(joaat("mpply_casino_chips_wontim"));
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_124();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_123();
	if (iVar0 == 0)
	{
		func_122();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26737)
	{
		func_121();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_120()
	{
		func_113(joaat("mpply_casino_chips_pur_gd"), func_120());
		func_121();
	}
	else
	{
		func_113(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_120()
{
	if (func_334(unk_0x259BE71D8A81D4FA()))
	{
		return Global_262145.f_26535;
	}
	return Global_262145.f_26534;
}

void func_121()
{
	func_122();
}

void func_122()
{
	func_113(joaat("mpply_casino_chips_purtim"), unk_0x39D1D336459711BE());
}

int func_123()
{
	return func_117(joaat("mpply_casino_chips_pur_gd"));
}

int func_124()
{
	return func_117(joaat("mpply_casino_chips_purtim"));
}

void func_125()
{
	if (BitTest(Global_1964494, 6))
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1964494, 9);
		func_374(&Global_1964497, 0, 0);
	}
}

void func_126()
{
	if (func_127())
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_1964494, true);
	}
}

bool func_127()
{
	return (BitTest(Global_1964494, 6) || BitTest(Global_1964494, 5));
}

void func_128(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0x0B0C9A0F9AAEB7F0(&Global_1964494, 6);
	Global_1964495 = iParam0;
	Global_1964496 = iParam1;
}

bool func_129(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_109(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_147())
	{
		if (*uParam0 == 0)
		{
			if (func_146() != -1)
			{
				return 0;
			}
			iVar3 = joaat("casino_chips_v0");
			iVar4 = func_111(iParam1);
			iVar5 = -22148635;
			if (func_150(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_142(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_142(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_137())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_136(func_146()))
			{
				if (func_135(func_146()) == 2)
				{
					unk_0x1F4C0FAC35E805F4(func_134(func_146()));
					if (func_150(iParam1))
					{
						unk_0x265D164F770DA9AB(iVar0, iParam2);
					}
					else
					{
						unk_0x273A6B01207A9FE5(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_130(func_146());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_150(iParam1))
		{
			unk_0x265D164F770DA9AB(iVar0, iParam2);
		}
		else
		{
			unk_0x273A6B01207A9FE5(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_130(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_133(iParam0))
		{
			if (!bVar0)
			{
				unk_0xD8EB47E09DFC393C();
			}
		}
		else if (!bVar0)
		{
			unk_0x1FDE21A286357401(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_131(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_131(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_132(&(uParam0->f_14));
	func_132(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_132(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_133(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_137()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_146();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_19()) || unk_0x34F31012FED51A0F())
		{
			if (func_141(Global_4535950[iVar2 /*85*/].f_66.f_6, Global_4535950[iVar2 /*85*/].f_66.f_4, Global_4535950[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4537456 = 1;
			}
			return 0;
		}
		if (Global_2697634)
		{
			if (Global_4535950[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4535950[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_134(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar3))
		{
			Global_4535950[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535950[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar2 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			if (bVar0)
			{
				Global_4535950[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535950[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535950[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_138(Global_4535950[iVar2 /*85*/], iVar2);
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	return 0;
}

void func_138(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<4> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = unk_0x259BE71D8A81D4FA();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam19;
	iVar1 = func_140(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_139();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_139()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_140(bool bParam0)
{
	var uVar0;
	
	if (func_20(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case joaat("service_spend_match_entry_fee"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("service_earn_pickup"):
			case joaat("service_earn_ambient_mugging"):
			case joaat("service_earn_ambient_pickup"):
			case joaat("service_earn_deathmatch_bounty"):
			case joaat("service_earn_cashing_out"):
			case joaat("service_earn_refund_arena_spec_box_entry"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("service_earn_debug"):
				return 0;
				break;
			
			case joaat("service_earn_initial_cash"):
			case joaat("service_earn_jobs"):
			case joaat("service_earn_betting"):
			case joaat("service_earn_lottery"):
			case joaat("service_earn_challenge_win"):
			case joaat("service_earn_property_sales"):
			case joaat("service_earn_vehicle_sales"):
			case joaat("service_earn_lester_target_kill"):
			case joaat("service_earn_bounty_collected"):
			case joaat("service_earn_crate_drop"):
			case joaat("service_earn_holdups"):
			case joaat("service_earn_import_export"):
			case joaat("service_earn_armored_trucks"):
			case joaat("service_earn_jobshare_cash"):
			case joaat("service_earn_not_badsport"):
			case joaat("service_earn_bank_interest"):
			case joaat("service_earn_cncw"):
			case joaat("service_earn_cncb"):
			case joaat("service_earn_job_bonus"):
			case joaat("service_earn_bend_job"):
			case joaat("service_earn_personal_vehicle"):
			case joaat("service_earn_daily_objectives"):
			case joaat("service_earn_ambient_job_plane_takedown"):
			case joaat("service_earn_ambient_job_distract_cops"):
			case joaat("service_earn_ambient_job_destroy_veh"):
			case joaat("service_earn_refund_backup_vagos"):
			case joaat("service_earn_refund_backup_lost"):
			case joaat("service_earn_refund_backup_families"):
			case joaat("service_earn_refund_hire_mugger"):
			case joaat("service_earn_refund_hire_mercenary"):
			case joaat("service_earn_refund_buy_cardropoff"):
			case joaat("service_earn_refund_heli_pickup"):
			case joaat("service_earn_refund_boat_pickup"):
			case joaat("service_earn_refund_clear_wanted"):
			case joaat("service_earn_refund_head_2_head"):
			case joaat("service_earn_refund_challenge"):
			case joaat("service_earn_refund_share_last_job"):
			case joaat("service_earn_refund_lottery"):
			case -1426920838:
			case joaat("service_earn_gangattack_pickup"):
			case joaat("service_earn_ambient_job_hot_target_deliver"):
			case joaat("service_earn_ambient_job_hot_target_kill"):
			case joaat("service_earn_ambient_job_urban_warfare"):
			case joaat("service_earn_ambient_job_checkpoint_collection"):
			case joaat("service_earn_ambient_job_time_trial"):
			case joaat("service_earn_ambient_job_challenges"):
			case joaat("service_earn_ambient_job_heli_hot_target"):
			case joaat("service_earn_ambient_job_dead_drop"):
			case joaat("service_earn_ambient_job_penned_in"):
			case joaat("service_earn_ambient_job_pass_parcel"):
			case joaat("service_earn_ambient_job_blast"):
			case joaat("service_earn_ambient_job_hot_property"):
			case joaat("service_earn_ambient_job_king"):
			case joaat("service_earn_ambient_job_beast"):
			case joaat("service_earn_boss"):
			case joaat("service_earn_goon"):
			case joaat("service_earn_boss_agency"):
			case joaat("service_earn_from_destroying_contraband"):
			case joaat("service_earn_premium_job"):
			case joaat("service_earn_from_vehicle_export"):
			case joaat("service_earn_smuggler_agency"):
			case joaat("service_earn_wage_payment_bonus"):
			case joaat("service_earn_refundammodrop"):
			case joaat("service_earn_salvage_checkpoint_collection"):
			case joaat("service_earn_job_bonus_criminal_mastermind"):
			case joaat("service_earn_job_bonus_heist_award"):
			case joaat("service_earn_job_bonus_first_time_bonus"):
			case joaat("service_earn_refund_orbital_manual"):
			case joaat("service_earn_refund_orbital_auto"):
			case joaat("service_earn_gangops_wages"):
			case joaat("service_earn_gangops_wages_bonus"):
			case joaat("service_earn_gangops_prep_participation"):
			case joaat("service_earn_gangops_setup"):
			case joaat("service_earn_gangops_setup_fail"):
			case joaat("service_earn_gangops_finale"):
			case joaat("service_earn_gangops_award_mastermind_2"):
			case joaat("service_earn_gangops_award_mastermind_3"):
			case joaat("service_earn_gangops_award_mastermind_4"):
			case joaat("service_earn_gangops_award_loyalty_award_2"):
			case joaat("service_earn_gangops_award_loyalty_award_3"):
			case joaat("service_earn_gangops_award_loyalty_award_4"):
			case joaat("service_earn_gangops_award_first_time_xm_base"):
			case joaat("service_earn_gangops_award_first_time_xm_submarine"):
			case joaat("service_earn_gangops_award_first_time_xm_silo"):
			case joaat("service_earn_gangops_award_supporting"):
			case joaat("service_earn_gangops_award_order"):
			case joaat("service_earn_gangops_elite_xm_base"):
			case joaat("service_earn_gangops_elite_xm_submarine"):
			case joaat("service_earn_gangops_elite_xm_silo"):
			case joaat("service_earn_gangops_rival_delivery"):
			case joaat("service_earn_doomsday_finale_bonus"):
			case joaat("service_earn_bounty_hunter_reward"):
			case joaat("service_earn_from_business_battle"):
			case joaat("service_earn_from_club_management_participation"):
			case joaat("service_earn_from_fmbb_phonecall_mission"):
			case joaat("service_earn_from_business_hub_sell"):
			case joaat("service_earn_from_fmbb_boss_work"):
			case joaat("service_earn_fmbb_wage_bonus"):
			case joaat("service_earn_nightclub_dancing_award"):
			case joaat("service_earn_bb_event_bonus"):
			case joaat("service_earn_arena_skill_lvl_award"):
			case joaat("service_earn_arena_career_tier_progression_1"):
			case joaat("service_earn_arena_career_tier_progression_2"):
			case joaat("service_earn_arena_career_tier_progression_3"):
			case joaat("service_earn_arena_career_tier_progression_4"):
			case joaat("service_earn_spin_the_wheel_cash"):
			case joaat("service_earn_assassinate_target_killed"):
			case joaat("service_earn_arena_war"):
			case joaat("service_earn_ambient_job_rc_time_trial"):
			case joaat("service_earn_daily_objective_event"):
			case joaat("service_earn_collectables_action_figures"):
			case joaat("service_earn_casino_mission_reward"):
			case joaat("service_earn_casino_story_mission_reward"):
			case joaat("service_earn_casino_award_mission_one_first_time"):
			case joaat("service_earn_casino_award_mission_two_first_time"):
			case joaat("service_earn_casino_award_mission_three_first_time"):
			case joaat("service_earn_casino_award_mission_four_first_time"):
			case joaat("service_earn_casino_award_mission_five_first_time"):
			case joaat("service_earn_casino_award_mission_six_first_time"):
			case joaat("service_earn_casino_award_straight_flush"):
			case joaat("service_earn_casino_award_top_pair"):
			case joaat("service_earn_casino_award_full_house"):
			case joaat("service_earn_casino_award_lucky_lucky"):
			case joaat("service_earn_casino_award_high_roller_bronze"):
			case joaat("service_earn_casino_award_high_roller_silver"):
			case joaat("service_earn_casino_award_high_roller_gold"):
			case joaat("service_earn_casino_award_high_roller_platinum"):
			case joaat("service_earn_casino_heist_setup_mission"):
			case joaat("service_earn_casino_heist_prep_mission"):
				return 1;
				break;
			
			case joaat("service_spend_airstrike"):
			case joaat("service_spend_ammo_drop"):
			case joaat("service_spend_backup_gang"):
			case joaat("service_spend_backup_heli"):
			case joaat("service_spend_boat_pickup"):
			case joaat("service_spend_bounty"):
			case joaat("service_spend_bull_shark"):
			case joaat("service_spend_car_impound"):
			case joaat("service_spend_cash_shared"):
			case joaat("service_spend_challenge_wager"):
			case joaat("service_spend_cops_turn_eye"):
			case joaat("service_spend_heli_pickup"):
			case joaat("service_spend_hire_mercenary"):
			case joaat("service_spend_hire_mugger"):
			case joaat("service_spend_locate_vehicle"):
			case joaat("service_spend_lose_wanted_level"):
			case joaat("service_spend_off_the_radar"):
			case joaat("service_spend_pegasus_delivery"):
			case joaat("service_spend_reveal_players"):
			case joaat("service_spend_vehicle_insurance"):
			case joaat("service_spend_vehicle_insurance_premium"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("service_earn_casino_heist_award_smash_n_grab"):
			case joaat("service_earn_casino_heist_award_in_plain_sight"):
			case joaat("service_earn_casino_heist_award_undetected"):
			case joaat("service_earn_casino_heist_award_all_rounder"):
			case joaat("service_earn_casino_heist_award_elite_thief"):
			case joaat("service_earn_casino_heist_award_professional"):
			case joaat("service_earn_casino_heist_finale"):
			case joaat("service_earn_casino_heist_elite_stealth"):
			case joaat("service_earn_casino_heist_elite_subterfuge"):
			case joaat("service_earn_casino_heist_elite_direct"):
			case joaat("service_earn_collectable_completed_collection"):
			case joaat("service_earn_collectables_signal_jammers_complete"):
			case joaat("service_earn_island_heist_finale"):
			case joaat("service_earn_island_heist_elite_challenge"):
			case joaat("service_earn_island_heist_award_professional"):
			case joaat("service_earn_island_heist_award_elite_thief"):
			case joaat("service_earn_island_heist_award_the_island_heist"):
			case joaat("service_earn_island_heist_award_going_alone"):
			case joaat("service_earn_island_heist_award_team_work"):
			case joaat("service_earn_island_heist_award_cat_burglar"):
			case joaat("service_earn_island_heist_award_pro_thief"):
			case joaat("service_earn_island_heist_award_mixing_it_up"):
			case joaat("service_earn_island_heist_prep"):
			case joaat("service_earn_island_heist_dj_mission"):
			case joaat("service_earn_tuner_robbery_prep"):
			case joaat("service_earn_tuner_robbery_finale"):
			case joaat("service_earn_tuner_car_club_membership"):
			case joaat("service_earn_tuner_daily_vehicle"):
			case joaat("service_earn_tuner_daily_vehicle_bonus"):
			case joaat("service_earn_tuner_award_union_depository"):
			case joaat("service_earn_tuner_award_military_convoy"):
			case joaat("service_earn_tuner_award_fleeca_bank"):
			case joaat("service_earn_tuner_award_freight_train"):
			case joaat("service_earn_tuner_award_bolingbroke_ass"):
			case joaat("service_earn_tuner_award_iaa_raid"):
			case joaat("service_earn_tuner_award_meth_job"):
			case joaat("service_earn_tuner_award_bunker_raid"):
			case joaat("service_earn_auto_shop_delivery_award"):
			case joaat("service_earn_agency_security_contract"):
			case joaat("service_earn_agency_payphone_hit"):
			case joaat("service_earn_agency_story_prep"):
			case joaat("service_earn_agency_story_finale"):
			case joaat("service_earn_fixer_award_sec_con"):
			case joaat("service_earn_fixer_award_phone_hit"):
			case joaat("service_earn_fixer_award_agency_story"):
			case joaat("service_earn_fixer_award_short_trip"):
			case joaat("service_earn_fixer_rival_delivery"):
			case joaat("service_earn_music_studio_short_trip"):
			case joaat("service_earn_from_contraband"):
			case joaat("service_earn_nclub_troublemaker"):
			case joaat("service_earn_sightseeing_reward"):
			case joaat("service_earn_ambient_job_clubhouse_contract"):
			case joaat("service_earn_ambient_job_underwater_cargo"):
			case joaat("service_earn_ambient_job_crime_scene"):
			case joaat("service_earn_ambient_job_metal_detector"):
			case joaat("service_earn_ambient_job_smuggler_plane"):
			case joaat("service_earn_ambient_job_smuggler_trail"):
			case joaat("service_earn_ambient_job_golden_gun"):
			case joaat("service_earn_ambient_job_ammunation_delivery"):
			case joaat("service_earn_ambient_job_source_research"):
			case joaat("service_earn_yohan_source_goods"):
			case joaat("service_earn_taxi_job"):
			case joaat("service_earn_daily_stash_house_participation"):
			case joaat("service_earn_daily_stash_house_completed"):
			case joaat("service_earn_ambient_job_gang_convoy"):
			case joaat("service_earn_ambient_job_shop_robbery"):
			case joaat("service_earn_ambient_job_xmas_mugger"):
			case joaat("service_earn_ambient_job_maze_bank"):
			case joaat("service_earn_acid_lab_setup_participation"):
			case joaat("service_earn_acid_lab_source_participation"):
			case joaat("service_earn_acid_lab_sell_participation"):
			case joaat("service_earn_smuggler_ops"):
			case joaat("service_earn_ambient_job_armored_truck"):
			case joaat("service_earn_ambient_job_bicycle_time_trial"):
			case joaat("service_earn_cayo_attrition_bonus_objective"):
			case joaat("service_earn_avenger_operations"):
			case joaat("service_earn_avenger_ops_bonus"):
			case joaat("service_earn_ambient_job_drug_vehicle"):
			case 649031587:
			case -1539520895:
			case 560526114:
			case -256590568:
			case -470808433:
			case 1245164680:
			case 1648751987:
			case 674719198:
			case -1433838369:
			case 1424147761:
			case 617724895:
			case 2131157548:
			case 1237940902:
			case -1688538833:
			case 918785029:
			case -1343182760:
			case -1725871206:
			case 1435585629:
			case 1851118721:
			case -1961446392:
			case -1726080156:
			case 300207193:
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("service_earn_collectable_item"):
			case joaat("service_earn_collectables_signal_jammers"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_19()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_146();
	if (iVar1 == -1)
	{
		if (!func_144(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_143(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535950[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535950[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535950[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x5E8BF7E974BEA7D7(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_147())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_19()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535950[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535950[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x79EEE2067838CC59())
		{
			unk_0xD8EB47E09DFC393C();
		}
	}
	if (bVar0 || unk_0x5156B6B1D1CD58FE(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_145(uVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_145(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_147())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = uParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = unk_0x8034325BF6D6E41F();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_138(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_134(iVar0) != 2147483647)
		{
			if (func_133(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_147()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_120() - func_123());
	iVar1 = (Global_262145.f_26736 - func_409());
	iVar2 = func_149();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_149()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_120();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0xDA91B00799F1223C())
	{
		if (unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x227D0C27EB51D76C() + unk_0x00BDC89742B13CD2(-1));
		}
	}
	else if (unk_0x0AF5E4A6C74DC312(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0xF9A874A9AA3CA007();
	}
	return iVar1;
}

int func_150(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_151()
{
	if (func_152())
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_152()
{
	return func_52(unk_0x259BE71D8A81D4FA());
}

char* func_153()
{
	if (func_152())
	{
		switch (unk_0xC5935DFB3F39785A(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_154(int iParam0)
{
	if (func_152())
	{
		if ((func_435(unk_0x259BE71D8A81D4FA()) || func_389(Local_126.f_247) == 2) || func_389(Local_126.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_131.f_4 != joaat("push"))
			{
				switch (unk_0xC5935DFB3F39785A(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000 || Local_131.f_4 == joaat("push"))
			{
				switch (unk_0xC5935DFB3F39785A(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0xC5935DFB3F39785A(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000 && Local_131.f_4 != joaat("push"))
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000 || Local_131.f_4 == joaat("push"))
		{
			switch (unk_0xC5935DFB3F39785A(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_435(unk_0x259BE71D8A81D4FA()) || func_389(Local_126.f_247) == 2) || func_389(Local_126.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_131.f_4 != joaat("push"))
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000 || Local_131.f_4 == joaat("push"))
		{
			switch (unk_0xC5935DFB3F39785A(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000 && Local_131.f_4 != joaat("push"))
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000 || Local_131.f_4 == joaat("push"))
	{
		switch (unk_0xC5935DFB3F39785A(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

char* func_155()
{
	if (func_152())
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "female_reaction_bad_var_01";
			
			case 1:
				return "female_reaction_bad_var_02";
			
			case 2:
				return "female_reaction_bad_var_03";
			
			case 3:
				return "female_reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0xC5935DFB3F39785A(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_156(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	if (func_159(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_158(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_157(3, iVar0);
		Global_1670224.f_2872[iVar0] = uParam0;
		StringCopy(&(Global_1670224.f_2872.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_2872.f_183[iVar0] = iParam3;
		Global_1670224.f_2872.f_172[iVar0] = iParam2;
		Global_1670224.f_2872.f_205[iVar0] = iParam4;
		Global_1670224.f_2872.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1670224.f_2872.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1670224.f_2872.f_420[iVar0] = iParam7;
		Global_1670224.f_2872.f_453[iVar0] = iParam8;
		Global_1670224.f_2872.f_431[iVar0] = iParam9;
		Global_1670224.f_2872.f_442[iVar0] = iParam10;
		Global_1670224.f_2872.f_464[iVar0] = iParam11;
		Global_1670224.f_2872.f_475[iVar0] = iParam12;
		Global_1670224.f_2872.f_486[iVar0] = iParam13;
		Global_1670224.f_2872.f_497[iVar0] = iParam14;
		Global_1670224.f_2872.f_508[iVar0] = iParam15;
	}
}

void func_157(int iParam0, bool bParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&(Global_1670224.f_7064[iParam0]), iParam1);
}

int func_158(int iParam0, int iParam1)
{
	return BitTest(Global_1670224.f_7064[iParam0], iParam1);
}

int func_159(var uParam0)
{
	if (unk_0xFF692AB7350A74D7(uParam0))
	{
		return 1;
	}
	else if (unk_0x1B79E937E91F40C3(uParam0, "") || unk_0x1B79E937E91F40C3(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_158(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1670224.f_1 = 1;
		func_157(7, iVar0);
		Global_1670224.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1670224.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1670224.f_4714.f_172[iVar0] = iParam2;
		Global_1670224.f_4714.f_216[iVar0] = iParam3;
		Global_1670224.f_4714.f_183[iVar0] = iParam4;
		Global_1670224.f_4714.f_194[iVar0] = iParam5;
		Global_1670224.f_4714.f_249[iVar0] = iParam6;
		Global_1670224.f_4714.f_260[iVar0] = iParam7;
		Global_1670224.f_4714.f_205[iVar0] = iParam8;
		Global_1670224.f_4714.f_314[iVar0] = iParam9;
		Global_1670224.f_4714.f_325[iVar0] = iParam10;
		Global_1670224.f_4714.f_357[iVar0] = iParam11;
		Global_1670224.f_4714.f_238[iVar0] = iParam12;
		Global_1670224.f_4714.f_271[iVar0] = iParam13;
		Global_1670224.f_4714.f_368[iVar0] = iParam14;
		Global_1670224.f_4714.f_379[iVar0] = iParam15;
		Global_1670224.f_4714.f_390[iVar0] = iParam16;
		Global_1670224.f_4714.f_227[iVar0] = iParam17;
	}
}

int func_161(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_147() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_169(iParam0))
	{
		return func_162(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_162(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_150(iParam1))
	{
	}
	else
	{
		iVar0 = func_409();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_147() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_129(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1964421 - func_409());
			if (iParam1 == 1)
			{
				func_163(iParam0);
				Global_2696122 = 1;
			}
			else if (iVar2 >= Global_262145.f_26745)
			{
				Global_2696123 = 1;
			}
			func_128(iVar2, 0);
			func_126();
			func_125();
			Global_1964421 = (Global_1964421 - iVar2);
			Var3.f_0 = func_111(iParam1);
			Var3.f_1 = func_110(iParam1, iParam3, iParam4);
			if (func_109(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x00BDC89742B13CD2(-1) + unk_0x227D0C27EB51D76C());
			Var3.f_6 = Global_1964421;
			Var3.f_7 = iParam5;
			unk_0x3537BA3FCD2A039A(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_168();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_167();
	if (iVar0 == 0)
	{
		func_166();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26537)
	{
		func_165();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_164()
	{
		func_113(-1989650268, func_164());
		func_165();
	}
	else
	{
		func_113(-1989650268, (iVar2 + iParam0));
	}
}

int func_164()
{
	return Global_262145.f_26536;
}

void func_165()
{
	func_166();
}

void func_166()
{
	func_113(1447512463, unk_0x39D1D336459711BE());
}

int func_167()
{
	return func_117(-1989650268);
}

int func_168()
{
	return func_117(1447512463);
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (func_339())
	{
		return 0;
	}
	iVar0 = func_409();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_170(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 0, -1);
}

char* func_171(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_126.f_247 == 1 || Local_126.f_247 == 5) || Local_126.f_247 == 9) || Local_126.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (unk_0xC5935DFB3F39785A(0, 4))
				{
					case 0:
						return "place_bet_small";
					
					case 1:
						return "place_bet_small_alt1";
					
					case 2:
						return "place_bet_small_alt2";
					
					case 3:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large";
				
				default:
			}
			switch (unk_0xC5935DFB3F39785A(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_172(int iParam0)
{
	Local_126.f_0 = iParam0;
}

void func_173()
{
	char* sVar0;
	
	if (BitTest(Local_126.f_250, 2))
	{
		unk_0x8744D2E3FC95740E(&(Local_126.f_250), 2);
	}
	unk_0x66EFB3D6110055C4(2, 210, 1);
	unk_0x4CC1CF98851922CE(2, 210);
	if (!BitTest(Local_126.f_250, 0))
	{
		if (unk_0x61C3701AD6D746B2(2, 210))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_250), false);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3) || func_435(unk_0x259BE71D8A81D4FA()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		unk_0xD0D00ED689D6CA81(sVar0, 0);
		if (func_301(0, -1, 0) && unk_0x38D063D8CF6D1967(sVar0))
		{
			if (!BitTest(Local_126.f_250, 1))
			{
				func_300(0, 0);
				func_298(1, sVar0, sVar0);
				func_297("BJACK_RULES");
				func_177(1, iLocal_136, 9);
				func_176(1, 1, 1, 1, 1);
				func_296(-1, 1, 1);
				func_295(func_175(iLocal_136), 0, 0);
				func_294(func_174(iLocal_136));
				unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_250), true);
			}
			func_254(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x61C3701AD6D746B2(2, 202))
		{
			unk_0xBF3D28CA44F3BE2D(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_251(1, -1);
			unk_0x633E3833FB96BCCB(sVar0);
			iLocal_136 = 1;
			Local_126.f_250 = 0;
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_250), 2);
		}
		else if (unk_0x61C3701AD6D746B2(2, 190))
		{
			iLocal_136++;
			if (iLocal_136 > 9)
			{
				iLocal_136 = 1;
			}
			unk_0x8744D2E3FC95740E(&(Local_126.f_250), 1);
		}
		else if (unk_0x61C3701AD6D746B2(2, 189))
		{
			iLocal_136 = (iLocal_136 - 1);
			if (iLocal_136 < 1)
			{
				iLocal_136 = 9;
			}
			unk_0x8744D2E3FC95740E(&(Local_126.f_250), 1);
		}
	}
}

char* func_174(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1";
		
		case 2:
			return "BJACK_RULE_2";
		
		case 3:
			return "BJACK_RULE_3";
		
		case 4:
			return "BJACK_RULE_4";
		
		case 5:
			return "BJACK_RULE_5";
		
		case 6:
			return "BJACK_RULE_6";
		
		case 7:
			return "BJACK_RULE_7";
		
		case 8:
			return "BJACK_RULE_8";
		
		case 9:
			if ((func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3) || func_435(unk_0x259BE71D8A81D4FA()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T";
		
		case 2:
			return "BJACK_RULE_2T";
		
		case 3:
			return "BJACK_RULE_3T";
		
		case 4:
			return "BJACK_RULE_4T";
		
		case 5:
			return "BJACK_RULE_5T";
		
		case 6:
			return "BJACK_RULE_6T";
		
		case 7:
			return "BJACK_RULE_7T";
		
		case 8:
			return "BJACK_RULE_8T";
		
		case 9:
			if ((func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3) || func_435(unk_0x259BE71D8A81D4FA()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23831.f_5678[0] = iParam0;
	Global_23831.f_5678[1] = iParam1;
	Global_23831.f_5678[2] = iParam2;
	Global_23831.f_5678[3] = iParam3;
	Global_23831.f_5678[4] = iParam4;
}

void func_177(int iParam0, int iParam1, int iParam2)
{
	Global_23831.f_6338 = iParam0;
	Global_23831.f_6339 = iParam1;
	Global_23831.f_6340 = iParam2;
}

void func_178(int iParam0)
{
	Global_1670224.f_1163 = iParam0;
}

void func_179(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (iParam3 == 1 || unk_0x7811C74D5B749F76(2))
	{
		*uParam2 = 0;
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(0);
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(*uParam0, "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
		}
		func_185(uParam2);
	}
	if (Global_1577937 < 2)
	{
		func_184(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			*uParam0 = unk_0x8DE4F68A9728925E("instructional_buttons");
		}
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xB750FE3C9F094356(*uParam0, "CLEAR_ALL");
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_183(unk_0xE934399D6F2C3AC5(iVar1, iVar2, 1));
						if (iVar3 < 365)
						{
							func_183(unk_0xE934399D6F2C3AC5(iVar1, iVar3, 1));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						uVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_183(unk_0xF761D79754BC3043(iVar4, uVar5, 1));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_182(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					unk_0x88F483FBD433696A(*uParam0, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(bVar0);
					func_183(&(uParam2->f_1[bVar0 /*57*/]));
					if (!unk_0xD6F9DEE4765092A9(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_183(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							unk_0xBD34A69071611974(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								unk_0x511D14ED2DA887E1(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						unk_0xCFAD3D478C87321A();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						unk_0x882AEFD55B8D51FB(&(uParam2->f_1[bVar0 /*57*/].f_32));
						unk_0x60D332F23943B34F(&(uParam2->f_1[bVar0 /*57*/].f_38));
						unk_0xCFAD3D478C87321A();
					}
					else
					{
						func_182(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (unk_0x761778199FE1211C())
					{
						unk_0x557F1E2300EF1A3E(0);
						unk_0x330108B080A2132F(365);
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar0++;
			}
			unk_0x88F483FBD433696A(*uParam0, "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4(uParam2->f_699);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x330108B080A2132F(false);
			unk_0xE6B753D52F4CA222();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0,05f;
	uParam2->f_696 = 0,045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1 && unk_0xA0C7B98BCF1EEF9E(*uParam0))
	{
		func_181(*uParam0, uParam1);
	}
	func_180();
}

void func_180()
{
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(8);
	unk_0x4EB223432F8FA0A0(9);
}

void func_181(var uParam0, var uParam1)
{
	unk_0xA91A4C18A2DB01BD(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_182(var uParam0)
{
	unk_0x882AEFD55B8D51FB(uParam0);
	unk_0xCFAD3D478C87321A();
}

void func_183(char* sParam0)
{
	unk_0xCE3E870AC37B4253(sParam0);
}

void func_184(int iParam0)
{
	Global_1577937 = iParam0;
}

void func_185(var uParam0)
{
	Global_1979636 = 0;
	uParam0->f_692 = 0;
}

int func_186(var uParam0)
{
	return (Global_1979636 || uParam0->f_692);
}

void func_187(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_188()
{
	struct<9> Var0;
	
	Var0.f_0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_189(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_689), iVar0);
	uParam3->f_1[bVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[bVar0 /*57*/].f_55 = iParam1;
	unk_0x0B0C9A0F9AAEB7F0(&(uParam3->f_690), bVar0);
	uParam3->f_693++;
}

void func_190(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_191(var uParam0)
{
	func_192(uParam0);
	uParam0->f_692 = 1;
}

void func_192(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 365;
		uParam0->f_1[iVar0 /*57*/].f_56 = 365;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1979636 = 0;
}

var func_193(bool bParam0)
{
	if (func_152())
	{
		if (!bParam0)
		{
			switch (unk_0xC5935DFB3F39785A(0, 8))
			{
				case 0:
					Local_126.f_1582 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_126.f_1582 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_126.f_1582 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_126.f_1582 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_126.f_1582 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_126.f_1582 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_126.f_1582 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_126.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0xC5935DFB3F39785A(0, 13))
		{
			case 0:
				Local_126.f_1582 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_126.f_1582 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_126.f_1582 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_126.f_1582 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_126.f_1582 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_126.f_1582 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_126.f_1582 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_126.f_1582 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_126.f_1582 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_126.f_1582 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_126.f_1582 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_126.f_1582 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_126.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_126.f_1582;
}

int func_194()
{
	if (func_195() == 0)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	return Global_1574633.f_18;
}

void func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_118();
	iVar1 = unk_0x39D1D336459711BE();
	iVar2 = func_116();
	if (iVar0 == 0)
	{
		func_115();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26738)
	{
		func_114();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26739)
	{
		func_113(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26739);
		func_114();
		Global_2696123 = 1;
	}
	else
	{
		func_113(joaat("mpply_casino_chips_won_gd"), (iVar2 - iParam0));
	}
}

int func_197(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), *uParam0);
		}
		else
		{
			return unk_0x775142054EC39277(unk_0x0728E77B2BF91D54(), *uParam0);
		}
	}
	return unk_0x775142054EC39277(unk_0x1DD05E817C89C737(), *uParam0);
}

int func_198()
{
	if ((Local_126.f_232 && Local_126.f_233) && (!Local_126.f_235 && Local_131.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_199()
{
	if (unk_0x48B835569F078653() != func_200())
	{
		return unk_0x17E5F27FA417E82E(unk_0x4470BE79F5771783(unk_0x48B835569F078653()));
	}
	return 0;
}

int func_200()
{
	return -1;
}

void func_201()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	
	if (!unk_0x6D05C5731A838CB3(2, 207))
	{
		if (bLocal_146)
		{
			func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
		}
		bLocal_146 = false;
	}
	if (!unk_0x6D05C5731A838CB3(2, 208))
	{
		if (bLocal_145)
		{
			func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
		}
		bLocal_145 = false;
	}
	if ((((Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0 && !unk_0xA43CD45F18522E3F()) && !func_343()) && !unk_0xB11671B812399BA2()) && (Local_116.f_1515[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] < 9 || !BitTest(Local_116.f_1555[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 13)))
	{
		if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 0)
		{
			if ((((unk_0x6D05C5731A838CB3(2, 207) && !unk_0x6D05C5731A838CB3(2, 208)) && !bLocal_145) && !func_67(&uLocal_147)) && !unk_0x78411E34CF90EA8C(Local_126.f_242))
			{
				if (!bLocal_146)
				{
					if (unk_0xBCF87EE3DC296C2A(0) == 4)
					{
					}
					func_305(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
					bLocal_146 = true;
				}
			}
		}
		else
		{
			if (bLocal_146)
			{
				func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
			}
			bLocal_146 = false;
		}
		if (Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((unk_0x6D05C5731A838CB3(2, 208) && !unk_0x6D05C5731A838CB3(2, 207)) && !bLocal_146) && !func_67(&uLocal_147)) && !unk_0x78411E34CF90EA8C(Local_126.f_242))
			{
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
				{
					func_305(unk_0x259BE71D8A81D4FA(), 0, 0, 0);
				}
				bLocal_145 = true;
			}
		}
		else
		{
			if (bLocal_145)
			{
				func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
			}
			bLocal_145 = false;
		}
	}
	else
	{
		if (bLocal_146 || bLocal_145)
		{
			func_305(unk_0x259BE71D8A81D4FA(), 0, 256, 0);
		}
		bLocal_146 = false;
		bLocal_145 = false;
	}
	if (bLocal_145 || bLocal_146)
	{
		unk_0x2AFB778D9C7EA690(1);
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			unk_0x0FB8E752BCC547A9(unk_0x4A8C381C258A124D(), 166, 1);
		}
		if (!unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0xCAC4020CCF361AC8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x78411E34CF90EA8C(Local_126.f_242))
		{
			Local_126.f_242 = unk_0xBB209150C6081BBE(26379945, 1);
			unk_0xA3774254665BAA82(Local_126.f_242, func_214(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, bLocal_145), func_213(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, bLocal_145), func_212(bLocal_145), 0, 1, 1, 2);
			unk_0x2A09425009DAD0F5(Local_126.f_242, "HAND_SHAKE", 0,03f);
			unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
		}
		else if (bLocal_145)
		{
			if (Local_116.f_1525[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4])
			{
				if (func_28(&(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/])) == 21 && Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!func_96("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_95("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_28(&(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!func_96("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_95("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_328("BJACK_D_HAND1", func_28(&(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/]))))
				{
					func_94("BJACK_D_HAND1", func_28(&(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_328("BJACK_D_HAND1", func_36(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/][1])))
			{
				func_94("BJACK_D_HAND1", func_36(Local_116.f_846[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = unk_0x4A1D1AB55229AAF0(Local_126.f_242);
			fVar1 = 50f;
			fVar1 = func_211(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, 1);
			fVar0 = func_209(fVar0, fVar1, 0,2f, 4);
			unk_0xA3774254665BAA82(Local_126.f_242, func_214(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, bLocal_145), func_213(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, bLocal_145), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_146)
		{
			fVar4 = unk_0x4A1D1AB55229AAF0(Local_126.f_242);
			fVar5 = 50f;
			Var6 = { unk_0x9DDBEF363FADFA4C(Local_126.f_242, 2) };
			Var7 = { 0f, 0f, 0f };
			Var8 = { -38,1166f, -0,0930717f, -102,613f };
			Var9 = { unk_0xA452B06E281A9014(Local_126.f_242) };
			Var10 = { 0f, 0f, 0f };
			Var11 = { 966,621f, 32,009f, 116,621f };
			if (Var6.f_2 < 0f)
			{
				Var6.f_2 = (Var6.f_2 + 360f);
			}
			if (!func_67(&uLocal_143))
			{
				iVar12 = unk_0x6C29A57AC29D7033(2, 30);
				bVar2 = iVar12 < 100;
				bVar3 = iVar12 > 150;
				if (bVar2 || bVar3)
				{
					func_68(&uLocal_143, 0, 0);
				}
			}
			else if (func_66(&uLocal_143, 500, 0))
			{
				func_64(&uLocal_143);
			}
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 >= 0 && Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_138 = (iLocal_138 - 1);
					if (iLocal_138 < func_208(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3))
					{
						iLocal_138 = func_208(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_138++;
					if (iLocal_138 > func_207(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3))
					{
						iLocal_138 = func_207(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_138 = 0;
			}
			Var11 = { func_214(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, 0) };
			Var8 = { func_206(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3) };
			fVar5 = func_211(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3, 0);
			if (Var8.f_2 < 0f)
			{
				Var8.f_2 = (Var8.f_2 + 360f);
			}
			Var7 = { func_204(Var6, Var8, 0,2f, 4) };
			Var10 = { func_203(Var9, Var11, 0,2f, 4) };
			if (Var7.f_2 > 180f)
			{
				Var7.f_2 = (Var7.f_2 - 360f);
			}
			else if (Var7.f_2 < -180f)
			{
				Var7.f_2 = (Var7.f_2 + 360f);
			}
			if (func_202(Var6, Var8, 10f, 0) && func_202(Var9, Var11, 0,1f, 0))
			{
				fVar4 = func_209(fVar4, fVar5, 0,2f, 4);
			}
			unk_0xA3774254665BAA82(Local_126.f_242, Var10, Var7, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0xB43467C43086A6A1("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x78411E34CF90EA8C(Local_126.f_242))
		{
			unk_0x2AFB778D9C7EA690(1);
			if (!func_67(&uLocal_147) && bLocal_137)
			{
				func_68(&uLocal_147, 0, 0);
				unk_0xDCAFFD08A08087EB("DefaultBlinkOutro", 0, 0);
			}
			else if (func_66(&uLocal_147, 100, 0) || !bLocal_137)
			{
				unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
				unk_0x85E6A1E36B5E2E4D(Local_126.f_242, 0);
				unk_0x428C32CC68809A35(1);
				func_64(&uLocal_147);
				bLocal_137 = false;
				iLocal_138 = 0;
			}
		}
	}
	if (bLocal_146 || bLocal_137)
	{
		if ((Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 >= 2 && ((!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 13) && !BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11)) || (((BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11) && unk_0x2FC2FDC413532977(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4])) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]))) && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4]), func_59(), func_14(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4, Local_116.f_1575[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4], 1), 3)))) || (BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/], 11) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 < 3))
		{
			if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
			{
				if (!func_96("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_95("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
			{
				if (!func_96("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_95("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
			{
				if (!func_96("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_95("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_328("BJACK_P_HAND1", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/]))))
			{
				func_94("BJACK_P_HAND1", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])));
			}
		}
		else if (Local_116.f_1575[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4] != (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 - (4 * Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)) && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 >= 2)
		{
			if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
			{
				if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_106("BJACK_SHOW_3", "BJACK_BJ", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/]))))
				{
					func_105("BJACK_SHOW_3", "BJACK_BJ", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
			{
				if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_106("BJACK_SHOW_3", "BJACK_7CC", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/]))))
				{
					func_105("BJACK_SHOW_3", "BJACK_7CC", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
			{
				if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
				{
					if (!func_93("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_106("BJACK_SHOW_3", "BJACK_BUSTED", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/]))))
				{
					func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
			{
				if (!func_106("BJACK_SHOW_2", "BJACK_BJ", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/]))))
				{
					func_105("BJACK_SHOW_2", "BJACK_BJ", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
			{
				if (!func_106("BJACK_SHOW_2", "BJACK_7CC", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/]))))
				{
					func_105("BJACK_SHOW_2", "BJACK_7CC", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])));
				}
			}
			else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
			{
				if (!func_106("BJACK_SHOW_2", "BJACK_BUSTED", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/]))))
				{
					func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])));
				}
			}
			else if (!func_104("BJACK_SHOW_1", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])), func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/]))))
			{
				func_103("BJACK_SHOW_1", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])), func_28(&(Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/])));
			}
		}
		else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) == 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 2)
		{
			if (!func_96("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_95("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) <= 21 && Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 == 7)
		{
			if (!func_96("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_95("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])) > 21)
		{
			if (!func_96("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_95("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_328("BJACK_P_HAND1", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/]))))
		{
			func_94("BJACK_P_HAND1", func_28(&(Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/])));
		}
	}
}

int func_202(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
		{
			if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x1D5CD3EAAA7422B0((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x1D5CD3EAAA7422B0((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (unk_0x1D5CD3EAAA7422B0((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_203(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = func_209(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_209(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_209(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_204(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.f_0 = func_205(Param0.f_0, Param1.f_0, fParam2, iParam3);
	Var0.f_1 = func_205(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_205(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_205(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x1D5CD3EAAA7422B0((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_209(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_206(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_224(iParam0) };
	Var1 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_138)
			{
				case 0:
					Var1 = { -60,84f, 0f, -87,48f };
					break;
				
				case -1:
					Var1 = { -33,84f, 0f, -51,84f };
					break;
				
				case -2:
					Var1 = { -22,68f, 0f, -58,68f };
					break;
				
				case -3:
					Var1 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_138)
			{
				case 0:
					Var1 = { -60,84f, 0f, -87,48f };
					break;
				
				case 1:
					Var1 = { -33,48f, 0f, -123,48f };
					break;
				
				case -1:
					Var1 = { -36f, 0f, -45f };
					break;
				
				case -2:
					Var1 = { -22,68f, 0f, -51,48f };
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_138)
			{
				case 0:
					Var1 = { -60,84f, 0f, -87,48f };
					break;
				
				case 1:
					Var1 = { -33,84f, 0f, -130,32f };
					break;
				
				case 2:
					Var1 = { -22,32f, 0f, -124,92f };
					break;
				
				case -1:
					Var1 = { -35,64f, 0f, -50,4f };
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_138)
			{
				case 0:
					Var1 = { -60,84f, 0f, -87,48f };
					break;
				
				case 1:
					Var1 = { -34,56f, 0f, -126f };
					break;
				
				case 2:
					Var1 = { -22,32f, 0f, -119,52f };
					break;
				
				case 3:
					Var1 = { -18,36f, 0f, -104,4f };
					break;
			}
			break;
	}
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		
		default:
	}
	return 0;
}

float func_209(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = system::pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - system::pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-system::cos(func_210((3,141593f * fParam2))) / 2f) + 0,5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (system::pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_209(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_209(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_210(float fParam0)
{
	return (fParam0 * 57,29578f);
}

float func_211(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37,8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33,8659f;
					break;
				
				case -1:
					fVar0 = 34,3684f;
					break;
				
				case -2:
					fVar0 = 26,8741f;
					break;
				
				case -3:
					fVar0 = 26,8741f;
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33,8659f;
					break;
				
				case 1:
					fVar0 = 34,3684f;
					break;
				
				case -1:
					fVar0 = 34,3684f;
					break;
				
				case -2:
					fVar0 = 26,8741f;
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33,8659f;
					break;
				
				case 1:
					fVar0 = 34,3684f;
					break;
				
				case 2:
					fVar0 = 26,8741f;
					break;
				
				case -1:
					fVar0 = 34,3684f;
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_138)
			{
				case 0:
					fVar0 = 33,8659f;
					break;
				
				case 1:
					fVar0 = 34,3684f;
					break;
				
				case 2:
					fVar0 = 26,8741f;
					break;
				
				case 3:
					fVar0 = 26,8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_212(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35,3669f;
	if (bParam0)
	{
		fVar0 = 40,5607f;
	}
	return fVar0;
}

Vector3 func_213(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return Vector(func_70(iParam1), 0f, 0f) + Vector(0f, 0,061f, -59,1316f);
	}
	else
	{
		Var0 = { func_224(iParam0) };
		return Vector(Var0.f_2, 0f, 0f) + Vector(-87,48f, 0f, -60,84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_214(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return unk_0xF10F2A2453AF1DFB(func_71(iParam1), func_70(iParam1), -0,0094f, -0,0611f, 1,5098f);
	}
	else
	{
		Var0 = { func_224(iParam0) };
		return unk_0xF10F2A2453AF1DFB(func_365(iParam0), Var0.f_2, 0,245f, 0f, 1,415f);
	}
	return 0f, 0f, 0f;
}

void func_215(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

int func_216(int iParam0)
{
	if (Local_116.f_1515[iParam0] == 2)
	{
		if (!BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5, 0))
		{
			Local_126.f_2 = { Local_116.f_1[iParam0 /*211*/] };
			unk_0x0B0C9A0F9AAEB7F0(&(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5), false);
		}
	}
	else if (Local_116.f_1515[iParam0] > 2 && BitTest(Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5, 0))
	{
		if (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 0)
		{
			if (Local_126.f_213.f_8 != Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 || (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 0 && Local_126.f_222.f_8 != Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8))
			{
				Local_126.f_213 = { Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/] };
			}
			else
			{
				if (Local_126.f_213[iLocal_141] != Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/][iLocal_141])
				{
					iLocal_140 = 0;
					iLocal_141 = 0;
					iLocal_142 = 0;
					if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
					{
						Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
					}
					Local_131.f_18 = func_424();
					Local_131.f_19 = func_199();
					Local_131.f_17 = func_197(&uLocal_127, 0, 0);
					Local_131.f_7 = func_409();
					if (Global_262145.f_26383)
					{
						unk_0xD2C8AF03369DD71B(&Local_131);
					}
					func_383(1);
					unk_0x428C32CC68809A35(1);
					return 1;
				}
				iLocal_141++;
				if (iLocal_141 >= Local_126.f_213.f_8)
				{
					iLocal_141 = 0;
				}
			}
		}
		if (Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 0)
		{
			if (Local_126.f_222.f_8 != Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/].f_8 || (Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8 > 0 && Local_126.f_213.f_8 != Local_116.f_899[unk_0x259BE71D8A81D4FA() /*9*/].f_8))
			{
				Local_126.f_222 = { Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/] };
			}
			else
			{
				if (Local_126.f_222[iLocal_142] != Local_116.f_1188[unk_0x259BE71D8A81D4FA() /*9*/][iLocal_142])
				{
					iLocal_140 = 0;
					iLocal_141 = 0;
					iLocal_142 = 0;
					if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
					{
						Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
					}
					Local_131.f_18 = func_424();
					Local_131.f_19 = func_199();
					Local_131.f_17 = func_197(&uLocal_127, 0, 0);
					Local_131.f_7 = func_409();
					if (Global_262145.f_26383)
					{
						unk_0xD2C8AF03369DD71B(&Local_131);
					}
					func_383(1);
					unk_0x428C32CC68809A35(1);
					return 1;
				}
				iLocal_142++;
				if (iLocal_142 >= Local_126.f_222.f_8)
				{
					iLocal_142 = 0;
				}
			}
		}
		if (Local_116.f_1[iParam0 /*211*/][iLocal_140] != Local_126.f_2[iLocal_140])
		{
			iLocal_140 = 0;
			iLocal_141 = 0;
			iLocal_142 = 0;
			if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
			{
				Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
			}
			Local_131.f_18 = func_424();
			Local_131.f_19 = func_199();
			Local_131.f_17 = func_197(&uLocal_127, 0, 0);
			Local_131.f_7 = func_409();
			if (Global_262145.f_26383)
			{
				unk_0xD2C8AF03369DD71B(&Local_131);
			}
			func_383(1);
			unk_0x428C32CC68809A35(1);
			return 1;
		}
		iLocal_140++;
		if (iLocal_140 >= 208)
		{
			iLocal_140 = 0;
		}
	}
	return 0;
}

void func_217()
{
	int iVar0;
	
	iVar0 = func_389(Local_126.f_247);
	if (iVar0 < 32)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_254), iVar0);
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_429())
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	if (iVar0 != func_429())
	{
		return func_330(iVar0);
	}
	return 0;
}

int func_219(int iParam0)
{
	if (func_20(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_429();
}

void func_220(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_339())
		{
			func_220(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_64(&(Local_126.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_68(&(Local_126.f_1580), 0, 0);
	}
}

int func_221()
{
	int iVar0;
	
	iVar0 = func_389(Local_126.f_247);
	if (iVar0 < 32)
	{
		return BitTest(Local_126.f_254, iVar0);
	}
	return 0;
}

char* func_222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_223()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_224(int iParam0)
{
	var uVar0;
	
	if (Local_126.f_257 == 1)
	{
		if (func_430() != func_429())
		{
			uVar0 = unk_0x8366ABB82B1ABC59(func_71(func_389(iParam0)), 1f, func_225(Global_2657971[func_430() /*465*/].f_457), 0, 0, 0);
		}
	}
	else if (func_389(iParam0) == 0 || func_389(iParam0) == 1)
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), 0, 0, 0);
	}
	else
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0xF98CC1C0E657B6CB(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x8ED7A7A44B79007B(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("h4_prop_casino_blckjack_01a");
			break;
		
		case 2:
			return joaat("h4_prop_casino_blckjack_01b");
			break;
		
		case 3:
			return joaat("h4_prop_casino_blckjack_01c");
			break;
		
		case 4:
			return joaat("h4_prop_casino_blckjack_01d");
			break;
		
		case 5:
			return joaat("h4_prop_casino_blckjack_01e");
			break;
	}
	return joaat("vw_prop_casino_blckjack_01b");
}

var func_226(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0x7A6103DCF5EE8CC3(func_223(), func_222(iParam1), func_365(iParam0), func_224(iParam0), 0,01f, 2) };
	return Var0.f_2;
}

float func_227(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xD1A6A821F5AC81DB(iParam0, 0) };
	}
	return unk_0xED977E2AE2CB16EE(Var0, Param1, iParam2);
}

Vector3 func_228(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xBE8776D2466E9EA6(func_223(), func_222(iParam1), func_365(iParam0), func_224(iParam0), 0,01f, 2) };
	return Var0;
}

int func_229()
{
	unk_0x80813AC549A1E8AE(func_59());
	unk_0x80813AC549A1E8AE(func_73());
	unk_0x80813AC549A1E8AE(func_89());
	unk_0x80813AC549A1E8AE(func_223());
	if (((unk_0xE100DD4F82A51BDE(func_59()) && unk_0xE100DD4F82A51BDE(func_73())) && unk_0xE100DD4F82A51BDE(func_89())) && unk_0xE100DD4F82A51BDE(func_223()))
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	if (func_66(&(Local_126.f_1578), 3500, 0))
	{
		func_64(&(Local_126.f_1578));
		return 1;
	}
	return 0;
}

bool func_231(int iParam0)
{
	if (Local_116.f_1600[iParam0] == func_429())
	{
		return 0;
	}
	return Local_116.f_1600[iParam0] != unk_0x259BE71D8A81D4FA();
}

void func_232(int iParam0)
{
	Global_1964433 = unk_0x39D1D336459711BE();
	Global_1964451 = iParam0;
	if (!func_240())
	{
		func_237();
	}
	if (!func_236())
	{
		func_233();
	}
}

void func_233()
{
	func_113(joaat("mpply_cas_gmblng_l24_px"), unk_0x39D1D336459711BE());
	func_235();
	func_234();
	Global_1964447 = 1;
	Global_1964442 = 0;
}

void func_234()
{
	func_113(joaat("mpply_cas_24h_gmblng_px"), unk_0x39D1D336459711BE());
}

void func_235()
{
	func_113(joaat("mpply_cas_gmblng_l24"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_1"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_2"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_3"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_4"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_5"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_6"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_7"), 0);
	func_113(joaat("mpply_cas_gmblng_l24_8"), 0);
	func_113(joaat("mpply_cas_cur_gmblng_hr"), 0);
	func_113(joaat("mpply_cas_24h_gmblng_px"), 0);
}

bool func_236()
{
	return Global_1964447;
}

void func_237()
{
	func_113(joaat("mpply_casino_gmblng_gd"), unk_0x39D1D336459711BE());
	func_239();
	func_238((unk_0x39D1D336459711BE() + 86400));
	Global_1964446 = 1;
}

void func_238(int iParam0)
{
	Global_1964441 = iParam0;
}

void func_239()
{
	func_113(joaat("mpply_cas_cur_gmblng_px"), unk_0x39D1D336459711BE());
}

bool func_240()
{
	return func_117(joaat("mpply_casino_gmblng_gd")) != 0;
}

bool func_241(int iParam0)
{
	return Local_116.f_1600[iParam0] == unk_0x259BE71D8A81D4FA();
}

void func_242()
{
	func_367(2);
	unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 185, 0);
	func_345();
	func_305(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
	func_250();
	unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4), 2);
	func_243();
}

void func_243()
{
	int iVar0;
	int iVar1;
	
	if (Global_1964451 != -1)
	{
		iVar0 = (unk_0x39D1D336459711BE() - Global_1964433);
		iVar1 = (unk_0x39D1D336459711BE() - Global_1964434);
		if (Global_1964434 == -1)
		{
			func_244(iVar0);
		}
		else
		{
			func_244(iVar1);
		}
		func_239();
		func_234();
		Global_1964433 = -1;
		Global_1964434 = -1;
		Global_1964451 = -1;
	}
}

void func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = func_249();
	Global_1964442 = (Global_1964442 + iParam0);
	func_245(iVar0, iParam0);
	func_234();
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = system::floor((system::to_float(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_248((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_117(iVar5);
		iVar0++;
	}
	iVar6 = func_247(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_246(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_248((iVar4 + iVar0));
		func_113(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = system::floor((system::to_float(iVar3) / 32f));
	iVar5 = system::ceil((system::to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	bVar6 = false;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - bVar6))
		{
			iVar8 = (iParam2 - bVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (BitTest(iParam3, bVar6))
			{
				unk_0x0B0C9A0F9AAEB7F0(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0x8744D2E3FC95740E(uParam0[(iVar4 + iVar0)], bVar1);
			}
			bVar6++;
			bVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_247(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = system::floor((system::to_float(iVar4) / 32f));
	iVar6 = system::ceil((system::to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		bVar1 = iVar8;
		while (bVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (BitTest((*uParam0)[(iVar5 + iVar0)], bVar1))
			{
				unk_0x0B0C9A0F9AAEB7F0(&uVar2, iVar7);
			}
			bVar7++;
			bVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_248(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x70E57E9927B6BA58(&cVar0);
}

int func_249()
{
	return func_117(joaat("mpply_cas_cur_gmblng_hr"));
}

void func_250()
{
	if (Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 0;
	}
}

void func_251(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_253(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		unk_0xDCFF86AAD108A201(15);
		Global_23831.f_9116 = 0;
	}
	unk_0x043244A32AD6E17D(0f);
	if (Global_23831.f_6231[iVar0])
	{
		unk_0xA790E8E6FD7393AC(9, 0);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		unk_0x633E3833FB96BCCB("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		unk_0x633E3833FB96BCCB("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_252(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	unk_0x633E3833FB96BCCB("Shared");
}

void func_252(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
		{
			unk_0xD314260005F064BF(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_253(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x76CD105BCAC6EB9F() && unk_0xE8DB952A4BA8F328())
		{
			iParam2 = unk_0xF25E5B7C1279A85B();
		}
	}
	StringCopy(&cVar0, unk_0x1AF90EB93E0012D6(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x70E57E9927B6BA58(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23831.f_6324[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23831.f_6324[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23831.f_6324[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_254(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	var uVar58;
	var uVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_253(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_290(0, bParam6))
	{
		return;
	}
	unk_0x9A122D542F2BB60E(76, 84);
	unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23831)
	{
		if (func_288(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23831 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23830;
	}
	fVar55 = (fParam5 * fVar56);
	if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
	{
		fVar57 = Global_23829;
	}
	else
	{
		fVar57 = (((Global_23829 + fVar55) + 0,034722f) + 0f);
	}
	fVar60 = 1f;
	func_286(bParam7, &uVar58, &uVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23831.f_5821 <= 1)
		{
			func_282(Global_23831.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23831.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23831.f_6331)
		{
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) == unk_0x70E57E9927B6BA58("HIDE"))
			{
				fVar49 = Global_23829;
			}
			else
			{
				if (Global_23831)
				{
					StringCopy(&cVar61, func_281(29), 64);
					StringCopy(&cVar62, func_278(29, 1), 64);
					if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
					{
						func_277(Global_23828, Global_23829, fParam5, fVar55, 0, 0, 0, 255);
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23828 + (fParam5 * 0,5f)), (Global_23829 + (fVar55 * 0,5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						unk_0xFFA2B456A81EA1EB(&cVar61, &cVar62, (Global_23828 + (fParam5 * 0,5f)), (Global_23829 + (fVar55 * 0,5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_23831.f_9086)
				{
					iVar1 = Global_23831.f_9082;
					iVar2 = Global_23831.f_9083;
					iVar3 = Global_23831.f_9084;
					iVar4 = Global_23831.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_277(Global_23828, (Global_23829 + fVar55), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23829 + fVar55) + 0,034722f) + 0f);
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_1)) != 0)
				{
					func_276();
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23831.f_74)
					{
						if (Global_23831.f_5[iVar14] == 2)
						{
							unk_0x511D14ED2DA887E1(Global_23831.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23831.f_5[iVar14] == 3)
						{
							unk_0x7DCF91CE9137DE0E(Global_23831.f_14[iVar16], Global_23831.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23831.f_5[iVar14] == 1)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 8)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23831.f_5[iVar14] == 5)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 6)
						{
							unk_0xACF853FB3F6EA7D4(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 7)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23831.f_5[iVar14] == 9)
						{
							unk_0x60D332F23943B34F(&(Global_23831.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x25DD447A6EB3A86F((Global_23828 + 0,00390625f), ((Global_23829 + fVar55) + 0,00416664f), 0);
				}
				if (Global_23831.f_6338)
				{
					func_276();
					func_274((((Global_23828 + fParam5) - 0,00390625f) - func_275("CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340)), ((Global_23829 + fVar55) + 0,00416664f), "CM_ITEM_COUNT", Global_23831.f_6339, Global_23831.f_6340);
				}
				else if (Global_23831.f_6334 > Global_23831.f_5828)
				{
					if (Global_23831.f_6337 != 0)
					{
						func_276();
						func_274((((Global_23828 + fParam5) - 0,00390625f) - func_275("CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336)), ((Global_23829 + fVar55) + 0,00416664f), "CM_ITEM_COUNT", Global_23831.f_6337, Global_23831.f_6336);
					}
				}
			}
			iVar6 = Global_23831.f_6341;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23831.f_9096)
			{
				iVar1 = Global_23831.f_9092;
				iVar2 = Global_23831.f_9093;
				iVar3 = Global_23831.f_9094;
				iVar4 = Global_23831.f_9095;
			}
			else
			{
				unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23831.f_5828 && iVar6 <= Global_23831.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23831.f_6088[iVar6])
					{
						if (Global_23831.f_5959[iVar6] && iVar6 != Global_23831.f_6341)
						{
							fVar49 = (fVar49 + 0,00277776f);
						}
						fVar54 = 0,034722f;
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar54 = Global_23831.f_6348[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar63 + ((fVar49 - fVar63) * 0,5f)) - 0,00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_23831.f_6334 > Global_23831.f_5828)
			{
				if (Global_23831.f_9101)
				{
					iVar1 = Global_23831.f_9097;
					iVar2 = Global_23831.f_9098;
					iVar3 = Global_23831.f_9099;
					iVar4 = Global_23831.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_277(Global_23828, (fVar49 + 0f), fParam5, 0,034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x32D86930C15E1159("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0,5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0,5f / fVar60));
				if (Global_23831.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "shop_arrows_upANDdown", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + 0f) + (0,034722f * 0,5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar49 = (fVar49 + (0f + 0,034722f));
			}
			if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5241)) != 0 && Global_23831.f_5323 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				if (Global_23831.f_5325 != 0)
				{
					func_288(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23828 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_273(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_273(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_23831.f_5325 != 0)
				{
					func_288(Global_23831.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_272(Global_23831.f_5325, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_5325), func_278(Global_23831.f_5325, 1), ((Global_23828 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_5247)))
				{
					fVar49 = (fVar49 + (0,00138888f * 6f));
					func_273(fVar40);
					fVar64 = 0,35f;
					if (unk_0x09112CCF7824FE38(unk_0xFACCDE46E24AD056(&(Global_23831.f_5247))) > 600)
					{
						fVar64 = (0,35f * 0,625f);
					}
					unk_0xBFE94E91C83D8794(0f, fVar64);
					unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5247));
					iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
					unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_277(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23831.f_9106)
					{
						iVar1 = Global_23831.f_9102;
						iVar2 = Global_23831.f_9103;
						iVar3 = Global_23831.f_9104;
						iVar4 = Global_23831.f_9105;
					}
					else
					{
						unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
					func_273(fVar40);
					unk_0xBFE94E91C83D8794(0f, fVar64);
					unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5247));
					unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
					fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(fVar64, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23831.f_5323 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_23831.f_5324) > Global_23831.f_5323)
					{
						StringCopy(&(Global_23831.f_5241), "", 24);
						Global_23831.f_5323 = -1;
					}
				}
			}
			else if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_5247)))
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				fVar65 = 0,35f;
				if (unk_0x09112CCF7824FE38(unk_0xFACCDE46E24AD056(&(Global_23831.f_5247))) > 600)
				{
					fVar65 = (0,35f * 0,625f);
				}
				func_273(fVar40);
				unk_0xBFE94E91C83D8794(0f, fVar65);
				unk_0x012F78DEB1F1AF9C(&(Global_23831.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23831.f_5319)
				{
					if (Global_23831.f_5253[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_23831.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23831.f_5253[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_23831.f_5262[iVar16], Global_23831.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23831.f_5253[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23831.f_5253[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_23831.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(fVar65, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(fVar65, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
				func_273(fVar40);
				unk_0xBFE94E91C83D8794(0f, fVar65);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_5247));
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_21)) != 0 && Global_4541740.f_65 != -1)
			{
				fVar49 = (fVar49 + (0,00277776f * 2f));
				fVar40 = (Global_23828 + 0,0046875f);
				if (Global_4541740.f_67 != 0)
				{
					func_288(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23828 + fVar36) + (0,00078125f * 4f)) - (0,00078125f * 1f));
				}
				func_273(fVar40);
				unk_0x012F78DEB1F1AF9C(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x83FBFC2ED3CA1611(fVar40, (fVar49 + 0,00277776f));
				unk_0xA306E6FD2A6558E6(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_277(Global_23828, (fVar49 - 0,00277776f), fParam5, 0,00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23831.f_9106)
				{
					iVar1 = Global_23831.f_9102;
					iVar2 = Global_23831.f_9103;
					iVar3 = Global_23831.f_9104;
					iVar4 = Global_23831.f_9105;
				}
				else
				{
					unk_0xA306E6FD2A6558E6(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Bgd", (Global_23828 + (fParam5 * 0,5f)), ((fVar49 + ((((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0,5f)) - 0,00138888f), fParam5, (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_273(fVar40);
				unk_0xEAEB6E7D3FAEBD5B(&(Global_4541740.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4541740.f_61)
				{
					if (Global_4541740.f_25[iVar14] == 2)
					{
						unk_0x511D14ED2DA887E1(Global_4541740.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4541740.f_25[iVar14] == 3)
					{
						unk_0x7DCF91CE9137DE0E(Global_4541740.f_34[iVar16], Global_4541740.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4541740.f_25[iVar14] == 1)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 8)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 5)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 6)
					{
						unk_0xACF853FB3F6EA7D4(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 7)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4541740.f_25[iVar14] == 9)
					{
						unk_0x60D332F23943B34F(&(Global_4541740.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x25DD447A6EB3A86F(fVar40, (fVar49 + 0,00277776f), 0);
				if (Global_4541740.f_67 != 0)
				{
					func_288(Global_4541740.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_272(Global_4541740.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0xFFA2B456A81EA1EB(func_281(Global_4541740.f_67), func_278(Global_4541740.f_67, 1), ((Global_23828 + (fVar36 * 0,5f)) + (0,00078125f * 2f)), ((fVar49 + (fVar37 * 0,5f)) - (0,00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
				}
				fVar49 = (fVar49 + (((unk_0x3D634C7F6A6D4CA4(0,35f, 0) * IntToFloat(iVar6)) + (0,00138888f * 13f)) + ((0,00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4541740.f_65 > 0)
				{
					if ((unk_0x1DD05E817C89C737() - Global_4541740.f_66) > Global_4541740.f_65)
					{
						StringCopy(&(Global_4541740.f_21), "", 16);
						Global_4541740.f_65 = -1;
					}
				}
			}
			func_269(uVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0x9A122D542F2BB60E(76, 84);
			unk_0x9C066F8D86A1A438(-0,05f, -0,05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23831.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_23831.f_5821;
			if (Global_23831.f_6332)
			{
				iVar66 = (Global_23831.f_6335 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0,034722f;
				if (Global_23831.f_6348[iVar6] != 0f)
				{
					fVar54 = Global_23831.f_6348[iVar6];
				}
				if (Global_23831.f_6332)
				{
					iVar6 = Global_23831.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23831.f_6341 && iVar9 < Global_23831.f_5828)
				{
					bVar33 = true;
					if (Global_23831.f_6342 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_23831.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0,00277776f * IntToFloat(iVar12))) + 0,00277776f);
				}
				Global_23831.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23828 + 0,0046875f);
				bVar39 = false;
				bVar32 = Global_23831.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_23831.f_9108)
					{
						unk_0xA306E6FD2A6558E6(Global_23831.f_9107, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA306E6FD2A6558E6(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0xFFA2B456A81EA1EB("CommonMenu", "Gradient_Nav", (Global_23828 + (fParam5 * 0,5f)), (((fVar57 + fVar68) + (0,00277776f * IntToFloat(iVar12))) + (fVar54 * 0,5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0, 0);
					Global_23831.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23831.f_5829)
				{
					if (BitTest(Global_23831.f_5692[iVar6], iVar8) || Global_23831.f_5659[iVar8] == 5)
					{
						if (Global_23831.f_6332)
						{
							iVar19 = Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar20 = Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar21 = Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar22 = Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)];
							iVar23 = Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)];
						}
						else
						{
							Global_23831.f_8753[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar19;
							Global_23831.f_8794[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar20;
							Global_23831.f_8835[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar21;
							Global_23831.f_8876[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar22;
							Global_23831.f_8917[((iVar9 * Global_23831.f_5829) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_23831.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_23831.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23831.f_6611[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_23831.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23828 + 0,0046875f) + Global_23831.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23831.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23831.f_5665[iVar8 + 1])
						{
							fVar44 = (Global_23831.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23828 + Global_23830) - 0,0046875f) - fVar34);
						}
						if ((Global_23831.f_5678[iVar8] && Global_23831.f_6477) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23831.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23831.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x282D5DA1EE14950F(&(Global_23831.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0xACF853FB3F6EA7D4(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x511D14ED2DA887E1(Global_23831.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
												{
													unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x43026780D77E3DC0(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0,00078125f * 4f));
													}
													if ((Global_23831.f_4984[(iVar22 + iVar14)] == 2 || Global_23831.f_4984[(iVar22 + iVar14)] == 54) || Global_23831.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar42 = (fVar42 - (0,00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - ((fVar41 + fVar42) * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
										Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_23831.f_5686[iVar69] == 2)
												{
													Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar69)] = (Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar69)] - Global_23831.f_5671[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar42 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_288(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_281(26), func_278(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_281(27), func_278(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23831.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_266(bVar32);
										}
										unk_0xEAEB6E7D3FAEBD5B(&(Global_23831.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_23831.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0xACF853FB3F6EA7D4(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x60D332F23943B34F(&(Global_2696723[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x511D14ED2DA887E1(Global_23831.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[(iVar21 + iVar27)], Global_23831.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar28)] == 2 || Global_23831.f_4984[(iVar22 + iVar28)] == 54) || Global_23831.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_288(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0,5f));
													if (func_288(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_272(Global_23831.f_4984[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23831.f_5686[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_4984[(iVar22 + iVar28)]), func_278(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_4984[(iVar22 + iVar28)]), func_278(Global_23831.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0,00078125f * 8f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
														fVar40 = (fVar40 + (0,00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x70E57E9927B6BA58(&(Global_23831.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23831.f_5686[iVar8] == 2)
										{
											unk_0x25DD447A6EB3A86F(((fVar34 + fVar40) + (0,00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0x25DD447A6EB3A86F((fVar34 + fVar40), fVar35, 0);
											if (func_265() && unk_0x486FF5D06E9659F1(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23831.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_267(0, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0,0185f;
													fVar79 = 0,004f;
													fVar80 = 0,02f;
													unk_0xBFE94E91C83D8794(0f, (0,35f * 0,7f));
													unk_0x5A18938160AE52D0(255, 255, 255, 150);
													unk_0x81645EE95A114FAE((fVar34 - (fVar80 * 0,6f)), (fVar35 + (fVar78 * 0,75f)), 0,0175f, 0,035f, system::floor(fVar76), system::floor(fVar76), system::floor(fVar76), system::floor(fVar77), 0);
													unk_0xEAEB6E7D3FAEBD5B(&cVar75);
													unk_0x511D14ED2DA887E1((Global_23831.f_6341 + iVar30));
													unk_0x25DD447A6EB3A86F((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0,00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23831.f_4984[(iVar22 + iVar14)] != 2 && Global_23831.f_4984[(iVar22 + iVar14)] != 54) && Global_23831.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0,5f));
													if (iVar5 == 1)
													{
														if (func_288(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_272(Global_23831.f_4984[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23831.f_4984[(iVar22 + iVar14)] == 30)
															{
																unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_4984[(iVar22 + iVar14)]), func_278(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (Global_23828 + (fVar36 * 0,5f)), (((fVar35 + 0,00277776f) + (fVar37 * 0,5f)) - (0,00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else if (Global_23831.f_5686[iVar8] == 2)
															{
																unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_4984[(iVar22 + iVar14)]), func_278(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0,00078125f * 8f)) + (0,00078125f * 4f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
															else
															{
																unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_4984[(iVar22 + iVar14)]), func_278(Global_23831.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0,00078125f * 12f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0,00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23831.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_266(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x511D14ED2DA887E1(Global_23831.f_4469[iVar20]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_288(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_281(26), func_278(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_281(27), func_278(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										func_264((fVar34 + fVar40), fVar35, "NUMBER", Global_23831.f_4469[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23831.f_6332)
									{
										func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23831.f_9112 && Global_23831.f_9113 == iVar6)
										{
											func_266(bVar32);
										}
										unk_0x282D5DA1EE14950F("NUMBER");
										unk_0x7DCF91CE9137DE0E(Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
										fVar41 = unk_0x43026780D77E3DC0(1);
										fVar40 = 0f;
										if (Global_23831.f_5686[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0,00078125f * 1f)));
										}
										else if (Global_23831.f_5686[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar41 * 0,5f)));
										}
										Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
										Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
										fVar41 = Global_23831.f_8999[((iVar9 * Global_23831.f_5829) + iVar8)];
									}
									if (bVar52)
									{
										if (func_288(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0,5f);
											if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_281(26), func_278(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
										if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0,5f);
											if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0xFFA2B456A81EA1EB(func_281(27), func_278(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
												}
											}
										}
									}
									func_267(bVar32, Global_23831.f_1616[iVar24], Global_23831.f_1873[iVar24], bVar53, 0, 0, 0);
									func_263((fVar34 + fVar40), fVar35, "NUMBER", Global_23831.f_4726[iVar21], Global_23831.f_4855[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_288(Global_23831.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23831.f_6332)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23831.f_5686[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0,00078125f * 1f)));
											}
											else if (Global_23831.f_5686[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0,5f) - (fVar42 * 0,5f)));
											}
											Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar40;
											Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23831.f_8958[((iVar9 * Global_23831.f_5829) + iVar8)];
											fVar42 = Global_23831.f_9040[((iVar9 * Global_23831.f_5829) + iVar8)];
										}
										if (bVar52)
										{
											if (func_288(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23831.f_5686[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0,5f);
												if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_272(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_281(26), func_278(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
											if (func_288(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0,5f);
												if (func_288(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_272(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0xFFA2B456A81EA1EB(func_281(27), func_278(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_288(Global_23831.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_272(Global_23831.f_4984[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0xFFA2B456A81EA1EB(func_281(Global_23831.f_4984[iVar22]), func_278(Global_23831.f_4984[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0,5f)), ((fVar35 - 0,00277776f) + (fVar54 * 0,5f)), (fVar36 * func_262(Global_23831.f_4984[iVar22])), (fVar37 * func_262(Global_23831.f_4984[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23831.f_5659[iVar8] == 5)
						{
							if (Global_23831.f_5671[iVar8] > 0,05f)
							{
								fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0,05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
							if (Global_23831.f_5678[iVar8])
							{
								if (func_288(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23831.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23831.f_8737[iVar9] = iVar6;
						Global_23831.f_6343 = iVar6;
						iVar9++;
						if (Global_23831.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23831.f_6348[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_23831.f_6348[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0,034722f);
						}
					}
					if (!Global_23831.f_6331)
					{
						Global_23831.f_6088[iVar6] = 1;
						if (Global_23831.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23831.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23831.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23831.f_6331)
			{
				Global_23831.f_6333 = ((fVar57 + fVar67) + (0,00277776f * IntToFloat(iVar12)));
				Global_23831.f_6336 = iVar11;
				Global_23831.f_6334 = iVar10;
				Global_23831.f_6331 = 1;
			}
		}
		if (!Global_23831.f_6332)
		{
			Global_23831.f_6335 = iVar9;
			Global_23831.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23831.f_6479 = fVar49;
	Global_23831.f_6481 = unk_0x1DD05E817C89C737();
	unk_0x043244A32AD6E17D(Global_23831.f_6479);
	if (!Global_23831.f_9081)
	{
		func_255(0);
	}
	Global_23831.f_9081 = 0;
	if (bParam2)
	{
		unk_0x4EB223432F8FA0A0(10);
	}
	unk_0x4EB223432F8FA0A0(6);
	unk_0x4EB223432F8FA0A0(7);
	unk_0x4EB223432F8FA0A0(9);
	unk_0x4EB223432F8FA0A0(8);
	if (bParam0)
	{
		func_178(1);
	}
	unk_0x90B531766063C5CD();
}

void func_255(int iParam0)
{
	if (func_261())
	{
		return;
	}
	if (!Global_20930.f_1 == 1)
	{
		if (func_260(0))
		{
			func_256(iParam0);
		}
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 2);
	}
}

void func_256(int iParam0)
{
	if (func_261())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_259())
		{
			func_258(1, 1);
		}
		else
		{
			func_258(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 16);
	}
	if (unk_0xE87F28FD4128D063())
	{
		unk_0x0F15249D24BC5ADA(0);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 30);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 30);
	}
	if (!func_257())
	{
		Global_20930.f_1 = 3;
	}
}

int func_257()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_258(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_260(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				unk_0x78C4EBB0251847E2(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			unk_0x6B7EA0158D00C600(Global_20867);
		}
		else
		{
			unk_0x6B7EA0158D00C600(Global_20858);
		}
	}
}

bool func_259()
{
	return BitTest(Global_1956920, 5);
}

int func_260(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_261()
{
	return BitTest(Global_1956920, 19);
}

float func_262(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0,85f;
			break;
	}
	return 1f;
}

void func_263(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x7DCF91CE9137DE0E(uParam3, uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

void func_264(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(iParam3);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, iParam4);
}

var func_265()
{
	return unk_0x087611B922B50F13(-1762644250);
}

void func_266(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA306E6FD2A6558E6(Global_23831.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA306E6FD2A6558E6(Global_23831.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
}

void func_267(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_268(Global_23831.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA306E6FD2A6558E6(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xA306E6FD2A6558E6(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
		else
		{
			unk_0x5A18938160AE52D0(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x5A18938160AE52D0(0, 0, 0, system::floor((255f * 0,8f)));
		}
		else
		{
			unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	else
	{
		unk_0x5A18938160AE52D0(155, 155, 155, 255);
	}
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0x2873B596E322DCDA(1);
	if (bParam5)
	{
		unk_0xBFE94E91C83D8794(0f, 0,425f);
		unk_0x8413CD3BCEEAD8DC(4);
	}
	else if (bParam6)
	{
		unk_0xBFE94E91C83D8794(0f, 0,425f);
		unk_0x8413CD3BCEEAD8DC(6);
	}
	else
	{
		unk_0x8413CD3BCEEAD8DC(0);
	}
	unk_0xE05EB1EAE7CCDC59(0f, 1f);
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_268(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_269(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_253(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_290(bParam4, bParam8))
	{
		return;
	}
	if (func_270())
	{
		return;
	}
	if (unk_0xA43CD45F18522E3F())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_17(unk_0x259BE71D8A81D4FA(), 0))
		{
			return;
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x66DA7155B68E7638() == 0 || unk_0xA43CD45F18522E3F())
		{
			return;
		}
	}
	if (Global_23831.f_5326 != 0)
	{
		if (unk_0x7811C74D5B749F76(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (Global_23831.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xE934399D6F2C3AC5(2, Global_23831.f_5625[iVar1], 1), 64);
				}
				else if (Global_23831.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23831.f_5328[iVar1 /*16*/]), unk_0xF761D79754BC3043(2, Global_23831.f_5640[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_23831.f_5327 = 0;
		}
		if (!Global_23831.f_5327)
		{
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x74BF156C860580D4((1f - (Global_23831.f_5684 / 100f)));
			unk_0xE6B753D52F4CA222();
			if (unk_0x761778199FE1211C())
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x557F1E2300EF1A3E(1);
				unk_0xE6B753D52F4CA222();
			}
			iVar1 = 0;
			while (iVar1 < Global_23831.f_5326)
			{
				if (unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar1 /*4*/])) != unk_0x70E57E9927B6BA58("PREV"))
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x330108B080A2132F(iVar1);
					func_183(&(Global_23831.f_5328[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 14 && unk_0x70E57E9927B6BA58(&(Global_23831.f_5553[iVar2 /*4*/])) == unk_0x70E57E9927B6BA58("PREV"))
					{
						func_183(&(Global_23831.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23831.f_5610[bVar1] == -1)
					{
						func_182(&(Global_23831.f_5553[bVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23831.f_5610[bVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[bVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xBD34A69071611974(iVar3, 70);
						}
						else
						{
							unk_0x511D14ED2DA887E1(iVar3);
						}
						unk_0xCFAD3D478C87321A();
					}
					if (unk_0x761778199FE1211C())
					{
						if (Global_23831.f_5625[bVar1] != 365 && BitTest(Global_23831.f_5655, bVar1))
						{
							unk_0x557F1E2300EF1A3E(1);
							unk_0x330108B080A2132F(Global_23831.f_5625[bVar1]);
						}
						else
						{
							unk_0x557F1E2300EF1A3E(0);
							unk_0x330108B080A2132F(365);
						}
					}
					unk_0xE6B753D52F4CA222();
				}
				bVar1++;
			}
			if (unk_0x70E57E9927B6BA58(&(Global_4541740.f_16)) != unk_0x70E57E9927B6BA58(""))
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x330108B080A2132F(Global_23831.f_5326);
				func_183(&Global_4541740);
				if (Global_4541740.f_20 == -1)
				{
					func_182(&(Global_4541740.f_16));
				}
				else
				{
					iVar4 = Global_23831.f_5610[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iVar4, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iVar4);
					}
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
			}
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x330108B080A2132F(false);
			unk_0x330108B080A2132F(false);
			unk_0x330108B080A2132F(false);
			unk_0x330108B080A2132F(80);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23831.f_5685)
			{
				unk_0x330108B080A2132F(true);
			}
			else
			{
				unk_0x330108B080A2132F(false);
			}
			unk_0xE6B753D52F4CA222();
			Global_23831.f_5327 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_23831.f_5326)
		{
			if (Global_23831.f_5610[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x330108B080A2132F(bVar1);
					unk_0x882AEFD55B8D51FB(&(Global_23831.f_5553[bVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xBD34A69071611974(iParam2, 70);
					}
					else
					{
						unk_0x511D14ED2DA887E1(iParam2);
					}
					unk_0xCFAD3D478C87321A();
					unk_0xE6B753D52F4CA222();
				}
			}
			bVar1++;
		}
		if (Global_4541740.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x88F483FBD433696A(Global_23831.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x330108B080A2132F(bVar1);
				unk_0x882AEFD55B8D51FB(&(Global_4541740.f_16));
				if (bParam5)
				{
					unk_0xBD34A69071611974(iParam2, 70);
				}
				else
				{
					unk_0x511D14ED2DA887E1(iParam2);
				}
				unk_0xCFAD3D478C87321A();
				unk_0xE6B753D52F4CA222();
			}
		}
		unk_0x9A122D542F2BB60E(76, 66);
		unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23831.f_9116)
			{
				unk_0x36A472841BBC9D4A(15, 0f, -0,0375f);
				Global_23831.f_9116 = 1;
			}
		}
		else if (Global_23831.f_9116)
		{
			unk_0xDCFF86AAD108A201(15);
			Global_23831.f_9116 = 0;
		}
		unk_0x90B531766063C5CD();
		if (Global_23831.f_5658)
		{
			unk_0x9A122D542F2BB60E(82, 66);
			unk_0x9C066F8D86A1A438(0f, 0f, 0f, 0f);
			unk_0x6D16B99FEB0AFFF1(Global_23831.f_6263[iVar0 /*10*/], Global_23831.f_5656, Global_23831.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x90B531766063C5CD();
		}
		else
		{
			unk_0xA91A4C18A2DB01BD(Global_23831.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_270()
{
	struct<3> Var0;
	
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	if (func_271())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x78C4EBB0251847E2(&Var0);
		if (Global_20875 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_271()
{
	if (unk_0x486FF5D06E9659F1(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_272(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA306E6FD2A6558E6(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			unk_0xA306E6FD2A6558E6(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_273(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0xFB193A91887FFAB1(2);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59(fParam0, ((Global_23828 + Global_23830) - 0,0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_274(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xEAEB6E7D3FAEBD5B(sParam2);
	unk_0x511D14ED2DA887E1(uParam3);
	unk_0x511D14ED2DA887E1(uParam4);
	unk_0x25DD447A6EB3A86F(fParam0, fParam1, 0);
}

float func_275(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_276();
	unk_0x282D5DA1EE14950F(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x511D14ED2DA887E1(uParam2);
	return unk_0x43026780D77E3DC0(1);
}

void func_276()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA306E6FD2A6558E6(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23831.f_9091)
	{
		iVar0 = Global_23831.f_9087;
		iVar1 = Global_23831.f_9088;
		iVar2 = Global_23831.f_9089;
		iVar3 = Global_23831.f_9090;
	}
	unk_0x8413CD3BCEEAD8DC(0);
	unk_0xBFE94E91C83D8794(0f, 0,35f);
	unk_0x5A18938160AE52D0(iVar0, iVar1, iVar2, iVar3);
	unk_0xE05EB1EAE7CCDC59((Global_23828 + 0,0046875f), ((Global_23828 + Global_23830) - 0,0046875f));
	unk_0xEAF65721ACB2FDFB(0);
	unk_0xB91BC43E3A58E2C8(0, 0, 0, 0, 0);
	unk_0xBE923A0FDD781C93(0, 0, 0, 0, 0);
}

void func_277(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x81645EE95A114FAE((fParam0 + (fParam2 * 0,5f)), (fParam1 + (fParam3 * 0,5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_278(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_7680[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var2 = { func_280(unk_0x259BE71D8A81D4FA()) };
			if (unk_0xE460920F3D75C34D(&Var2, &uVar1))
			{
				return func_279(&uVar1);
			}
		}
		else
		{
			return func_279(&(Global_23831.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_279(var uParam0)
{
	return uParam0;
}

struct<13> func_280(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

char* func_281(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6623[iParam0 /*16*/])))
	{
		if (unk_0x70E57E9927B6BA58(&(Global_23831.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var1 = { func_280(unk_0x259BE71D8A81D4FA()) };
			unk_0xE460920F3D75C34D(&Var1, &uVar0);
			return func_279(&uVar0);
		}
		else
		{
			return func_279(&(Global_23831.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_282(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23831.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23831.f_5821 >= 128)
	{
		return;
	}
	if (Global_23831.f_5823 >= 256)
	{
		return;
	}
	if (Global_23831.f_6346 < Global_23831.f_6344)
	{
		return;
	}
	if (Global_23831.f_5821 != iParam0)
	{
		Global_23831.f_5821 = iParam0;
		Global_23831.f_5822 = 0;
	}
	iVar0 = Global_23831.f_5659[Global_23831.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23831.f_5822 < 4 && iVar0 != 1)
		{
			Global_23831.f_5822++;
			iVar0 = Global_23831.f_5659[Global_23831.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]), sParam1, 24);
	if (!unk_0xD6F9DEE4765092A9(sParam1) && !unk_0x6BA487C862DB8DDF(sParam1))
	{
	}
	Global_23831.f_1616[Global_23831.f_5823] = bParam3;
	Global_23831.f_1873[Global_23831.f_5823] = iParam4;
	Global_23831.f_2130[Global_23831.f_5823] = iParam6;
	Global_23831.f_5823++;
	if (!bParam3)
	{
		func_285(Global_23831.f_5821, 1);
	}
	else
	{
		func_285(Global_23831.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_284(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
		if (Global_23831.f_5678[Global_23831.f_5822])
		{
			func_288(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23831.f_5671[Global_23831.f_5822])
		{
			Global_23831.f_5671[Global_23831.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_283(&(Global_23831.f_79[Global_23831.f_5823 /*6*/]));
			if (fVar4 > Global_23831.f_6348[iParam0])
			{
				Global_23831.f_6348[iParam0] = fVar4;
			}
		}
	}
	unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_5692[iParam0]), Global_23831.f_5822);
	Global_23831.f_5822++;
	Global_23831.f_6347 = 1;
	Global_23831.f_6345 = (Global_23831.f_5823 - 1);
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = iParam2;
}

float func_283(char* sParam0)
{
	if (!unk_0x6BA487C862DB8DDF(sParam0))
	{
	}
	return unk_0x3D634C7F6A6D4CA4(0,35f, 0);
}

float func_284(char* sParam0)
{
	if (!unk_0xFF692AB7350A74D7(sParam0))
	{
		if (unk_0x70E57E9927B6BA58(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_267(0, 1, 0, 0, 0, 0, 0);
	unk_0x282D5DA1EE14950F(sParam0);
	return unk_0x43026780D77E3DC0(1);
}

void func_285(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = system::floor((system::to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_23831.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_286(bool bParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		unk_0x5949C3C031610A30(uParam1, uParam2);
		return;
	}
	unk_0x21564F65F997D833(uParam1, uParam2);
	fVar0 = system::to_float(*uParam1);
	fVar1 = system::to_float(*uParam2);
	fVar2 = unk_0x4AE9635532D92447(0);
	if (func_287(*uParam1, *uParam2))
	{
		*fParam3 = 1f;
		*uParam1 = system::round((fVar1 * fVar2));
		*uParam2 = system::round(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*uParam1 = system::round((fVar0 / *fParam3));
	*uParam2 = system::round((fVar1 / *fParam3));
}

bool func_287(int iParam0, int iParam1)
{
	return (system::to_float(iParam0) / system::to_float(iParam1)) > 3,5f;
}

int func_288(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_281(iParam0), 64);
	StringCopy(&cVar1, func_278(iParam0, bParam1), 64);
	if (unk_0x70E57E9927B6BA58(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_286(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { unk_0x32D86930C15E1159(&cVar0, &cVar1) };
		fVar6 = (func_289(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x70E57E9927B6BA58(&(Global_23831.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x485ADB2D2728D748() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1,33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23830)
			{
				*fParam4 = (*fParam4 * (Global_23830 / *fParam3));
				*fParam3 = Global_23830;
			}
		}
		return 1;
	}
	return 0;
}

float func_289(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0,5f;
			break;
		
		case 64:
			return 0,8f;
			break;
	}
	return 1f;
}

int func_290(bool bParam0, bool bParam1)
{
	if (Global_2672855.f_1728.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x9390801B06EE998F() || (func_292(8, -1) && func_291() != 65)) || (unk_0x05AA183DA1344935() != 0 && !bParam1)) || (unk_0x3555462DB47B7AB1() && !bParam0)) || unk_0x2B8BAF9BA2A3D36B()) || Global_79650) || Global_23831.f_9115) || unk_0xB11671B812399BA2()) || Global_101585.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_291()
{
	return Global_1575011;
}

var func_292(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_293(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xE934399D6F2C3AC5(2, iParam0, 1);
	if (Global_23831.f_5326 >= 14)
	{
		StringCopy(&Global_4541740, sVar0, 64);
		StringCopy(&(Global_4541740.f_16), sParam1, 16);
		Global_4541740.f_20 = iParam2;
		return;
		return;
	}
	unk_0x8744D2E3FC95740E(&(Global_23831.f_5655), Global_23831.f_5326);
	StringCopy(&(Global_23831.f_5328[Global_23831.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23831.f_5553[Global_23831.f_5326 /*4*/]), sParam1, 16);
	Global_23831.f_5610[Global_23831.f_5326] = iParam2;
	Global_23831.f_5625[Global_23831.f_5326] = iParam0;
	Global_23831.f_5640[Global_23831.f_5326] = 32;
	Global_23831.f_5326++;
}

void func_294(char* sParam0)
{
	if (Global_23831.f_5322 >= 3 || Global_23831.f_5319 >= 4)
	{
		return;
	}
	Global_23831.f_5253[Global_23831.f_5319] = 1;
	Global_23831.f_5319++;
	StringCopy(&(Global_23831.f_5270[Global_23831.f_5322 /*16*/]), sParam0, 64);
	Global_23831.f_5322++;
}

void func_295(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_5241), sParam0, 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = iParam1;
	Global_23831.f_5324 = unk_0x1DD05E817C89C737();
	Global_23831.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
}

void func_296(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23831.f_6342 = iParam0;
	Global_23831.f_6477 = iParam2;
	if (Global_23831.f_6342 < Global_23831.f_6341)
	{
		Global_23831.f_6341 = Global_23831.f_6342;
	}
	else if ((Global_23831.f_6332 && Global_23831.f_6342 > Global_23831.f_6343) || (!Global_23831.f_6332 && Global_23831.f_6342 >= (Global_23831.f_6341 + Global_23831.f_5828)))
	{
		iVar0 = Global_23831.f_6341;
		while (iVar0 <= Global_23831.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23831.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23831.f_5828 && Global_23831.f_6341 < 128)
		{
			Global_23831.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23831.f_6341;
			while (iVar0 <= Global_23831.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23831.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23831.f_5241), "", 24);
		StringCopy(&(Global_4541740.f_21), "", 16);
	}
}

void func_297(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23831.f_1), sParam0, 16);
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_298(int iParam0, char* sParam1, char* sParam2)
{
	Global_23831 = iParam0;
	func_299(29, sParam1, sParam2);
}

void func_299(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_23831.f_6623[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23831.f_7680[iParam0 /*16*/]), sParam2, 64);
}

void func_300(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23831.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23831.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696723[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23831.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23831.f_5692[iVar0] = 0;
		Global_23831.f_5830[iVar0] = 0;
		Global_23831.f_5959[iVar0] = 0;
		Global_23831.f_6482[iVar0] = 0f;
		Global_23831.f_6088[iVar0] = 0;
		Global_23831.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23831.f_5659[iVar0] = 0;
		Global_23831.f_5671[iVar0] = 0f;
		Global_23831.f_5665[iVar0] = -1f;
		Global_23831.f_5678[iVar0] = 0;
		Global_23831.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23831.f_5553[iVar0 /*4*/]), "", 16);
		Global_23831.f_5610[iVar0] = -1;
		Global_23831.f_5625[iVar0] = 365;
		Global_23831.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23831.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23831.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23831.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4541740.f_16), "", 16);
	Global_4541740.f_20 = -1;
	Global_23831 = 0;
	Global_23831.f_5821 = 0;
	Global_23831.f_5822 = 0;
	Global_23831.f_5823 = 0;
	Global_23831.f_5825 = 0;
	Global_23831.f_5826 = 0;
	Global_23831.f_5827 = 0;
	Global_23831.f_5824 = 0;
	Global_23831.f_6477 = 0;
	Global_23831.f_6617 = 0;
	Global_23831.f_6342 = 0;
	Global_23831.f_6341 = 0;
	Global_23831.f_6343 = 0;
	StringCopy(&(Global_23831.f_5241), "", 24);
	Global_23831.f_5319 = 0;
	Global_23831.f_5320 = 0;
	Global_23831.f_5321 = 0;
	Global_23831.f_5322 = 0;
	Global_23831.f_5323 = 0;
	Global_23831.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_5325 = 0;
	StringCopy(&(Global_4541740.f_21), "", 16);
	Global_4541740.f_61 = 0;
	Global_4541740.f_62 = 0;
	Global_4541740.f_63 = 0;
	Global_4541740.f_64 = 0;
	Global_4541740.f_65 = 0;
	Global_4541740.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4541740.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4541740.f_67 = 0;
	StringCopy(&(Global_23831.f_1), "", 16);
	Global_23831.f_5677 = 0f;
	Global_23831.f_74 = 0;
	Global_23831.f_75 = 0;
	Global_23831.f_76 = 0;
	Global_23831.f_77 = 0;
	Global_23831.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23831.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_6347 = 0;
	Global_23831.f_6346 = 0;
	Global_23831.f_6344 = 0;
	Global_23831.f_6345 = 0;
	Global_23831.f_5326 = 0;
	Global_23831.f_5327 = 0;
	Global_23831.f_5828 = 10;
	Global_23831.f_5829 = 0;
	Global_23831.f_6479 = 0f;
	Global_23831.f_6480 = 0f;
	Global_23831.f_6331 = 0;
	Global_23831.f_6332 = 0;
	Global_23831.f_6333 = 0f;
	Global_23831.f_6334 = 0;
	Global_23831.f_6336 = 0;
	Global_23831.f_6335 = 0;
	Global_23831.f_6337 = 0;
	Global_23831.f_6338 = 0;
	Global_23831.f_6339 = 0;
	Global_23831.f_6340 = 0;
	Global_23831.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23831.f_6611[iVar0] = -1;
		Global_23831.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23831.f_5684 = 0f;
	Global_23831.f_5655 = 0;
	Global_23831.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23831.f_6618)
	{
		Global_23831.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23831.f_9091 = 0;
	Global_23831.f_9086 = 0;
	Global_23831.f_9096 = 0;
	Global_23831.f_9101 = 0;
	Global_23831.f_9106 = 0;
	Global_23831.f_9108 = 0;
	Global_23831.f_9114 = 0;
	Global_23828 = 0,05f;
	Global_23829 = 0,05f;
	Global_23830 = 0,225f;
	fVar2 = unk_0x4AE9635532D92447(0);
	if (bParam0)
	{
		Global_23830 = (0,225f * (1,777778f / fVar2));
	}
	else if (fVar2 < 1,77777f)
	{
		Global_23830 = (0,225f * (1,777778f / fVar2));
	}
	else
	{
		Global_23830 = 0,225f;
	}
}

bool func_301(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_253(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23831.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xD6F9DEE4765092A9(&(Global_23831.f_6238[iVar0 /*4*/])))
	{
		unk_0xF2CB0224D3BE0B42(&(Global_23831.f_6238[iVar0 /*4*/]), 9);
		Global_23831.f_6231[iVar0] = 1;
		if (!unk_0xCC2EFE4B1D0EE422(&(Global_23831.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xD0D00ED689D6CA81("CommonMenu", 0);
	unk_0xD0D00ED689D6CA81("Shared", 1);
	if (!unk_0x38D063D8CF6D1967("Shared"))
	{
		bVar1 = false;
	}
	Global_23831.f_6217[iVar0] = 1;
	if (!unk_0x38D063D8CF6D1967("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0xD0D00ED689D6CA81("MPShopSale", 0);
		Global_23831.f_6224[iVar0] = 1;
		if (!unk_0x38D063D8CF6D1967("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23831.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_302(&(Global_23831.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_302(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				*uParam0 = unk_0x8DE4F68A9728925E(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
					{
						uParam0->f_8 = unk_0x1DD05E817C89C737();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_8 = unk_0x1DD05E817C89C737();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xA0C7B98BCF1EEF9E(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_303(int iParam0)
{
	Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 = iParam0;
	Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 = func_389(iParam0);
}

bool func_304()
{
	return Global_4537448 == 1;
}

void func_305(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x828F3FAE99DA791A())
		{
			unk_0x6FF322107B12B749(0);
		}
	}
	if (func_315())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x76CD105BCAC6EB9F())
	{
		uVar0 = iParam2;
		unk_0x4686BC3BFDBB5348(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
		{
			bVar1 = false;
		}
		if (!func_194())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x762604C40829DB72(iParam0) && (unk_0x75EAB09F5E974116(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0x56E414973C2A8C0E(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x76CD105BCAC6EB9F())
				{
					unk_0x6E2FA5434737D22F(1);
				}
				else if (bVar14 || ((!func_17(unk_0x259BE71D8A81D4FA(), 0) && !func_314()) && !func_313(unk_0x259BE71D8A81D4FA())))
				{
					unk_0x4285E11B28063EE0(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !bVar19)
					{
						unk_0x6E2FA5434737D22F(0);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_310(0, 0, 0);
					if (bVar25)
					{
						unk_0xE3F88173F42C071B();
					}
				}
				if (!func_309(uVar27) && !unk_0xB431D60610E7F85F(uVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(uVar27, true, 0);
					}
				}
				if (!unk_0xA3736D76B0E93E93(uVar27))
				{
					if (!bVar21)
					{
						unk_0x5D7CD709B34C90F0(uVar27, false);
					}
					unk_0x11C125313CB8ADA2(uVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x5D7CD709B34C90F0(uVar27, false);
				}
				unk_0x3F58BFCF656F0DF1(uVar27, true);
				unk_0x2B52F77101390E6F(iParam0, 0);
				unk_0x6C4F5AA91D39455C(iParam0, 0);
				if (unk_0x4CEC77F224BCD884(uVar27) && unk_0x69CD279BFCFE278E(uVar27))
				{
					unk_0xAF8337BF5A296283(uVar27);
				}
				unk_0x9FF00EA9A61211D2(uVar27, 1);
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_308();
					func_307();
				}
				if (unk_0x705A7AB2D4BC0A9B())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0x787F8EE1F6FBDC6D())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_309(iVar27) && !unk_0xB431D60610E7F85F(iVar27))
				{
					if (!bVar22)
					{
						unk_0x44C48AC14D3C09ED(iVar27, !bVar15, 0);
					}
					if (!unk_0xA3736D76B0E93E93(iVar27))
					{
						if (!bVar21)
						{
							unk_0x5D7CD709B34C90F0(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x11C125313CB8ADA2(iVar27, 1);
						}
					}
					if (func_306(Global_4718592.f_185586))
					{
						unk_0x5D7CD709B34C90F0(iVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x2B52F77101390E6F(iParam0, 0);
				}
				else
				{
					unk_0x2B52F77101390E6F(iParam0, 1);
				}
				unk_0x3F58BFCF656F0DF1(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0xBFD01C2045360289(iVar27) && !unk_0x7F420695E3F776FB(iVar27, 0))
					{
						unk_0x19626F992DC71FB9(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0x4686BC3BFDBB5348(iParam0, bParam1, iVar28);
		}
	}
}

bool func_306(int iParam0)
{
	return iParam0 == 17;
}

void func_307()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_308()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x9B5C1660CCDF7189(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_310(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1C2F771CDC87A3A5(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xFC8BFE4B41177C22(iParam1))
		{
			if (unk_0x501EBB0523078750(iParam1))
			{
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_312();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x07938654FF332D78(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), true);
			}
		}
		if (func_17(unk_0x259BE71D8A81D4FA(), 0))
		{
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
		}
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_311(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_311(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, 1);
	}
}

void func_312()
{
	int iVar0;
	
	if (!unk_0xAD15761928FCF79C())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = unk_0xBCF87EE3DC296C2A(iVar0);
				iVar0++;
			}
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), false);
		}
	}
}

int func_313(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_314())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_314()
{
	return BitTest(Global_2621446, 3);
}

int func_315()
{
	if (BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_316()
{
	if (!Global_2672855.f_990.f_10)
	{
		Global_2672855.f_990.f_10 = 1;
	}
}

void func_317(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_318(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_318(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_319(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_318(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x75EAB09F5E974116(unk_0xB6B621402486C3E4()))
	{
		return 0;
	}
	if (func_260(0))
	{
		return 0;
	}
	if (unk_0xFD216000DC314A92())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44799[iVar0 /*32*/] == 1 && Global_44799[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44799[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44799[iVar0 /*32*/].f_5 = 1;
			Global_44799[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44799[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44799[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_33, 26);
}

void func_321(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x486FF5D06E9659F1(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x3555462DB47B7AB1())
	{
		if (!*uParam0 == -1)
		{
			func_317(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44799[iVar0 /*32*/])
		{
			Global_44799[iVar0 /*32*/] = 1;
			Global_44799[iVar0 /*32*/].f_1 = Global_45000;
			Global_45000++;
			Global_44799[iVar0 /*32*/].f_4 = 0;
			Global_44799[iVar0 /*32*/].f_29 = 0;
			Global_44799[iVar0 /*32*/].f_5 = 0;
			Global_44799[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44799[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44799[iVar0 /*32*/].f_6 = iParam3;
			Global_44799[iVar0 /*32*/].f_31 = unk_0x8F76B2250AC806FA();
			Global_44799[iVar0 /*32*/].f_7 = 0;
			Global_44799[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xD6F9DEE4765092A9(sParam4))
			{
				Global_44799[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44799[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44799[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44799[iVar0 /*32*/].f_12 = 0;
				Global_44799[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_44799[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_322(int iParam0)
{
	if (func_323(iParam0, 1))
	{
		return Global_1887305[func_219(iParam0) /*610*/].f_10.f_430;
	}
	return -1;
}

int func_323(int iParam0, bool bParam1)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_324(iParam0))
		{
			return 0;
		}
	}
	return func_20(Global_1887305[iParam0 /*610*/].f_10);
}

int func_324(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_20(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_325()
{
	if (((((((((func_341("BJACK_USED") || func_341("CAS_MG_CBAN")) || func_341("CAS_MG_CTIME")) || func_328("CAS_MG_MEMB2", func_329(1))) || func_341("CAS_MG_SUITE2")) || func_341("CAS_MG_NOCHIPS2")) || func_341("CAS_MG_LOWCHIPS2")) || func_341("CAS_MG_NOCHIPS6")) || func_341("CAS_MG_LOWCHIPS6")) || func_341("BJACK_NA"))
	{
		return 1;
	}
	return 0;
}

void func_326()
{
	if (!unk_0x0AF5E4A6C74DC312(func_329(0), 0, 1, 0, -1, 0))
	{
		func_215("MAITRD_M_D0E", -1);
	}
	else if (func_330(unk_0x259BE71D8A81D4FA()))
	{
	}
	else if (BitTest(Global_1943520.f_5, 31))
	{
	}
	else if (Global_4537448 != 0)
	{
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_1943520.f_5), 30);
	}
}

void func_327(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x511D14ED2DA887E1(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_328(char* sParam0, int iParam1)
{
	unk_0x39DCBE5519BD783A(sParam0);
	unk_0x511D14ED2DA887E1(iParam1);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_329(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_330(int iParam0)
{
	if (iParam0 == func_429())
	{
		return 0;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 18);
}

bool func_331()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_268.f_409.f_1, 18);
}

int func_332()
{
	return Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_10;
}

int func_333(bool bParam0)
{
	return func_323(unk_0x259BE71D8A81D4FA(), bParam0);
}

int func_334(int iParam0)
{
	if (iParam0 != func_429())
	{
		return Global_1845281[iParam0 /*883*/].f_268.f_409 != 0;
	}
	return 0;
}

int func_335()
{
	if (func_338() <= 0)
	{
		return 0;
	}
	if (func_337() <= 0)
	{
		return 1;
	}
	if (func_336())
	{
		return 2;
	}
	return 3;
}

bool func_336()
{
	return Global_1964440 != 0;
}

int func_337()
{
	return (Global_262145.f_26739 + func_116());
}

int func_338()
{
	return (Global_262145.f_26740 - func_116());
}

bool func_339()
{
	return func_335() != 3;
}

void func_340(char* sParam0)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 1, 1, -1);
}

bool func_341(char* sParam0)
{
	unk_0x39DCBE5519BD783A(sParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

int func_342(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0xA737C76A9908948A(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_343()
{
	return unk_0x05AA183DA1344935() != 0;
}

int func_344()
{
	if (Global_4521801.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_345()
{
	if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 != -1)
	{
		Local_126.f_232 = 0;
		Local_126.f_233 = 0;
		Local_126.f_235 = 0;
		Local_126.f_252 = 0;
		Local_125[unk_0x259BE71D8A81D4FA() /*8*/] = 0;
		Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_1 = 0;
		Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_2 = 0;
		Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_3 = -1;
		Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 = -1;
		Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5 = 0;
	}
}

bool func_346()
{
	return Global_2738934.f_6962;
}

int func_347()
{
	if (((func_348() != -1 && func_348() != 28) && func_348() != 17) && func_348() != 12)
	{
		return 1;
	}
	return 0;
}

int func_348()
{
	return Global_1057440;
}

bool func_349()
{
	return BitTest(Global_2684504.f_2, 11);
}

bool func_350()
{
	return Global_2684504.f_693;
}

int func_351(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	iVar0 = func_353(iParam0);
	iVar1 = func_352(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_45036[iVar1 /*5*/].f_3;
}

int func_352(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_45036[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_353(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_45036[iVar0 /*5*/].f_1)
		{
			return Global_45036[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_354()
{
	int iVar0;
	
	if (func_323(unk_0x259BE71D8A81D4FA(), 1))
	{
		iVar0 = func_332();
		if (func_21(iVar0, 1, 1) && BitTest(Global_1845281[iVar0 /*883*/].f_268.f_409.f_3, 6))
		{
			return 1;
		}
		if ((func_357(unk_0x259BE71D8A81D4FA(), 0) && func_355(unk_0x259BE71D8A81D4FA())) || func_425(unk_0x259BE71D8A81D4FA()))
		{
			return 1;
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_356(iParam0, 9);
	}
	return 0;
}

var func_356(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_357(int iParam0, int iParam1)
{
	if (func_20(iParam0))
	{
		if (Global_1887305[iParam0 /*610*/].f_10.f_33 != -1 || (iParam1 && Global_1887305[iParam0 /*610*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_358()
{
	if (func_435(unk_0x259BE71D8A81D4FA()) && func_430() != func_429())
	{
		if ((BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 1) || BitTest(Global_1943520.f_6, 10)) || Global_2657971[func_430() /*465*/].f_457 != Global_1964424)
		{
			return 0;
		}
	}
	return 1;
}

bool func_359(int iParam0, struct<3> Param1, float fParam2)
{
	return func_360(unk_0xD1A6A821F5AC81DB(iParam0, 1), unk_0xCFC0C995455A6204(iParam0), Param1, fParam2);
}

bool func_360(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	var uVar1;
	
	Var0 = { unk_0xF10F2A2453AF1DFB(0f, 0f, 0f, uParam1, 0f, 1f, 0f) };
	uVar1 = func_361(func_362(Var0), func_362(Param2 - Param0));
	return unk_0x42CDD13001C98400(uVar1) <= fParam3;
}

float func_361(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_362(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = system::vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_363(int iParam0)
{
	if (Local_126.f_257 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966,9982f, 31,2594f, 116,2281f;
			
			case 1:
				return 966,8203f, 31,9305f, 116,2222f;
			
			case 2:
				return 967,2217f, 32,4899f, 116,2216f;
			
			case 3:
				return 967,8962f, 32,6604f, 116,218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148,367f, 269,0835f, -51,7879f;
			
			case 1:
				return 1148,345f, 269,7643f, -51,7876f;
			
			case 2:
				return 1148,821f, 270,2321f, -51,7708f;
			
			case 3:
				return 1149,495f, 270,2401f, -51,7632f;
			
			case 4:
				return 1152,317f, 267,4195f, -51,8003f;
			
			case 5:
				return 1152,337f, 266,7202f, -51,7913f;
			
			case 6:
				return 1151,849f, 266,2183f, -51,7916f;
			
			case 7:
				return 1151,182f, 266,2501f, -51,7864f;
			
			case 8:
				return 1128,713f, 262,8658f, -51,0035f;
			
			case 9:
				return 1129,446f, 262,8649f, -51,0121f;
			
			case 10:
				return 1129,932f, 262,3822f, -51,0027f;
			
			case 11:
				return 1129,899f, 261,6921f, -51,0422f;
			
			case 12:
				return 1143,738f, 247,8562f, -51,034f;
			
			case 13:
				return 1144,459f, 247,8673f, -51,0229f;
			
			case 14:
				return 1144,951f, 247,3612f, -51,015f;
			
			case 15:
				return 1144,913f, 246,663f, -51,0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_364(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	return system::vdist2(unk_0xD1A6A821F5AC81DB(iParam0, iParam3), Param1) <= (fParam2 * fParam2);
}

Vector3 func_365(int iParam0)
{
	var uVar0;
	
	if (Local_126.f_257 == 1)
	{
		if (func_430() != func_429())
		{
			uVar0 = unk_0x8366ABB82B1ABC59(func_71(func_389(iParam0)), 1f, func_225(Global_2657971[func_430() /*465*/].f_457), 0, 0, 0);
		}
	}
	else if (func_389(iParam0) == 0 || func_389(iParam0) == 1)
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), 0, 0, 0);
	}
	else
	{
		uVar0 = unk_0x8366ABB82B1ABC59(func_71(func_389(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
	}
	if (unk_0xFC8BFE4B41177C22(uVar0) && unk_0xF98CC1C0E657B6CB(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x1D49B6C92B9A5B1C(iVar0, unk_0x365DC1E8054AF31A(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_366(int iParam0)
{
	return Global_101585.f_392 == iParam0;
}

void func_367(int iParam0)
{
	Local_126.f_1 = iParam0;
}

void func_368(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_220(&(Local_125[iParam0 /*8*/]), 0);
	Local_125[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_369()
{
	int iVar0;
	
	if (Local_126.f_257 == 1)
	{
		if (!unk_0xFC8BFE4B41177C22(Local_126.f_537))
		{
			if (func_430() != func_429())
			{
				iVar0 = func_225(Global_2657971[func_430() /*465*/].f_457);
				unk_0xEC9DAA34BBB4658C(iVar0);
				if (!unk_0x6252BC0DD8A320DB(iVar0))
				{
					return 0;
				}
				Local_126.f_537 = unk_0x4E55EAB577C13329(iVar0, func_71(0), 0, 0, 1);
				unk_0x62C438C53BB57AFD(Local_126.f_537, func_71(0), 0, 0, 1);
				unk_0x5C96CEA06531AB03(Local_126.f_537, func_70(0));
				unk_0xDEFDEE8D4FA47138(Local_126.f_537, func_370(func_430()));
				unk_0x5D7CD709B34C90F0(Local_126.f_537, true);
				unk_0x55098D9E9AD58806(iVar0);
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
{
	if (func_373(iParam0))
	{
		return 1;
	}
	else if (func_372(iParam0))
	{
		return 2;
	}
	else if (func_371(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_371(int iParam0)
{
	if (iParam0 != func_429())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 21);
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_429())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 20);
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_429())
	{
		return BitTest(Global_1845281[iParam0 /*883*/].f_268.f_409.f_1, 19);
	}
	return 0;
}

void func_374(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x76CD105BCAC6EB9F() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x7E3F74F641EE6B27();
		}
		else
		{
			*uParam0 = unk_0x0728E77B2BF91D54();
		}
	}
	else
	{
		*uParam0 = unk_0x1DD05E817C89C737();
	}
	uParam0->f_1 = 1;
}

int func_375()
{
	if (Global_2672855.f_990.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_376(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		
		case 1:
			if ((func_379(unk_0x259BE71D8A81D4FA(), 1) || func_379(unk_0x259BE71D8A81D4FA(), 2)) || func_378())
			{
				func_220(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_379(unk_0x259BE71D8A81D4FA(), 1) || func_379(unk_0x259BE71D8A81D4FA(), 2)) || func_378())
			{
				func_220(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_377())
			{
				func_220(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_377()
{
	if ((((func_379(unk_0x259BE71D8A81D4FA(), 4) || func_379(unk_0x259BE71D8A81D4FA(), 5)) || func_379(unk_0x259BE71D8A81D4FA(), 6)) || func_379(unk_0x259BE71D8A81D4FA(), 7)) || func_378())
	{
		return 1;
	}
	return 0;
}

int func_378()
{
	if (func_66(&(Local_126.f_1580), 3500, 0))
	{
		func_64(&(Local_126.f_1580));
		return 1;
	}
	return 0;
}

int func_379(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return BitTest(Local_116.f_1477[iParam0], iVar0);
}

void func_380(int iParam0, int iParam1)
{
	Global_23692.f_9 = iParam0;
	Global_23692.f_10 = iParam1;
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		func_382(1);
		func_256(1);
	}
	if (!unk_0xEF37E704F02B50F3() && !unk_0x4D9174D8796EA622())
	{
		unk_0x6C978B200DAA54DE();
		unk_0xD4510218399ED105(0);
		unk_0xD6D50527C75F8C6C(1);
		unk_0x66EFB3D6110055C4(2, 200, 1);
		unk_0x66EFB3D6110055C4(2, 199, 1);
		unk_0x4CC1CF98851922CE(0, 200);
		unk_0x4CC1CF98851922CE(2, 200);
		unk_0x4CC1CF98851922CE(0, 199);
		unk_0x4CC1CF98851922CE(2, 199);
		unk_0x4CC1CF98851922CE(0, 201);
		unk_0x4CC1CF98851922CE(0, 202);
		unk_0x4CC1CF98851922CE(0, 187);
	}
}

void func_382(bool bParam0)
{
	if (bParam0)
	{
		if (func_349())
		{
			Global_2684504.f_41 = 1;
		}
	}
	else
	{
		Global_2684504.f_41 = 0;
	}
}

void func_383(bool bParam0)
{
	char* sVar0;
	
	if (Local_126.f_1 > 2 && unk_0xBCF87EE3DC296C2A(0) != 4)
	{
		if (((((!func_388() && !func_387()) && !func_386()) && !func_385()) && !func_82(unk_0x259BE71D8A81D4FA())) && !unk_0x705A7AB2D4BC0A9B())
		{
			func_305(unk_0x259BE71D8A81D4FA(), 1, 0, 0);
		}
		func_250();
	}
	if (Local_126.f_1 > 2)
	{
		func_250();
	}
	if (BitTest(Local_126.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_389(Local_126.f_247) == 2 || func_389(Local_126.f_247) == 3) || func_435(unk_0x259BE71D8A81D4FA()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_251(1, -1);
		unk_0x633E3833FB96BCCB(sVar0);
		iLocal_136 = 1;
		Local_126.f_250 = 0;
	}
	if (unk_0x78411E34CF90EA8C(Local_126.f_242))
	{
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
		unk_0x85E6A1E36B5E2E4D(Local_126.f_242, 0);
		bLocal_137 = false;
		iLocal_138 = 0;
	}
	if (Local_126.f_259 != -1)
	{
		func_317(&(Local_126.f_259));
		Local_126.f_259 = -1;
	}
	Local_126.f_244 = 0;
	Local_126.f_253 = 0;
	Local_126.f_252 = 0;
	Local_126.f_232 = 0;
	Local_126.f_233 = 0;
	Local_126.f_234 = 0;
	Local_126.f_235 = 0;
	Local_126.f_243 = 0;
	Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_345();
	}
	Local_132.f_4 = func_409();
	Local_132.f_5 = func_197(&uLocal_129, 0, 0);
	if (Local_126.f_1 > 2)
	{
		if (Global_262145.f_26389)
		{
			unk_0xD905BB02623EB466(&Local_132);
		}
	}
	if (bParam0)
	{
		Local_126.f_255 = unk_0xBC5D9A293974F095(func_365(Local_126.f_247), func_224(Local_126.f_247), 2, 0, 0, 1065353216, 0, 1065353216);
		unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), Local_126.f_255, func_223(), func_384(Local_126.f_247), 2f, -2f, 13, 16, 1148846080, 0);
		unk_0xE7101255AD6F1952(Local_126.f_255);
	}
	if (!bParam0)
	{
		unk_0x8744D2E3FC95740E(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4), 2);
	}
	if (bParam0 || Local_126.f_1 > 2)
	{
		func_243();
	}
	func_367(10);
	func_172(0);
}

char* func_384(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_385()
{
	if (unk_0x486FF5D06E9659F1(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return Global_1575083;
}

int func_387()
{
	if (func_195() == 3 || func_195() == 2)
	{
		return 1;
	}
	return 0;
}

int func_388()
{
	if (func_195() == 1 || func_195() == 4)
	{
		return 1;
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_390()
{
	struct<7> Var0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (((func_366(joaat("rm_GamingFloor_02")) || func_366(joaat("rm_GamingFloor_03"))) || func_435(unk_0x259BE71D8A81D4FA())) && !func_408())
	{
		iLocal_134 = 1;
		if (!bLocal_133)
		{
			bLocal_133 = (func_418() && func_407());
		}
	}
	else
	{
		if (iLocal_134)
		{
			func_420();
			func_405();
			iLocal_134 = 0;
		}
		return;
	}
	if (!Global_1683951.f_824)
	{
		iVar1 = 0;
		while (iVar1 < unk_0x703C4F7316B7195D(1))
		{
			if (unk_0x4BC3E5D2FB0A1665(1, iVar1) == 174)
			{
				if (unk_0xFCEF367B86651ED3(1, iVar1, &Var0, 7))
				{
					if (Var0.f_0 == -725328141)
					{
						if (((unk_0xCCD470854FB0E643(Var0.f_1) && Var0.f_3 >= 0) && Var0.f_3 < 224) && func_404(Var0.f_4, Local_126.f_236) != 0)
						{
							if (Var0.f_5)
							{
								if (Var0.f_3 >= 0 && Var0.f_3 < 44)
								{
									Local_126.f_260[Var0.f_3] = Var0.f_4;
								}
							}
							else
							{
								Local_126.f_305[Var0.f_3] = Var0.f_4;
								if (Var0.f_6)
								{
									func_403(Var0.f_3);
								}
								else
								{
									func_402(Var0.f_3);
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_126.f_257)
	{
		if (iVar2 != iLocal_139 && iVar2 != Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4)
		{
		}
		else
		{
			Var3 = { func_71(iVar2) };
			Var3.f_2 = (Var3.f_2 + 0,914f);
			bVar4 = false;
			if (func_54(iVar2, Local_126.f_257))
			{
				bVar4 = true;
			}
			Var8 = { 0f, 0f, func_70(iVar2) };
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar10 = Local_116.f_1600[(iVar2 * 4 + iVar9)];
				if (iVar10 < 0 || ((!func_366(joaat("rm_GamingFloor_02")) && !func_366(joaat("rm_GamingFloor_03"))) && !func_435(unk_0x259BE71D8A81D4FA())))
				{
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_22(iVar2, iVar5, iVar9, 1);
						if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
						{
							if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_648[iVar6]) > 0)
							{
								unk_0xC1DAC4DA85BB166D(Local_126.f_648[iVar6], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_648[iVar6])), 0f, 0,1f, 0)), 1);
							}
							else
							{
								unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
							}
						}
						if (Local_126.f_305[iVar6] != -1)
						{
							Local_126.f_305[iVar6] = -1;
						}
						if (func_401(iVar6))
						{
							func_402(iVar6);
						}
						iVar6 = func_22(iVar2, iVar5, iVar9, 0);
						if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
						{
							if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_648[iVar6]) > 0)
							{
								unk_0xC1DAC4DA85BB166D(Local_126.f_648[iVar6], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_648[iVar6])), 0f, 0,1f, 0)), 1);
							}
							else
							{
								unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
							}
						}
						if (Local_126.f_305[iVar6] != -1)
						{
							Local_126.f_305[iVar6] = -1;
						}
						if (func_401(iVar6))
						{
							func_402(iVar6);
						}
						iVar5++;
					}
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, iVar5)]))
						{
							if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, iVar5)]) > 0)
							{
								unk_0xC1DAC4DA85BB166D(Local_126.f_538[func_400(iVar2, iVar9, iVar5)], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, iVar5)])), 0f, 0,1f, 0)), 1);
							}
							else
							{
								unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, iVar5)]));
							}
						}
						iVar5++;
					}
				}
				else
				{
					iVar5 = 0;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_22(iVar2, iVar5, iVar9, 0);
						uVar7 = func_399(Local_116.f_899[iVar10 /*9*/][iVar5], 1);
						if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
						{
							if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
							{
								if ((((iVar9 == 0 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_7(iVar2), 3)) || (iVar9 == 1 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_6(iVar2), 3))) || (iVar9 == 2 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_5(iVar2), 3))) || (iVar9 == 3 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_4(iVar2), 3)))
								{
									if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
									{
										iVar12 = 0;
										while (iVar12 < 7)
										{
											iVar13 = func_22(iVar2, iVar12, iVar9, 0);
											if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar13]))
											{
												iVar11 = iVar12;
											}
											iVar12++;
										}
										if (iVar5 == iVar11)
										{
											if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]) && !unk_0xA3736D76B0E93E93(Local_126.f_648[iVar6]))
											{
												unk_0x4D306DD94DD6FDBA(Local_126.f_648[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
											}
										}
										else if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
										{
											unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
											Local_126.f_305[iVar6] = -1;
										}
									}
									else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
									{
										if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
										{
											unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
											Local_126.f_305[iVar6] = -1;
										}
									}
								}
								else if (!unk_0xD6F9DEE4765092A9(uVar7))
								{
									Local_126.f_305[iVar6] = -1;
									if (!unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
									{
										if ((((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]))) && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_23(iVar2, iVar9), 3)) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206)) && iVar5 == 1)
										{
										}
										else
										{
											if (func_404(Local_116.f_899[iVar10 /*9*/][iVar5], Local_126.f_236) != 0)
											{
												Local_126.f_648[iVar6] = unk_0x43AFC452F25F3A2F(func_404(Local_116.f_899[iVar10 /*9*/][iVar5], Local_126.f_236), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 0)), 0, 0, 1, 0);
												unk_0x62C438C53BB57AFD(Local_126.f_648[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 0)), 0, 0, 1);
												unk_0xCF39804E8C88080E(Local_126.f_648[iVar6], Var8 + func_397(iVar5, iVar9, 0, func_401(iVar6)), 2, 1);
											}
											Jump @2170; //curOff = 1875
											if (unk_0x4B423FAA24E8ABF0(Local_126.f_648[iVar6]) != func_404(Local_116.f_899[iVar10 /*9*/][iVar5], Local_126.f_236))
											{
												unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
											}
											else if ((((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]))) && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_23(iVar2, iVar9), 3)) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206)) && iVar5 == 1)
											{
												unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
											}
											else if (unk_0xA3736D76B0E93E93(Local_126.f_648[iVar6]))
											{
												unk_0x837D67618BF89034(Local_126.f_648[iVar6], 0, 1);
												unk_0x62C438C53BB57AFD(Local_126.f_648[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 0)), 0, 0, 1);
												unk_0xCF39804E8C88080E(Local_126.f_648[iVar6], Var8 + func_397(iVar5, iVar9, 0, func_401(iVar6)), 2, 1);
											}
											Jump @2915; //curOff = 2170
											if (Local_126.f_305[iVar6] != -1)
											{
												if (!unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
												{
													Local_126.f_648[iVar6] = unk_0x43AFC452F25F3A2F(func_404(Local_126.f_305[iVar6], Local_126.f_236), Var3, 0, 0, 1, 0);
													if (((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]))) && !unk_0x5B9219522937741D(Local_126.f_648[iVar6])) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
													{
														if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_23(iVar2, iVar9), 3))
														{
															unk_0x4D306DD94DD6FDBA(Local_126.f_648[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
														}
														else
														{
															unk_0x4D306DD94DD6FDBA(Local_126.f_648[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
														}
													}
												}
												else if (unk_0x4B423FAA24E8ABF0(Local_126.f_648[iVar6]) != func_404(Local_126.f_305[iVar6], Local_126.f_236))
												{
													unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
													Local_126.f_305[iVar6] = -1;
													func_402(iVar6);
												}
												else if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
												{
													if (!unk_0x5B9219522937741D(Local_126.f_648[iVar6]) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
													{
														unk_0x4D306DD94DD6FDBA(Local_126.f_648[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
													}
													if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
													{
														if (unk_0xA3736D76B0E93E93(Local_126.f_648[iVar6]))
														{
															unk_0x837D67618BF89034(Local_126.f_648[iVar6], 0, 1);
															unk_0x62C438C53BB57AFD(Local_126.f_648[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 0)), 0, 0, 1);
															unk_0xCF39804E8C88080E(Local_126.f_648[iVar6], Var8 + func_397(iVar5, iVar9, 0, func_401(iVar6)), 2, 1);
														}
													}
												}
											}
											else if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
											{
												if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
												{
													unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
													Local_126.f_305[iVar6] = -1;
													func_402(iVar6);
												}
											}
										}
										iVar5++;
										if (Local_125[iVar10 /*8*/].f_1 > 0)
										{
											iVar14 = Local_125[iVar10 /*8*/].f_1;
											if (BitTest(Local_125[iVar10 /*8*/], 10))
											{
												iVar14 = (Local_125[iVar10 /*8*/].f_1 / 2);
											}
											if (!unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 0)]))
											{
												if (func_396(iVar14, bVar4) != 0)
												{
													Local_126.f_538[func_400(iVar2, iVar9, 0)] = unk_0x43AFC452F25F3A2F(func_396(iVar14, bVar4), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 0, iVar9, bVar4)), 0, 0, 1, 0);
													unk_0x62C438C53BB57AFD(Local_126.f_538[func_400(iVar2, iVar9, 0)], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 0, iVar9, bVar4)), 0, 0, 1);
													unk_0xCF39804E8C88080E(Local_126.f_538[func_400(iVar2, iVar9, 0)], Var8 + func_394(iVar14, 0, iVar9, bVar4), 2, 1);
													if (!unk_0xD6F9DEE4765092A9(func_393(iVar14)))
													{
														unk_0xBD618A73193F9982(-1, func_393(iVar14), Local_126.f_538[func_400(iVar2, iVar9, 0)], "dlc_vw_table_games_sounds", 0, 0);
													}
												}
											}
											else if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 0)]) != 255)
											{
												unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 0)]));
											}
											if (BitTest(Local_125[iVar10 /*8*/], 10))
											{
												if (!unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 1)]))
												{
													if (func_396(iVar14, bVar4) != 0)
													{
														Local_126.f_538[func_400(iVar2, iVar9, 1)] = unk_0x43AFC452F25F3A2F(func_396(iVar14, bVar4), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 1, iVar9, bVar4)), 0, 0, 1, 0);
														unk_0x62C438C53BB57AFD(Local_126.f_538[func_400(iVar2, iVar9, 1)], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 1, iVar9, bVar4)), 0, 0, 1);
														unk_0xCF39804E8C88080E(Local_126.f_538[func_400(iVar2, iVar9, 1)], Var8 + func_394(iVar14, 1, iVar9, bVar4), 2, 1);
														if (!unk_0xD6F9DEE4765092A9(func_393(iVar14)))
														{
															unk_0xBD618A73193F9982(-1, func_393(iVar14), Local_126.f_538[func_400(iVar2, iVar9, 1)], "dlc_vw_table_games_sounds", 0, 0);
														}
													}
												}
												else if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 1)]) != 255)
												{
													unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 1)]));
												}
											}
										}
										else
										{
											if (unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 0)]))
											{
												if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 0)]) > 0)
												{
													unk_0xC1DAC4DA85BB166D(Local_126.f_538[func_400(iVar2, iVar9, 0)], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 0)])), 0f, 0,1f, 0)), 1);
												}
												else
												{
													unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 0)]));
												}
											}
											if (unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 1)]))
											{
												if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 1)]) > 0)
												{
													unk_0xC1DAC4DA85BB166D(Local_126.f_538[func_400(iVar2, iVar9, 1)], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 1)])), 0f, 0,1f, 0)), 1);
												}
												else
												{
													unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 1)]));
												}
											}
										}
										iVar5 = 0;
										iVar5 = 0;
										while (iVar5 < 7)
										{
											iVar6 = func_22(iVar2, iVar5, iVar9, 1);
											sVar7 = func_399(Local_116.f_1188[iVar10 /*9*/][iVar5], 1);
											if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
											{
												if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
												{
													if ((((iVar9 == 0 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_7(iVar2), 3)) || (iVar9 == 1 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_6(iVar2), 3))) || (iVar9 == 2 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_5(iVar2), 3))) || (iVar9 == 3 && unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_4(iVar2), 3)))
													{
														if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206) || unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
														{
															if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
															{
																unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
																Local_126.f_305[iVar6] = -1;
															}
														}
													}
													else if (!unk_0xD6F9DEE4765092A9(sVar7))
													{
														Local_126.f_305[iVar6] = -1;
														if (!unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
														{
															if (func_404(Local_116.f_1188[iVar10 /*9*/][iVar5], Local_126.f_236) != 0)
															{
																Local_126.f_648[iVar6] = unk_0x43AFC452F25F3A2F(func_404(Local_116.f_1188[iVar10 /*9*/][iVar5], Local_126.f_236), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 1)), 0, 0, 1, 0);
																unk_0x62C438C53BB57AFD(Local_126.f_648[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 1)), 0, 0, 1);
																unk_0xCF39804E8C88080E(Local_126.f_648[iVar6], Var8 + func_397(iVar5, iVar9, 1, func_401(iVar6)), 2, 1);
															}
														}
														else if (unk_0x4B423FAA24E8ABF0(Local_126.f_648[iVar6]) != func_404(Local_116.f_1188[iVar10 /*9*/][iVar5], Local_126.f_236))
														{
															unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
														}
														else if (unk_0xA3736D76B0E93E93(Local_126.f_648[iVar6]))
														{
															unk_0x837D67618BF89034(Local_126.f_648[iVar6], 0, 1);
															unk_0x62C438C53BB57AFD(Local_126.f_648[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 1)), 0, 0, 1);
															unk_0xCF39804E8C88080E(Local_126.f_648[iVar6], Var8 + func_397(iVar5, iVar9, 1, func_401(iVar6)), 2, 1);
														}
													}
													else if (Local_126.f_305[iVar6] != -1)
													{
														if (!unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
														{
															Local_126.f_648[iVar6] = unk_0x43AFC452F25F3A2F(func_404(Local_126.f_305[iVar6], Local_126.f_236), Var3, 0, 0, 1, 0);
															if (((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]))) && !unk_0x5B9219522937741D(Local_126.f_648[iVar6])) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
															{
																unk_0x4D306DD94DD6FDBA(Local_126.f_648[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
															}
														}
														else if (unk_0x4B423FAA24E8ABF0(Local_126.f_648[iVar6]) != func_404(Local_126.f_305[iVar6], Local_126.f_236))
														{
															unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
															Local_126.f_305[iVar6] = -1;
															func_402(iVar6);
														}
														else if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
														{
															if (!unk_0x5B9219522937741D(Local_126.f_648[iVar6]) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
															{
																unk_0x4D306DD94DD6FDBA(Local_126.f_648[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
															}
															if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
															{
																if (unk_0xA3736D76B0E93E93(Local_126.f_648[iVar6]))
																{
																	unk_0x837D67618BF89034(Local_126.f_648[iVar6], 0, 1);
																	unk_0x62C438C53BB57AFD(Local_126.f_648[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_398(iVar5, iVar9, 1)), 0, 0, 1);
																	unk_0xCF39804E8C88080E(Local_126.f_648[iVar6], Var8 + func_397(iVar5, iVar9, 1, func_401(iVar6)), 2, 1);
																}
															}
														}
													}
													else if (iVar6 >= 0 && iVar6 < (56 * Local_126.f_257))
													{
														if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar6]))
														{
															unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar6]));
															Local_126.f_305[iVar6] = -1;
															func_402(iVar6);
														}
													}
													iVar5++;
													if (Local_125[iVar10 /*8*/].f_2 > 0)
													{
														iVar14 = Local_125[iVar10 /*8*/].f_2;
														if (BitTest(Local_125[iVar10 /*8*/], 11))
														{
															iVar14 = (Local_125[iVar10 /*8*/].f_2 / 2);
														}
														if (!unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 2)]))
														{
															if (func_396(iVar14, bVar4) != 0)
															{
																Local_126.f_538[func_400(iVar2, iVar9, 2)] = unk_0x43AFC452F25F3A2F(func_396(iVar14, bVar4), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 2, iVar9, bVar4)), 0, 0, 1, 0);
																unk_0x62C438C53BB57AFD(Local_126.f_538[func_400(iVar2, iVar9, 2)], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 2, iVar9, bVar4)), 0, 0, 1);
																unk_0xCF39804E8C88080E(Local_126.f_538[func_400(iVar2, iVar9, 2)], Var8 + func_394(iVar14, 2, iVar9, bVar4), 2, 1);
																if (!unk_0xD6F9DEE4765092A9(func_393(iVar14)))
																{
																	unk_0xBD618A73193F9982(-1, func_393(iVar14), Local_126.f_538[func_400(iVar2, iVar9, 2)], "dlc_vw_table_games_sounds", 0, 0);
																}
															}
														}
														else if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 2)]) != 255)
														{
															unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 2)]));
														}
														if (BitTest(Local_125[iVar10 /*8*/], 11))
														{
															if (!unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 3)]))
															{
																if (func_396(iVar14, bVar4) != 0)
																{
																	Local_126.f_538[func_400(iVar2, iVar9, 3)] = unk_0x43AFC452F25F3A2F(func_396(iVar14, bVar4), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 3, iVar9, bVar4)), 0, 0, 1, 0);
																	unk_0x62C438C53BB57AFD(Local_126.f_538[func_400(iVar2, iVar9, 3)], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_395(iVar14, 3, iVar9, bVar4)), 0, 0, 1);
																	unk_0xCF39804E8C88080E(Local_126.f_538[func_400(iVar2, iVar9, 3)], Var8 + func_394(iVar14, 3, iVar9, bVar4), 2, 1);
																	if (!unk_0xD6F9DEE4765092A9(func_393(iVar14)))
																	{
																		unk_0xBD618A73193F9982(-1, func_393(iVar14), Local_126.f_538[func_400(iVar2, iVar9, 3)], "dlc_vw_table_games_sounds", 0, 0);
																	}
																}
															}
															else if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 3)]) != 255)
															{
																unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 3)]));
															}
														}
													}
													else
													{
														if (unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 2)]))
														{
															if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 2)]) > 0)
															{
																unk_0xC1DAC4DA85BB166D(Local_126.f_538[func_400(iVar2, iVar9, 2)], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 2)])), 0f, 0,1f, 0)), 1);
															}
															else
															{
																unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 2)]));
															}
														}
														if (unk_0xFC8BFE4B41177C22(Local_126.f_538[func_400(iVar2, iVar9, 3)]))
														{
															if (unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 3)]) > 0)
															{
																unk_0xC1DAC4DA85BB166D(Local_126.f_538[func_400(iVar2, iVar9, 3)], system::floor(func_209(system::to_float(unk_0x3D2DD3A02C8AA9A8(Local_126.f_538[func_400(iVar2, iVar9, 3)])), 0f, 0,1f, 0)), 1);
															}
															else
															{
																unk_0x51C8BEA2005931AB(&(Local_126.f_538[func_400(iVar2, iVar9, 3)]));
															}
														}
													}
													iVar9++;
													iVar5 = 0;
													iVar5 = 0;
													while (iVar5 < 11)
													{
														bVar16 = true;
														if (!Local_116.f_1525[iVar2] && iVar5 == 0)
														{
															bVar16 = false;
														}
														sVar7 = func_399(Local_116.f_846[iVar2 /*13*/][iVar5], bVar16);
														iVar6 = func_9(iVar2, iVar5);
														if (iVar6 >= 0 && iVar6 < (11 * Local_126.f_257))
														{
															if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
															{
																if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_3(iVar2), 3))
																{
																	if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
																	{
																		iVar18 = 0;
																		while (iVar18 < 11)
																		{
																			iVar19 = func_9(iVar2, iVar18);
																			if (unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar19]))
																			{
																				iVar17 = iVar18;
																			}
																			iVar18++;
																		}
																		if (iVar5 == iVar17)
																		{
																			if (unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar6]) && !unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																			{
																				unk_0x4D306DD94DD6FDBA(Local_126.f_603[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																			}
																		}
																		else if (unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar6]))
																		{
																			unk_0x51C8BEA2005931AB(&(Local_126.f_603[iVar6]));
																			Local_126.f_260[iVar6] = -1;
																		}
																	}
																	else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
																	{
																		if (unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar6]))
																		{
																			unk_0x51C8BEA2005931AB(&(Local_126.f_603[iVar6]));
																			Local_126.f_260[iVar6] = -1;
																		}
																	}
																}
																else if (Local_116.f_1520[iVar2] == 2 && ((!unk_0xD6F9DEE4765092A9(sVar7) && Local_116.f_846[iVar2 /*13*/][iVar5] != 0) || Local_126.f_260[iVar6] != -1))
																{
																	if (!unk_0xD6F9DEE4765092A9(func_399(Local_116.f_846[iVar2 /*13*/][iVar5], 1)) && func_404(Local_116.f_846[iVar2 /*13*/][iVar5], Local_126.f_236) != 0)
																	{
																		Local_126.f_260[iVar6] = -1;
																		if (!unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar6]))
																		{
																			iVar15 = Local_116.f_846[iVar2 /*13*/][iVar5];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			if (!unk_0xD6F9DEE4765092A9(func_399(Local_116.f_846[iVar2 /*13*/][iVar5], 1)) && func_404(iVar15, Local_126.f_236) != 0)
																			{
																				Local_126.f_603[iVar6] = unk_0x43AFC452F25F3A2F(func_404(iVar15, Local_126.f_236), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1, 0);
																				unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																				unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, bVar16), 2, 1);
																				Local_126.f_260[iVar6] = -1;
																			}
																		}
																		else if (iVar5 == 0)
																		{
																			if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
																			{
																				if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_34(iVar2), 3))
																				{
																					if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																						{
																							unk_0x51C8BEA2005931AB(&(Local_126.f_603[iVar6]));
																							Local_126.f_260[iVar6] = -1;
																							Local_126.f_603[iVar6] = unk_0x43AFC452F25F3A2F(func_404(Local_116.f_846[iVar2 /*13*/][iVar5], Local_126.f_236), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1, 0);
																							unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																							unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, 0), 2, 1);
																							unk_0x4D306DD94DD6FDBA(Local_126.f_603[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																						}
																					}
																					else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																						{
																							unk_0x837D67618BF89034(Local_126.f_603[iVar6], 0, 1);
																							unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																							unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_29(iVar2), 3))
																				{
																					if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																						{
																							unk_0x4D306DD94DD6FDBA(Local_126.f_603[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																						}
																					}
																					else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																						{
																							unk_0x837D67618BF89034(Local_126.f_603[iVar6], 0, 1);
																							unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																							unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, 0), 2, 1);
																						}
																					}
																				}
																				else if (unk_0x13CCB1AD131C1082(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), func_59(), func_11(iVar2), 3))
																				{
																					if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																						{
																							unk_0x51C8BEA2005931AB(&(Local_126.f_603[iVar6]));
																							Local_126.f_260[iVar6] = -1;
																							Local_126.f_603[iVar6] = unk_0x43AFC452F25F3A2F(func_404(Local_116.f_846[iVar2 /*13*/][iVar5], Local_126.f_236), unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1, 0);
																							unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																							unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, 0), 2, 1);
																							unk_0x4D306DD94DD6FDBA(Local_126.f_603[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																						}
																					}
																					else if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																						{
																							unk_0x837D67618BF89034(Local_126.f_603[iVar6], 0, 1);
																							unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																							unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																				{
																					unk_0x837D67618BF89034(Local_126.f_603[iVar6], 0, 1);
																					unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																					unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, bVar16), 2, 1);
																				}
																			}
																		}
																		else if (unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																		{
																			unk_0x837D67618BF89034(Local_126.f_603[iVar6], 0, 1);
																			unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																			unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, bVar16), 2, 1);
																		}
																	}
																	else if (Local_126.f_260[iVar6] != -1)
																	{
																		if (!unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar6]))
																		{
																			iVar15 = Local_126.f_260[iVar6];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			Local_126.f_603[iVar6] = unk_0x43AFC452F25F3A2F(func_404(iVar15, Local_126.f_236), Var3, 0, 0, 1, 0);
																			if (((unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]))) && !unk_0x5B9219522937741D(Local_126.f_603[iVar6])) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
																			{
																				unk_0x4D306DD94DD6FDBA(Local_126.f_603[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																			}
																		}
																		else if (unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar2]) && !unk_0x4FAFF4BCB7633475(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2])))
																		{
																			if (!unk_0x5B9219522937741D(Local_126.f_603[iVar6]) && unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), -1345695206))
																			{
																				unk_0x4D306DD94DD6FDBA(Local_126.f_603[iVar6], unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), unk_0x72F7E39FB49FC0BA(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1, 0);
																			}
																			if (unk_0x5D640DD02AFD9F75(unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar2]), 585557868))
																			{
																				if (unk_0xA3736D76B0E93E93(Local_126.f_603[iVar6]))
																				{
																					unk_0x837D67618BF89034(Local_126.f_603[iVar6], 0, 1);
																					unk_0x62C438C53BB57AFD(Local_126.f_603[iVar6], unk_0xF10F2A2453AF1DFB(func_71(iVar2), Var8.f_2, func_392(iVar5)), 0, 0, 1);
																					unk_0xCF39804E8C88080E(Local_126.f_603[iVar6], Var8 + func_391(iVar5, bVar16), 2, 1);
																				}
																			}
																		}
																	}
																}
																else if (iVar6 >= 0 && iVar6 < (11 * Local_126.f_257))
																{
																	if (unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar6]))
																	{
																		unk_0x51C8BEA2005931AB(&(Local_126.f_603[iVar6]));
																		Local_126.f_260[iVar6] = -1;
																	}
																}
																iVar5++;
																iVar2++;
																iLocal_139++;
																if (iLocal_139 >= Local_126.f_257)
																{
																	iLocal_139 = 0;
																}
															}

Vector3 func_391(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 178,92f };
			break;
		
		case 1:
			Var0 = { 0f, 0f, -180f };
			break;
		
		case 2:
			Var0 = { 0f, 0f, -178,92f };
			break;
		
		case 3:
			Var0 = { 0f, 0f, -177,12f };
			break;
		
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			Var0 = { 0f, 0f, 178,56f };
			break;
		
		case 6:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 7:
			Var0 = { 0f, 0f, 178,2f };
			break;
		
		case 8:
			Var0 = { 0f, 0f, -177,12f };
			break;
		
		case 9:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 10:
			Var0 = { 0f, 0f, 178,56f };
			break;
	}
	if (!bParam1)
	{
		Var0.f_0 = 180f;
	}
	return Var0;
}

Vector3 func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0,0356f, 0,2105f, 0,94885f;
		
		case 1:
			return -0,0436f, 0,21205f, 0,948875f;
		
		case 2:
			return -0,0636f, 0,213825f, 0,9496f;
		
		case 3:
			return -0,0806f, 0,2137f, 0,950225f;
		
		case 4:
			return -0,1006f, 0,21125f, 0,950875f;
		
		case 5:
			return -0,1256f, 0,21505f, 0,951875f;
		
		case 6:
			return -0,1416f, 0,21305f, 0,953f;
		
		case 7:
			return -0,1656f, 0,21205f, 0,954025f;
		
		case 8:
			return -0,1836f, 0,21255f, 0,95495f;
		
		case 9:
			return -0,2076f, 0,21105f, 0,956025f;
		
		case 10:
			return -0,2246f, 0,21305f, 0,957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_394(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					
					case 1:
						return 0f, 0f, 64,8f;
					
					case 2:
						return 0f, 0f, 74,52f;
					
					case 3:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12,96f;
					
					case 1:
						return 0f, 0f, 29,16f;
					
					case 2:
						return 0f, 0f, 32,04f;
					
					case 3:
						return 0f, 0f, 32,04f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18,36f;
					
					case 1:
						return 0f, 0f, -18,72f;
					
					case 2:
						return 0f, 0f, -15,48f;
					
					case 3:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79,2f;
					
					case 1:
						return 0f, 0f, -68,76f;
					
					case 2:
						return 0f, 0f, -57,6f;
					
					case 3:
						return 0f, 0f, -64,8f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -16,56f;
							
							case 1:
								return 0f, 0f, -22,32f;
							
							case 2:
								return 0f, 0f, -10,8f;
							
							case 3:
								return 0f, 0f, -9,72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69,12f;
							
							case 1:
								return 0f, 0f, -64,8f;
							
							case 2:
								return 0f, 0f, -58,68f;
							
							case 3:
								return 0f, 0f, -51,12f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112,32f;
							
							case 1:
								return 0f, 0f, -108,36f;
							
							case 2:
								return 0f, 0f, -99,72f;
							
							case 3:
								return 0f, 0f, -102,6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155,88f;
							
							case 1:
								return 0f, 0f, -151,92f;
							
							case 2:
								return 0f, 0f, -147,24f;
							
							case 3:
								return 0f, 0f, -146,52f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 72f;
							
							case 1:
								return 0f, 0f, 64,8f;
							
							case 2:
								return 0f, 0f, 74,52f;
							
							case 3:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12,96f;
							
							case 1:
								return 0f, 0f, 29,16f;
							
							case 2:
								return 0f, 0f, 32,04f;
							
							case 3:
								return 0f, 0f, 32,04f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18,36f;
							
							case 1:
								return 0f, 0f, -18,72f;
							
							case 2:
								return 0f, 0f, -15,48f;
							
							case 3:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79,2f;
							
							case 1:
								return 0f, 0f, -68,76f;
							
							case 2:
								return 0f, 0f, -57,6f;
							
							case 3:
								return 0f, 0f, -64,8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_395(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0,95f;
				break;
			
			case 20:
				fVar0 = 0,896f;
				break;
			
			case 30:
				fVar0 = 0,901f;
				break;
			
			case 40:
				fVar0 = 0,907f;
				break;
			
			case 50:
				fVar0 = 0,95f;
				break;
			
			case 60:
				fVar0 = 0,917f;
				break;
			
			case 70:
				fVar0 = 0,922f;
				break;
			
			case 80:
				fVar0 = 0,927f;
				break;
			
			case 90:
				fVar0 = 0,932f;
				break;
			
			case 100:
				fVar0 = 0,95f;
				break;
			
			case 150:
				fVar0 = 0,904f;
				break;
			
			case 200:
				fVar0 = 0,899f;
				break;
			
			case 250:
				fVar0 = 0,914f;
				break;
			
			case 300:
				fVar0 = 0,904f;
				break;
			
			case 350:
				fVar0 = 0,924f;
				break;
			
			case 400:
				fVar0 = 0,91f;
				break;
			
			case 450:
				fVar0 = 0,935f;
				break;
			
			case 500:
				fVar0 = 0,95f;
				break;
			
			case 1000:
				fVar0 = 0,95f;
				break;
			
			case 1500:
				fVar0 = 0,904f;
				break;
			
			case 2000:
				fVar0 = 0,899f;
				break;
			
			case 2500:
				fVar0 = 0,915f;
				break;
			
			case 3000:
				fVar0 = 0,904f;
				break;
			
			case 3500:
				fVar0 = 0,925f;
				break;
			
			case 4000:
				fVar0 = 0,91f;
				break;
			
			case 4500:
				fVar0 = 0,935f;
				break;
			
			case 5000:
				fVar0 = 0,95f;
				break;
			
			case 6000:
				fVar0 = 0,919f;
				break;
			
			case 7000:
				fVar0 = 0,924f;
				break;
			
			case 8000:
				fVar0 = 0,93f;
				break;
			
			case 9000:
				fVar0 = 0,935f;
				break;
			
			case 10000:
				fVar0 = 0,95f;
				break;
			
			case 15000:
				fVar0 = 0,902f;
				break;
			
			case 20000:
				fVar0 = 0,897f;
				break;
			
			case 25000:
				fVar0 = 0,912f;
				break;
			
			case 30000:
				fVar0 = 0,902f;
				break;
			
			case 35000:
				fVar0 = 0,922f;
				break;
			
			case 40000:
				fVar0 = 0,907f;
				break;
			
			case 45000:
				fVar0 = 0,932f;
				break;
			
			case 50000:
				fVar0 = 0,912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0,712625f, 0,170625f, 0f };
						break;
					
					case 1:
						Var1 = { 0,6658f, 0,218375f, 0f };
						break;
					
					case 2:
						Var1 = { 0,756775f, 0,292775f, 0f };
						break;
					
					case 3:
						Var1 = { 0,701875f, 0,3439f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0,278125f, -0,2571f, 0f };
						break;
					
					case 1:
						Var1 = { 0,280375f, -0,190375f, 0f };
						break;
					
					case 2:
						Var1 = { 0,397775f, -0,208525f, 0f };
						break;
					
					case 3:
						Var1 = { 0,39715f, -0,1354f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0,30305f, -0,2464f, 0f };
						break;
					
					case 1:
						Var1 = { -0,257975f, -0,19715f, 0f };
						break;
					
					case 2:
						Var1 = { -0,186575f, -0,2861f, 0f };
						break;
					
					case 3:
						Var1 = { -0,141675f, -0,237925f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0,72855f, 0,17345f, 0f };
						break;
					
					case 1:
						Var1 = { -0,652825f, 0,177525f, 0f };
						break;
					
					case 2:
						Var1 = { -0,6783f, 0,0744f, 0f };
						break;
					
					case 3:
						Var1 = { -0,604425f, 0,082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0,95f;
				break;
			
			case 20:
				fVar0 = 0,896f;
				break;
			
			case 30:
				fVar0 = 0,901f;
				break;
			
			case 40:
				fVar0 = 0,907f;
				break;
			
			case 50:
				fVar0 = 0,95f;
				break;
			
			case 60:
				fVar0 = 0,917f;
				break;
			
			case 70:
				fVar0 = 0,922f;
				break;
			
			case 80:
				fVar0 = 0,927f;
				break;
			
			case 90:
				fVar0 = 0,932f;
				break;
			
			case 100:
				fVar0 = 0,95f;
				break;
			
			case 150:
				fVar0 = 0,904f;
				break;
			
			case 200:
				fVar0 = 0,899f;
				break;
			
			case 250:
				fVar0 = 0,914f;
				break;
			
			case 300:
				fVar0 = 0,904f;
				break;
			
			case 350:
				fVar0 = 0,924f;
				break;
			
			case 400:
				fVar0 = 0,91f;
				break;
			
			case 450:
				fVar0 = 0,935f;
				break;
			
			case 500:
				fVar0 = 0,95f;
				break;
			
			case 1000:
				fVar0 = 0,95f;
				break;
			
			case 1500:
				fVar0 = 0,904f;
				break;
			
			case 2000:
				fVar0 = 0,899f;
				break;
			
			case 2500:
				fVar0 = 0,915f;
				break;
			
			case 3000:
				fVar0 = 0,904f;
				break;
			
			case 3500:
				fVar0 = 0,925f;
				break;
			
			case 4000:
				fVar0 = 0,91f;
				break;
			
			case 4500:
				fVar0 = 0,935f;
				break;
			
			case 5000:
				fVar0 = 0,953f;
				break;
			
			case 6000:
				fVar0 = 0,919f;
				break;
			
			case 7000:
				fVar0 = 0,924f;
				break;
			
			case 8000:
				fVar0 = 0,93f;
				break;
			
			case 9000:
				fVar0 = 0,935f;
				break;
			
			case 10000:
				fVar0 = 0,95f;
				break;
			
			case 15000:
				fVar0 = 0,902f;
				break;
			
			case 20000:
				fVar0 = 0,897f;
				break;
			
			case 25000:
				fVar0 = 0,912f;
				break;
			
			case 30000:
				fVar0 = 0,902f;
				break;
			
			case 35000:
				fVar0 = 0,922f;
				break;
			
			case 40000:
				fVar0 = 0,907f;
				break;
			
			case 45000:
				fVar0 = 0,932f;
				break;
			
			case 50000:
				fVar0 = 0,912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0,6931f, 0,1952f, 0f };
								break;
							
							case 1:
								Var1 = { 0,724925f, 0,26955f, 0f };
								break;
							
							case 2:
								Var1 = { 0,7374f, 0,349625f, 0f };
								break;
							
							case 3:
								Var1 = { 0,76415f, 0,419225f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0,2827f, -0,227825f, 0f };
								break;
							
							case 1:
								Var1 = { 0,3605f, -0,1898f, 0f };
								break;
							
							case 2:
								Var1 = { 0,4309f, -0,16365f, 0f };
								break;
							
							case 3:
								Var1 = { 0,49275f, -0,111575f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0,279425f, -0,2238f, 0f };
								break;
							
							case 1:
								Var1 = { -0,200775f, -0,25855f, 0f };
								break;
							
							case 2:
								Var1 = { -0,125775f, -0,26815f, 0f };
								break;
							
							case 3:
								Var1 = { -0,05615f, -0,29435f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0,685925f, 0,173275f, 0f };
								break;
							
							case 1:
								Var1 = { -0,6568f, 0,092525f, 0f };
								break;
							
							case 2:
								Var1 = { -0,612875f, 0,033025f, 0f };
								break;
							
							case 3:
								Var1 = { -0,58465f, -0,0374f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0,712625f, 0,170625f, 0f };
								break;
							
							case 1:
								Var1 = { 0,6658f, 0,218375f, 0f };
								break;
							
							case 2:
								Var1 = { 0,756775f, 0,292775f, 0f };
								break;
							
							case 3:
								Var1 = { 0,701875f, 0,3439f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0,278125f, -0,2571f, 0f };
								break;
							
							case 1:
								Var1 = { 0,280375f, -0,190375f, 0f };
								break;
							
							case 2:
								Var1 = { 0,397775f, -0,208525f, 0f };
								break;
							
							case 3:
								Var1 = { 0,39715f, -0,1354f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0,30305f, -0,2464f, 0f };
								break;
							
							case 1:
								Var1 = { -0,257975f, -0,19715f, 0f };
								break;
							
							case 2:
								Var1 = { -0,186575f, -0,2861f, 0f };
								break;
							
							case 3:
								Var1 = { -0,141675f, -0,237925f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0,72855f, 0,17345f, 0f };
								break;
							
							case 1:
								Var1 = { -0,652825f, 0,177525f, 0f };
								break;
							
							case 2:
								Var1 = { -0,6783f, 0,0744f, 0f };
								break;
							
							case 3:
								Var1 = { -0,604425f, 0,082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	Var1.f_2 = fVar0;
	return Var1;
}

int func_396(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

Vector3 func_397(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 69,12f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67,8f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 66,6f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 70,44f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 70,84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 67,88f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 69,56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22,11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22,32f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 20,8f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 19,8f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 19,44f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26,28f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 22,68f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -21,43f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -20,16f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16,92f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -23,4f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -21,24f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -23,76f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -19,44f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67,03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -69,12f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -64,44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -67,68f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -63,72f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -68,4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -64,44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 68,57f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67,52f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 67,76f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 67,04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 68,84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 65,96f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 67,76f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22,11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 24,44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 21,08f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 25,96f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26,16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 28,76f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -14,04f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -15,48f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16,56f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -15,84f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -16,92f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -14,4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -14,28f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67,03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -67,6f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -69,4f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -69,04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -68,68f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -66,16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -63,28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		Var0.f_2 = (Var0.f_2 + 90f);
	}
	return Var0;
}

Vector3 func_398(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0,5737f, 0,2376f, 0,948025f;
					
					case 1:
						return 0,562975f, 0,2523f, 0,94875f;
					
					case 2:
						return 0,553875f, 0,266325f, 0,94955f;
					
					case 3:
						return 0,5459f, 0,282075f, 0,9501f;
					
					case 4:
						return 0,536125f, 0,29645f, 0,95085f;
					
					case 5:
						return 0,524975f, 0,30975f, 0,9516f;
					
					case 6:
						return 0,515775f, 0,325325f, 0,95235f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0,2325f, -0,1082f, 0,94805f;
					
					case 1:
						return 0,23645f, -0,0918f, 0,949f;
					
					case 2:
						return 0,2401f, -0,074475f, 0,950225f;
					
					case 3:
						return 0,244625f, -0,057675f, 0,951125f;
					
					case 4:
						return 0,249675f, -0,041475f, 0,95205f;
					
					case 5:
						return 0,257575f, -0,0256f, 0,9532f;
					
					case 6:
						return 0,2601f, -0,008175f, 0,954375f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0,2359f, -0,1091f, 0,9483f;
					
					case 1:
						return -0,221025f, -0,100675f, 0,949f;
					
					case 2:
						return -0,20625f, -0,092875f, 0,949725f;
					
					case 3:
						return -0,193225f, -0,07985f, 0,950325f;
					
					case 4:
						return -0,1776f, -0,072f, 0,951025f;
					
					case 5:
						return -0,165f, -0,060025f, 0,951825f;
					
					case 6:
						return -0,14895f, -0,05155f, 0,95255f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0,5765f, 0,2229f, 0,9482f;
					
					case 1:
						return -0,558925f, 0,2197f, 0,949175f;
					
					case 2:
						return -0,5425f, 0,213025f, 0,9499f;
					
					case 3:
						return -0,525925f, 0,21105f, 0,95095f;
					
					case 4:
						return -0,509475f, 0,20535f, 0,9519f;
					
					case 5:
						return -0,491775f, 0,204075f, 0,952825f;
					
					case 6:
						return -0,4752f, 0,197525f, 0,9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0,6083f, 0,3523f, 0,94795f;
					
					case 1:
						return 0,598475f, 0,366475f, 0,948925f;
					
					case 2:
						return 0,589525f, 0,3807f, 0,94975f;
					
					case 3:
						return 0,58045f, 0,39435f, 0,950375f;
					
					case 4:
						return 0,571975f, 0,4092f, 0,951075f;
					
					case 5:
						return 0,5614f, 0,4237f, 0,951775f;
					
					case 6:
						return 0,554325f, 0,4402f, 0,952525f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0,3431f, -0,0527f, 0,94855f;
					
					case 1:
						return 0,348575f, -0,0348f, 0,949425f;
					
					case 2:
						return 0,35465f, -0,018825f, 0,9502f;
					
					case 3:
						return 0,3581f, -0,001625f, 0,95115f;
					
					case 4:
						return 0,36515f, 0,015275f, 0,952075f;
					
					case 5:
						return 0,368525f, 0,032475f, 0,95335f;
					
					case 6:
						return 0,373275f, 0,0506f, 0,9543f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0,116f, -0,1501f, 0,947875f;
					
					case 1:
						return -0,102725f, -0,13795f, 0,948525f;
					
					case 2:
						return -0,08975f, -0,12665f, 0,949175f;
					
					case 3:
						return -0,075025f, -0,1159f, 0,949875f;
					
					case 4:
						return -0,0614f, -0,104775f, 0,9507f;
					
					case 5:
						return -0,046275f, -0,095025f, 0,9516f;
					
					case 6:
						return -0,031425f, -0,0846f, 0,952675f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0,5205f, 0,1122f, 0,9478f;
					
					case 1:
						return -0,503175f, 0,108525f, 0,94865f;
					
					case 2:
						return -0,485125f, 0,10475f, 0,949175f;
					
					case 3:
						return -0,468275f, 0,099175f, 0,94995f;
					
					case 4:
						return -0,45155f, 0,09435f, 0,95085f;
					
					case 5:
						return -0,434475f, 0,089725f, 0,95145f;
					
					case 6:
						return -0,415875f, 0,0846f, 0,9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_399(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		
		case 2:
			return " 2  C ";
		
		case 3:
			return " 3  C ";
		
		case 4:
			return " 4  C ";
		
		case 5:
			return " 5  C ";
		
		case 6:
			return " 6  C ";
		
		case 7:
			return " 7  C ";
		
		case 8:
			return " 8  C ";
		
		case 9:
			return " 9  C ";
		
		case 10:
			return " 10 C ";
		
		case 11:
			return " J  C ";
		
		case 12:
			return " Q  C ";
		
		case 13:
			return " K  C ";
		
		case 14:
			return " A  D ";
		
		case 15:
			return " 2  D ";
		
		case 16:
			return " 3  D ";
		
		case 17:
			return " 4  D ";
		
		case 18:
			return " 5  D ";
		
		case 19:
			return " 6  D ";
		
		case 20:
			return " 7  D ";
		
		case 21:
			return " 8  D ";
		
		case 22:
			return " 9  D ";
		
		case 23:
			return " 10 D ";
		
		case 24:
			return " J  D ";
		
		case 25:
			return " Q  D ";
		
		case 26:
			return " K  D ";
		
		case 27:
			return " A  H ";
		
		case 28:
			return " 2  H ";
		
		case 29:
			return " 3  H ";
		
		case 30:
			return " 4  H ";
		
		case 31:
			return " 5  H ";
		
		case 32:
			return " 6  H ";
		
		case 33:
			return " 7  H ";
		
		case 34:
			return " 8  H ";
		
		case 35:
			return " 9  H ";
		
		case 36:
			return " 10 H ";
		
		case 37:
			return " J  H ";
		
		case 38:
			return " Q  H ";
		
		case 39:
			return " K  H ";
		
		case 40:
			return " A  S ";
		
		case 41:
			return " 2  S ";
		
		case 42:
			return " 3  S ";
		
		case 43:
			return " 4  S ";
		
		case 44:
			return " 5  S ";
		
		case 45:
			return " 6  S ";
		
		case 46:
			return " 7  S ";
		
		case 47:
			return " 8  S ";
		
		case 48:
			return " 9  S ";
		
		case 49:
			return " 10 S ";
		
		case 50:
			return " J  S ";
		
		case 51:
			return " Q  S ";
		
		case 52:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_400(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_401(int iParam0)
{
	switch (system::floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return BitTest(Local_126.f_530, (iParam0 % 32));
		
		case 1:
			return BitTest(Local_126.f_531, (iParam0 % 32));
		
		case 2:
			return BitTest(Local_126.f_532, (iParam0 % 32));
		
		case 3:
			return BitTest(Local_126.f_533, (iParam0 % 32));
		
		case 4:
			return BitTest(Local_126.f_534, (iParam0 % 32));
		
		case 5:
			return BitTest(Local_126.f_535, (iParam0 % 32));
		
		case 6:
			return BitTest(Local_126.f_536, (iParam0 % 32));
		
		default:
	}
	return 0;
}

void func_402(int iParam0)
{
	switch (system::floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0x8744D2E3FC95740E(&(Local_126.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0x8744D2E3FC95740E(&(Local_126.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0x8744D2E3FC95740E(&(Local_126.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0x8744D2E3FC95740E(&(Local_126.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0x8744D2E3FC95740E(&(Local_126.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0x8744D2E3FC95740E(&(Local_126.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0x8744D2E3FC95740E(&(Local_126.f_536), (iParam0 % 32));
			break;
	}
}

void func_403(int iParam0)
{
	switch (system::floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0x0B0C9A0F9AAEB7F0(&(Local_126.f_536), (iParam0 % 32));
			break;
	}
}

int func_404(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_a_a");
			
			case 2:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_02a");
			
			case 3:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_03a");
			
			case 4:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_04a");
			
			case 5:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_05a");
			
			case 6:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_06a");
			
			case 7:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_07a");
			
			case 8:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_08a");
			
			case 9:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_09a");
			
			case 10:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_10a");
			
			case 11:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_j_a");
			
			case 12:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_q_a");
			
			case 13:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_club_char_k_a");
			
			case 14:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_02a");
			
			case 16:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_03a");
			
			case 17:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_04a");
			
			case 18:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_05a");
			
			case 19:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_06a");
			
			case 20:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_07a");
			
			case 21:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_08a");
			
			case 22:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_09a");
			
			case 23:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_10a");
			
			case 24:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_02a");
			
			case 42:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_03a");
			
			case 43:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_04a");
			
			case 44:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_05a");
			
			case 45:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_06a");
			
			case 46:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_07a");
			
			case 47:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_08a");
			
			case 48:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_09a");
			
			case 49:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_10a");
			
			case 50:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return unk_0x70E57E9927B6BA58("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_ace");
			
			case 2:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_02");
			
			case 3:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_03");
			
			case 4:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_04");
			
			case 5:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_05");
			
			case 6:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_06");
			
			case 7:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_07");
			
			case 8:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_08");
			
			case 9:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_09");
			
			case 10:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_10");
			
			case 11:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_jack");
			
			case 12:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_queen");
			
			case 13:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_club_king");
			
			case 14:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_ace");
			
			case 15:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_02");
			
			case 16:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_03");
			
			case 17:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_04");
			
			case 18:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_05");
			
			case 19:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_06");
			
			case 20:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_07");
			
			case 21:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_08");
			
			case 22:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_09");
			
			case 23:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_10");
			
			case 24:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_jack");
			
			case 25:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_queen");
			
			case 26:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_dia_king");
			
			case 27:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_02");
			
			case 29:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_03");
			
			case 30:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_04");
			
			case 31:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_05");
			
			case 32:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_06");
			
			case 33:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_07");
			
			case 34:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_08");
			
			case 35:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_09");
			
			case 36:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_10");
			
			case 37:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_hrt_king");
			
			case 40:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_ace");
			
			case 41:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_02");
			
			case 42:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_03");
			
			case 43:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_04");
			
			case 44:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_05");
			
			case 45:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_06");
			
			case 46:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_07");
			
			case 47:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_08");
			
			case 48:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_09");
			
			case 49:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_10");
			
			case 50:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_jack");
			
			case 51:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_queen");
			
			case 52:
				return unk_0x70E57E9927B6BA58("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	if (bParam1)
	{
		return unk_0x70E57E9927B6BA58("vw_prop_vw_jo_char_01a");
	}
	return unk_0x70E57E9927B6BA58("vw_prop_casino_cards_single");
}

void func_405()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = func_406(iVar0);
		unk_0x55098D9E9AD58806(uVar1);
		iVar0++;
	}
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_407()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_406(iVar0);
		unk_0xEC9DAA34BBB4658C(iVar1);
		if (!unk_0x6252BC0DD8A320DB(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_408()
{
	return BitTest(Global_1943520.f_6, 12);
}

int func_409()
{
	return func_410(8251, -1);
}

int func_410(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_411(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_411(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_412(uParam1));
}

int func_412(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

void func_413()
{
	if (Local_126.f_257 == 1)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_150))
		{
			if (func_430() != func_429())
			{
				iLocal_150 = unk_0x8366ABB82B1ABC59(func_71(0), 1f, func_225(Global_2657971[func_430() /*465*/].f_457), 0, 0, 0);
			}
		}
		else if (func_430() != func_429() && unk_0x15CCE8886267624F())
		{
			if (unk_0xC557ED333E7A31E1(iLocal_150) != func_370(func_430()))
			{
				unk_0xDEFDEE8D4FA47138(iLocal_150, func_370(func_430()));
			}
		}
	}
	else
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_151))
		{
			iLocal_151 = unk_0x8366ABB82B1ABC59(1129,406f, 262,3578f, -52,041f, 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
		}
		else if (unk_0xC557ED333E7A31E1(iLocal_151) != 3)
		{
			unk_0xDEFDEE8D4FA47138(iLocal_151, 3);
		}
		if (!unk_0xFC8BFE4B41177C22(uLocal_152))
		{
			iLocal_152 = unk_0x8366ABB82B1ABC59(1144,429f, 247,3352f, -52,041f, 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
		}
		else if (unk_0xFC8BFE4B41177C22(iLocal_152) && unk_0xC557ED333E7A31E1(iLocal_152) != 3)
		{
			unk_0xDEFDEE8D4FA47138(iLocal_152, 3);
		}
	}
}

void func_414()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		if (!unk_0xFC8BFE4B41177C22(uLocal_135[iVar0]))
		{
			func_415(iVar0);
		}
		iVar0++;
	}
}

void func_415(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (Local_126.f_236)
	{
		iVar0 = joaat("vw_prop_vw_jo_char_01a");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_single");
	}
	unk_0xEC9DAA34BBB4658C(iVar0);
	if (!unk_0x6252BC0DD8A320DB(iVar0))
	{
		return;
	}
	if (!unk_0xFC8BFE4B41177C22(uLocal_135[iParam0]))
	{
		uVar1 = unk_0x43AFC452F25F3A2F(iVar0, func_417(iParam0), 0, 0, 1, 0);
		unk_0x55098D9E9AD58806(iVar0);
		unk_0x62C438C53BB57AFD(uVar1, func_417(iParam0), 0, 0, 1);
		unk_0xCF39804E8C88080E(iVar1, func_416(iParam0), 2, 1);
		unk_0x5D7CD709B34C90F0(iVar1, true);
		uLocal_135[iParam0] = iVar1;
	}
}

Vector3 func_416(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 164,52f, 11,5f };
	return Vector(func_70(iParam0), 0f, 0f) + Var0;
}

Vector3 func_417(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0,526f, 0,571f, 0,963f };
	return unk_0xF10F2A2453AF1DFB(func_71(iParam0), func_70(iParam0), Var0);
}

int func_418()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_404(iVar1, Local_126.f_236);
		unk_0xEC9DAA34BBB4658C(uVar2);
		if (!unk_0x6252BC0DD8A320DB(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_419()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		if (unk_0xFC8BFE4B41177C22(uLocal_135[iVar0]))
		{
			unk_0x51C8BEA2005931AB(&(uLocal_135[iVar0]));
		}
		iVar0++;
	}
}

void func_420()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		uVar2 = func_404(iVar1, Local_126.f_236);
		unk_0x55098D9E9AD58806(uVar2);
		iVar0++;
	}
}

void func_421()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_126.f_257)
	{
		if (!unk_0x93BF17E19A9F0E9B(Local_116.f_1595[iVar0]))
		{
		}
		else
		{
			uVar1 = unk_0xC35A3A4C05A4831B(Local_116.f_1595[iVar0]);
			if (func_423(uVar1))
			{
				if (func_422(iVar0))
				{
					unk_0x789F31BC158A5307(uVar1, 0, 1);
				}
				else
				{
					unk_0x789F31BC158A5307(uVar1, 1, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_422(int iParam0)
{
	if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4, 5) || BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4, 3))
	{
		return 0;
	}
	if (BitTest(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_4, 2))
	{
		if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_423(int iParam0)
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_424()
{
	if (unk_0x76CD105BCAC6EB9F() && unk_0x93E08E0F531E2C35())
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0)
{
	if (func_426(iParam0) != func_429())
	{
		return func_426(iParam0) == func_219(iParam0);
	}
	return 0;
}

int func_426(int iParam0)
{
	return Global_1887305[iParam0 /*610*/].f_10.f_35;
}

int func_427()
{
	return func_428(unk_0x259BE71D8A81D4FA());
}

var func_428(int iParam0)
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

int func_429()
{
	return -1;
}

int func_430()
{
	return func_431(unk_0x259BE71D8A81D4FA());
}

int func_431(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_429())
	{
		return iParam0;
	}
	if (func_433(iParam0) != -1)
	{
		iVar0 = func_432(func_433(iParam0));
		if (((iVar0 == 2 || iVar0 == 1) || iVar0 == 0) || iVar0 == 25)
		{
			if (func_323(iParam0, 0))
			{
				return func_219(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_429();
		}
		return Global_2657971[iParam0 /*465*/].f_322.f_11;
	}
	return func_429();
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_433(int iParam0)
{
	if (iParam0 != func_429())
	{
		if (func_21(iParam0, 1, 1))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
		else if (((Global_1575083 || Global_2635563.f_2980) && iParam0 == unk_0x259BE71D8A81D4FA()) && func_21(iParam0, 1, 0))
		{
			return Global_2657971[iParam0 /*465*/].f_322.f_8;
		}
	}
	return -1;
}

int func_434(int iParam0)
{
	if (iParam0 != func_429() && func_21(iParam0, 1, 1))
	{
		return BitTest(Global_2657971[iParam0 /*465*/].f_322, 4);
	}
	return 0;
}

int func_435(int iParam0)
{
	if (iParam0 != func_429())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_432(Global_2657971[iParam0 /*465*/].f_322.f_8) == 15;
			}
		}
	}
	return 0;
}

int func_436(int iParam0)
{
	if (iParam0 != func_429())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_432(Global_2657971[iParam0 /*465*/].f_322.f_8) == 14;
			}
		}
	}
	return 0;
}

var func_437()
{
	return BitTest(Global_1943520.f_3, 2);
}

void func_438()
{
	if (Local_126.f_1 > 2)
	{
		if (Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4 > -1)
		{
			Local_131.f_9 = Local_116.f_1570[Local_125[unk_0x259BE71D8A81D4FA() /*8*/].f_4];
		}
		Local_131.f_18 = func_424();
		Local_131.f_19 = func_199();
		Local_131.f_17 = func_197(&uLocal_127, 0, 0);
		Local_131.f_7 = func_409();
		if (Global_262145.f_26383)
		{
			unk_0xD2C8AF03369DD71B(&Local_131);
		}
	}
	if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Table_Games"))
	{
		unk_0xB43467C43086A6A1("DLC_VW_Casino_Table_Games");
	}
	if (unk_0xBC2EE32DE886BD08("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0xB43467C43086A6A1("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_383(0);
	func_420();
	func_405();
	func_441();
	func_440();
	func_419();
	if (unk_0xFC8BFE4B41177C22(Local_126.f_537))
	{
		unk_0x51C8BEA2005931AB(&(Local_126.f_537));
	}
	if (Local_126.f_1 > 0)
	{
		unk_0x268BE77F77533D03(func_59());
		unk_0x268BE77F77533D03(func_73());
		unk_0x268BE77F77533D03(func_89());
		unk_0x268BE77F77533D03(func_223());
	}
	Global_1964422 = 0;
	func_439();
}

void func_439()
{
	unk_0xBBC29EBE6E1A48FA();
}

void func_440()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (16 * Local_126.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xFC8BFE4B41177C22(Local_126.f_538[iVar1]))
		{
			unk_0x51C8BEA2005931AB(&(Local_126.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_441()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (11 * Local_126.f_257);
	iVar1 = (56 * Local_126.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (unk_0xFC8BFE4B41177C22(Local_126.f_648[iVar2]))
		{
			unk_0x51C8BEA2005931AB(&(Local_126.f_648[iVar2]));
			Local_126.f_305[iVar2] = -1;
			func_402(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xFC8BFE4B41177C22(Local_126.f_603[iVar2]))
		{
			unk_0x51C8BEA2005931AB(&(Local_126.f_603[iVar2]));
			Local_126.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

int func_442()
{
	if (Global_1575055 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 1;
		}
	}
	if (func_449())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_448())
	{
		return 1;
	}
	if (func_447(159))
	{
		if (!func_446())
		{
			return 1;
		}
	}
	if (func_447(157))
	{
		return 1;
	}
	if (!unk_0x261E3728EE56B3AC())
	{
		return 1;
	}
	if (func_443() != 0)
	{
		if (unk_0x486FF5D06E9659F1(func_443()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_443()
{
	switch (func_445())
	{
		case 0:
			return func_444();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_444()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_445()
{
	return Global_32948;
}

bool func_446()
{
	return Global_2684504.f_700;
}

int func_447(int iParam0)
{
	if (unk_0x5E3ED023C0E7CC7C(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_448()
{
	return Global_2696172;
}

bool func_449()
{
	return Global_2684504.f_695;
}

void func_450()
{
	int iVar0;
	int iVar1;
	
	if (Global_1964414)
	{
		Global_1964414 = 0;
	}
	if (func_435(unk_0x259BE71D8A81D4FA()) && func_430() != func_429())
	{
		if (BitTest(Global_2657971[func_430() /*465*/].f_322.f_4, 4))
		{
			Local_126.f_236 = 1;
		}
		Global_1964424 = Global_2657971[func_430() /*465*/].f_457;
	}
	while (!(Global_2708677 != -1 || func_435(unk_0x259BE71D8A81D4FA())))
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			func_438();
		}
		if (func_442())
		{
			func_438();
		}
		system::wait(0);
	}
	iVar0 = -1;
	if (func_435(unk_0x259BE71D8A81D4FA()))
	{
		iVar0 = func_454();
	}
	unk_0xDB2434E51017FFCC(32, 0, iVar0);
	func_452(0, -1, 0);
	unk_0x6F4A865F87C7A3AD(&Local_116, 1660, 0);
	unk_0x7B13DC83218D9AF5(&Local_125, 257, 0);
	if (func_435(unk_0x259BE71D8A81D4FA()))
	{
		Local_126.f_257 = 1;
		unk_0x7E46D691B4F4B711(1);
	}
	else
	{
		unk_0x7E46D691B4F4B711(3);
	}
	if (!func_451())
	{
		func_438();
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		unk_0xAECC5FA98C879D67(0);
	}
	else
	{
		func_438();
	}
	if (unk_0x93E08E0F531E2C35())
	{
		if (func_435(unk_0x259BE71D8A81D4FA()))
		{
			Local_116.f_1550[0] = unk_0xC5935DFB3F39785A(0, 14);
		}
		else
		{
			Local_116.f_1550[0] = Global_2708691[0];
			Local_116.f_1550[1] = Global_2708691[1];
			Local_116.f_1550[2] = Global_2708691[2];
			Local_116.f_1550[3] = Global_2708691[3];
		}
	}
	Global_1964422 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_126.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_126.f_305[iVar1] = -1;
		func_402(iVar1);
		iVar1++;
	}
}

int func_451()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x76CD105BCAC6EB9F())
		{
			return 0;
		}
		if (unk_0x37F4AB46DE999660())
		{
			return 1;
		}
		if (func_449())
		{
			return 0;
		}
		if (func_447(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

int func_452(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDFF16B5B12604EFF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0;
			}
		}
		if (!func_453(0))
		{
			if (iParam0 == 0)
			{
				if (!unk_0x76CD105BCAC6EB9F())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_449())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_447(157))
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBF52D447C795492B())
			{
				if (!bParam2)
				{
					func_439();
				}
				else
				{
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = unk_0xDFF16B5B12604EFF();
	}
	if (iParam1 > -1)
	{
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x76CD105BCAC6EB9F())
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBF52D447C795492B())
	{
		if (!bParam2)
		{
			func_439();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_453(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_454()
{
	var uVar0;
	
	uVar0 = Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_322.f_9;
	return uVar0;
}

