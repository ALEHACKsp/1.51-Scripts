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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
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
	var uLocal_75 = -1;
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
	var uLocal_92 = 0;
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
	struct<592> Local_116 = { 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 32, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 32;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	struct<9> Local_158[32];
	struct<855> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, -1, -1, 0, 0, 0, 4, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_160 = 3;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	struct<23> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	bool bLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = 0;
	bool bLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184[4] = { 0, 0, 0, 0 };
	int iLocal_185[4] = { 0, 0, 0, 0 };
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	bool bLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 0x00000001;
	iLocal_3 = 0x00000086;
	iLocal_4 = 0x00000086;
	iLocal_5 = 0x00000001;
	iLocal_6 = 0x00000001;
	iLocal_7 = 0x00000001;
	iLocal_8 = 0x00000086;
	iLocal_9 = 0x00000001;
	iLocal_10 = 0x0000000C;
	iLocal_11 = 0x0000000C;
	fLocal_14 = 0.001f;
	iLocal_17 = 0xFFFFFFFF;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 0x00000003;
	iLocal_40 = 0x00000001;
	iLocal_41 = 0x00000041;
	iLocal_42 = 0x00000031;
	iLocal_43 = 0x00000040;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_172 = 0x00000001;
	func_435();
	while (0x00000001)
	{
		SYSTEM::WAIT(0x00000000);
		if (func_424())
		{
			func_420();
		}
		if (Global_19E127)
		{
			Global_19E127 = 0x00000000;
			func_420();
		}
		if (Global_24B2D0.f_A70 && Global_24C347 != 0x00000000)
		{
			if (Global_24C347 != 0x00000006)
			{
				func_420();
			}
		}
		if (func_419() && unk_0x757EF87A33649210())
		{
			func_420();
		}
		if ((!func_418(unk_0xD803B885F5E47A62()) && !func_417(unk_0xD803B885F5E47A62())) && !func_416(unk_0xD803B885F5E47A62()))
		{
			func_420();
		}
		if (unk_0xA14BB9332558B949() && !unk_0xEAE0D21A50E6C7F4(Global_440000.f_22, 0x00000006))
		{
			func_420();
		}
		if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_412() /*421*/].f_136.f_4, 0x00000000) && unk_0x757EF87A33649210())
			{
				func_420();
			}
		}
		if (func_417(unk_0xD803B885F5E47A62()) && func_409() != 0x00000000)
		{
			func_420();
		}
		iVar0 = 0x00000000;
		while (iVar0 < Local_159.f_1A)
		{
			if ((!func_408() && unk_0xE9F78D191AD5EDBA(Local_116.f_32[iVar0])) && unk_0x526BC32A660C89E6(Local_116.f_32[iVar0]))
			{
				unk_0x866EE3B81CEF363A(Local_116.f_32[iVar0], 0x00000001);
			}
			iVar0++;
		}
		func_91();
		if (func_408())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_90();
	func_87();
	func_81();
	iVar0 = 0x00000000;
	while (iVar0 < Local_159.f_1A)
	{
		switch (Local_116.f_24A[iVar0])
		{
			case 0x00000000:
				if (Global_265DDC != iVar0 && (Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62())))
				{
					Local_116.f_19[iVar0] = 0x00000001;
					func_80(&(Local_116.f_A8[iVar0 /*55*/]));
					func_79(0x00000001, iVar0);
				}
				break;
			
			case 0x00000001:
				if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iVar0])))
				{
					if (unk_0x526BC32A660C89E6(Local_116.f_32[iVar0]))
					{
						Local_116.f_2D[iVar0] = unk_0xF958843510932FF6(Local_116.f_23[iVar0]);
						if (Local_116.f_2D[iVar0] != 0xFFFFFFFF)
						{
							if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), func_78(), func_77(iVar0), 0x00000003))
							{
								if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), 0xAB120D43))
								{
									Local_116.f_23[iVar0] = unk_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), Local_116.f_23[iVar0], func_78(), func_74(iVar0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_23[iVar0]);
								}
							}
							else if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iVar0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), 0xAB120D43))
							{
								Local_116.f_23[iVar0] = unk_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), Local_116.f_23[iVar0], func_78(), func_77(iVar0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iVar0]);
							}
						}
					}
					else
					{
						unk_0x8D30F6387EE75385(Local_116.f_32[iVar0]);
					}
				}
				iVar1 = 0x00000000;
				while (iVar1 < 0x00000004)
				{
					if ((Local_116.f_75[(iVar0 * 4 + iVar1)] != func_411() && Global_265DDC != iVar0) && (Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62())))
					{
						func_79(0x00000002, iVar0);
						Local_116.f_28[iVar0] = iVar1;
						func_73(&(Local_116.f_9F[iVar0 /*2*/]), 0x00000000, 0x00000000);
						return;
					}
					iVar1++;
				}
				break;
			
			case 0x00000002:
				if (func_72(&(Local_116.f_9F[iVar0 /*2*/])) && func_71(&(Local_116.f_9F[iVar0 /*2*/]), 0x000007D0, 0x00000000))
				{
					Local_116.f_23[iVar0] = unk_0xF66E5A439A080021(func_76(iVar0), 0f, 0f, func_75(iVar0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), Local_116.f_23[iVar0], func_78(), func_70(iVar0, Local_116.f_28[iVar0]), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_116.f_23[iVar0]);
					func_69(&(Local_116.f_9F[iVar0 /*2*/]));
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
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
	int iVar22;
	struct<5> Var23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	
	iVar3 = 0x00000000;
	iVar4 = 0x00000000;
	bVar6 = 0x00000000;
	if (Local_116.f_240[iParam0] > 0x00000007 && Local_116.f_240[iParam0] < 0x0000000C)
	{
		bVar6 = 0x00000001;
	}
	if ((!func_68(iParam0, bVar6) || Global_265DDC == iParam0) || Local_116[iParam0])
	{
		Local_116[iParam0] = 0x00000001;
		func_67(iParam0);
		return;
	}
	if (unk_0xE9F78D191AD5EDBA(Local_116.f_32[iParam0]))
	{
		if (!unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
		{
			Local_116.f_A[iParam0] = 0x00000000;
			unk_0x8D30F6387EE75385(Local_116.f_32[iParam0]);
		}
		else if (!Local_116.f_A[iParam0])
		{
			unk_0x866EE3B81CEF363A(Local_116.f_32[iParam0], 0x00000000);
			Local_116.f_A[iParam0] = 0x00000001;
		}
	}
	Local_116.f_2D[iParam0] = unk_0xF958843510932FF6(Local_116.f_23[iParam0]);
	switch (Local_116.f_240[iParam0])
	{
		case 0x00000000:
			func_66(0x00000001, iParam0);
			break;
		
		case 0x00000001:
			bVar0 = 0x00000001;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000004)
			{
				iVar1 = Local_116.f_75[(iParam0 * 4 + iVar2)];
				if (iVar1 != 0xFFFFFFFF)
				{
					if (Local_158[iVar1 /*9*/] != 0x00000000 || Local_158[iVar1 /*9*/].f_6 != 0x00000000)
					{
						bVar0 = 0x00000000;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_65(&(Local_116.f_A8[iParam0 /*55*/]));
				func_64(iParam0);
				func_66(0x00000002, iParam0);
			}
			break;
		
		case 0x00000002:
			bVar0 = 0x00000001;
			iVar2 = 0x00000000;
			while (iVar2 < 0x00000004)
			{
				iVar1 = Local_116.f_75[(iParam0 * 4 + iVar2)];
				if (iVar1 != 0xFFFFFFFF)
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/].f_6, 0x00000000))
					{
						bVar0 = 0x00000000;
					}
				}
				iVar2++;
			}
			if (bVar0)
			{
				func_66(0x00000003, iParam0);
			}
			break;
		
		case 0x00000003:
			if (!func_63(iParam0, 0x00000012))
			{
				if (func_53(0x0000000C, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
				{
					func_52(iParam0, 0x00000012);
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
				{
					if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
					{
						if (Local_116.f_1E[iParam0] == 0x00000001)
						{
							if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_77(iParam0), 0x00000003))
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_51(iParam0, 0xFFFFFFFF), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
							}
						}
						else if (((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000000), 0x00000003) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000001), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000002), 0x00000003)) || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000003), 0x00000003))
						{
							Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_50(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
						}
						else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_77(iParam0), 0x00000003))
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_74(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
							}
						}
						else if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
						{
							Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_77(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
						}
					}
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_116.f_32[iParam0]);
				}
			}
			bVar0 = 0x00000001;
			iVar3 = 0x00000000;
			iVar4 = 0x00000000;
			if (!func_72(&(Local_116.f_96[iParam0 /*2*/])))
			{
				iVar2 = 0x00000000;
				while (iVar2 < 0x00000004)
				{
					iVar1 = Local_116.f_75[(iParam0 * 4 + iVar2)];
					if (iVar1 != 0xFFFFFFFF)
					{
						iVar3++;
						if (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000)
						{
							func_73(&(Local_116.f_96[iParam0 /*2*/]), 0x00000000, 0x00000000);
						}
						else
						{
							iVar4++;
						}
					}
					iVar2++;
				}
				if (iVar3 == iVar4)
				{
					if (!func_72(&(Local_116.f_24F[iParam0 /*2*/])))
					{
						func_73(&(Local_116.f_24F[iParam0 /*2*/]), 0x00000000, 0x00000000);
					}
					else if (func_71(&(Local_116.f_24F[iParam0 /*2*/]), 0x0000EA60, 0x00000000))
					{
						func_64(iParam0);
						func_69(&(Local_116.f_24F[iParam0 /*2*/]));
					}
					else if (func_71(&(Local_116.f_24F[iParam0 /*2*/]), 0x00007530, 0x00000000))
					{
						if (!func_63(iParam0, 0x00000011))
						{
							if (func_53(0x00000008, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
							{
								func_52(iParam0, 0x00000011);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_24F[iParam0 /*2*/]));
				}
			}
			else
			{
				iVar2 = 0x00000000;
				while (iVar2 < 0x00000004)
				{
					iVar1 = Local_116.f_75[(iParam0 * 4 + iVar2)];
					if (iVar1 != 0xFFFFFFFF)
					{
						if (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000)
						{
							iVar8++;
						}
						if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000002))
						{
							bVar0 = 0x00000000;
						}
					}
					iVar2++;
				}
				if (iVar8 > 0x00000000)
				{
					if (func_71(&(Local_116.f_96[iParam0 /*2*/]), 0x00007530, 0x00000000) || bVar0)
					{
						func_69(&(Local_116.f_96[iParam0 /*2*/]));
						func_64(iParam0);
						func_66(0x00000004, iParam0);
					}
					else if (func_71(&(Local_116.f_96[iParam0 /*2*/]), 0x00004650, 0x00000000))
					{
						if (!func_63(iParam0, 0x00000013))
						{
							if (func_53(0x0000000D, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
							{
								func_52(iParam0, 0x00000013);
							}
						}
					}
				}
				else
				{
					func_69(&(Local_116.f_96[iParam0 /*2*/]));
				}
			}
			break;
		
		case 0x00000004:
			func_64(iParam0);
			if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x0000000B))
			{
				if (func_48(iParam0))
				{
					unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000B);
				}
			}
			else if (func_47(iParam0))
			{
				unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x0000000B);
				func_66(0x00000005, iParam0);
			}
			break;
		
		case 0x00000005:
			if (!func_63(iParam0, 0x00000014))
			{
				if (func_53(0x00000015, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
				{
					func_52(iParam0, 0x00000014);
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
			{
				if ((unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000002)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000000)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000000)]);
						bVar9 = 0x00000001;
					}
					if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000001)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000001)]);
						bVar9 = 0x00000001;
					}
					if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000002)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000002)]);
						bVar9 = 0x00000001;
					}
					if (bVar9)
					{
						return;
					}
					if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
						{
							Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_44(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
						}
						else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000008))
						{
							if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
							{
								if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
								{
									Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_43(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "deck_shuffle_card_a", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "deck_shuffle_card_b", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "deck_shuffle_card_c", 1000f, -1000f, 0x0000000D);
									unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000008);
								}
							}
						}
						else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_42(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000008);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), 0x00000001, 0x00000000);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), 0x00000001, 0x00000000);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), 0x00000001, 0x00000000);
								func_66(0x00000006, iParam0);
							}
							else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x93E2C62B))
							{
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), 0x00000001, 0x00000000);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), 0x00000001, 0x00000000);
								unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), 0x00000001, 0x00000000);
							}
						}
					}
				}
			}
			break;
		
		case 0x00000006:
			if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x0000000B))
			{
				if (func_48(iParam0))
				{
					unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000B);
				}
			}
			else
			{
				Local_116.f_A8[iParam0 /*55*/] = 0x00000000;
				func_66(0x00000007, iParam0);
			}
			break;
		
		case 0x00000007:
			vVar11 = { func_76(iParam0) };
			vVar11.z = (vVar11.z + 0.914f);
			switch (Local_116.f_23B[iParam0])
			{
				case 0x00000000:
					iVar1 = Local_116.f_75[iParam0 * 4];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]);
										bVar12 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]);
										bVar12 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]);
										bVar12 = 0x00000001;
									}
									if (bVar12)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_38(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p01_card_a", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p01_card_b", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p01_card_c", 1000f, -1000f, 0x0000000D);
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
												{
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
													Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
											{
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
												Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						bVar7 = 0x00000000;
						func_36(0x00000001, iParam0);
					}
					break;
				
				case 0x00000001:
					iVar1 = Local_116.f_75[iParam0 * 4 + 1];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]);
										bVar13 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]);
										bVar13 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]);
										bVar13 = 0x00000001;
									}
									if (bVar13)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_35(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p02_card_a", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p02_card_b", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p02_card_c", 1000f, -1000f, 0x0000000D);
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
												{
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
													Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
											{
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
												Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						bVar7 = 0x00000000;
						func_36(0x00000002, iParam0);
					}
					break;
				
				case 0x00000002:
					iVar1 = Local_116.f_75[iParam0 * 4 + 2];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]);
										bVar14 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]);
										bVar14 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]);
										bVar14 = 0x00000001;
									}
									if (bVar14)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_34(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p03_card_a", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p03_card_b", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p03_card_c", 1000f, -1000f, 0x0000000D);
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
												{
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
													Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
											{
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
												Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						bVar7 = 0x00000000;
						func_36(0x00000003, iParam0);
					}
					break;
				
				case 0x00000003:
					iVar1 = Local_116.f_75[iParam0 * 4 + 3];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/];
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 1;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if (!unk_0xE9F78D191AD5EDBA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]))
								{
									iVar10 = Local_116.f_A8[iParam0 /*55*/] + 2;
									unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
									if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
									{
										func_39(&(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
									}
									return;
								}
								if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]);
										bVar15 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]);
										bVar15 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]);
										bVar15 = 0x00000001;
									}
									if (bVar15)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_33(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p04_card_a", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p04_card_b", 1000f, -1000f, 0x0000000D);
											unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "deck_deal_p04_card_c", 1000f, -1000f, 0x0000000D);
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
												{
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
													func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
													Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
													Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
												}
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											if (Local_116.f_19A[iVar1 /*5*/] == 0x00000000)
											{
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000000] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000001] = uVar5;
												func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
												Local_116.f_19A[iVar1 /*5*/].f_1[0x00000002] = uVar5;
												Local_116.f_19A[iVar1 /*5*/] = 0x00000003;
											}
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						bVar7 = 0x00000000;
						func_36(0x00000004, iParam0);
					}
					break;
				
				case 0x00000004:
					if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
					{
						if (!unk_0xE9F78D191AD5EDBA(Local_116.f_37[func_46(iParam0, 0x00000000)]))
						{
							iVar10 = Local_116.f_A8[iParam0 /*55*/];
							unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
							if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
							{
								func_39(&(Local_116.f_37[func_46(iParam0, 0x00000000)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
							}
							return;
						}
						if (!unk_0xE9F78D191AD5EDBA(Local_116.f_37[func_46(iParam0, 0x00000001)]))
						{
							iVar10 = Local_116.f_A8[iParam0 /*55*/] + 1;
							unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
							if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
							{
								func_39(&(Local_116.f_37[func_46(iParam0, 0x00000001)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
							}
							return;
						}
						if (!unk_0xE9F78D191AD5EDBA(Local_116.f_37[func_46(iParam0, 0x00000002)]))
						{
							iVar10 = Local_116.f_A8[iParam0 /*55*/] + 2;
							unk_0x523BCC9DC80CD82F(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5));
							if (unk_0xB87F6CF6E5628C67(func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5)))
							{
								func_39(&(Local_116.f_37[func_46(iParam0, 0x00000002)]), func_40(Local_116.f_A8[iParam0 /*55*/].f_2[iVar10], Local_159.f_5), vVar11, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
							}
							return;
						}
						if ((unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000002)]))
						{
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000000)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000000)]);
								bVar16 = 0x00000001;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000001)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000001)]);
								bVar16 = 0x00000001;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000002)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000002)]);
								bVar16 = 0x00000001;
							}
							if (bVar16)
							{
								return;
							}
							if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
								{
									Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_32(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "deck_deal_self_card_a", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "deck_deal_self_card_b", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "deck_deal_self_card_c", 1000f, -1000f, 0x0000000D);
									unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
								}
								else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
								{
									if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
									{
										bVar7 = 0x00000001;
										Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_31(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
										if (Local_116.f_185[iParam0 /*5*/] == 0x00000000)
										{
											func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
											Local_116.f_185[iParam0 /*5*/].f_1[0x00000000] = uVar5;
											func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
											Local_116.f_185[iParam0 /*5*/].f_1[0x00000001] = uVar5;
											func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
											Local_116.f_185[iParam0 /*5*/].f_1[0x00000002] = uVar5;
											Local_116.f_185[iParam0 /*5*/] = 0x00000003;
										}
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
									}
								}
								else
								{
									bVar7 = 0x00000001;
									Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_31(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
									if (Local_116.f_185[iParam0 /*5*/] == 0x00000000)
									{
										func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
										Local_116.f_185[iParam0 /*5*/].f_1[0x00000000] = uVar5;
										func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
										Local_116.f_185[iParam0 /*5*/].f_1[0x00000001] = uVar5;
										func_37(&(Local_116.f_A8[iParam0 /*55*/]), &uVar5);
										Local_116.f_185[iParam0 /*5*/].f_1[0x00000002] = uVar5;
										Local_116.f_185[iParam0 /*5*/] = 0x00000003;
									}
								}
							}
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						bVar7 = 0x00000000;
						func_36(0x00000000, iParam0);
						func_66(0x00000008, iParam0);
					}
					break;
			}
			break;
		
		case 0x00000008:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]) && Local_116.f_2D[iParam0] != 0xFFFFFFFF)
				{
					if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
					{
						Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_77(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
						func_64(iParam0);
						func_66(0x00000009, iParam0);
					}
				}
			}
			break;
		
		case 0x00000009:
			bVar0 = 0x00000001;
			if (!func_72(&(Local_116.f_96[iParam0 /*2*/])))
			{
				func_73(&(Local_116.f_96[iParam0 /*2*/]), 0x00000000, 0x00000000);
			}
			else
			{
				iVar2 = 0x00000000;
				while (iVar2 < 0x00000004)
				{
					iVar1 = Local_116.f_75[(iParam0 * 4 + iVar2)];
					if (iVar1 != 0xFFFFFFFF)
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003)) && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (!func_63(iParam0, 0x00000012))
							{
								if (func_53(0x0000000E, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
								{
									func_52(iParam0, 0x00000012);
								}
							}
							bVar0 = 0x00000000;
						}
					}
					iVar2++;
				}
				if (bVar0)
				{
					func_69(&(Local_116.f_96[iParam0 /*2*/]));
					func_66(0x0000000A, iParam0);
				}
				else if (func_71(&(Local_116.f_96[iParam0 /*2*/]), 0x00003A98, 0x00000000))
				{
					if (!func_63(iParam0, 0x00000013))
					{
						if (func_53(0x00000009, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
						{
							func_52(iParam0, 0x00000013);
						}
					}
				}
			}
			break;
		
		case 0x0000000A:
			switch (Local_116.f_245[iParam0])
			{
				case 0x00000000:
					if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
					{
						if ((unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000002)]))
						{
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000000)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000000)]);
								bVar17 = 0x00000001;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000001)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000001)]);
								bVar17 = 0x00000001;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000002)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000002)]);
								bVar17 = 0x00000001;
							}
							if (bVar17)
							{
								return;
							}
							if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
							{
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
								{
									Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_30(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_self_card_a", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_self_card_b", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_self_card_c", 1000f, -1000f, 0x0000000D);
									unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
								}
								else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
								{
									if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
									{
										bVar7 = 0x00000001;
										Local_116.f_5[iParam0] = 0x00000001;
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
									}
								}
								else
								{
									bVar7 = 0x00000001;
									Local_116.f_5[iParam0] = 0x00000001;
									unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								}
							}
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						bVar7 = 0x00000000;
						func_29(0x00000001, iParam0);
					}
					break;
				
				case 0x00000001:
					iVar1 = Local_116.f_75[iParam0 * 4];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]);
										bVar18 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]);
										bVar18 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]);
										bVar18 = 0x00000001;
									}
									if (bVar18)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000004))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_28(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p01_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p01_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p01_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_27(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p01_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p01_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p01_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_26(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p01_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p01_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p01_card_c", 1000f, -1000f, 0x0000000D);
											}
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000C);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000C);
						bVar7 = 0x00000000;
						func_21(iParam0, iVar1);
						func_29(0x00000002, iParam0);
					}
					break;
				
				case 0x00000002:
					iVar1 = Local_116.f_75[iParam0 * 4 + 1];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]);
										bVar19 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]);
										bVar19 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]);
										bVar19 = 0x00000001;
									}
									if (bVar19)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000004))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_20(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p02_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p02_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p02_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_19(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p02_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p02_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p02_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_18(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p02_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p02_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p02_card_c", 1000f, -1000f, 0x0000000D);
											}
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000D);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000D);
						bVar7 = 0x00000000;
						func_21(iParam0, iVar1);
						func_29(0x00000003, iParam0);
					}
					break;
				
				case 0x00000003:
					iVar1 = Local_116.f_75[iParam0 * 4 + 2];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]);
										bVar20 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]);
										bVar20 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]);
										bVar20 = 0x00000001;
									}
									if (bVar20)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000004))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_17(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p03_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p03_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p03_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_16(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p03_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p03_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p03_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_15(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p03_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p03_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p03_card_c", 1000f, -1000f, 0x0000000D);
											}
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000E);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000E);
						bVar7 = 0x00000000;
						func_21(iParam0, iVar1);
						func_29(0x00000004, iParam0);
					}
					break;
				
				case 0x00000004:
					iVar1 = Local_116.f_75[iParam0 * 4 + 3];
					if (iVar1 >= 0x00000000)
					{
						if (Local_158[iVar1 /*9*/].f_2 == iParam0 && (Local_158[iVar1 /*9*/].f_3 > 0x00000000 || Local_158[iVar1 /*9*/].f_5 > 0x00000000))
						{
							if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
							{
								if (((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)])) && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001) || unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003)))
								{
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]);
										bVar21 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]);
										bVar21 = 0x00000001;
									}
									if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]))
									{
										unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]);
										bVar21 = 0x00000001;
									}
									if (bVar21)
									{
										return;
									}
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
										{
											Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
											if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000004))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_14(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p04_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p04_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_blind_p04_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000001))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_13(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p04_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p04_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_played_p04_card_c", 1000f, -1000f, 0x0000000D);
											}
											else if (unk_0xEAE0D21A50E6C7F4(Local_158[iVar1 /*9*/], 0x00000003))
											{
												unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_12(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p04_card_a", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p04_card_b", 1000f, -1000f, 0x0000000D);
												unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "reveal_folded_p04_card_c", 1000f, -1000f, 0x0000000D);
											}
											unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
										}
										else if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
										{
											if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
											{
												bVar7 = 0x00000001;
												unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											}
											else if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.5f)
											{
												unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000F);
											}
										}
										else
										{
											bVar7 = 0x00000001;
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										}
									}
								}
							}
							else
							{
								bVar7 = 0x00000001;
							}
						}
						else
						{
							bVar7 = 0x00000001;
						}
					}
					else
					{
						bVar7 = 0x00000001;
					}
					if (bVar7)
					{
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000F);
						bVar7 = 0x00000000;
						func_21(iParam0, iVar1);
						func_29(0x00000000, iParam0);
						func_66(0x0000000B, iParam0);
					}
					break;
			}
			break;
		
		case 0x0000000B:
			if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
					{
						Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_8(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000002))
					{
						if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_44(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
								unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000009);
								unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000002);
							}
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000009))
					{
						if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
						{
							if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_42(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000009);
								func_64(iParam0);
								func_66(0x0000000C, iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 0x0000000C:
			if (!func_63(iParam0, 0x00000015))
			{
				if (func_53(0x00000001, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF))
				{
					func_52(iParam0, 0x00000015);
				}
			}
			Var23.f_1 = 0x00000003;
			if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000003))
				{
					iVar2 = iParam0 * 4;
					iVar22 = Local_116.f_75[iVar2];
					if (iVar22 != func_411() && iVar22 > 0xFFFFFFFF)
					{
						if (Local_116.f_19A[iVar22 /*5*/] > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]);
									bVar24 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]);
									bVar24 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]);
									bVar24 = 0x00000001;
								}
								if (bVar24)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_7(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p01_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p01_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p01_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
								{
									if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000003);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), 0x00000000, 0x00000000);
											Local_116.f_19A[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAC26DCA0))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), 0x00000000, 0x00000000);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000003);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000000)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000000)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000000)]), 0x00000000, 0x00000000);
										Local_116.f_19A[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000003);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000003);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000003);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000004))
				{
					iVar2 = iParam0 * 4 + 1;
					iVar22 = Local_116.f_75[iVar2];
					if (iVar22 != func_411() && iVar22 > 0xFFFFFFFF)
					{
						if (Local_116.f_19A[iVar22 /*5*/] > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]);
									bVar25 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]);
									bVar25 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]);
									bVar25 = 0x00000001;
								}
								if (bVar25)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_6(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p02_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p02_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p02_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
								{
									if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000004);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), 0x00000000, 0x00000000);
											Local_116.f_19A[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAC26DCA0))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), 0x00000000, 0x00000000);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000004);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000001)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000001)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000001)]), 0x00000000, 0x00000000);
										Local_116.f_19A[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000004);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000004);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000004);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000005))
				{
					iVar2 = iParam0 * 4 + 2;
					iVar22 = Local_116.f_75[iVar2];
					if (iVar22 != func_411() && iVar22 > 0xFFFFFFFF)
					{
						if (Local_116.f_19A[iVar22 /*5*/] > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]);
									bVar26 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]);
									bVar26 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]);
									bVar26 = 0x00000001;
								}
								if (bVar26)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_5(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p03_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p03_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p03_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
								{
									if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000005);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), 0x00000000, 0x00000000);
											Local_116.f_19A[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAC26DCA0))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), 0x00000000, 0x00000000);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000005);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000002)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000002)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000002)]), 0x00000000, 0x00000000);
										Local_116.f_19A[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000005);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000005);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000005);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000006))
				{
					iVar2 = iParam0 * 4 + 3;
					iVar22 = Local_116.f_75[iVar2];
					if (iVar22 != func_411() && iVar22 > 0xFFFFFFFF)
					{
						if (Local_116.f_19A[iVar22 /*5*/] > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
						{
							if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]))
							{
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]);
									bVar27 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]);
									bVar27 = 0x00000001;
								}
								if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]))
								{
									unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]);
									bVar27 = 0x00000001;
								}
								if (bVar27)
								{
									return;
								}
								if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
								{
									if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
									{
										Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_4(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p04_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p04_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), Local_116.f_23[iParam0], func_45(), "cards_collect_p04_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
									}
								}
								else if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
								{
									if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
									{
										if ((unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)) || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0x7E26188D))
										{
											unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
											unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000006);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), 0x00000000, 0x00000000);
											Local_116.f_19A[iVar22 /*5*/] = { Var23 };
										}
										else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAC26DCA0))
										{
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), 0x00000000, 0x00000000);
											unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), 0x00000000, 0x00000000);
										}
									}
									else
									{
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000006);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000000, 0x00000003)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000001, 0x00000003)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(iParam0, 0x00000002, 0x00000003)]), 0x00000000, 0x00000000);
										Local_116.f_19A[iVar22 /*5*/] = { Var23 };
									}
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
								unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000006);
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000006);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000006);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000007))
				{
					if (Local_116.f_185[iParam0 /*5*/] > 0x00000000 || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
					{
						if ((unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000000)]) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000001)])) && unk_0xE5DBF9B6126856CA(Local_116.f_37[func_46(iParam0, 0x00000002)]))
						{
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000000)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000000)]);
								bVar28 = 0x00000001;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000001)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000001)]);
								bVar28 = 0x00000001;
							}
							if (!unk_0x526BC32A660C89E6(Local_116.f_37[func_46(iParam0, 0x00000002)]))
							{
								unk_0x8D30F6387EE75385(Local_116.f_37[func_46(iParam0, 0x00000002)]);
								bVar28 = 0x00000001;
							}
							if (bVar28)
							{
								return;
							}
							if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x00000000))
							{
								if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
								{
									Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_3(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), Local_116.f_23[iParam0], func_45(), "cards_collect_self_card_a", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), Local_116.f_23[iParam0], func_45(), "cards_collect_self_card_b", 1000f, -1000f, 0x0000000D);
									unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), Local_116.f_23[iParam0], func_45(), "cards_collect_self_card_c", 1000f, -1000f, 0x0000000D);
									unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
									unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000000);
								}
							}
							else if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
							{
								if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
								{
									if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
									{
										Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_31(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
										unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
										unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000007);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), 0x00000000, 0x00000000);
										Local_116.f_185[iParam0 /*5*/] = { Var23 };
									}
									else if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAC26DCA0))
									{
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), 0x00000000, 0x00000000);
										unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), 0x00000000, 0x00000000);
									}
								}
								else
								{
									Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
									unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_45(), func_31(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
									unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
									unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
									unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000007);
									unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000000)]), 0x00000000, 0x00000000);
									unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000001)]), 0x00000000, 0x00000000);
									unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(Local_116.f_37[func_46(iParam0, 0x00000002)]), 0x00000000, 0x00000000);
									Local_116.f_185[iParam0 /*5*/] = { Var23 };
								}
							}
						}
						else
						{
							unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000007);
						}
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000000);
						unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x00000007);
					}
				}
				else if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], 0x0000000A))
				{
					if (Local_116.f_2D[iParam0] != 0xFFFFFFFF)
					{
						if (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43))
						{
							if (Local_116.f_1E[iParam0] == 0x00000001)
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_51(iParam0, 0xFFFFFFFF), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
							}
							else
							{
								Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_77(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
							}
							unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), 0x0000000A);
						}
					}
				}
				else
				{
					Local_116.f_5[iParam0] = 0x00000000;
					Local_116.f_14[iParam0] = 0x00000000;
					Local_116.f_19[iParam0]++;
					func_69(&(Local_116.f_96[iParam0 /*2*/]));
					func_66(0x00000000, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_cards_collect_self";
	}
	return "cards_collect_self";
}

char* func_4(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_cards_collect_p04";
	}
	return "cards_collect_p04";
}

char* func_5(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_cards_collect_p03";
	}
	return "cards_collect_p03";
}

char* func_6(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_cards_collect_p02";
	}
	return "cards_collect_p02";
}

char* func_7(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_cards_collect_p01";
	}
	return "cards_collect_p01";
}

char* func_8(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = 0x00000000;
	iVar1 = func_9(&(Local_116.f_185[iParam0 /*5*/].f_1), 0x00000000, 0x00000000);
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000004)
	{
		iVar2 = Local_116.f_75[(iParam0 * 4 + iVar3)];
		if (iVar2 != func_411())
		{
			iVar4 = func_9(&(Local_116.f_19A[iVar2 /*5*/].f_1), 0x00000000, 0x00000000);
			if (iVar4 > iVar1 && (unk_0xEAE0D21A50E6C7F4(Local_158[iVar2 /*9*/], 0x00000001) || Local_158[iVar2 /*9*/].f_3 <= 0x00000000))
			{
				bVar0 = 0x00000001;
			}
		}
		iVar3++;
	}
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		if (iVar1 < 0x0000000C)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
			{
				case 0x00000000:
					return "female_dealer_reaction_impartial_var01";
				
				case 0x00000001:
					return "female_dealer_reaction_impartial_var02";
				
				case 0x00000002:
					return "female_dealer_reaction_impartial_var03";
				
				default:
			}
		}
		else if (bVar0)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
			{
				case 0x00000000:
					return "female_dealer_reaction_good_var01";
				
				case 0x00000001:
					return "female_dealer_reaction_good_var02";
				
				case 0x00000002:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
			{
				case 0x00000000:
					return "female_dealer_reaction_bad_var01";
				
				case 0x00000001:
					return "female_dealer_reaction_bad_var02";
				
				case 0x00000002:
					return "female_dealer_reaction_bad_var03";
				}
			
			default:
		}
	}
	else if (iVar1 < 0x0000000C)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_impartial_var_01";
			
			case 0x00000001:
				return "reaction_impartial_var_02";
			
			case 0x00000002:
				return "reaction_impartial_var_03";
			
			case 0x00000003:
				return "reaction_impartial_var_04";
			
			default:
		}
	}
	else if (bVar0)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000003))
		{
			case 0x00000000:
				return "reaction_good_var_01";
			
			case 0x00000001:
				return "reaction_good_var_02";
			
			case 0x00000002:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_bad_var_01";
			
			case 0x00000001:
				return "reaction_bad_var_02";
			
			case 0x00000002:
				return "reaction_bad_var_03";
			
			case 0x00000003:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if ((func_11((*uParam0)[0x00000000]) != func_11((*uParam0)[0x00000001]) && func_11((*uParam0)[0x00000000]) != func_11((*uParam0)[0x00000002])) && func_11((*uParam0)[0x00000001]) != func_11((*uParam0)[0x00000002]))
	{
		bVar0 = 0x00000000;
		iVar1 = ((func_11((*uParam0)[0x00000000]) + func_11((*uParam0)[0x00000001])) + func_11((*uParam0)[0x00000002]));
		if (iVar1 == 0x00000013)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x0000000E || func_11((*uParam0)[0x00000000]) == 0x00000002) || func_11((*uParam0)[0x00000000]) == 0x00000003) && ((func_11((*uParam0)[0x00000001]) == 0x0000000E || func_11((*uParam0)[0x00000001]) == 0x00000002) || func_11((*uParam0)[0x00000001]) == 0x00000003)) && ((func_11((*uParam0)[0x00000002]) == 0x0000000E || func_11((*uParam0)[0x00000002]) == 0x00000002) || func_11((*uParam0)[0x00000002]) == 0x00000003))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000009)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000002 || func_11((*uParam0)[0x00000000]) == 0x00000003) || func_11((*uParam0)[0x00000000]) == 0x00000004) && ((func_11((*uParam0)[0x00000001]) == 0x00000002 || func_11((*uParam0)[0x00000001]) == 0x00000003) || func_11((*uParam0)[0x00000001]) == 0x00000004)) && ((func_11((*uParam0)[0x00000002]) == 0x00000002 || func_11((*uParam0)[0x00000002]) == 0x00000003) || func_11((*uParam0)[0x00000002]) == 0x00000004))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x0000000C)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000003 || func_11((*uParam0)[0x00000000]) == 0x00000004) || func_11((*uParam0)[0x00000000]) == 0x00000005) && ((func_11((*uParam0)[0x00000001]) == 0x00000003 || func_11((*uParam0)[0x00000001]) == 0x00000004) || func_11((*uParam0)[0x00000001]) == 0x00000005)) && ((func_11((*uParam0)[0x00000002]) == 0x00000003 || func_11((*uParam0)[0x00000002]) == 0x00000004) || func_11((*uParam0)[0x00000002]) == 0x00000005))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x0000000F)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000004 || func_11((*uParam0)[0x00000000]) == 0x00000005) || func_11((*uParam0)[0x00000000]) == 0x00000006) && ((func_11((*uParam0)[0x00000001]) == 0x00000004 || func_11((*uParam0)[0x00000001]) == 0x00000005) || func_11((*uParam0)[0x00000001]) == 0x00000006)) && ((func_11((*uParam0)[0x00000002]) == 0x00000004 || func_11((*uParam0)[0x00000002]) == 0x00000005) || func_11((*uParam0)[0x00000002]) == 0x00000006))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000012)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000005 || func_11((*uParam0)[0x00000000]) == 0x00000006) || func_11((*uParam0)[0x00000000]) == 0x00000007) && ((func_11((*uParam0)[0x00000001]) == 0x00000005 || func_11((*uParam0)[0x00000001]) == 0x00000006) || func_11((*uParam0)[0x00000001]) == 0x00000007)) && ((func_11((*uParam0)[0x00000002]) == 0x00000005 || func_11((*uParam0)[0x00000002]) == 0x00000006) || func_11((*uParam0)[0x00000002]) == 0x00000007))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000015)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000006 || func_11((*uParam0)[0x00000000]) == 0x00000007) || func_11((*uParam0)[0x00000000]) == 0x00000008) && ((func_11((*uParam0)[0x00000001]) == 0x00000006 || func_11((*uParam0)[0x00000001]) == 0x00000007) || func_11((*uParam0)[0x00000001]) == 0x00000008)) && ((func_11((*uParam0)[0x00000002]) == 0x00000006 || func_11((*uParam0)[0x00000002]) == 0x00000007) || func_11((*uParam0)[0x00000002]) == 0x00000008))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000018)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000007 || func_11((*uParam0)[0x00000000]) == 0x00000008) || func_11((*uParam0)[0x00000000]) == 0x00000009) && ((func_11((*uParam0)[0x00000001]) == 0x00000007 || func_11((*uParam0)[0x00000001]) == 0x00000008) || func_11((*uParam0)[0x00000001]) == 0x00000009)) && ((func_11((*uParam0)[0x00000002]) == 0x00000007 || func_11((*uParam0)[0x00000002]) == 0x00000008) || func_11((*uParam0)[0x00000002]) == 0x00000009))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x0000001B)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000008 || func_11((*uParam0)[0x00000000]) == 0x00000009) || func_11((*uParam0)[0x00000000]) == 0x0000000A) && ((func_11((*uParam0)[0x00000001]) == 0x00000008 || func_11((*uParam0)[0x00000001]) == 0x00000009) || func_11((*uParam0)[0x00000001]) == 0x0000000A)) && ((func_11((*uParam0)[0x00000002]) == 0x00000008 || func_11((*uParam0)[0x00000002]) == 0x00000009) || func_11((*uParam0)[0x00000002]) == 0x0000000A))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x0000001E)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x00000009 || func_11((*uParam0)[0x00000000]) == 0x0000000A) || func_11((*uParam0)[0x00000000]) == 0x0000000B) && ((func_11((*uParam0)[0x00000001]) == 0x00000009 || func_11((*uParam0)[0x00000001]) == 0x0000000A) || func_11((*uParam0)[0x00000001]) == 0x0000000B)) && ((func_11((*uParam0)[0x00000002]) == 0x00000009 || func_11((*uParam0)[0x00000002]) == 0x0000000A) || func_11((*uParam0)[0x00000002]) == 0x0000000B))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000021)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x0000000A || func_11((*uParam0)[0x00000000]) == 0x0000000B) || func_11((*uParam0)[0x00000000]) == 0x0000000C) && ((func_11((*uParam0)[0x00000001]) == 0x0000000A || func_11((*uParam0)[0x00000001]) == 0x0000000B) || func_11((*uParam0)[0x00000001]) == 0x0000000C)) && ((func_11((*uParam0)[0x00000002]) == 0x0000000A || func_11((*uParam0)[0x00000002]) == 0x0000000B) || func_11((*uParam0)[0x00000002]) == 0x0000000C))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000024)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x0000000B || func_11((*uParam0)[0x00000000]) == 0x0000000C) || func_11((*uParam0)[0x00000000]) == 0x0000000D) && ((func_11((*uParam0)[0x00000001]) == 0x0000000B || func_11((*uParam0)[0x00000001]) == 0x0000000C) || func_11((*uParam0)[0x00000001]) == 0x0000000D)) && ((func_11((*uParam0)[0x00000002]) == 0x0000000B || func_11((*uParam0)[0x00000002]) == 0x0000000C) || func_11((*uParam0)[0x00000002]) == 0x0000000D))
			{
				bVar0 = 0x00000001;
			}
		}
		else if (iVar1 == 0x00000027)
		{
			if ((((func_11((*uParam0)[0x00000000]) == 0x0000000C || func_11((*uParam0)[0x00000000]) == 0x0000000D) || func_11((*uParam0)[0x00000000]) == 0x0000000E) && ((func_11((*uParam0)[0x00000001]) == 0x0000000C || func_11((*uParam0)[0x00000001]) == 0x0000000D) || func_11((*uParam0)[0x00000001]) == 0x0000000E)) && ((func_11((*uParam0)[0x00000002]) == 0x0000000C || func_11((*uParam0)[0x00000002]) == 0x0000000D) || func_11((*uParam0)[0x00000002]) == 0x0000000E))
			{
				bVar0 = 0x00000001;
			}
		}
		if (bVar0)
		{
			if (iVar1 == 0x00000013)
			{
				iVar1 = 0x00000006;
			}
			if (func_10((*uParam0)[0x00000000]) == func_10((*uParam0)[0x00000001]) && func_10((*uParam0)[0x00000000]) == func_10((*uParam0)[0x00000002]))
			{
				return iVar1 + 500;
			}
			return iVar1 + 300;
		}
	}
	iVar2 = 0x00000000;
	if (func_11((*uParam0)[0x00000000]) == func_11((*uParam0)[0x00000001]) && func_11((*uParam0)[0x00000000]) != func_11((*uParam0)[0x00000002]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0x00000000]) + func_11((*uParam0)[0x00000001])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0x00000002]);
		}
	}
	else if (func_11((*uParam0)[0x00000001]) == func_11((*uParam0)[0x00000002]) && func_11((*uParam0)[0x00000001]) != func_11((*uParam0)[0x00000000]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0x00000001]) + func_11((*uParam0)[0x00000002])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0x00000000]);
		}
	}
	else if (func_11((*uParam0)[0x00000002]) == func_11((*uParam0)[0x00000000]) && func_11((*uParam0)[0x00000002]) != func_11((*uParam0)[0x00000001]))
	{
		if (!bParam1 && !bParam2)
		{
			return (func_11((*uParam0)[0x00000000]) + func_11((*uParam0)[0x00000002])) + 100;
		}
		else
		{
			return func_11((*uParam0)[0x00000001]);
		}
	}
	else if (func_11((*uParam0)[0x00000000]) == func_11((*uParam0)[0x00000001]) && func_11((*uParam0)[0x00000000]) == func_11((*uParam0)[0x00000002]))
	{
		return ((func_11((*uParam0)[0x00000000]) + func_11((*uParam0)[0x00000001])) + func_11((*uParam0)[0x00000002])) + 400;
	}
	else if (func_10((*uParam0)[0x00000000]) == func_10((*uParam0)[0x00000001]) && func_10((*uParam0)[0x00000000]) == func_10((*uParam0)[0x00000002]))
	{
		iVar2 = 0x000000C8;
	}
	if (func_11((*uParam0)[0x00000000]) > func_11((*uParam0)[0x00000001]) && func_11((*uParam0)[0x00000000]) > func_11((*uParam0)[0x00000002]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0x00000001]) > func_11((*uParam0)[0x00000002]))
			{
				return (func_11((*uParam0)[0x00000001]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0x00000002]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0x00000001]) > func_11((*uParam0)[0x00000002]))
			{
				return (func_11((*uParam0)[0x00000002]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0x00000001]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0x00000000]) + iVar2);
	}
	else if (func_11((*uParam0)[0x00000001]) > func_11((*uParam0)[0x00000000]) && func_11((*uParam0)[0x00000001]) > func_11((*uParam0)[0x00000002]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0x00000000]) > func_11((*uParam0)[0x00000002]))
			{
				return (func_11((*uParam0)[0x00000000]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0x00000002]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0x00000000]) > func_11((*uParam0)[0x00000002]))
			{
				return (func_11((*uParam0)[0x00000002]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0x00000000]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0x00000001]) + iVar2);
	}
	else if (func_11((*uParam0)[0x00000002]) > func_11((*uParam0)[0x00000000]) && func_11((*uParam0)[0x00000002]) > func_11((*uParam0)[0x00000001]))
	{
		if (bParam1)
		{
			if (func_11((*uParam0)[0x00000000]) > func_11((*uParam0)[0x00000001]))
			{
				return (func_11((*uParam0)[0x00000000]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0x00000001]) + iVar2);
			}
		}
		else if (bParam2)
		{
			if (func_11((*uParam0)[0x00000000]) > func_11((*uParam0)[0x00000001]))
			{
				return (func_11((*uParam0)[0x00000001]) + iVar2);
			}
			else
			{
				return (func_11((*uParam0)[0x00000000]) + iVar2);
			}
		}
		return (func_11((*uParam0)[0x00000002]) + iVar2);
	}
	return 0x00000000;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
			return 0x00000000;
		
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
			return 0x00000001;
		
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
			return 0x00000002;
		
		case 0x00000028:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
			return 0x00000003;
		
		default:
	}
	return 0x00000003;
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000002:
		case 0x0000000F:
		case 0x0000001C:
		case 0x00000029:
			return 0x00000002;
		
		case 0x00000003:
		case 0x00000010:
		case 0x0000001D:
		case 0x0000002A:
			return 0x00000003;
		
		case 0x00000004:
		case 0x00000011:
		case 0x0000001E:
		case 0x0000002B:
			return 0x00000004;
		
		case 0x00000005:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000002C:
			return 0x00000005;
		
		case 0x00000006:
		case 0x00000013:
		case 0x00000020:
		case 0x0000002D:
			return 0x00000006;
		
		case 0x00000007:
		case 0x00000014:
		case 0x00000021:
		case 0x0000002E:
			return 0x00000007;
		
		case 0x00000008:
		case 0x00000015:
		case 0x00000022:
		case 0x0000002F:
			return 0x00000008;
		
		case 0x00000009:
		case 0x00000016:
		case 0x00000023:
		case 0x00000030:
			return 0x00000009;
		
		case 0x0000000A:
		case 0x00000017:
		case 0x00000024:
		case 0x00000031:
			return 0x0000000A;
		
		case 0x0000000B:
		case 0x00000018:
		case 0x00000025:
		case 0x00000032:
			return 0x0000000B;
		
		case 0x0000000C:
		case 0x00000019:
		case 0x00000026:
		case 0x00000033:
			return 0x0000000C;
		
		case 0x0000000D:
		case 0x0000001A:
		case 0x00000027:
		case 0x00000034:
			return 0x0000000D;
		
		case 0x00000001:
		case 0x0000000E:
		case 0x0000001B:
		case 0x00000028:
			return 0x0000000E;
		
		default:
	}
	return 0x00000000;
}

char* func_12(int iParam0)
{
	if (Local_116.f_F[iParam0] > 0x00000007)
	{
		return "female_reveal_folded_p04";
	}
	return "reveal_folded_p04";
}

char* func_13(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_played_p04";
	}
	return "reveal_played_p04";
}

char* func_14(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_blind_p04";
	}
	return "reveal_blind_p04";
}

char* func_15(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_folded_p03";
	}
	return "reveal_folded_p03";
}

char* func_16(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_played_p03";
	}
	return "reveal_played_p03";
}

char* func_17(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_blind_p03";
	}
	return "reveal_blind_p03";
}

char* func_18(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_folded_p02";
	}
	return "reveal_folded_p02";
}

char* func_19(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_played_p02";
	}
	return "reveal_played_p02";
}

char* func_20(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_blind_p02";
	}
	return "reveal_blind_p02";
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000001;
	}
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000004)
	{
		return 0x00000001;
	}
	if (!func_24(iParam0, iParam1) && !func_22(iParam1))
	{
		return func_53(0x0000000B, &(Local_116.f_32[iParam0]), 0x00000000, 0xFFFFFFFF);
	}
	return 0x00000001;
}

int func_22(int iParam0)
{
	int iVar0;
	
	if (Local_158[iParam0 /*9*/].f_5 > 0x00000000)
	{
		iVar0 = func_9(&(Local_116.f_19A[iParam0 /*5*/].f_1), 0x00000000, 0x00000000);
		if (func_23(iVar0) > 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_23(int iParam0)
{
	if (iParam0 > 0x000001F4)
	{
		return 0x00000028;
	}
	else if (iParam0 > 0x00000190)
	{
		return 0x0000001E;
	}
	else if (iParam0 > 0x0000012C)
	{
		return 0x00000006;
	}
	else if (iParam0 > 0x000000C8)
	{
		return 0x00000004;
	}
	else if (iParam0 > 0x00000064)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_24(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_158[iParam1 /*9*/].f_3 > 0x00000000 && unk_0xEAE0D21A50E6C7F4(Local_158[iParam1 /*9*/], 0x00000001))
	{
		iVar0 = func_9(&(Local_116.f_19A[iParam1 /*5*/].f_1), 0x00000000, 0x00000000);
		iVar1 = func_9(&(Local_116.f_185[iParam0 /*5*/].f_1), 0x00000000, 0x00000000);
		if (!func_25(iVar1))
		{
			return 0x00000001;
		}
		if (iVar0 > iVar1)
		{
			return 0x00000001;
		}
		if (iVar0 == iVar1)
		{
			iVar0 = func_9(&(Local_116.f_19A[iParam1 /*5*/].f_1), 0x00000001, 0x00000000);
			iVar1 = func_9(&(Local_116.f_185[iParam0 /*5*/].f_1), 0x00000001, 0x00000000);
			if (iVar0 > iVar1)
			{
				return 0x00000001;
			}
			if (iVar0 == iVar1)
			{
				iVar0 = func_9(&(Local_116.f_19A[iParam1 /*5*/].f_1), 0x00000000, 0x00000001);
				iVar1 = func_9(&(Local_116.f_185[iParam0 /*5*/].f_1), 0x00000000, 0x00000001);
				if (iVar0 > iVar1)
				{
					return 0x00000001;
				}
			}
		}
	}
	return 0x00000000;
}

int func_25(int iParam0)
{
	if (iParam0 >= 0x0000000C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

char* func_26(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_folded_p01";
	}
	return "reveal_folded_p01";
}

char* func_27(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_played_p01";
	}
	return "reveal_played_p01";
}

char* func_28(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_blind_p01";
	}
	return "reveal_blind_p01";
}

void func_29(int iParam0, int iParam1)
{
	Local_116.f_245[iParam1] = iParam0;
}

char* func_30(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_reveal_self";
	}
	return "reveal_self";
}

char* func_31(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_put_down";
	}
	return "deck_put_down";
}

char* func_32(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_deal_self";
	}
	return "deck_deal_self";
}

char* func_33(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_deal_p04";
	}
	return "deck_deal_p04";
}

char* func_34(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_deal_p03";
	}
	return "deck_deal_p03";
}

char* func_35(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_deal_p02";
	}
	return "deck_deal_p02";
}

void func_36(int iParam0, int iParam1)
{
	Local_116.f_23B[iParam1] = iParam0;
}

int func_37(var uParam0, var uParam1)
{
	if (*uParam0 >= uParam0->f_1)
	{
		return 0x00000000;
	}
	*uParam1 = uParam0->f_2[*uParam0];
	*uParam0++;
	return 0x00000001;
}

char* func_38(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_deal_p01";
	}
	return "deck_deal_p01";
}

int func_39(var uParam0, int iParam1, vector3 vParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x081C8BC5094A7B76(0x00000001))
	{
		return 0x00000000;
	}
	if (bParam7)
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0xB0BE3DFBBB59A620(iParam1, vParam2, iParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = unk_0x4193A2DE62BC07C0(unk_0x7707E48765093646(iParam1, vParam2, iParam4, bParam3, bParam5));
	}
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		unk_0x120A395B0ECB8EA5(unk_0x09AD4CE7DA179533(*uParam0), bParam6);
		if (bParam8)
		{
			unk_0x271603AF9C0C7EB3(unk_0x09AD4CE7DA179533(*uParam0), 0x00000001);
		}
		if (bParam9)
		{
			unk_0x4A4806F9D471E491(unk_0x09AD4CE7DA179533(*uParam0), 0x00000000, 0x00000000);
		}
		if (unk_0xECE0BE5313FD8BDA(unk_0x09AD4CE7DA179533(*uParam0)))
		{
			if (bParam3)
			{
				unk_0xF4F945BB00F6E31C(*uParam0, 0x00000001);
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

int func_40(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0x00000001:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_a_a");
			
			case 0x00000002:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_02a");
			
			case 0x00000003:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_03a");
			
			case 0x00000004:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_04a");
			
			case 0x00000005:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_05a");
			
			case 0x00000006:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_06a");
			
			case 0x00000007:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_07a");
			
			case 0x00000008:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_08a");
			
			case 0x00000009:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_09a");
			
			case 0x0000000A:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_10a");
			
			case 0x0000000B:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_j_a");
			
			case 0x0000000C:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_q_a");
			
			case 0x0000000D:
				return unk_0x12AB0310C2281427("vw_prop_vw_club_char_k_a");
			
			case 0x0000000E:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_a_a");
			
			case 0x0000000F:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_02a");
			
			case 0x00000010:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_03a");
			
			case 0x00000011:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_04a");
			
			case 0x00000012:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_05a");
			
			case 0x00000013:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_06a");
			
			case 0x00000014:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_07a");
			
			case 0x00000015:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_08a");
			
			case 0x00000016:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_09a");
			
			case 0x00000017:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_10a");
			
			case 0x00000018:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_j_a");
			
			case 0x00000019:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_q_a");
			
			case 0x0000001A:
				return unk_0x12AB0310C2281427("vw_prop_vw_dia_char_k_a");
			
			case 0x0000001B:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_a_a");
			
			case 0x0000001C:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_02a");
			
			case 0x0000001D:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_03a");
			
			case 0x0000001E:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_04a");
			
			case 0x0000001F:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_05a");
			
			case 0x00000020:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_06a");
			
			case 0x00000021:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_07a");
			
			case 0x00000022:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_08a");
			
			case 0x00000023:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_09a");
			
			case 0x00000024:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_10a");
			
			case 0x00000025:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_j_a");
			
			case 0x00000026:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_q_a");
			
			case 0x00000027:
				return unk_0x12AB0310C2281427("vw_prop_vw_hrt_char_k_a");
			
			case 0x00000028:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_a_a");
			
			case 0x00000029:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_02a");
			
			case 0x0000002A:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_03a");
			
			case 0x0000002B:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_04a");
			
			case 0x0000002C:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_05a");
			
			case 0x0000002D:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_06a");
			
			case 0x0000002E:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_07a");
			
			case 0x0000002F:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_08a");
			
			case 0x00000030:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_09a");
			
			case 0x00000031:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_10a");
			
			case 0x00000032:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_j_a");
			
			case 0x00000033:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_q_a");
			
			case 0x00000034:
				return unk_0x12AB0310C2281427("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000001:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_ace");
			
			case 0x00000002:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_02");
			
			case 0x00000003:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_03");
			
			case 0x00000004:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_04");
			
			case 0x00000005:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_05");
			
			case 0x00000006:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_06");
			
			case 0x00000007:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_07");
			
			case 0x00000008:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_08");
			
			case 0x00000009:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_09");
			
			case 0x0000000A:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_10");
			
			case 0x0000000B:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_jack");
			
			case 0x0000000C:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_queen");
			
			case 0x0000000D:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_club_king");
			
			case 0x0000000E:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_ace");
			
			case 0x0000000F:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_02");
			
			case 0x00000010:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_03");
			
			case 0x00000011:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_04");
			
			case 0x00000012:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_05");
			
			case 0x00000013:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_06");
			
			case 0x00000014:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_07");
			
			case 0x00000015:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_08");
			
			case 0x00000016:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_09");
			
			case 0x00000017:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_10");
			
			case 0x00000018:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_jack");
			
			case 0x00000019:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_queen");
			
			case 0x0000001A:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_dia_king");
			
			case 0x0000001B:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_ace");
			
			case 0x0000001C:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_02");
			
			case 0x0000001D:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_03");
			
			case 0x0000001E:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_04");
			
			case 0x0000001F:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_05");
			
			case 0x00000020:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_06");
			
			case 0x00000021:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_07");
			
			case 0x00000022:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_08");
			
			case 0x00000023:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_09");
			
			case 0x00000024:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_10");
			
			case 0x00000025:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_jack");
			
			case 0x00000026:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_queen");
			
			case 0x00000027:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_hrt_king");
			
			case 0x00000028:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_ace");
			
			case 0x00000029:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_02");
			
			case 0x0000002A:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_03");
			
			case 0x0000002B:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_04");
			
			case 0x0000002C:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_05");
			
			case 0x0000002D:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_06");
			
			case 0x0000002E:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_07");
			
			case 0x0000002F:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_08");
			
			case 0x00000030:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_09");
			
			case 0x00000031:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_10");
			
			case 0x00000032:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_jack");
			
			case 0x00000033:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_queen");
			
			case 0x00000034:
				return unk_0x12AB0310C2281427("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	return 0x00000000;
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam2 * 3) + iParam1);
}

char* func_42(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_idle";
	}
	return "deck_idle";
}

char* func_43(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_shuffle";
	}
	return "deck_shuffle";
}

char* func_44(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_deck_pick_up";
	}
	return "deck_pick_up";
}

char* func_45()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@dealer";
}

int func_46(int iParam0, int iParam1)
{
	return (iParam0 * 3 + iParam1);
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	vVar3 = { func_76(iParam0) };
	vVar3.z = (vVar3.z + 0.914f);
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		iVar0 = func_46(iParam0, iVar4);
		iVar2 = unk_0x09AC81E49EA267F7(0x00000001, 0x00000035);
		iVar1 = func_40(iVar2, Local_159.f_5);
		if (!unk_0xE9F78D191AD5EDBA(Local_116.f_37[iVar0]))
		{
			unk_0x523BCC9DC80CD82F(iVar1);
			if (!unk_0xB87F6CF6E5628C67(iVar1) || !func_39(&(Local_116.f_37[iVar0]), iVar1, vVar3, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001))
			{
				return 0x00000000;
			}
		}
		iVar4++;
	}
	return 0x00000001;
}

int func_48(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = 0x00000000;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000004)
	{
		iVar3 = 0x00000000;
		while (iVar3 < 0x00000003)
		{
			iVar1 = func_41(iParam0, iVar3, iVar2);
			if (unk_0xE9F78D191AD5EDBA(Local_116.f_44[iVar1]))
			{
				if (unk_0x526BC32A660C89E6(Local_116.f_44[iVar1]))
				{
					func_49(&(Local_116.f_44[iVar1]));
				}
				else
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[iVar1]);
					bVar0 = 0x00000001;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	iVar4 = 0x00000000;
	while (iVar4 < 0x00000003)
	{
		iVar1 = func_46(iParam0, iVar4);
		if (unk_0xE9F78D191AD5EDBA(Local_116.f_37[iVar1]))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_37[iVar1]))
			{
				func_49(&(Local_116.f_37[iVar1]));
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_37[iVar1]);
				bVar0 = 0x00000001;
			}
		}
		iVar4++;
	}
	if (bVar0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_49(var uParam0)
{
	int iVar0;
	
	if (unk_0xE9F78D191AD5EDBA(*uParam0))
	{
		if (!unk_0x526BC32A660C89E6(*uParam0))
		{
		}
	}
	if (unk_0xE5DBF9B6126856CA(*uParam0))
	{
		iVar0 = unk_0xA5FBBC2F619A4DE2(*uParam0);
		unk_0x2ABAFAE29D459CE5(&iVar0);
	}
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000000), 0x00000003))
	{
		iVar0 = 0x00000000;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000001), 0x00000003))
	{
		iVar0 = 0x00000001;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000002), 0x00000003))
	{
		iVar0 = 0x00000002;
	}
	else if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_51(iParam0, 0x00000003), 0x00000003))
	{
		iVar0 = 0x00000003;
	}
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000004)
	{
		if (iVar2 != iVar0 && Local_116.f_75[(iParam0 * 4 + iVar2)] != func_411())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		switch (iVar1)
		{
			case 0x00000000:
				return "female_acknowledge_p01";
			
			case 0x00000001:
				return "female_acknowledge_p02";
			
			case 0x00000002:
				return "female_acknowledge_p03";
			
			case 0x00000003:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0x00000000:
				return "acknowledge_p01";
			
			case 0x00000001:
				return "acknowledge_p02";
			
			case 0x00000002:
				return "acknowledge_p03";
			
			case 0x00000003:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (Local_116.f_75[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0x00000000)
	{
		iVar0 = iParam1;
	}
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		switch (iVar0)
		{
			case 0x00000000:
				return "female_idle_single_p01";
			
			case 0x00000001:
				return "female_idle_single_p02";
			
			case 0x00000002:
				return "female_idle_single_p03";
			
			case 0x00000003:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0x00000000:
				return "idle_single_p01";
			
			case 0x00000001:
				return "idle_single_p02";
			
			case 0x00000002:
				return "idle_single_p03";
			
			case 0x00000003:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

void func_52(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return;
	}
	if (iParam0 < 0x00000000 || iParam0 > 0x00000004)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_14[iParam0]), iParam1);
}

int func_53(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	StringCopy(&cVar0, func_55(iParam0, iParam3), 64);
	if (unk_0xEA6BC48857E0AC4C(&cVar0))
	{
		return 0x00000000;
	}
	iVar1 = unk_0x1B50683925F00106(*uParam1);
	if (unk_0x437347B10A200C4B(iVar1, 0x00000000))
	{
		return 0x00000000;
	}
	if (!unk_0xE5DBF9B6126856CA(*uParam1))
	{
		return 0x00000000;
	}
	if (!unk_0xAFE0D3608EDA7039(iVar1))
	{
		return 0x00000000;
	}
	if (unk_0x65636D4556D82155(iVar1))
	{
		return 0x00000000;
	}
	sVar2 = func_54(0x00000007);
	unk_0xC8B576D6F470FFC6(iVar1, &cVar0, sVar2, 0x00000001);
	return 0x00000001;
}

int func_54(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			return "SPEECH_PARAMS_STANDARD";
		
		case 0x00000001:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 0x00000002:
			return "SPEECH_PARAMS_BEAT";
		
		case 0x00000003:
			return "SPEECH_PARAMS_FORCE";
		
		case 0x00000004:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 0x00000005:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 0x00000006:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 0x00000007:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 0x00000008:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 0x00000009:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 0x0000000A:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 0x0000000B:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 0x0000000C:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 0x0000000D:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 0x0000000E:
			return "SPEECH_PARAMS_HELI";
		
		case 0x0000000F:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 0x00000010:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 0x00000011:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 0x00000012:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 0x00000013:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 0x00000014:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 0x00000015:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 0x00000016:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 0x00000017:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 0x00000018:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 0x00000019:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 0x0000001A:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 0x0000001B:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 0x0000001C:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 0x0000001D:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 0x0000001E:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 0x0000001F:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 0x00000020:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 0x00000021:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 0x00000022:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 0x00000023:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 0x00000024:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0x00000000;
	return iVar0;
}

char* func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 0x00000001:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 0x00000003:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 0x00000002:
			return func_56(iParam1);
		
		case 0x00000004:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 0x00000005:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 0x00000006:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 0x00000007:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 0x00000009:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 0x00000015:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 0x00000008:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 0x0000000A:
			return "MINIGAME_DEALER_BUSTS";
		
		case 0x0000000B:
			return "MINIGAME_DEALER_WINS";
		
		case 0x0000000C:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 0x0000000D:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		case 0x0000000E:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 0x0000000F:
			return "";
		
		case 0x00000010:
			return "";
		
		case 0x00000011:
			return "";
		
		case 0x00000012:
			return "";
		
		case 0x00000013:
			return "";
		
		case 0x00000014:
			return "";
		
		default:
	}
	return "";
}

char* func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_62(iVar1, 0x00000001, 0x00000001))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x9539D44F3E4492F6(iVar1);
	if (func_60(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_58(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_57(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_57(int iParam0)
{
	if (unk_0x134B62B726CEC8E6(unk_0x9539D44F3E4492F6(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_158[*iParam0 /*9*/].f_2;
	return func_59(iVar0, Local_159.f_1A);
}

int func_59(int iParam0, int iParam1)
{
	if ((iParam0 == 0x00000002 || iParam0 == 0x00000003) || iParam1 == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_60(int iParam0)
{
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (func_61(iParam0) == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (!Global_A58F[iVar0 /*5*/] == 0xFFFFFFFF)
		{
			if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0x00000000;
				}
			}
			if (bParam2)
			{
				if (!Global_2537E2.f_3[iVar0])
				{
					return 0x00000000;
				}
			}
			return 0x00000001;
		}
	}
	return 0x00000000;
}

bool func_63(int iParam0, int iParam1)
{
	if (iParam1 < 0x00000000 || iParam1 >= 0x00000020)
	{
		return 0x00000000;
	}
	if (iParam0 < 0x00000000 || iParam0 > 0x00000004)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_14[iParam0], iParam1);
}

void func_64(int iParam0)
{
	unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000010);
	unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000011);
	unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000012);
	unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000013);
	unk_0x0674E58A79778E99(&(Local_116.f_14[iParam0]), 0x00000015);
}

void func_65(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000034;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000005)
	{
		iVar1 = 0x00000000;
		while (iVar1 < uParam0->f_1)
		{
			iVar0 = unk_0xA0A5F9CC633A6814(0x00000000, uParam0->f_1);
			uVar2 = uParam0->f_2[iVar1];
			uParam0->f_2[iVar1] = uParam0->f_2[iVar0];
			uParam0->f_2[iVar0] = uVar2;
			iVar1++;
		}
		iVar3++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Local_116.f_240[iParam1] = iParam0;
}

void func_67(int iParam0)
{
	struct<5> Var0;
	
	Local_116[iParam0] = 0x00000001;
	if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iParam0])))
	{
		if (!unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), func_78(), func_77(iParam0), 0x00000003))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_32[iParam0]))
			{
				Local_116.f_2D[iParam0] = unk_0xF958843510932FF6(Local_116.f_23[iParam0]);
				if (Local_116.f_2D[iParam0] == 0xFFFFFFFF || (unk_0xA45992A6CE82FB43(Local_116.f_2D[iParam0]) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), 0xAB120D43)))
				{
					Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_77(iParam0), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
				}
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_32[iParam0]);
			}
			return;
		}
	}
	if (func_48(iParam0))
	{
		Local_116.f_14[iParam0] = 0x00000000;
		Var0.f_1 = 0x00000003;
		Local_116.f_185[iParam0 /*5*/] = { Var0 };
		Local_116.f_5[iParam0] = 0x00000000;
		func_69(&(Local_116.f_96[iParam0 /*2*/]));
		func_79(0x00000001, iParam0);
		func_66(0x00000000, iParam0);
		func_36(0x00000000, iParam0);
		func_29(0x00000000, iParam0);
		Local_116.f_19[iParam0]++;
		Local_116[iParam0] = 0x00000000;
	}
}

int func_68(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000004)
	{
		if (bParam1)
		{
			if (Local_116.f_75[(iParam0 * 4 + iVar1)] != func_411() && Local_116.f_19A[Local_116.f_75[(iParam0 * 4 + iVar1)] /*5*/] > 0x00000000)
			{
				iVar0++;
			}
			else
			{
				if (unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]));
					}
				}
				if (unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]));
					}
				}
				if (unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]))
				{
					if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]))
					{
						unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]);
					}
					else
					{
						func_49(&(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]));
					}
				}
			}
		}
		else if (Local_116.f_75[(iParam0 * 4 + iVar1)] != func_411())
		{
			iVar0++;
		}
		else
		{
			if (unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_44[func_41(iParam0, 0x00000000, iVar1)]));
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_44[func_41(iParam0, 0x00000001, iVar1)]));
				}
			}
			if (unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]);
				}
				else
				{
					func_49(&(Local_116.f_44[func_41(iParam0, 0x00000002, iVar1)]));
				}
			}
		}
		iVar1++;
	}
	if (Local_116.f_1E[iParam0] != iVar0)
	{
		Local_116.f_1E[iParam0] = iVar0;
	}
	if (iVar0 > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_69(var uParam0)
{
	uParam0->f_1 = 0x00000000;
}

char* func_70(int iParam0, int iParam1)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "female_acknowledge_p01";
			
			case 0x00000001:
				return "female_acknowledge_p02";
			
			case 0x00000002:
				return "female_acknowledge_p03";
			
			case 0x00000003:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				return "acknowledge_p01";
			
			case 0x00000001:
				return "acknowledge_p02";
			
			case 0x00000002:
				return "acknowledge_p03";
			
			case 0x00000003:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_71(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	func_73(uParam0, bParam2, 0x00000000);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 0x00000001;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0x00000000)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 0x00000001;
	}
}

char* func_74(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "female_idle_var_01";
			
			case 0x00000001:
				return "female_idle_var_02";
			
			case 0x00000002:
				return "female_idle_var_03";
			
			case 0x00000003:
				return "female_idle_var_04";
			
			case 0x00000004:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "idle_var_01";
			
			case 0x00000001:
				return "idle_var_02";
			
			case 0x00000002:
				return "idle_var_03";
			
			case 0x00000003:
				return "idle_var_04";
			
			case 0x00000004:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_75(int iParam0)
{
	if (Local_159.f_1A == 0x00000001)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return -135f;
			
			case 0x00000001:
				return 45f;
			
			case 0x00000002:
				return -45f;
			
			case 0x00000003:
				return -45f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_76(int iParam0)
{
	if (Local_159.f_1A == 0x00000001)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 1143.338f, 264.2453f, -52.8409f;
			
			case 0x00000001:
				return 1146.329f, 261.2543f, -52.8409f;
			
			case 0x00000002:
				return 1133.74f, 266.6947f, -52.0409f;
			
			case 0x00000003:
				return 1148.74f, 251.6947f, -52.0409f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_77(int iParam0)
{
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_78()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_79(int iParam0, int iParam1)
{
	Local_116.f_24A[iParam1] = iParam0;
}

void func_80(var uParam0)
{
	var uVar0[2];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0x00000034;
	iVar3 = 0x00000000;
	while (iVar3 < 0x00000034)
	{
		iVar1 = unk_0xA0A5F9CC633A6814(0x00000000, iVar2);
		iVar4 = 0x00000000;
		while (iVar4 < 0x00000034)
		{
			iVar6 = (iVar4 / 0x00000020);
			iVar7 = (iVar4 % 0x00000020);
			if (iVar5 == iVar1 && !unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
			{
				unk_0x5D96D8530B3D0904(&(uVar0[iVar6]), iVar7);
				uParam0->f_2[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!unk_0xEAE0D21A50E6C7F4(uVar0[iVar6], iVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0x00000000;
		iVar2 = (iVar2 - 0x00000001);
		iVar3++;
	}
	uParam0->f_1 = 0x00000034;
}

void func_81()
{
	int iVar0;
	
	if (!func_85(unk_0xD803B885F5E47A62()))
	{
		iVar0 = iLocal_193;
		if (Global_265DDC != iVar0 && (Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62())))
		{
			if (!unk_0xE5DBF9B6126856CA(Local_116.f_32[iVar0]))
			{
				func_82(iVar0);
			}
		}
		else if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iVar0]))
		{
			if (unk_0x526BC32A660C89E6(Local_116.f_32[iVar0]))
			{
				func_49(&(Local_116.f_32[iVar0]));
			}
			else
			{
				unk_0x8D30F6387EE75385(Local_116.f_32[iVar0]);
			}
		}
	}
	iLocal_193++;
	if (iLocal_193 >= Local_159.f_1A)
	{
		iLocal_193 = 0x00000000;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x1422D45B;
	if (Local_116.f_F[iParam0] >= 0x00000007)
	{
		iVar0 = 0xBC92BED5;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	unk_0x3F423BF5B8125A50(func_78());
	if (!unk_0xB4AE0788C1587752(func_78()))
	{
		return;
	}
	if (!unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]))
	{
		if (unk_0xA3FA8B6D2780D661(0x00000001))
		{
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0x3C762650AC7F7C2E(0x00000001);
			}
			iVar1 = unk_0x36F2404464202779(0x0000001A, iVar0, func_76(iParam0), func_75(iParam0), 0x00000001, 0x00000001);
			unk_0x71199B01895C6202(iVar0);
			unk_0x98868AF51859FC75(iVar1, 0x00000000);
			unk_0x20EC6650986ACDC7(iVar1, 0x00000000);
			unk_0x11AD11297DC58CC7(iVar1, 0x00000001);
			unk_0x9DD8618CA5BF832D(iVar1, 0x000000F9, 0x00000001);
			unk_0x4E885A246A9D983A(iVar1, 0x000000B9, 0x00000001);
			unk_0x4E885A246A9D983A(iVar1, 0x0000006C, 0x00000001);
			unk_0x271603AF9C0C7EB3(iVar1, 0x00000001);
			unk_0xC3BED1CE092AB15D(iVar1, 0x00000001);
			unk_0xC978532B427F303B(iVar1, 0x00000000);
			unk_0x004A9F3F2E1E4B43(iVar1, 0x00000001);
			unk_0xF4CB0B98F8F79D8D(iVar1, 0x00000000);
			unk_0x4E885A246A9D983A(iVar1, 0x000000D0, 0x00000001);
			unk_0x46CB381A452EF99D(iVar1, 0x00000000);
			func_84(Local_116.f_F[iParam0], &iVar1);
			func_83(Local_116.f_F[iParam0], &iVar1);
			unk_0x08841CDB215AE18F(iVar1, func_76(iParam0), 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(iVar1, func_75(iParam0));
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				Local_116.f_32[iParam0] = unk_0xE8C9CB886096272A(iVar1);
				if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iParam0]))
				{
					unk_0x866EE3B81CEF363A(Local_116.f_32[iParam0], 0x00000000);
					Local_116.f_A[iParam0] = 0x00000001;
					Local_116.f_23[iParam0] = unk_0xF66E5A439A080021(func_76(iParam0), 0f, 0f, func_75(iParam0), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x1B50683925F00106(Local_116.f_32[iParam0]), Local_116.f_23[iParam0], func_78(), func_77(iParam0), 1000f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_116.f_23[iParam0]);
					unk_0x8D17794CE3273D70(func_78());
				}
			}
			if (unk_0xF929B1A0A409FF93())
			{
				unk_0x3C762650AC7F7C2E(0x00000000);
			}
		}
	}
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 0x00000001:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x00000002:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 0x00000003:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x00000004:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 0x00000005:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 0x00000006:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 0x00000007:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x00000008:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 0x00000009:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 0x0000000A:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 0x0000000B:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 0x0000000C:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 0x0000000D:
			unk_0x267F5A3F99CA04FE(*iParam1, unk_0x12AB0310C2281427("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_84(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000000:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000001:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000002:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000003:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000004:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000002, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000005:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000006:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000001, 0x00000000, 0x00000000);
			break;
		
		case 0x00000007:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000008:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x00000009:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000002, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000A:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000003, 0x00000003, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000B:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000000, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000C:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000003, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000003, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000001, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			break;
		
		case 0x0000000D:
			unk_0x78ED16BE998AECC7(*iParam1);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000000, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000002, 0x00000004, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000003, 0x00000002, 0x00000001, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000004, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000006, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000007, 0x00000001, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x00000008, 0x00000002, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000A, 0x00000000, 0x00000000, 0x00000000);
			unk_0x64F9F278AB9DCA2C(*iParam1, 0x0000000B, 0x00000000, 0x00000000, 0x00000000);
			unk_0x9A28E8CB86CD4694(*iParam1, 0x00000001, 0x00000000, 0x00000000, 0x00000000);
			break;
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 0x00000001, 0x00000001))
	{
		if (func_86(iParam0) && !func_416(iParam0))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_86(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000003);
	}
	return 0x00000000;
}

void func_87()
{
	struct<5> Var0;
	bool bVar1;
	int iVar2;
	
	Var0.f_1 = 0x00000003;
	bVar1 = 0x00000000;
	iVar2 = iLocal_192;
	if (Local_158[iVar2 /*9*/].f_2 == 0xFFFFFFFF)
	{
		Local_116.f_19A[iVar2 /*5*/] = { Var0 };
	}
	if (Local_158[iVar2 /*9*/].f_7 == 0x00000000)
	{
		if (Local_116.f_258[iVar2] != 0x00000000)
		{
			Local_116.f_258[iVar2] = 0x00000000;
		}
	}
	if (!bVar1)
	{
		if (func_88(iVar2))
		{
			bVar1 = 0x00000001;
		}
	}
	iLocal_192++;
	if (iLocal_192 >= 0x00000020)
	{
		iLocal_192 = 0x00000000;
	}
}

int func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_408())
	{
		return 0x00000000;
	}
	iVar0 = unk_0xF4FB3A22FC4991C8(iParam0);
	if (!unk_0x81A93C8315C28F58(iVar0))
	{
		return 0x00000000;
	}
	iVar1 = unk_0x4B2BFE4A3BC248ED(iVar0);
	if (!func_62(iVar1, 0x00000001, 0x00000001))
	{
		return 0x00000000;
	}
	iVar2 = Local_158[iParam0 /*9*/].f_7.f_1;
	if (iVar2 < 0x00000000 || iVar2 >= 0x00000004)
	{
		return 0x00000000;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 0x00000001)
	{
		if (func_53(0x00000002, &(Local_116.f_32[iVar2]), 0x00000000, iParam0))
		{
			func_89(iParam0, 0x00000001);
		}
		return 0x00000001;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 0x00000002)
	{
		if (func_53(0x00000003, &(Local_116.f_32[iVar2]), 0x00000000, 0xFFFFFFFF))
		{
			func_89(iParam0, 0x00000002);
		}
		return 0x00000001;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 0x00000004)
	{
		if (func_53(0x00000004, &(Local_116.f_32[iVar2]), 0x00000000, 0xFFFFFFFF))
		{
			func_89(iParam0, 0x00000004);
		}
		return 0x00000001;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 0x00000005)
	{
		if (func_53(0x00000005, &(Local_116.f_32[iVar2]), 0x00000000, 0xFFFFFFFF))
		{
			func_89(iParam0, 0x00000005);
		}
		return 0x00000001;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 0x00000006)
	{
		if (func_53(0x00000006, &(Local_116.f_32[iVar2]), 0x00000000, 0xFFFFFFFF))
		{
			func_89(iParam0, 0x00000006);
		}
		return 0x00000001;
	}
	if (Local_158[iParam0 /*9*/].f_7 == 0x00000007)
	{
		if (func_53(0x00000007, &(Local_116.f_32[iVar2]), 0x00000000, 0xFFFFFFFF))
		{
			func_89(iParam0, 0x00000007);
		}
		return 0x00000001;
	}
	return 0x00000000;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0x00000000 || iVar0 >= 0x00000020)
	{
		return;
	}
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000020)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&(Local_116.f_258[iParam0]), iVar0);
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_191;
	if (Local_116.f_75[iVar0] != func_411())
	{
		iVar1 = Local_116.f_75[iVar0];
		if (((!func_62(Local_116.f_75[iVar0], 0x00000001, 0x00000001) || Local_158[iVar1 /*9*/].f_1 == 0xFFFFFFFF) || Local_158[iVar1 /*9*/].f_1 != iVar0) || !unk_0xFB75B0F82CA525F6(Local_116.f_75[iVar0]))
		{
			Local_116.f_75[iVar0] = func_411();
			if (Local_116.f_258[iVar0] != 0x00000000)
			{
				Local_116.f_258[iVar0] = 0x00000000;
			}
		}
	}
	if (func_62(iVar0, 0x00000001, 0x00000001) && unk_0xFB75B0F82CA525F6(iVar0))
	{
		if (Local_158[iVar0 /*9*/].f_1 > 0xFFFFFFFF && Local_158[iVar0 /*9*/].f_1 < 0x00000020)
		{
			if (Local_116.f_75[Local_158[iVar0 /*9*/].f_1] == func_411())
			{
				if (func_62(unk_0x117658E336116132(iVar0), 0x00000001, 0x00000001))
				{
					Local_116.f_75[Local_158[iVar0 /*9*/].f_1] = unk_0x117658E336116132(iVar0);
				}
			}
		}
	}
	iLocal_191++;
	if (iLocal_191 >= 0x00000020)
	{
		iLocal_191 = 0x00000000;
	}
}

void func_91()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<16> Var6;
	vector3 vVar7;
	
	if (!Local_159.f_5)
	{
		if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_412() /*421*/].f_136.f_4, 0x00000004))
			{
				Local_159.f_5 = 0x00000001;
				func_407();
				iLocal_186 = 0x00000001;
			}
		}
	}
	else if (iLocal_186)
	{
		if (func_406())
		{
			iLocal_186 = 0x00000000;
		}
	}
	func_401();
	Local_159.f_13 = func_398();
	func_388();
	func_384();
	func_381();
	if (Local_159.f_31E > 0x00000002)
	{
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000D2, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D2);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x0000001A, 0x00000001);
		if (unk_0x9A01369A10646AFE(0x00000002, 0x000000D2))
		{
		}
		if (func_380(Local_159.f_12) >= 0x00000000 && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 0x00000001), func_76(func_380(Local_159.f_12)), 0x00000001) > 5f)
		{
			func_375(0x00000000);
		}
	}
	if (Local_159.f_31E > 0x00000005)
	{
		unk_0x3FC8DBCC154CA56B();
		unk_0xB8E3919889462ACD();
		unk_0x5024DE80A08E9E70(0x00000013);
		func_373(0x00000001);
		func_372(0x00000001, 0x00000000);
	}
	if (Local_159.f_31E > 0x00000006)
	{
		unk_0x38C3A68D7861DCFD(0x00000002, 0x00000000, 0x00000001);
		if (unk_0x9A01369A10646AFE(0x00000002, 0x00000000))
		{
			if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000000)
			{
				unk_0x398B6B43792F03FE(0x00000000, 0x00000004);
			}
			else if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
			{
				unk_0x398B6B43792F03FE(0x00000000, 0x00000000);
			}
		}
		unk_0x2DA67FDB9E5F446F();
	}
	if (Local_159.f_31E > 0x00000007)
	{
		func_368(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]));
	}
	if (func_367())
	{
		bLocal_188 = 0x00000001;
	}
	else if (bLocal_188)
	{
		func_366(&uLocal_189, 0x00000000, 0x00000000);
		bLocal_188 = 0x00000000;
	}
	else if (func_72(&uLocal_189) && func_71(&uLocal_189, 0x000001F4, 0x00000000))
	{
		func_69(&uLocal_189);
	}
	switch (Local_159.f_31E)
	{
		case 0x00000000:
			if (func_365())
			{
				Local_159.f_31C = "idle_cardgames";
				Local_159.f_16 = 0x00000000;
				Local_158[unk_0xD803B885F5E47A62() /*9*/] = 0x00000000;
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0x00000000;
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 = 0xFFFFFFFF;
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 = 0xFFFFFFFF;
				func_364(unk_0xD803B885F5E47A62());
				func_363(0x00000001);
			}
			break;
		
		case 0x00000001:
			switch (func_380(Local_159.f_12))
			{
				case 0x00000000:
				case 0x00000001:
					bVar0 = 0x00000000;
					Local_159.f_10 = 0x00001388;
					Local_159.f_11 = 0x0000000A;
					Local_159.f_1B = 0x000001F4;
					Local_159.f_1C = 0x0000000A;
					break;
				
				case 0x00000002:
				case 0x00000003:
					bVar0 = 0x00000001;
					Local_159.f_10 = 0x0000C350;
					Local_159.f_11 = 0x000003E8;
					Local_159.f_1B = 0x00001388;
					Local_159.f_1C = 0x000003E8;
					break;
			}
			if (Local_159.f_1A == 0x00000001)
			{
				bVar0 = 0x00000001;
				Local_159.f_10 = 0x0000C350;
				Local_159.f_11 = 0x000003E8;
				Local_159.f_1B = 0x00001388;
				Local_159.f_1C = 0x000003E8;
			}
			if (((((((((((((((((((((((!Global_40001.f_6635 && !(Global_40001.f_6637 && !bVar0)) && !(Global_40001.f_6636 && bVar0)) && ((func_362(0x5E44B073) || func_362(0x103C9460)) || func_417(unk_0xD803B885F5E47A62()))) && func_360(unk_0x16F2683693E537C9(), func_361(Local_159.f_12), 1.5f)) && func_355(unk_0x16F2683693E537C9(), func_359(Local_159.f_12), 40f)) && Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] == 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Global_199459.f_4, 0x00000002)) && !Global_24B2D0.f_A70) && Global_265DDC != func_380(Local_159.f_12)) && (Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62()))) && func_354()) && !func_348()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_345(unk_0x16F2683693E537C9()) <= 0x00000009) && !Global_24B2D0.f_A70) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_344()) && !func_343()) && !func_341()) && !Global_258C2B.f_C) && Global_199453 != 0x0000001F) && !func_340())
			{
				func_363(0x00000002);
			}
			else
			{
				Local_159.f_12++;
				if (Local_159.f_12 >= Local_159.f_1A * 4)
				{
					Local_159.f_12 = 0x00000000;
				}
			}
			break;
		
		case 0x00000002:
			func_339();
			func_364(unk_0xD803B885F5E47A62());
			if (((((((((((((((((((((func_362(0x5E44B073) || func_362(0x103C9460)) || func_417(unk_0xD803B885F5E47A62())) && func_360(unk_0x16F2683693E537C9(), func_361(Local_159.f_12), 1.5f)) && func_355(unk_0x16F2683693E537C9(), func_359(Local_159.f_12), 40f)) && Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] == 0x00000000) && Global_265DDC != func_380(Local_159.f_12)) && (Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62()))) && func_354()) && !func_348()) && !unk_0x757EF87A33649210()) && !unk_0xD0BB2359EC70FC37()) && func_345(unk_0x16F2683693E537C9()) <= 0x00000009) && !Global_24B2D0.f_A70) && !unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9())) && !func_344()) && !func_343()) && !func_341()) && !Global_258C2B.f_C) && Global_199453 != 0x0000001F) && !Local_116[func_380(Local_159.f_12)]) && !func_340())
			{
				if ((((((func_62(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000001) && unk_0x93B62D155C014521(unk_0xD803B885F5E47A62())) && !func_338()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !bLocal_188) && !func_72(&uLocal_189))
				{
					if (func_336(0x00000002, &uVar1))
					{
						if (!func_335("TCP_NA"))
						{
							func_334("TCP_NA");
						}
					}
					else if (Local_116.f_75[Local_159.f_12] != func_411())
					{
						if (!func_335("TCP_USED"))
						{
							func_334("TCP_USED");
						}
					}
					else if (func_333())
					{
						if (func_329() == 0x00000002)
						{
							if (!func_335("CAS_MG_CTIME"))
							{
								func_334("CAS_MG_CTIME");
							}
						}
						else if (!func_335("CAS_MG_CBAN"))
						{
							func_334("CAS_MG_CBAN");
						}
					}
					else if ((!func_328(unk_0xD803B885F5E47A62()) && (func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003)) && !(func_327(0x00000001) && func_328(func_326())))
					{
						if (!func_335("CAS_MG_SUITE2"))
						{
							func_334("CAS_MG_SUITE2");
						}
					}
					else if (!func_325() && !(func_327(0x00000001) && func_324(func_326())))
					{
						if (!func_322("CAS_MG_MEMB2", func_323(0x00000001)))
						{
							func_321("CAS_MG_MEMB2", func_323(0x00000001));
						}
						else if (unk_0xBFC0798A6E3417F9(0x00000002, 0x00000034))
						{
							unk_0xA37A90C62806D848(0x00000001);
							func_320();
							func_363(0x00000003);
						}
					}
					else if (Local_159.f_13 <= 0x00000000)
					{
						if (func_417(unk_0xD803B885F5E47A62()))
						{
							if (!func_335("CAS_MG_NOCHIPS7"))
							{
								func_334("CAS_MG_NOCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_NOCHIPS3"))
						{
							func_334("CAS_MG_NOCHIPS3");
						}
					}
					else if (Local_159.f_13 < Local_159.f_1C)
					{
						if (func_417(unk_0xD803B885F5E47A62()))
						{
							if (!func_335("CAS_MG_LOWCHIPS7"))
							{
								func_334("CAS_MG_LOWCHIPS7");
							}
						}
						else if (!func_335("CAS_MG_LOWCHIPS3"))
						{
							func_334("CAS_MG_LOWCHIPS3");
						}
					}
					else if (Local_159.f_1F == 0xFFFFFFFF)
					{
						if (func_319())
						{
							unk_0xA37A90C62806D848(0x00000001);
						}
						if (((!func_328(unk_0xD803B885F5E47A62()) && (func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003)) && !(func_327(0x00000001) && func_328(func_326()))) || (!func_325() && (func_327(0x00000001) && func_324(func_326()))))
						{
							if (func_316(func_326()) == 0x00000001)
							{
								Local_159.f_19 = 0x00000001;
								func_315(&(Local_159.f_1F), 0x00000004, "TCP_PLAY_A", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else if (func_314(func_326()))
							{
								Local_159.f_19 = 0x00000002;
								func_315(&(Local_159.f_1F), 0x00000004, "TCP_PLAY_B", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
							else
							{
								Local_159.f_19 = 0x00000003;
								func_315(&(Local_159.f_1F), 0x00000004, "TCP_PLAY_C", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
							}
						}
						else
						{
							Local_159.f_19 = 0x00000000;
							func_315(&(Local_159.f_1F), 0x00000004, "TCP_PLAY", 0x00000000, 0x00000000, 0x00000000, 0x00000000);
						}
					}
					else if (func_313(Local_159.f_1F, 0x00000001))
					{
						func_311(&(Local_159.f_1F));
						Local_159.f_1F = 0xFFFFFFFF;
						unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B9, 0x00000001);
						func_310();
						func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00100100, 0x00000000);
						if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004 && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
						{
							unk_0x327AAEE25F323797(unk_0x16F2683693E537C9());
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0x00000000, 0x00000000);
						}
						func_363(0x00000004);
					}
				}
				else
				{
					if (func_319())
					{
						unk_0xA37A90C62806D848(0x00000001);
					}
					if (Local_159.f_1F != 0xFFFFFFFF)
					{
						func_311(&(Local_159.f_1F));
						Local_159.f_1F = 0xFFFFFFFF;
					}
					Local_159.f_12 = 0x00000000;
					func_363(0x00000001);
				}
			}
			else
			{
				if (func_319())
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (Local_159.f_1F != 0xFFFFFFFF)
				{
					func_311(&(Local_159.f_1F));
					Local_159.f_1F = 0xFFFFFFFF;
				}
				Local_159.f_12 = 0x00000000;
				func_363(0x00000001);
			}
			break;
		
		case 0x00000003:
			if (!func_299())
			{
				func_363(0x00000002);
			}
			break;
		
		case 0x00000004:
			func_373(0x00000001);
			sVar2 = "CasinoUI_Cards_Three";
			if ((func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
			{
				sVar2 = "CasinoUI_Cards_Three_High";
			}
			if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_5, 0x00000016))
			{
				func_366(&(Local_159.f_318), 0x00000000, 0x00000000);
				func_298(Local_159.f_12);
				if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
				{
					func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
				}
				else
				{
					func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
				}
				func_363(0x00000005);
			}
			else
			{
				unk_0x0D3BE1DE0262A012(sVar2, 0x00000000);
				if (func_296(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0x27117E2CDD4D67C3(sVar2))
				{
					if (!iLocal_187)
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 0x00000001);
						func_295(0x00000000, 0x00000000);
						func_293(0x00000001, sVar2, sVar2);
						func_292("TCP_TITLE");
						func_291(0xFFFFFFFF, 0x00000001, 0x00000001);
						func_290("TCP_DIS", 0x00000000, 0x00000000);
						func_289("TCP_DIS1");
						func_289("TCP_DIS2");
						func_289("TCP_DIS3");
						func_288(0x000000CA, "TCP_EXIT", 0xFFFFFFFF);
						func_288(0x000000C9, "TCP_CONT", 0xFFFFFFFF);
						iLocal_187 = 0x00000001;
					}
					func_261(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
				if (unk_0x9A01369A10646AFE(0x00000002, 0x000000CA))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
					func_258(0x00000001, 0xFFFFFFFF);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_187 = 0x00000000;
					func_249();
				}
				else if (unk_0x9A01369A10646AFE(0x00000002, 0x000000C9))
				{
					unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
					func_258(0x00000001, 0xFFFFFFFF);
					unk_0xF5A41F3D3B38EFE3(sVar2);
					iLocal_187 = 0x00000000;
					unk_0x5D96D8530B3D0904(&(Global_199459.f_5), 0x00000016);
					func_366(&(Local_159.f_318), 0x00000000, 0x00000000);
					func_298(Local_159.f_12);
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
					{
						func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
					}
					else
					{
						func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
					}
					func_363(0x00000005);
				}
			}
			break;
		
		case 0x00000005:
			if ((((func_248(Local_159.f_12) && !func_337()) && !func_367()) && func_354()) && !func_348())
			{
				func_69(&(Local_159.f_318));
				unk_0x5D96D8530B3D0904(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000003);
				func_239(0x00000002);
				func_363(0x00000006);
			}
			else
			{
				if (func_337())
				{
					func_249();
				}
				if (func_367())
				{
					func_249();
				}
				if (func_238(Local_159.f_12))
				{
					func_249();
				}
				if (func_237())
				{
					func_249();
				}
				if (!func_354())
				{
					func_249();
				}
				if (func_348())
				{
					func_249();
				}
			}
			break;
		
		case 0x00000006:
			if (!func_337() && !func_367())
			{
				if (func_236())
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000001 || unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000002)
					{
						unk_0x398B6B43792F03FE(0x00000000, 0x00000000);
					}
					fVar3 = func_234(unk_0x16F2683693E537C9(), func_235(Local_159.f_12, 0x00000000), 0x00000001);
					fVar4 = func_234(unk_0x16F2683693E537C9(), func_235(Local_159.f_12, 0x00000001), 0x00000001);
					fVar5 = func_234(unk_0x16F2683693E537C9(), func_235(Local_159.f_12, 0x00000002), 0x00000001);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_159.f_15 = 0x00000001;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_159.f_15 = 0x00000002;
					}
					else
					{
						Local_159.f_15 = 0x00000000;
					}
					unk_0x80AA372E04ED318D(unk_0x16F2683693E537C9(), func_235(Local_159.f_12, Local_159.f_15), 1f, 0x00001388, func_233(Local_159.f_12, Local_159.f_15), 0.01f);
					func_363(0x00000007);
				}
			}
			else
			{
				func_249();
			}
			break;
		
		case 0x00000007:
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x7D8F4411) != 0x00000000)
			{
				Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_159.f_12), func_232(Local_159.f_12), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), func_230(Local_159.f_15), 2f, -2f, 0x0000000D, 0x00000010, 2f, 0x00000000);
				unk_0x914E6894744915F8(Local_159.f_18);
				Local_158[unk_0xD803B885F5E47A62() /*9*/].f_7.f_1 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2;
				func_363(0x00000008);
			}
			break;
		
		case 0x00000008:
			unk_0xA78CDFD1AE3130A9(0x8C763117);
			Local_159.f_1E = unk_0xF958843510932FF6(Local_159.f_18);
			if (func_229())
			{
				func_228(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000002);
			}
			else
			{
				func_228(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000001);
			}
			if (Local_159.f_1E != 0xFFFFFFFF)
			{
				if ((unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x797DE8AE)) || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43))
				{
					func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
					Local_169 = { Var6 };
					if (func_417(unk_0xD803B885F5E47A62()))
					{
						Local_169 = 0x6508C8A2;
					}
					else if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 0x00000002 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 0x00000003)
					{
						Local_169 = 0x746525B2;
					}
					else
					{
						Local_169 = 0xBCF03FC1;
					}
					Local_169.f_1 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2;
					Local_169.f_6 = 0x00000001;
					if (func_328(unk_0xD803B885F5E47A62()))
					{
						Local_169.f_F = 0x76392C91;
					}
					else if (func_325())
					{
						Local_169.f_F = 0x4F8D45B7;
					}
					else if (func_327(0x00000001) && (func_328(func_326()) || func_226(unk_0xD803B885F5E47A62())))
					{
						Local_169.f_F = 0x3A74B494;
					}
					else
					{
						Local_169.f_F = 0x3805DAA2;
					}
					func_366(&uLocal_166, 0x00000000, 0x00000000);
					func_225();
					Local_159.f_20 = func_398();
					func_363(0x00000009);
				}
			}
			break;
		
		case 0x00000009:
			if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Table_Games");
			}
			unk_0xA78CDFD1AE3130A9(0x8C763117);
			func_95();
			break;
		
		case 0x0000000A:
			if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
			{
				unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
			}
			if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 0x6A67A5CC) == 0x00000001)
			{
				func_228(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), func_94());
				vVar7 = { unk_0x4F3973434662D795(0x00000002, 0x000000DA), unk_0x4F3973434662D795(0x00000002, 0x000000DB), 0f };
				Local_159.f_1E = unk_0xF958843510932FF6(Local_159.f_18);
				if (Local_159.f_7)
				{
					if (Local_159.f_1E != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)))
					{
						Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_159.f_12), func_232(Local_159.f_12), 0x00000002, 0x00000000, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), func_93(Local_159.f_12), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_159.f_18);
						Local_159.f_7 = 0x00000000;
					}
				}
				else if (Local_159.f_1E != 0xFFFFFFFF && ((unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)) || (SYSTEM::VMAG(vVar7) >= 0.24f && unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x7E26188D))))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					func_300(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
					unk_0x8D17794CE3273D70(func_45());
					unk_0x8D17794CE3273D70(func_78());
					unk_0x8D17794CE3273D70(func_92());
					unk_0x8D17794CE3273D70(func_231());
					func_407();
					unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000003);
					func_339();
					func_363(0x00000002);
				}
			}
			else
			{
				unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
				func_300(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
				unk_0x8D17794CE3273D70(func_45());
				unk_0x8D17794CE3273D70(func_78());
				unk_0x8D17794CE3273D70(func_92());
				unk_0x8D17794CE3273D70(func_231());
				unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000003);
				func_339();
				func_363(0x00000002);
			}
			break;
	}
}

char* func_92()
{
	return "anim_casino_b@amb@casino@games@threecardpoker@player";
}

char* func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000004:
		case 0x00000005:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_94()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_398();
	iVar1 = (iVar0 - Local_159.f_20);
	if (iVar1 < 0x00000000)
	{
		return 0x00000005;
	}
	if (iVar1 > 0x00000000)
	{
		return 0x00000004;
	}
	return 0x00000006;
}

void func_95()
{
	int iVar0;
	struct<9> Var1;
	struct<5> Var2;
	struct<23> Var3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	char* sVar29;
	bool bVar30;
	bool bVar31;
	
	if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0x00000000)
	{
		if (func_224(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2))
		{
			func_223("TCP_ERROR", 0xFFFFFFFF);
			return;
		}
	}
	func_210();
	if (func_408())
	{
		Local_169.f_A = 0x00000001;
	}
	Local_169.f_B = func_208();
	if ((((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CA) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_pickup", 0x00000003)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003)) && !Local_159.f_1) && !func_207())
	{
		Local_168.f_4 = 0x327E2AF1;
		Local_169.f_2 = 0x327E2AF1;
		Local_168.f_16 = 0x327E2AF1;
		Local_168.f_7 = func_398();
		Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
		Local_168.f_12 = func_408();
		Local_168.f_13 = func_208();
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
		{
			Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
		}
		if ((Local_159.f_31D > 0x00000001 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 != 0x00000000) || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 != 0x00000000)
		{
			if (Global_40001.f_65B4)
			{
				unk_0x1787A8354D584871(&Local_168);
			}
		}
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000 && !Local_159.f_2)
		{
			func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
		}
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 > 0x00000000 && !Local_159.f_6)
		{
			func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5);
		}
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 > 0x00000000 && !Local_159.f_3)
		{
			func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
		}
		func_375(0x00000001);
		unk_0xA37A90C62806D848(0x00000001);
		return;
	}
	if (((Global_265DDC == Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 || Global_258C2B.f_C) || Global_199453 == 0x0000001F) || !func_203())
	{
		Local_168.f_7 = func_398();
		Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
		Local_168.f_12 = func_408();
		Local_168.f_13 = func_208();
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
		{
			Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
		}
		if (Global_40001.f_65B4)
		{
			unk_0x1787A8354D584871(&Local_168);
		}
		func_375(0x00000001);
		unk_0xA37A90C62806D848(0x00000001);
		return;
	}
	if (Local_159.f_18 > 0xFFFFFFFF)
	{
		Local_159.f_1E = unk_0xF958843510932FF6(Local_159.f_18);
		if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_idle", 0x00000003)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000)) && !Local_159.f_1)
		{
			if (!unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_231(), "idle_cardgames", 0x00000003))
			{
				if (Local_159.f_1E != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)))
				{
					Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
					unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), "idle_cardgames", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
					unk_0x914E6894744915F8(Local_159.f_18);
					Local_159.f_31C = "idle_cardgames";
				}
			}
			else if (Local_159.f_1E != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)))
			{
				Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
				unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), func_202(0x00000000), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
				unk_0x914E6894744915F8(Local_159.f_18);
			}
		}
	}
	if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0x00000000)
	{
		func_200(&(Local_159.f_5A));
		if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
		{
			func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CA, 0x00000001), "TCP_EXIT", &(Local_159.f_5A), 0x00000000);
			if (((((Local_159.f_31D == 0x00000003 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000002)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000003))
			{
				func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000C9, 0x00000001), "TCP_PLAY_HAND", &(Local_159.f_5A), 0x00000000);
				func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CB, 0x00000001), "TCP_FOLD_HAND", &(Local_159.f_5A), 0x00000000);
			}
			if (Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 0x00000003 && ((Local_159.f_13 >= Local_159.f_1C || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 != 0x00000000) || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 != 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000))
				{
					if (Local_159.f_13 >= Local_159.f_11 * 2)
					{
						func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000C9, 0x00000001), "TCP_PLACE", &(Local_159.f_5A), 0x00000000);
					}
					func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CB, 0x00000001), "TCP_DECLINEA", &(Local_159.f_5A), 0x00000000);
					if (Local_159.f_13 >= Local_159.f_11 * 2)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000008))
						{
							func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CC, 0x00000001), "TCP_BET_MAX", &(Local_159.f_5A), 0x00000000);
						}
						func_198(0x00000002, 0x00000007, "TCP_BET_NUM", &(Local_159.f_5A));
					}
				}
				else if ((!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000002) && Local_159.f_13 >= (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 + Local_159.f_1C)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000))
				{
					func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000C9, 0x00000001), "TCP_PLACE_PP", &(Local_159.f_5A), 0x00000000);
					func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CB, 0x00000001), "TCP_DECLINE", &(Local_159.f_5A), 0x00000000);
					if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000008))
					{
						func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CC, 0x00000001), "TCP_BET_MAX", &(Local_159.f_5A), 0x00000000);
					}
					func_198(0x00000002, 0x00000007, "TCP_BET_NUM", &(Local_159.f_5A));
				}
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000))
		{
			func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CA, 0x00000001), "IB_BACK", &(Local_159.f_5A), 0x00000000);
			func_198(0x00000002, 0x00000008, "IB_TAB", &(Local_159.f_5A));
		}
		else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
		{
			func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CA, 0x00000001), "IB_BACK", &(Local_159.f_5A), 0x00000000);
		}
		if (Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] < 0x0000000C)
		{
			if (Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] > 0x00000000)
			{
				func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000D0, 0x00000001), "TCP_DLR", &(Local_159.f_5A), 0x00000000);
			}
			if (Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] > 0x00000000)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
				{
					func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CF, 0x00000001), "TCP_CARDS", &(Local_159.f_5A), 0x00000000);
				}
				else if (((((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000 && Local_159.f_31D == 0x00000003) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000002)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000003))
				{
					func_199(unk_0xF59058FCB716F903(0x00000000, 0x000000CF, 0x00000001), "TCP_PICK_UP", &(Local_159.f_5A), 0x00000000);
				}
			}
		}
		if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
		{
			func_199(unk_0xF59058FCB716F903(0x00000002, 0x000000D2, 0x00000001), "TCP_RULESb", &(Local_159.f_5A), 0x00000000);
			func_199(unk_0xF59058FCB716F903(0x00000002, 0x000000D1, 0x00000001), "TCP_HANDSb", &(Local_159.f_5A), 0x00000000);
		}
		Var1 = { func_196() };
		func_195(&(Local_159.f_5A), 1f);
		func_187(&(Local_159.f_59), &Var1, &(Local_159.f_5A), func_194(&(Local_159.f_5A)));
		func_186(0x00000001);
	}
	func_181();
	func_162();
	switch (Local_159.f_31D)
	{
		case 0x00000000:
			if (Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 0x00000003)
			{
				if ((Local_159.f_F > (Local_159.f_13 / 0x00000002) || Local_159.f_F < Local_159.f_11) || Local_159.f_F > Local_159.f_10)
				{
					Local_159.f_F = Local_159.f_11;
				}
				if ((((Local_159.f_17 > Local_159.f_13 || Local_159.f_17 > Local_159.f_1B) || Local_159.f_17 < Local_159.f_1C) || Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3)) || Local_159.f_17 > Local_159.f_13)
				{
					Local_159.f_17 = Local_159.f_1C;
				}
				Var2.f_1 = 0x00000003;
				Local_159.f_356 = { Var2 };
				Local_168 = { Var3 };
				Local_168.f_A = 0x00000001;
				Local_168 = 0xC7DBF69A;
				Local_168.f_B = func_328(unk_0xD803B885F5E47A62());
				if (func_328(unk_0xD803B885F5E47A62()))
				{
					Local_168.f_14 = 0x76392C91;
				}
				else if (func_325())
				{
					Local_168.f_14 = 0x4F8D45B7;
				}
				else if (func_327(0x00000001) && (func_328(func_326()) || func_226(unk_0xD803B885F5E47A62())))
				{
					Local_168.f_14 = 0x3A74B494;
				}
				else
				{
					Local_168.f_14 = 0x3805DAA2;
				}
				if (func_417(unk_0xD803B885F5E47A62()))
				{
					Local_168.f_1 = 0x6508C8A2;
				}
				else if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 0x00000002 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 0x00000003)
				{
					Local_168.f_1 = 0x746525B2;
				}
				else
				{
					Local_168.f_1 = 0xBCF03FC1;
				}
				func_366(&uLocal_164, 0x00000000, 0x00000000);
				Local_168.f_3 = Local_116.f_19[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				Local_168.f_2 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2;
				func_161(0x00000001);
			}
			break;
		
		case 0x00000001:
			if ((!func_325() && !(func_327(0x00000001) && func_324(func_326()))) || ((!func_328(unk_0xD803B885F5E47A62()) && (func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003)) && !(func_327(0x00000001) && func_328(func_326()))))
			{
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
				{
					Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				Local_169.f_2 = 0x3805DAA2;
				Local_168.f_4 = 0x3805DAA2;
				Local_168.f_7 = func_398();
				Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
				Local_168.f_12 = func_408();
				Local_168.f_13 = func_208();
				if (Global_40001.f_65B4)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (Local_159.f_19 == 0x00000001)
				{
					func_223("IT_MEMBOc", 0xFFFFFFFF);
				}
				else if (Local_159.f_19 == 0x00000002)
				{
					func_223("IT_MEMBOa", 0xFFFFFFFF);
				}
				else if (Local_159.f_19 == 0x00000003)
				{
					func_223("IT_MEMBOb", 0xFFFFFFFF);
				}
				return;
			}
			if ((((Local_159.f_13 < Local_159.f_1C && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 == 0x00000000) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 == 0x00000000) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 == 0x00000000) && !Local_159.f_1)
			{
				Local_168.f_4 = 0xB3F88040;
				Local_169.f_2 = 0xB3F88040;
				Local_168.f_7 = func_398();
				Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
				Local_168.f_12 = func_408();
				Local_168.f_13 = func_208();
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
				{
					Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_40001.f_65B4)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (func_417(unk_0xD803B885F5E47A62()))
				{
					if (Local_159.f_13 <= 0x00000000)
					{
						func_223("CAS_MG_NOCHIPS7", 0xFFFFFFFF);
					}
					else
					{
						func_223("CAS_MG_LOWCHIPS7", 0xFFFFFFFF);
					}
				}
				else if (Local_159.f_13 <= 0x00000000)
				{
					func_223("CAS_MG_NOCHIPS3", 0xFFFFFFFF);
				}
				else
				{
					func_223("CAS_MG_LOWCHIPS3", 0xFFFFFFFF);
				}
				return;
			}
			if (func_333())
			{
				switch (func_329())
				{
					case 0x00000000:
						Local_168.f_4 = 0x762DD373;
						break;
					
					case 0x00000001:
						Local_168.f_4 = 0xDA428132;
						break;
					
					case 0x00000002:
						Local_168.f_4 = 0x9F153806;
						break;
				}
				switch (func_329())
				{
					case 0x00000000:
						Local_169.f_2 = 0x762DD373;
						break;
					
					case 0x00000001:
						Local_169.f_2 = 0xDA428132;
						break;
					
					case 0x00000002:
						Local_169.f_2 = 0x9F153806;
						break;
				}
				Local_168.f_7 = func_398();
				Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
				Local_168.f_12 = func_408();
				Local_168.f_13 = func_208();
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
				{
					Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_40001.f_65B4)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				if (func_329() == 0x00000002)
				{
					func_223("CAS_MG_CTIME", 0xFFFFFFFF);
				}
				else
				{
					func_223("CAS_MG_CBAN", 0xFFFFFFFF);
				}
				return;
			}
			if (((!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000002)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000)) && (!func_354() || func_348()))
			{
				Local_168.f_7 = func_398();
				Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
				Local_168.f_12 = func_408();
				Local_168.f_13 = func_208();
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
				{
					Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
				}
				if (Global_40001.f_65B4)
				{
					unk_0x1787A8354D584871(&Local_168);
				}
				func_375(0x00000001);
				unk_0xA37A90C62806D848(0x00000001);
				return;
			}
			if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000000))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000))
				{
					if ((((((!unk_0xEAE0D21A50E6C7F4(Local_159.f_1D, 0x00000001) && !unk_0x4FD68D5821EE3E19()) && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC)) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
					{
						bVar5 = unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC);
						bVar6 = unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB);
						if (bVar6 || ((((((bVar5 && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC)) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003)))
						{
							func_73(&(Local_159.f_316), 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_159.f_1D), 0x00000001);
						}
					}
					else if (func_71(&(Local_159.f_316), 0x00000064, 0x00000000))
					{
						func_69(&(Local_159.f_316));
						unk_0x0674E58A79778E99(&(Local_159.f_1D), 0x00000001);
					}
					if ((((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC) && !bVar6) && !bVar5) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000008))
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
						bVar4 = 0x00000001;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_159.f_F >= 0x00002710)
							{
								iVar7 = 0x00001388;
							}
							else if (Local_159.f_F >= 0x00001388)
							{
								iVar7 = 0x000003E8;
							}
							else if (Local_159.f_F >= 0x000001F4)
							{
								iVar7 = 0x000001F4;
							}
							else if (Local_159.f_F >= 0x00000064)
							{
								iVar7 = 0x00000032;
							}
							else
							{
								iVar7 = 0x0000000A;
							}
							if (Local_159.f_F > (Local_159.f_13 / 0x00000002))
							{
								Local_159.f_F = (Local_159.f_F - iVar7);
							}
							if (Local_159.f_F < Local_159.f_11)
							{
								Local_159.f_F = Local_159.f_11;
							}
							if (Local_159.f_F > Local_159.f_10)
							{
								Local_159.f_F = Local_159.f_10;
							}
							Local_159.f_F = (Local_159.f_F + iVar7);
							if (Local_159.f_F > (Local_159.f_13 / 0x00000002))
							{
								bVar4 = 0x00000000;
								Local_159.f_F = (Local_159.f_F - iVar7);
							}
							if (Local_159.f_F < Local_159.f_11)
							{
								Local_159.f_F = Local_159.f_11;
							}
							if (Local_159.f_F > Local_159.f_10)
							{
								bVar4 = 0x00000000;
								Local_159.f_F = Local_159.f_10;
							}
						}
					}
					else
					{
						if (Local_159.f_F >= 0x00002710)
						{
							iVar7 = 0x00001388;
						}
						else if (Local_159.f_F >= 0x00001388)
						{
							iVar7 = 0x000003E8;
						}
						else if (Local_159.f_F >= 0x000001F4)
						{
							iVar7 = 0x000001F4;
						}
						else if (Local_159.f_F >= 0x00000064)
						{
							iVar7 = 0x00000032;
						}
						else
						{
							iVar7 = 0x0000000A;
						}
						if (Local_159.f_F > (Local_159.f_13 / 0x00000002))
						{
							Local_159.f_F = (Local_159.f_F - iVar7);
						}
						if (Local_159.f_F < Local_159.f_11)
						{
							Local_159.f_F = Local_159.f_11;
						}
						if (Local_159.f_F > Local_159.f_10)
						{
							Local_159.f_F = Local_159.f_10;
						}
						iVar8 = Local_159.f_F;
						if (bVar5)
						{
							Local_159.f_F = (Local_159.f_F + iVar7);
							if (Local_159.f_F > (Local_159.f_13 / 0x00000002))
							{
								Local_159.f_F = (Local_159.f_F - iVar7);
							}
							if (Local_159.f_F < Local_159.f_11)
							{
								Local_159.f_F = Local_159.f_11;
							}
							if (Local_159.f_F > Local_159.f_10)
							{
								Local_159.f_F = Local_159.f_10;
							}
							if (Local_159.f_F == iVar8)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x0000000A))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x0000000A);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_16), 0x0000000A);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 0x00000001);
							}
						}
						if (bVar6)
						{
							if (Local_159.f_F <= 0x00000064)
							{
								iVar7 = 0x0000000A;
							}
							else if (Local_159.f_F <= 0x000001F4)
							{
								iVar7 = 0x00000032;
							}
							else if (Local_159.f_F <= 0x00001388)
							{
								iVar7 = 0x000001F4;
							}
							else if (Local_159.f_F <= 0x00002710)
							{
								iVar7 = 0x000003E8;
							}
							else
							{
								iVar7 = 0x00001388;
							}
							Local_159.f_F = (Local_159.f_F - iVar7);
							if (Local_159.f_F < Local_159.f_11)
							{
								Local_159.f_F = Local_159.f_11;
							}
							if (Local_159.f_F == iVar8)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x0000000A))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x0000000A);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_16), 0x0000000A);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 0x00000001);
							}
						}
					}
					if ((Local_159.f_F == Local_159.f_10 || (Local_159.f_F + iVar7) > Local_159.f_10) || (Local_159.f_F + iVar7) > (Local_159.f_13 / 0x00000002))
					{
						unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000008);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000008);
					}
					unk_0x5D96D8530B3D0904(&(Local_159.f_1D), 0x00000000);
					iVar0 = (0x0000001E - (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) / 0x000003E8));
					if (iVar0 > 0x00000000 || !func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
						{
							if (((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CB)) && Local_159.f_F >= Local_159.f_11) && Local_159.f_13 >= Local_159.f_11 * 2)
							{
								unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000000);
								Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								if (func_160(Local_159.f_F))
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "bet_ante_large", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								}
								else
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "bet_ante", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								}
								unk_0x914E6894744915F8(Local_159.f_18);
							}
							else if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CB) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9)) || Local_159.f_13 < Local_159.f_1C)
							{
								Local_159.f_13 = func_398();
								if ((((Local_159.f_17 > Local_159.f_13 || Local_159.f_17 > Local_159.f_1B) || Local_159.f_17 < Local_159.f_1C) || Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3)) || Local_159.f_17 > Local_159.f_13)
								{
									Local_159.f_17 = Local_159.f_1C;
								}
								unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000000);
							}
						}
						if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
						{
							if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
							{
								func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							}
							else
							{
								func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							}
						}
						if (Local_159.f_13 < Local_159.f_11 * 2)
						{
							if (((!func_335("TCP_LOW") && !bLocal_177) && !bLocal_178) && !bLocal_173)
							{
								func_158("TCP_LOW");
							}
						}
						else if (((!func_335("TCP_PLACE_ANTE") && !bLocal_177) && !bLocal_178) && !bLocal_173)
						{
							func_158("TCP_PLACE_ANTE");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_ANTE") && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_PLACE_ANTE");
					}
					if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
					{
						if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
						{
							func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
						else
						{
							func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
					}
					if (Local_159.f_1E != 0xFFFFFFFF && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000000))
					{
						if ((unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000000);
							unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0x00000000)
						{
							Local_159.f_1 = 0x00000001;
						}
						if (Local_159.f_1)
						{
							if (func_155(Local_159.f_F, &(Local_159.f_E), 0x00000002, Local_159))
							{
								if (Local_159.f_E == 0x00000003)
								{
									Local_159.f_1 = 0x00000000;
									unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
									Local_159.f_E = 0x00000000;
								}
								else
								{
									Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = Local_159.f_F;
									if (Local_159.f_F >= 0x00002710)
									{
										iVar9 = 0x00001388;
									}
									else if (Local_159.f_F >= 0x00001388)
									{
										iVar9 = 0x000003E8;
									}
									else if (Local_159.f_F >= 0x000001F4)
									{
										iVar9 = 0x000001F4;
									}
									else if (Local_159.f_F >= 0x00000064)
									{
										iVar9 = 0x00000032;
									}
									else
									{
										iVar9 = 0x0000000A;
									}
									if ((Local_159.f_F == Local_159.f_10 || (Local_159.f_F + iVar9) > Local_159.f_10) || (Local_159.f_F + iVar9) > (Local_159.f_13 / 0x00000002))
									{
										Local_168.f_5 = 0x00000001;
									}
									Local_168.f_6 = (Local_168.f_6 - Local_159.f_F);
									Local_169.f_3 = (Local_169.f_3 - Local_159.f_F);
									Local_169.f_7 = (Local_169.f_7 + Local_159.f_F);
									Local_168.f_C = (Local_168.f_C + Local_159.f_F);
									Local_159.f_13 = func_398();
									if ((((Local_159.f_17 > Local_159.f_13 || Local_159.f_17 > Local_159.f_1B) || Local_159.f_17 < Local_159.f_1C) || Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3)) || Local_159.f_17 > Local_159.f_13)
									{
										Local_159.f_17 = Local_159.f_1C;
									}
									Local_159.f_1 = 0x00000000;
								}
							}
						}
					}
				}
				func_151(Local_159.f_F, "TCP_BET2", 0xFFFFFFFF, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000002))
			{
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000))
				{
					if ((((((!unk_0xEAE0D21A50E6C7F4(Local_159.f_1D, 0x00000001) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003)) && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC))
					{
						bVar10 = unk_0x06F8112AA79C53D9(0x00000002, 0x000000BC);
						bVar11 = unk_0x06F8112AA79C53D9(0x00000002, 0x000000BB);
						if (bVar11 || ((((((bVar10 && !unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC)) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003)))
						{
							func_73(&(Local_159.f_316), 0x00000000, 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_159.f_1D), 0x00000001);
						}
					}
					else if (func_71(&(Local_159.f_316), 0x00000064, 0x00000000))
					{
						func_69(&(Local_159.f_316));
						unk_0x0674E58A79778E99(&(Local_159.f_1D), 0x00000001);
					}
					if ((((((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CC) && !bVar11) && !bVar10) && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000008))
					{
						unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
						bVar4 = 0x00000001;
					}
					if (bVar4)
					{
						while (bVar4)
						{
							if (Local_159.f_17 >= 0x00002710)
							{
								iVar12 = 0x00001388;
							}
							else if (Local_159.f_17 >= 0x00001388)
							{
								iVar12 = 0x000003E8;
							}
							else if (Local_159.f_17 >= 0x000001F4)
							{
								iVar12 = 0x000001F4;
							}
							else if (Local_159.f_17 >= 0x00000064)
							{
								iVar12 = 0x00000032;
							}
							else
							{
								iVar12 = 0x0000000A;
							}
							if (Local_159.f_17 > Local_159.f_13)
							{
								Local_159.f_17 = (Local_159.f_17 - iVar12);
							}
							if (Local_159.f_17 > Local_159.f_1B)
							{
								Local_159.f_17 = Local_159.f_1B;
							}
							if (Local_159.f_17 < Local_159.f_1C)
							{
								Local_159.f_17 = Local_159.f_1C;
							}
							if (Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								Local_159.f_17 = (Local_159.f_17 - iVar12);
							}
							Local_159.f_17 = (Local_159.f_17 + iVar12);
							if (Local_159.f_17 > Local_159.f_13)
							{
								bVar4 = 0x00000000;
								Local_159.f_17 = (Local_159.f_17 - iVar12);
							}
							if (Local_159.f_17 > Local_159.f_1B)
							{
								bVar4 = 0x00000000;
								Local_159.f_17 = Local_159.f_1B;
							}
							if (Local_159.f_17 < Local_159.f_1C)
							{
								Local_159.f_17 = Local_159.f_1C;
							}
							if (Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								bVar4 = 0x00000000;
								Local_159.f_17 = (Local_159.f_17 - iVar12);
							}
						}
					}
					else
					{
						if (Local_159.f_17 >= 0x00002710)
						{
							iVar12 = 0x00001388;
						}
						else if (Local_159.f_17 >= 0x00001388)
						{
							iVar12 = 0x000003E8;
						}
						else if (Local_159.f_17 >= 0x000001F4)
						{
							iVar12 = 0x000001F4;
						}
						else if (Local_159.f_17 >= 0x00000064)
						{
							iVar12 = 0x00000032;
						}
						else
						{
							iVar12 = 0x0000000A;
						}
						if (Local_159.f_17 > Local_159.f_13)
						{
							Local_159.f_17 = (Local_159.f_17 - iVar12);
						}
						if (Local_159.f_17 > Local_159.f_1B)
						{
							Local_159.f_17 = Local_159.f_1B;
						}
						if (Local_159.f_17 < Local_159.f_1C)
						{
							Local_159.f_17 = Local_159.f_1C;
						}
						if (Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
						{
							Local_159.f_17 = (Local_159.f_17 - iVar12);
						}
						iVar13 = Local_159.f_17;
						if (bVar10)
						{
							Local_159.f_17 = (Local_159.f_17 + iVar12);
							if (Local_159.f_17 > Local_159.f_13)
							{
								Local_159.f_17 = (Local_159.f_17 - iVar12);
							}
							if (Local_159.f_17 > Local_159.f_1B)
							{
								Local_159.f_17 = Local_159.f_1B;
							}
							if (Local_159.f_17 < Local_159.f_1C)
							{
								Local_159.f_17 = Local_159.f_1C;
							}
							if (Local_159.f_17 > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								Local_159.f_17 = (Local_159.f_17 - iVar12);
							}
							if (Local_159.f_17 == iVar13)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BC) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x0000000A))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x0000000A);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_16), 0x0000000A);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 0x00000001);
							}
						}
						if (bVar11)
						{
							if (Local_159.f_17 <= 0x00000064)
							{
								iVar12 = 0x0000000A;
							}
							else if (Local_159.f_17 <= 0x000001F4)
							{
								iVar12 = 0x00000032;
							}
							else if (Local_159.f_17 <= 0x00001388)
							{
								iVar12 = 0x000001F4;
							}
							else if (Local_159.f_17 <= 0x00002710)
							{
								iVar12 = 0x000003E8;
							}
							else
							{
								iVar12 = 0x00001388;
							}
							Local_159.f_17 = (Local_159.f_17 - iVar12);
							if (Local_159.f_17 < Local_159.f_1C)
							{
								Local_159.f_17 = Local_159.f_1C;
							}
							if (Local_159.f_17 == iVar13)
							{
								if (unk_0xBFC0798A6E3417F9(0x00000002, 0x000000BB) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x0000000A))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x0000000A);
								}
							}
							else
							{
								unk_0x0674E58A79778E99(&(Local_159.f_16), 0x0000000A);
								unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_BET_DOWN", "dlc_vw_table_games_frontend_sounds", 0x00000001);
							}
						}
					}
					if ((Local_159.f_17 == Local_159.f_1B || (Local_159.f_17 + iVar12) > Local_159.f_1B) || (Local_159.f_17 + iVar12) > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
					{
						unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000008);
					}
					else
					{
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000008);
					}
					unk_0x5D96D8530B3D0904(&(Local_159.f_1D), 0x00000000);
					iVar0 = (0x0000001E - (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) / 0x000003E8));
					if (iVar0 > 0x00000000 || !func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
					{
						if ((((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
						{
							if (((((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CB)) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CC)) && Local_159.f_17 >= Local_159.f_1C) && Local_159.f_17 <= Local_159.f_13) && Local_159.f_13 >= (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 + Local_159.f_1C))
							{
								unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000000);
								Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								if (func_160(Local_159.f_17))
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "bet_plus_large", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								}
								else
								{
									unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "bet_plus", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								}
								unk_0x914E6894744915F8(Local_159.f_18);
							}
							else if (((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CB) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9)) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CC)) || Local_159.f_13 < (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 + Local_159.f_1C))
							{
								if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
								{
									unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000002);
								}
								else
								{
									Local_168.f_4 = 0x327E2AF1;
									Local_169.f_2 = 0x327E2AF1;
									Local_168.f_7 = func_398();
									Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
									Local_168.f_12 = func_408();
									Local_168.f_13 = func_208();
									if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
									{
										Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
									}
									if (Global_40001.f_65B4)
									{
										unk_0x1787A8354D584871(&Local_168);
									}
									func_375(0x00000001);
									unk_0xA37A90C62806D848(0x00000001);
									return;
								}
							}
						}
						if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
						{
							if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
							{
								func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							}
							else
							{
								func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
							}
						}
						if (((!func_335("TCP_PLACE_PAIR") && !bLocal_177) && !bLocal_178) && !bLocal_173)
						{
							func_158("TCP_PLACE_PAIR");
						}
					}
				}
				else
				{
					if (((!func_335("TCP_PLACE_PAIR") && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_PLACE_PAIR");
					}
					if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
					{
						if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
						{
							func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
						else
						{
							func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
					}
					if (Local_159.f_1E != 0xFFFFFFFF && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000002))
					{
						if ((unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 > 0x00000000)
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000002);
							unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 <= 0x00000000)
						{
							Local_159.f_1 = 0x00000001;
						}
						if (Local_159.f_1)
						{
							if (func_155(Local_159.f_17, &(Local_159.f_E), 0x00000002, Local_159))
							{
								if (Local_159.f_E == 0x00000003)
								{
									Local_159.f_1 = 0x00000000;
									unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
									Local_159.f_E = 0x00000000;
								}
								else
								{
									Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = Local_159.f_17;
									if (Local_159.f_17 >= 0x00002710)
									{
										iVar14 = 0x00001388;
									}
									else if (Local_159.f_17 >= 0x00001388)
									{
										iVar14 = 0x000003E8;
									}
									else if (Local_159.f_17 >= 0x000001F4)
									{
										iVar14 = 0x000001F4;
									}
									else if (Local_159.f_17 >= 0x00000064)
									{
										iVar14 = 0x00000032;
									}
									else
									{
										iVar14 = 0x0000000A;
									}
									if ((Local_159.f_17 == Local_159.f_1B || (Local_159.f_17 + iVar14) > Local_159.f_1B) || (Local_159.f_17 + iVar14) > (Local_159.f_13 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
									{
										Local_168.f_5 = 0x00000001;
									}
									Local_168.f_6 = (Local_168.f_6 - Local_159.f_17);
									Local_169.f_3 = (Local_169.f_3 - Local_159.f_17);
									Local_169.f_8 = (Local_169.f_8 + Local_159.f_17);
									Local_168.f_D = (Local_168.f_D + Local_159.f_17);
									Local_159.f_13 = func_398();
									Local_159.f_1 = 0x00000000;
								}
							}
						}
					}
				}
				func_151(Local_159.f_17, "TCP_BET3", 0xFFFFFFFF, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
			}
			else
			{
				bVar15 = 0x00000001;
				iVar16 = 0x00000000;
				while (iVar16 < 0x00000004)
				{
					iVar17 = Local_116.f_75[(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar16)];
					if (iVar17 != 0xFFFFFFFF)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar17 /*9*/], 0x00000002))
						{
							bVar15 = 0x00000000;
						}
					}
					iVar16++;
				}
				if ((((!func_335("TCP_WAIT") && !bVar15) && !bLocal_177) && !bLocal_178) && !bLocal_173)
				{
					func_158("TCP_WAIT");
				}
				if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
				{
					if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
					{
						func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
					else
					{
						func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
					}
				}
			}
			if ((Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] > 0x00000003 && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000)) && !Local_159.f_1)
			{
				if (unk_0xEAE0D21A50E6C7F4(Local_159.f_1D, 0x00000000))
				{
					unk_0xA37A90C62806D848(0x00000001);
					Local_169.f_C++;
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0x00000000 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 <= 0x00000000)
					{
						unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000005);
					}
					func_161(0x00000002);
				}
				else
				{
					bVar18 = 0x00000001;
					iVar19 = 0x00000000;
					while (iVar19 < 0x00000004)
					{
						iVar20 = Local_116.f_75[(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar19)];
						if (iVar20 != 0xFFFFFFFF)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_158[iVar20 /*9*/], 0x00000002))
							{
								bVar18 = 0x00000000;
							}
						}
						iVar19++;
					}
					if ((((!func_335("TCP_WAIT") && !bVar18) && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_WAIT");
					}
					if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
					{
						if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
						{
							func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
						else
						{
							func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
						}
					}
				}
			}
			break;
		
		case 0x00000002:
			if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0x00000000)
			{
				if (Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] == 0x00000003)
				{
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
					{
						unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000006);
					}
					unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
					func_161(0x00000003);
				}
			}
			break;
		
		case 0x00000003:
			if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0x00000000 && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 <= 0x00000000)
			{
				unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000003);
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
				{
					unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000004);
				}
				func_161(0x00000004);
				return;
			}
			if ((unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))])) && unk_0xE5DBF9B6126856CA(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
			{
				if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar21 = 0x00000001;
				}
				if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar21 = 0x00000001;
				}
				if (!unk_0x526BC32A660C89E6(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]))
				{
					unk_0x8D30F6387EE75385(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]);
					bVar21 = 0x00000001;
				}
				if (bVar21)
				{
					return;
				}
				if ((((((!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000002)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000001)) && !unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000003)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
				{
					if ((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D())
					{
						if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CF) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CB)) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9))
						{
							Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_pickup", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_pickup_card_a", 1000f, -1000f, 0x0000000D);
							unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_pickup_card_b", 1000f, -1000f, 0x0000000D);
							unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_pickup_card_c", 1000f, -1000f, 0x0000000D);
							unk_0x914E6894744915F8(Local_159.f_18);
							unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000007);
							unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000000);
						}
					}
				}
				if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000000))
				{
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
					{
						iVar0 = (0x0000001E - (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) / 0x000003E8));
						if (iVar0 > 0x00000000)
						{
							if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])) && (0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)) >= 0x00000000)
							{
								if (func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000) <= 0x00005DC0)
								{
									func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
								else
								{
									func_159((0x00007530 - func_206(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/]), 0x00000000, 0x00000000)), "TCP_TIME", 0x00000000, 0x00000000, 0xFFFFFFFF, 0x00000000, 0x00000003, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
								}
							}
							if (((!func_335("TCP_PLACE_PLAY") && !bLocal_177) && !bLocal_178) && !bLocal_173)
							{
								func_158("TCP_PLACE_PLAY");
							}
							if ((((!unk_0x4FD68D5821EE3E19() && !func_337()) && !unk_0xE57E602827E07C9D()) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
							{
								if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000C9) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CB)) && (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF) || unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004)))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
									{
										Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_play", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_play_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_play_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_play_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_159.f_18);
									}
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000000);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000002);
								}
								else if ((unk_0xBFC0798A6E3417F9(0x00000002, 0x000000CB) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000C9)) && (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF) || unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004)))
								{
									if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
									{
										Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_fold", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_159.f_18);
									}
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000000);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000001);
								}
							}
						}
						else if (func_72(&(Local_116.f_96[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*2*/])))
						{
							if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
							{
								Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
								unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_fold", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_a", 1000f, -1000f, 0x0000000D);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_b", 1000f, -1000f, 0x0000000D);
								unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_c", 1000f, -1000f, 0x0000000D);
								unk_0x914E6894744915F8(Local_159.f_18);
							}
							unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000000);
							unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000001);
						}
					}
					else
					{
						unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000003);
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000004);
						}
						func_161(0x00000004);
						return;
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000002))
				{
					if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000003))
					{
						if ((Local_159.f_1E != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43))) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
						{
							Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							if (func_160(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3))
							{
								unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_bet_large", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							}
							else
							{
								unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_bet", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							}
							unk_0x914E6894744915F8(Local_159.f_18);
							unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000003);
						}
					}
					else if (Local_159.f_1E != 0xFFFFFFFF)
					{
						if ((unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 > 0x00000000)
						{
							Local_159.f_31C = "idle_cardgames";
							Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), Local_159.f_31C, 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_159.f_18);
							unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
							unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000001);
							unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000002);
							unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000003);
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000001);
							if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
							{
								unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000004);
							}
							func_161(0x00000004);
						}
						else if (unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0x59A0D64C) && Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 <= 0x00000000)
						{
							Local_159.f_1 = 0x00000001;
						}
						if (Local_159.f_1)
						{
							if (func_155(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3, &(Local_159.f_E), 0x00000002, Local_159))
							{
								if (Local_159.f_E == 0x00000003)
								{
									Local_159.f_1 = 0x00000000;
									unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
									unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000001);
									unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000002);
									unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000003);
									if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
									{
										Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
										unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_idle", 1000f, -1000f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_idle_card_a", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_idle_card_b", 1000f, -1000f, 0x0000000D);
										unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_idle_card_c", 1000f, -1000f, 0x0000000D);
										unk_0x914E6894744915F8(Local_159.f_18);
									}
									Local_159.f_E = 0x00000000;
								}
								else
								{
									Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3;
									Local_168.f_6 = (Local_168.f_6 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
									Local_169.f_3 = (Local_169.f_3 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
									Local_159.f_13 = func_398();
									Local_159.f_1 = 0x00000000;
								}
							}
						}
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000001))
				{
					if ((Local_159.f_1E != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43))) || !unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
					{
						Local_159.f_31C = "idle_cardgames";
						Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), Local_159.f_31C, 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0x914E6894744915F8(Local_159.f_18);
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000001);
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000002);
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000003);
						unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000003);
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004))
						{
							unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/]), 0x00000004);
						}
						func_161(0x00000004);
					}
				}
				else if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000007) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_pickup", 0x00000003))
				{
					if (Local_159.f_1E != 0xFFFFFFFF && (unk_0xA45992A6CE82FB43(Local_159.f_1E) >= 0.99f || unk_0xDDCA9A4E51DADA2B(unk_0x16F2683693E537C9(), 0xAB120D43)))
					{
						Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000000, 0x00000001, 0x3F800000, 0x00000000, 0x3F800000);
						unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_idle", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
						unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_idle_card_a", 1000f, -1000f, 0x0000000D);
						unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_idle_card_b", 1000f, -1000f, 0x0000000D);
						unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_idle_card_c", 1000f, -1000f, 0x0000000D);
						unk_0x914E6894744915F8(Local_159.f_18);
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000000);
						unk_0x0674E58A79778E99(&(Local_159.f_16), 0x00000007);
						unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000004);
					}
				}
				if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
				{
					func_151(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3, "TCP_BET4", 0xFFFFFFFF, 0x00000001, 0x00000002, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF);
				}
			}
			break;
		
		case 0x00000004:
			if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0x00000000)
			{
				bVar22 = 0x00000001;
				iVar23 = 0x00000000;
				while (iVar23 < 0x00000004)
				{
					iVar24 = Local_116.f_75[(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4 + iVar23)];
					if (iVar24 != 0xFFFFFFFF)
					{
						if ((!unk_0xEAE0D21A50E6C7F4(Local_158[iVar24 /*9*/], 0x00000001) && !unk_0xEAE0D21A50E6C7F4(Local_158[iVar24 /*9*/], 0x00000003)) && (Local_158[iVar24 /*9*/].f_3 > 0x00000000 || Local_158[iVar24 /*9*/].f_5 > 0x00000000))
						{
							bVar22 = 0x00000000;
						}
					}
					iVar23++;
				}
				if (Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 0x00000009 && !bVar22)
				{
					if (((!func_335("TCP_WAIT") && !bLocal_177) && !bLocal_178) && !bLocal_173)
					{
						func_158("TCP_WAIT");
					}
				}
				else if (func_335("TCP_WAIT") || func_335("TCP_PLACE_PLAY"))
				{
					unk_0xA37A90C62806D848(0x00000001);
				}
				if (Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] == 0x00000001)
				{
					if (unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000005))
					{
						bVar25 = 0x00000001;
					}
					if (Local_159.f_1F != 0xFFFFFFFF)
					{
						func_311(&(Local_159.f_1F));
						Local_159.f_1F = 0xFFFFFFFF;
					}
					Local_159.f_2 = 0x00000000;
					Local_159.f_3 = 0x00000000;
					Local_159.f_4 = 0x00000000;
					Local_159.f_6 = 0x00000000;
					Local_159.f_16 = 0x00000000;
					Local_158[unk_0xD803B885F5E47A62() /*9*/] = 0x00000000;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0x00000000;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = 0x00000000;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = 0x00000000;
					Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = 0x00000000;
					func_161(0x00000000);
					Local_168.f_7 = func_398();
					Local_168.f_11 = func_206(&uLocal_164, 0x00000000, 0x00000000);
					Local_168.f_12 = func_408();
					Local_168.f_13 = func_208();
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 > 0xFFFFFFFF)
					{
						Local_168.f_9 = Local_116.f_1E[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2];
					}
					if (!func_354() || func_348())
					{
						if (Global_40001.f_65B4 && !bVar25)
						{
							unk_0x1787A8354D584871(&Local_168);
						}
						func_375(0x00000001);
						unk_0xA37A90C62806D848(0x00000001);
						return;
					}
					if (func_333())
					{
						switch (func_329())
						{
							case 0x00000000:
								Local_168.f_4 = 0x762DD373;
								break;
							
							case 0x00000001:
								Local_168.f_4 = 0xDA428132;
								break;
							
							case 0x00000002:
								Local_168.f_4 = 0x9F153806;
								break;
						}
						switch (func_329())
						{
							case 0x00000000:
								Local_169.f_2 = 0x762DD373;
								break;
							
							case 0x00000001:
								Local_169.f_2 = 0xDA428132;
								break;
							
							case 0x00000002:
								Local_169.f_2 = 0x9F153806;
								break;
						}
						if (Global_40001.f_65B4 && !bVar25)
						{
							unk_0x1787A8354D584871(&Local_168);
						}
						func_375(0x00000001);
						unk_0xA37A90C62806D848(0x00000001);
						if (func_329() == 0x00000002)
						{
							func_223("CAS_MG_CTIME", 0xFFFFFFFF);
						}
						else
						{
							func_223("CAS_MG_CBAN", 0xFFFFFFFF);
						}
						return;
					}
					if (Global_40001.f_65B4 && !bVar25)
					{
						unk_0x1787A8354D584871(&Local_168);
					}
					return;
				}
				if ((Local_116.f_5[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] && Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] > 0x00000000) && unk_0xEAE0D21A50E6C7F4(Local_116.f_14[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
				{
					iVar27 = func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000);
					iVar28 = func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000);
					if (func_25(iVar27))
					{
						bVar26 = 0x00000001;
					}
					if (iVar28 > 0x000001F4)
					{
						Local_168.f_16 = 0x2C6B28D0;
					}
					else if (iVar28 > 0x00000190)
					{
						Local_168.f_16 = 0x23138503;
					}
					else if (iVar28 > 0x0000012C)
					{
						Local_168.f_16 = 0x12B48BEA;
					}
					else if (iVar28 > 0x000000C8)
					{
						Local_168.f_16 = 0xED859F9A;
					}
					else if (iVar28 > 0x00000064)
					{
						Local_168.f_16 = 0x168FECC1;
					}
					else
					{
						Local_168.f_16 = 0x0C03EFC1;
					}
					if (((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000005))
						{
							Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
							sVar29 = func_150(Local_168.f_6);
							if ((Local_159.f_1A == 0x00000001 || func_380(Local_159.f_12) == 0x00000002) || func_380(Local_159.f_12) == 0x00000003)
							{
								if (((Local_159.f_F >= 0x000088B8 && iVar28 > iVar27) && iVar28 > 0x0000012C) || (Local_159.f_17 >= 0x00000DAC && iVar28 > 0x0000012C))
								{
									sVar29 = func_149();
								}
								else if (((Local_159.f_F >= 0x000088B8 && iVar28 > 0x0000012C) && iVar28 < iVar27) && !(Local_159.f_17 >= 0x00000DAC && iVar28 > 0x0000012C))
								{
									sVar29 = func_147();
								}
							}
							else if (((Local_159.f_F >= 0x00001194 && iVar28 > iVar27) && iVar28 > 0x0000012C) || (Local_159.f_17 >= 0x000001C2 && iVar28 > 0x0000012C))
							{
								sVar29 = func_149();
							}
							else if (((Local_159.f_F >= 0x00001194 && iVar28 > 0x0000012C) && iVar28 < iVar27) && !(Local_159.f_17 >= 0x000001C2 && iVar28 > 0x0000012C))
							{
								sVar29 = func_147();
							}
							unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), sVar29, 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
							unk_0x914E6894744915F8(Local_159.f_18);
							unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000005);
						}
						if (Local_168.f_E > 0x00000000)
						{
							if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000009))
							{
								if (func_102(Local_168.f_E, &(Local_159.f_E), 0x00000002))
								{
									unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 0x00000001);
									unk_0x5D96D8530B3D0904(&(Local_159.f_16), 0x00000009);
									if (func_418(unk_0xD803B885F5E47A62()) && iVar28 > 0x000001F4)
									{
										unk_0x5D96D8530B3D0904(&(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_348), 0x0000000B);
									}
								}
							}
						}
					}
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 > 0x00000000)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/], 0x00000003))
						{
							if (!bVar26)
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (!func_100("TCP_WIN_NP", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E))
									{
										func_99("TCP_WIN_NP", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E);
									}
								}
								if (!Local_159.f_2)
								{
									Local_159.f_2 = 0x00000001;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
								}
								if (!Local_159.f_3)
								{
									Local_159.f_3 = 0x00000001;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
									Local_169.f_D++;
									Local_168.f_F = 0x00000001;
									Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
									Local_168.f_4 = 0xDE7BE0D2;
								}
							}
							else if (iVar28 > iVar27)
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (iVar28 > 0x000001F4 && iVar27 > 0x000001F4)
									{
										bVar30 = 0x00000001;
									}
									if ((iVar28 > 0x00000190 && iVar27 > 0x00000190) && (iVar28 < 0x000001F4 && iVar27 < 0x000001F4))
									{
										bVar30 = 0x00000001;
									}
									if ((iVar28 > 0x0000012C && iVar27 > 0x0000012C) && (iVar28 < 0x00000190 && iVar27 < 0x00000190))
									{
										bVar30 = 0x00000001;
									}
									if ((iVar28 > 0x000000C8 && iVar27 > 0x000000C8) && (iVar28 < 0x0000012C && iVar27 < 0x0000012C))
									{
										bVar30 = 0x00000001;
									}
									if ((iVar28 > 0x00000064 && iVar27 > 0x00000064) && (iVar28 < 0x000000C8 && iVar27 < 0x000000C8))
									{
										bVar30 = 0x00000001;
									}
									if (bVar30)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E);
										}
									}
									else if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E);
									}
								}
								if (!Local_159.f_2)
								{
									Local_159.f_2 = 0x00000001;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
								}
								if (!Local_159.f_3)
								{
									Local_159.f_3 = 0x00000001;
									Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
									Local_169.f_D++;
									Local_168.f_F = 0x00000001;
									Local_168.f_4 = 0xDE7BE0D2;
								}
							}
							else if (iVar28 == iVar27)
							{
								iVar27 = func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000001, 0x00000000);
								iVar28 = func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000001, 0x00000000);
								if (iVar28 == iVar27)
								{
									iVar27 = func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000001);
									iVar28 = func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000001);
									if (iVar28 > iVar27)
									{
										if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
										{
											if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E))
											{
												func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E);
											}
										}
										if (!Local_159.f_2)
										{
											Local_159.f_2 = 0x00000001;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
											Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										}
										if (!Local_159.f_3)
										{
											Local_159.f_3 = 0x00000001;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
											Local_169.f_D++;
											Local_168.f_F = 0x00000001;
											Local_168.f_4 = 0xDE7BE0D2;
										}
									}
									else if (iVar28 == iVar27)
									{
										if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
										{
											if (!func_335("TCP_LOSE_PUSH"))
											{
												func_158("TCP_LOSE_PUSH");
											}
										}
										if (!Local_159.f_2)
										{
											Local_159.f_2 = 0x00000001;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
											Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
											func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
										}
										if (!Local_159.f_3)
										{
											Local_159.f_3 = 0x00000001;
											Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
											Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
											Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4);
											Local_169.f_D++;
											Local_168.f_F = 0x00000001;
											Local_168.f_4 = 0xDE7BE0D2;
										}
										Local_159.f_2 = 0x00000001;
									}
									else
									{
										if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
										{
											if (Local_168.f_E > 0x00000000)
											{
												if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E))
												{
													func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E);
												}
											}
											else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001)))
											{
												func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001));
											}
										}
										Local_168.f_4 = 0x91A75DBE;
										if (!Local_159.f_3)
										{
											func_205((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3));
											Local_159.f_3 = 0x00000001;
											Local_169.f_E++;
										}
										Local_159.f_2 = 0x00000001;
									}
								}
								else if (iVar28 > iVar27)
								{
									if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
									{
										if (!func_100("TCP_WIN2", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E))
										{
											func_99("TCP_WIN2", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E);
										}
									}
									if (!Local_159.f_2)
									{
										Local_159.f_2 = 0x00000001;
										Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
										Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * 2);
									}
									if (!Local_159.f_3)
									{
										Local_159.f_3 = 0x00000001;
										Local_169.f_3 = (Local_169.f_3 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_168.f_6 = (Local_168.f_6 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_169.f_D++;
										Local_168.f_F = 0x00000001;
										Local_168.f_E = (Local_168.f_E + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 * 2);
										Local_168.f_4 = 0xDE7BE0D2;
									}
								}
								else
								{
									if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
									{
										if (Local_168.f_E > 0x00000000)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001));
										}
									}
									Local_168.f_4 = 0x91A75DBE;
									if (!Local_159.f_3)
									{
										func_205((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3));
										Local_159.f_3 = 0x00000001;
										Local_169.f_E++;
									}
									Local_159.f_2 = 0x00000001;
								}
							}
							else
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (iVar28 > 0x000001F4 && iVar27 > 0x000001F4)
									{
										bVar31 = 0x00000001;
									}
									if ((iVar28 > 0x00000190 && iVar27 > 0x00000190) && (iVar28 < 0x000001F4 && iVar27 < 0x000001F4))
									{
										bVar31 = 0x00000001;
									}
									if ((iVar28 > 0x0000012C && iVar27 > 0x0000012C) && (iVar28 < 0x00000190 && iVar27 < 0x00000190))
									{
										bVar31 = 0x00000001;
									}
									if ((iVar28 > 0x000000C8 && iVar27 > 0x000000C8) && (iVar28 < 0x0000012C && iVar27 < 0x0000012C))
									{
										bVar31 = 0x00000001;
									}
									if ((iVar28 > 0x00000064 && iVar27 > 0x00000064) && (iVar28 < 0x000000C8 && iVar27 < 0x000000C8))
									{
										bVar31 = 0x00000001;
									}
									if (bVar31)
									{
										if (Local_168.f_E > 0x00000000)
										{
											if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E))
											{
												func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001), Local_168.f_E);
											}
										}
										else if (!func_98("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001)))
										{
											func_97("TCP_LOSE_PLAY2", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000001));
										}
									}
									else if (Local_168.f_E > 0x00000000)
									{
										if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E))
										{
											func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E);
										}
									}
									else if (!func_98("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000)))
									{
										func_97("TCP_LOSE_PLAY", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000));
									}
								}
								Local_168.f_4 = 0x91A75DBE;
								if (!Local_159.f_3)
								{
									func_205((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 + Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3));
									Local_159.f_3 = 0x00000001;
									Local_169.f_E++;
								}
								Local_159.f_2 = 0x00000001;
							}
							iVar28 = func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000);
							if (!Local_159.f_4)
							{
								if (func_96(iVar28) > 0x00000000)
								{
									Local_169.f_3 = (Local_169.f_3 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar28)));
									Local_168.f_6 = (Local_168.f_6 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar28)));
									Local_169.f_D++;
									Local_168.f_F = 0x00000001;
									Local_168.f_E = (Local_168.f_E + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 * func_96(iVar28)));
								}
								Local_159.f_4 = 0x00000001;
							}
						}
						else
						{
							if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 >= 0x00000000)
							{
								Local_168.f_4 = 0x28EDA150;
							}
							if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
							{
								if (Local_168.f_E > 0x00000000)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E);
									}
								}
								else if (!func_98("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000)))
								{
									func_97("TCP_LOSE_FOLD", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000));
								}
							}
							if (!Local_159.f_3)
							{
								func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3);
								Local_159.f_3 = 0x00000001;
								Local_169.f_E++;
							}
							Local_159.f_4 = 0x00000001;
							Local_159.f_2 = 0x00000001;
						}
					}
					else
					{
						Local_159.f_2 = 0x00000001;
						Local_159.f_3 = 0x00000001;
						Local_159.f_4 = 0x00000001;
					}
					iVar28 = func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000);
					if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 > 0x00000000)
					{
						Local_168.f_15 = 0x00000001;
						if (func_23(iVar28) > 0x00000000)
						{
							if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0x00000000)
							{
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (!func_100("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E))
									{
										func_99("TCP_WIN", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000), Local_168.f_E);
									}
								}
							}
							if (!Local_159.f_6)
							{
								Local_159.f_6 = 0x00000001;
								Local_169.f_3 = (Local_169.f_3 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar28))));
								Local_168.f_6 = (Local_168.f_6 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar28))));
								Local_169.f_D++;
								Local_168.f_F = 0x00000001;
								Local_168.f_E = (Local_168.f_E + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 + (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 * func_23(iVar28))));
								Local_168.f_4 = 0xDE7BE0D2;
							}
						}
						else
						{
							if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0x00000000)
							{
								Local_168.f_4 = 0x91A75DBE;
								if ((((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && !bLocal_177) && !bLocal_178) && !bLocal_173)
								{
									if (!func_98("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000)))
									{
										func_97("TCP_LOSE_PP", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000));
									}
								}
							}
							if (!Local_159.f_6)
							{
								func_205(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5);
								Local_159.f_6 = 0x00000001;
								if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 <= 0x00000000)
								{
									Local_169.f_E++;
								}
							}
						}
					}
					else
					{
						Local_159.f_6 = 0x00000001;
					}
				}
				else
				{
					if (!Local_116.f_5[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2])
					{
					}
					if (Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] <= 0x00000000)
					{
					}
					if (!unk_0xEAE0D21A50E6C7F4(Local_116.f_14[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
					{
					}
					if (((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6)
					{
						if (Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] <= 0x00000000)
						{
							Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = 0x00000000;
							Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = 0x00000000;
							Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = 0x00000000;
						}
					}
				}
			}
			break;
	}
}

int func_96(int iParam0)
{
	if (iParam0 > 0x000001F4)
	{
		return 0x00000005;
	}
	else if (iParam0 > 0x00000190)
	{
		return 0x00000004;
	}
	else if (iParam0 > 0x0000012C)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_97(char* sParam0, char* sParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_98(char* sParam0, char* sParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

void func_99(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

bool func_100(char* sParam0, char* sParam1, int iParam2)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6B012227B3921E18(sParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

char* func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (iParam0 > 0x000001F4)
		{
			return "TCP_STRAIGHTF_F";
		}
		else if (iParam0 > 0x00000190)
		{
			return "TCP_TOFAKIND_F";
		}
		else if (iParam0 > 0x0000012C)
		{
			return "TCP_STRAIGHT_F";
		}
		else if (iParam0 > 0x000000C8)
		{
			return "TCP_FLUSH_F";
		}
		else if (iParam0 > 0x00000064)
		{
			return "TCP_PAIR_F";
		}
		else if (iParam0 == 0x0000000C)
		{
			return "TCP_HIGH_Q_F";
		}
		else if (iParam0 == 0x0000000D)
		{
			return "TCP_HIGH_K_F";
		}
		else
		{
			return "TCP_HIGH_A_F";
		}
	}
	else if (iParam0 > 0x000001F4)
	{
		return "TCP_STRAIGHTF";
	}
	else if (iParam0 > 0x00000190)
	{
		return "TCP_TOFAKIND";
	}
	else if (iParam0 > 0x0000012C)
	{
		return "TCP_STRAIGHT";
	}
	else if (iParam0 > 0x000000C8)
	{
		return "TCP_FLUSH";
	}
	else if (iParam0 > 0x00000064)
	{
		if (iParam0 == 0x00000080)
		{
			return "TCP_PAIR_A";
		}
		else if (iParam0 == 0x00000068)
		{
			return "TCP_PAIR_2";
		}
		else if (iParam0 == 0x0000006A)
		{
			return "TCP_PAIR_3";
		}
		else if (iParam0 == 0x0000006C)
		{
			return "TCP_PAIR_4";
		}
		else if (iParam0 == 0x0000006E)
		{
			return "TCP_PAIR_5";
		}
		else if (iParam0 == 0x00000070)
		{
			return "TCP_PAIR_6";
		}
		else if (iParam0 == 0x00000072)
		{
			return "TCP_PAIR_7";
		}
		else if (iParam0 == 0x00000074)
		{
			return "TCP_PAIR_8";
		}
		else if (iParam0 == 0x00000076)
		{
			return "TCP_PAIR_9";
		}
		else if (iParam0 == 0x00000078)
		{
			return "TCP_PAIR_10";
		}
		else if (iParam0 == 0x0000007A)
		{
			return "TCP_PAIR_J";
		}
		else if (iParam0 == 0x0000007C)
		{
			return "TCP_PAIR_Q";
		}
		else if (iParam0 == 0x0000007E)
		{
			return "TCP_PAIR_K";
		}
	}
	else if (iParam0 == 0x00000005)
	{
		return "TCP_HIGH_5";
	}
	else if (iParam0 == 0x00000006)
	{
		return "TCP_HIGH_6";
	}
	else if (iParam0 == 0x00000007)
	{
		return "TCP_HIGH_7";
	}
	else if (iParam0 == 0x00000008)
	{
		return "TCP_HIGH_8";
	}
	else if (iParam0 == 0x00000009)
	{
		return "TCP_HIGH_9";
	}
	else if (iParam0 == 0x0000000A)
	{
		return "TCP_HIGH_10";
	}
	else if (iParam0 == 0x0000000B)
	{
		return "TCP_HIGH_J";
	}
	else if (iParam0 == 0x0000000C)
	{
		return "TCP_HIGH_Q";
	}
	else if (iParam0 == 0x0000000D)
	{
		return "TCP_HIGH_K";
	}
	else
	{
		return "TCP_HIGH_A";
	}
	return "";
}

bool func_102(int iParam0, var uParam1, int iParam2)
{
	return func_103(iParam0, 0x00000003, uParam1, iParam2, 0xFFFFFFFF);
}

int func_103(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0x00000000)
	{
	}
	else if (!func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (Global_40001.f_671B - iVar0);
		iVar2 = 0x00000000;
		if (iParam1 == 0x00000000)
		{
			iVar3 = func_144();
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
		if (func_124(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_398() - Global_19E12C);
			func_123(iVar4, 0x00000001);
			func_121();
			func_120();
			Global_19E12C = (Global_19E12C + iVar4);
			if (iParam1 == 0x00000000)
			{
				func_114(iVar4);
				Global_258BC5 = 0x00000001;
			}
			else if (iParam1 == 0x00000003)
			{
				func_107(iVar4);
				if (iVar4 >= Global_40001.f_6723)
				{
					Global_258BC4 = 0x00000001;
				}
				else if (iVar4 >= Global_40001.f_6722)
				{
					Global_258BC5 = 0x00000001;
				}
			}
			Var5 = func_106(iParam1);
			Var5.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0x00000000;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x62F8C2EDB26F57B3(0xFFFFFFFF) + unk_0x3A6D64D2A1228113());
			Var5.f_6 = Global_19E12C;
			unk_0xB1C8602C4408B407(&Var5);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x0000000A:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 0xFFFFFFFF)
	{
		switch (iParam0)
		{
			case 0x00000000:
				if (iParam2 > 0xFFFFFFFF)
				{
					iVar0 = (0x00000013 + iParam2);
				}
				else
				{
					iVar0 = 0x00000013;
				}
				break;
			
			case 0x00000001:
				iVar0 = 0x00000015;
				break;
			
			case 0x00000004:
				iVar0 = 0x00000016;
				break;
			
			case 0x00000005:
				iVar0 = 0x00000017;
				break;
			
			case 0x00000006:
				iVar0 = 0x00000018;
				break;
			
			case 0x00000007:
				iVar0 = 0x00000019;
				break;
			
			case 0x00000009:
				iVar0 = 0x0000001A;
				break;
			
			case 0x0000000A:
				if (iParam2 > 0xFFFFFFFF)
				{
					iVar0 = (0x0000001B + iParam2);
				}
				else
				{
					iVar0 = 0x0000001B;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0x00000000:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000001;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000002;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000003;
				}
				break;
			
			case 0x00000001:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000004;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000005;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000006;
				}
				break;
			
			case 0x00000002:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000007;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000008;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000009;
				}
				break;
			
			case 0x00000003:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x0000000A;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x0000000B;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x0000000C;
				}
				break;
			
			case 0x00000004:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x0000000D;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x0000000E;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x0000000F;
				}
				break;
			
			case 0x00000005:
				if (iParam0 == 0x00000002)
				{
					iVar0 = 0x00000010;
				}
				else if (iParam0 == 0x00000003)
				{
					iVar0 = 0x00000011;
				}
				else if (iParam0 == 0x00000008)
				{
					iVar0 = 0x00000012;
				}
				break;
			}
	}
	return iVar0;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0x86302E8D;
			break;
		
		case 0x00000001:
			iVar0 = 0x9FE0C4C4;
			break;
		
		case 0x00000002:
			iVar0 = 0xB23A9935;
			break;
		
		case 0x00000003:
			iVar0 = 0x474E1CBD;
			break;
		
		case 0x00000004:
			iVar0 = 0x8AE6763F;
			break;
		
		case 0x00000005:
			iVar0 = 0x8152F90A;
			break;
		
		case 0x00000006:
			iVar0 = 0x43E17CD0;
			break;
		
		case 0x00000007:
			iVar0 = 0x6E326DF9;
			break;
		
		case 0x00000008:
			iVar0 = 0x474E1CBD;
			break;
		
		case 0x00000009:
			iVar0 = 0xB2AFC6B5;
			break;
		
		case 0x0000000A:
			iVar0 = 0x68917E4E;
			break;
	}
	return iVar0;
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_111();
	if (iVar0 == 0x00000000)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_40001.f_671D)
	{
		func_109();
		iVar2 = 0x00000000;
	}
	if ((iParam0 + iVar2) >= Global_40001.f_671F)
	{
		func_108(0xB402A40B, Global_40001.f_671F);
		func_109();
		Global_258BC5 = 0x00000001;
	}
	else
	{
		func_108(0xB402A40B, (iVar2 + iParam0));
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, 0x00000001);
	}
}

void func_109()
{
	func_110();
}

void func_110()
{
	func_108(0x78C4B643, unk_0xDD0E7998AE8AD485());
}

int func_111()
{
	return func_112(0xB402A40B);
}

int func_112(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
	{
		return uVar1;
	}
	return 0x00000000;
}

int func_113()
{
	return func_112(0x78C4B643);
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_119();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_118();
	if (iVar0 == 0x00000000)
	{
		func_117();
	}
	else if ((iVar0 - iVar1) >= Global_40001.f_671C)
	{
		func_116();
		iVar2 = 0x00000000;
	}
	if (iParam0 + iVar2) > func_115()
	{
		func_108(0xBCC804A8, func_115());
		func_116();
	}
	else
	{
		func_108(0xBCC804A8, (iVar2 + iParam0));
	}
}

int func_115()
{
	if (func_328(unk_0xD803B885F5E47A62()))
	{
		return Global_40001.f_664F;
	}
	return Global_40001.f_664E;
}

void func_116()
{
	func_117();
}

void func_117()
{
	func_108(0x03FF9E2A, unk_0xDD0E7998AE8AD485());
}

int func_118()
{
	return func_112(0xBCC804A8);
}

int func_119()
{
	return func_112(0x03FF9E2A);
}

void func_120()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_19E14F, 0x00000006))
	{
		unk_0x5D96D8530B3D0904(&Global_19E14F, 0x00000009);
		func_366(&Global_19E152, 0x00000000, 0x00000000);
	}
}

void func_121()
{
	if (func_122())
	{
		unk_0x5D96D8530B3D0904(&Global_19E14F, 0x00000001);
	}
}

bool func_122()
{
	return (unk_0xEAE0D21A50E6C7F4(Global_19E14F, 0x00000006) || unk_0xEAE0D21A50E6C7F4(Global_19E14F, 0x00000005));
}

void func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0x00000000)
	{
		return;
	}
	unk_0x5D96D8530B3D0904(&Global_19E14F, 0x00000006);
	Global_19E150 = iParam0;
	Global_19E151 = iParam1;
}

bool func_124(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 0x00000001;
	bVar2 = func_104(iParam1);
	if (!bVar2)
	{
		iVar0 = 0x00000000;
		iVar1 = 0x00000000;
	}
	if (*uParam0 == 0x00000003 || *uParam0 == 0x00000002)
	{
		*uParam0 = 0x00000000;
	}
	if (func_143())
	{
		if (*uParam0 == 0x00000000)
		{
			if (func_142() != 0xFFFFFFFF)
			{
				return 0x00000000;
			}
			iVar3 = 0x272CB70B;
			iVar4 = func_106(iParam1);
			iVar5 = 0xFEAE09E5;
			if (func_146(iParam1))
			{
				iVar5 = 0xF8720A1A;
			}
			if (func_138(0x04A9A0AE, 0x7442B428, iVar3, iVar5, iParam2, iVar1, 0x00000000, 0x00000004, 0x00000000, 0x00000003))
			{
				if (func_138(0x04A9A0AE, 0x6E06ACCC, iVar4, iVar5, 0x00000001, 0x00000000, 0x00000000, 0x00000004, 0x00000000, 0x00000003))
				{
					if (func_132())
					{
						*uParam0 = 0x00000001;
					}
					else
					{
						*uParam0 = 0x00000003;
					}
				}
				else
				{
					*uParam0 = 0x00000003;
				}
			}
			else
			{
				*uParam0 = 0x00000003;
			}
		}
		else if (*uParam0 == 0x00000001)
		{
			if (func_131(func_142()))
			{
				if (func_130(func_142()) == 0x00000002)
				{
					unk_0x7A87D9FAFCB10ADC(func_129(func_142()));
					if (func_146(iParam1))
					{
						unk_0xBAAADC9CD356B660(iVar0, iParam2);
					}
					else
					{
						unk_0xDB46ED1F703FD834(iVar0, iParam2);
					}
					*uParam0 = 0x00000002;
				}
				else
				{
					*uParam0 = 0x00000003;
				}
				func_125(func_142());
			}
		}
	}
	else if (iVar0 > 0x00000000 || unk_0x7A7BDE279347E517(iVar0, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
	{
		if (func_146(iParam1))
		{
			unk_0xBAAADC9CD356B660(iVar0, iParam2);
		}
		else
		{
			unk_0xDB46ED1F703FD834(iVar0, iParam2);
		}
		*uParam0 = 0x00000002;
	}
	else
	{
		*uParam0 = 0x00000003;
	}
	return *uParam0 != 0x00000001;
}

void func_125(int iParam0)
{
	bool bVar0;
	
	bVar0 = 0x00000000;
	if (!func_143())
	{
		bVar0 = 0x00000001;
	}
	if (iParam0 != 0xFFFFFFFF)
	{
		if (func_128(iParam0))
		{
			if (!bVar0)
			{
				unk_0x7B4DDB71AD8E7B73();
			}
		}
		else if (!bVar0)
		{
			unk_0xA6EF5385F39BAC90(Global_411012[iParam0 /*85*/].f_42);
		}
		func_126(&(Global_411012[iParam0 /*85*/]));
	}
}

void func_126(var uParam0)
{
	uParam0->f_42 = 0x00000000;
	uParam0->f_42 = 0x7FFFFFFF;
	uParam0->f_42.f_1 = 0x00000000;
	uParam0->f_42.f_2 = 0x00000000;
	uParam0->f_42.f_3 = 0xA10AED30;
	uParam0->f_42.f_4 = 0x83B4A55B;
	uParam0->f_42.f_5 = 0x00000000;
	uParam0->f_42.f_6 = 0x492B4A93;
	uParam0->f_42.f_7 = 0xBABFD2A5;
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_D = 0x00000000;
	uParam0->f_2 = 0x00000000;
	func_127(&(uParam0->f_E));
	func_127(&(uParam0->f_E.f_D));
	StringCopy(&(uParam0->f_E.f_1A), "", 32);
	StringCopy(&(uParam0->f_E.f_22), "", 24);
	StringCopy(&(uParam0->f_E.f_28), "", 16);
	StringCopy(&(uParam0->f_E.f_2C), "", 32);
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_42.f_8 = 0x00000000;
	uParam0->f_42.f_9 = 0x00000000;
	uParam0->f_42.f_A = 0x00000000;
	uParam0->f_42.f_B = 0x00000000;
	uParam0->f_42.f_D = 0x00000000;
	uParam0->f_42.f_C = 0x00000000;
	uParam0->f_42.f_E = 0x00000000;
	uParam0->f_42.f_F = 0x00000000;
	uParam0->f_42.f_10 = 0x00000000;
	uParam0->f_42.f_12 = 0x00000000;
}

void func_127(var uParam0)
{
	*uParam0 = 0x00000000;
	uParam0->f_1 = 0x00000000;
	uParam0->f_2 = 0x00000000;
	uParam0->f_3 = 0x00000000;
	uParam0->f_4 = 0x00000000;
	uParam0->f_5 = 0x00000000;
	uParam0->f_6 = 0x00000000;
	uParam0->f_7 = 0x00000000;
	uParam0->f_8 = 0x00000000;
	uParam0->f_9 = 0x00000000;
	uParam0->f_A = 0x00000000;
	uParam0->f_B = 0x00000000;
	uParam0->f_C = 0x00000000;
}

int func_128(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_5 == 0x00000001;
	}
	return 0x00000000;
}

int func_129(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42;
	}
	return 0xFFFFFFFF;
}

int func_130(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2;
	}
	return 0x00000000;
}

int func_131(int iParam0)
{
	if (iParam0 >= 0x00000000 && iParam0 < 0x00000005)
	{
		return Global_411012[iParam0 /*85*/].f_42.f_2 != 0x00000001;
	}
	return 0x00000000;
}

int func_132()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = 0x00000000;
	if (!func_143())
	{
		bVar0 = 0x00000001;
	}
	iVar1 = 0x00000001;
	iVar2 = func_142();
	if (iVar2 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_137()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			if (func_136(Global_411012[iVar2 /*85*/].f_42.f_6, Global_411012[iVar2 /*85*/].f_42.f_4, Global_411012[iVar2 /*85*/].f_42.f_1) == 0x00000001)
			{
				Global_411258 = 0x00000001;
			}
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (Global_411012[iVar2 /*85*/].f_42.f_6 == 0x3FA29128 || Global_411012[iVar2 /*85*/].f_42.f_6 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	iVar3 = func_129(iVar2);
	if (iVar3 != 0x7FFFFFFF)
	{
		if ((bVar0 || iVar1) || unk_0x80C74F9931DCF063(iVar3))
		{
			Global_411012[iVar2 /*85*/].f_42.f_D = 0x00000001;
			Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar2 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			if (bVar0)
			{
				Global_411012[iVar2 /*85*/].f_42.f_8 = 0x00000001;
				Global_411012[iVar2 /*85*/].f_42.f_C = 0x00000001;
			}
			Global_411012[iVar2 /*85*/].f_42.f_12 = 0x00000000;
			if (bVar0 || iVar1)
			{
				func_133(Global_411012[iVar2 /*85*/], iVar2);
			}
			Global_411249 = 0x00000001;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_133(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0x00000000)
	{
		return;
	}
	vVar0.f_2 = 0x7FFFFFFF;
	vVar0.x = 0x110AC69F;
	vVar0.y = unk_0xD803B885F5E47A62();
	vVar0.f_2 = { Param0.f_42 };
	vVar0.f_2.f_21 = iParam19;
	iVar1 = func_135(vVar0.y);
	if ((Global_40001.f_5C10 && !Global_40001.f_5C11) && !Global_40001.f_5C12)
	{
		return;
	}
	if (!iVar1 == 0x00000000)
	{
		func_134();
		unk_0xFB061A86A7AC749F(0x00000001, &vVar0, 0x00000024, iVar1);
	}
}

void func_134()
{
	unk_0x92DCE5C81176D2B4("AM_ARENA_SHP");
}

var func_135(int iParam0)
{
	var uVar0;
	
	if (iParam0 != 0xFFFFFFFF)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0xE62A3AA1 || iParam0 == 0x57DE404E)
	{
		switch (iParam1)
		{
			case 0x73AF3590:
				if (iParam2 >= 0x00002710)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000000;
				}
				break;
			
			case 0xFE249573:
			case 0xEC745CB2:
			case 0x20D60B56:
			case 0x31D3FC9B:
			case 0x50503398:
			case 0xBE60A029:
				if (iParam2 >= 0x000003E8)
				{
					return 0x00000001;
				}
				else
				{
					return 0x00000002;
				}
				break;
			
			case 0x762D6BF6:
				return 0x00000000;
				break;
			
			case 0x666D4B21:
			case 0xC2C5E339:
			case 0xACA75AAE:
			case 0x628502B3:
			case 0xFC8D0020:
			case 0xB77DD8B4:
			case 0xFD389995:
			case 0xEAFF75BD:
			case 0xC4F96E65:
			case 0x2195C3D1:
			case 0x676706D3:
			case 0x381AE70B:
			case 0xB94DDB9B:
			case 0x89AD02CE:
			case 0xBCD304B8:
			case 0xF97DB87A:
			case 0x129A5B6E:
			case 0xD89979EE:
			case 0x4D8C639E:
			case 0xA174F633:
			case 0x176D9D54:
			case 0x016B1CDE:
			case 0xBFCBE6B6:
			case 0x6A22D039:
			case 0x862FB02E:
			case 0x8D682613:
			case 0x4CBAC3AA:
			case 0x29358006:
			case 0x5841CC24:
			case 0x5A26EAEF:
			case 0x2183C4D7:
			case 0xF6C6F8D3:
			case 0xAEC77375:
			case 0x267CBC1B:
			case 0x2DC5587F:
			case 0x8A91E076:
			case 0x2AD8ED30:
			case 0x8B70731D:
			case 0x3530C574:
			case 0xAAF2EA7A:
			case 0x506A6AF5:
			case 0x60988977:
			case 0x74EC47CE:
			case 0x0C92ECEF:
			case 0xFC71898E:
			case 0x67878154:
			case 0xA87819A3:
			case 0x06A679FE:
			case 0x5AEF7C87:
			case 0x39B3A1A7:
			case 0x5E0B0A1C:
			case 0xC84D30CC:
			case 0xB8D124BE:
			case 0xF353DF93:
			case 0xCF63BF45:
			case 0x3E7AA93E:
			case 0x21ECDA63:
			case 0xCCFA5F2D:
			case 0x328CD5AA:
			case 0xFD2A7DE7:
			case 0xEE884170:
			case 0x1B9AFE05:
			case 0x5C66709A:
			case 0xD8630BC3:
			case 0x23C04B23:
			case 0x3EBB7442:
			case 0x8107BB89:
			case 0xB6D37A76:
			case 0x6F225978:
			case 0x0CD9EBA6:
			case 0xCBC91B24:
			case 0xD4E9820B:
			case 0x53E15D9D:
			case 0xA1DC5A42:
			case 0xFE5D3D39:
			case 0x46521174:
			case 0x370A42A5:
			case 0xED97AFC1:
			case 0x23F59C7C:
			case 0xFF3F6FB2:
			case 0xED74CC1D:
			case 0x33E1D8F6:
			case 0xC5ED889C:
			case 0xFFC0D962:
			case 0xB99C11F6:
			case 0x8DACDD38:
			case 0x32537662:
			case 0x7353182D:
			case 0x6E63A5AC:
			case 0x7D1FD84C:
			case 0x7462F9E7:
			case 0xBA16F44B:
			case 0x87DF725B:
			case 0xA2228687:
			case 0xC6B7C57F:
			case 0x43ADDE78:
			case 0x4B6A869C:
			case 0xDA2AD714:
			case 0x29849CDA:
			case 0x1A6CF069:
			case 0x180D054D:
			case 0xCB511DC2:
			case 0xC0925945:
			case 0xAD5032C1:
			case 0xD54402B0:
			case 0x43D5DFD2:
			case 0xDE8FA2AB:
			case 0x49F3549B:
			case 0x4A05F619:
			case 0xE285893D:
			case 0x314FB8B0:
			case 0x9145F938:
			case 0x653BCC2D:
			case 0x87B8E853:
			case 0x3F0A835A:
			case 0x6BEA24A6:
			case 0x1AE83BEC:
			case 0x3126BC47:
			case 0x4ABE30A4:
			case 0xA20EEA82:
			case 0x59E889DD:
			case 0x552534EE:
			case 0x8D9EE291:
			case 0x4B318D68:
			case 0x465B7057:
			case 0x545237BE:
			case 0x0F9590A2:
			case 0x87246378:
			case 0x6374FB50:
			case 0x86DA0F67:
				return 0x00000001;
				break;
			
			case 0x5A58E3BD:
			case 0x45F48C05:
			case 0xCA5E1B40:
			case 0xD86D0371:
			case 0x48090EBA:
			case 0xDB72FD6E:
			case 0xD80064A4:
			case 0x11611C06:
			case 0xB3E76D2C:
			case 0x2A6B291E:
			case 0xE7BA9A2C:
			case 0xD30E80F5:
			case 0x8F9E64E9:
			case 0x7323DAB3:
			case 0x3F79E8B3:
			case 0xF54343EF:
			case 0x7F096F7D:
			case 0x10E398B4:
			case 0x421452FF:
			case 0xCBBC5D1E:
			case 0x040E0F34:
				return 0x00000002;
				break;
			
			default:
				return 0x00000000;
				break;
		}
		switch (iParam1)
		{
			case 0xECF7C43F:
			case 0xE4315BE0:
			case 0x72CBE556:
			case 0x234B8864:
			case 0x7954FD0F:
			case 0x5D7FD908:
			case 0xB703ED29:
			case 0x48B92E52:
			case 0x7A3568F7:
			case 0x235376A5:
			case 0xCDCF2380:
				return 0x00000001;
			
			case 0x69D9B7DA:
				return 0x00000002;
				break;
		}
	}
	else if ((iParam0 == 0xBC5B83BA || iParam0 == 0x372897DD) || iParam0 == 0xA14400BE)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_137()
{
	return Global_1407E9;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = 0x00000000;
	if (!func_143())
	{
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_137()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam1 == 0x3FA29128 || iParam1 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	if (iParam2 == 0x00000000)
	{
		return 0x00000000;
	}
	iVar1 = func_142();
	if (iVar1 == 0xFFFFFFFF)
	{
		if (!func_140(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0x00000000;
		}
	}
	if (iVar1 != 0xFFFFFFFF)
	{
		if (iParam8 != 0x00000000 && func_139(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_411012[iVar1 /*85*/].f_42.f_1 = Var2.f_2;
		Global_411012[iVar1 /*85*/].f_42.f_F = Var2;
		Global_411012[iVar1 /*85*/].f_42.f_10 = Var2.f_1;
		if (bVar0 || unk_0x54B75246B42BE23E(&Var2, iParam4))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0xF2C77E1D:
		case 0xB6FD233F:
		case 0x81855910:
		case 0x531CEF2D:
		case 0x85A48AE6:
		case 0x65679D34:
		case 0x94EB09E5:
		case 0x8D08CFA8:
		case 0x22A9F688:
		case 0x015FAF63:
		case 0x7E349B56:
		case 0xADDF33D9:
		case 0xE1EB447E:
		case 0x71A98DCA:
		case 0x9FA465A5:
		case 0x94BD7097:
		case 0x100EA9C3:
		case 0x0426E041:
		case 0xF9CEEAB6:
		case 0xA6E56D90:
			return 0x00000001;
			break;
	}
	return 0x00000000;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = 0x00000000;
	if (!func_143())
	{
		bVar0 = 0x00000001;
	}
	if (!bVar0)
	{
		if (!unk_0x79B28160739BC9E6(func_137()) || unk_0xDD2EE1F5DA6A6AB0())
		{
			Global_411258 = 0x00000001;
			return 0x00000000;
		}
		if (Global_25908F)
		{
			if (iParam2 == 0x3FA29128 || iParam2 == 0xB2491B6E)
			{
				Global_411259 = 0x00000001;
				return 0x00000000;
			}
		}
	}
	bVar2 = 0x00000000;
	iVar1 = 0x00000000;
	while (iVar1 < 0x00000005)
	{
		if (Global_411012[iVar1 /*85*/].f_42.f_2 == 0x00000000)
		{
			bVar2 = 0x00000001;
		}
		else if (Global_411012[iVar1 /*85*/].f_42.f_5 == 0x00000001)
		{
			return 0x00000000;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0x00000000;
	}
	*iParam0 = 0x00000000;
	if (!bVar0)
	{
		if (unk_0x9D14F555AB486471())
		{
			unk_0x7B4DDB71AD8E7B73();
		}
	}
	if (bVar0 || unk_0xA28E08E034174728(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_141(uVar3, iParam1, 0x83B4A55B, iParam3, iParam2, 0x00000000, 0x00000001, iParam4, uParam5, 0x00000000, bVar0);
		return 0x00000001;
	}
	return 0x00000000;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (Global_411012[iVar0 /*85*/].f_42.f_2 == 0x00000000)
		{
			if (!func_143())
			{
				uParam0 = iVar0 + 900;
			}
			Global_411012[iVar0 /*85*/].f_42.f_2 = 0x00000001;
			Global_411012[iVar0 /*85*/].f_42.f_1 = iParam5;
			Global_411012[iVar0 /*85*/].f_42.f_3 = iParam1;
			Global_411012[iVar0 /*85*/].f_42.f_4 = iParam2;
			Global_411012[iVar0 /*85*/].f_42.f_7 = iParam3;
			Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42 = uParam0;
			Global_411012[iVar0 /*85*/].f_42.f_6 = iParam4;
			Global_411012[iVar0 /*85*/].f_42.f_B = uParam8;
			Global_411012[iVar0 /*85*/].f_42.f_A = iParam7;
			Global_411012[iVar0 /*85*/].f_42.f_D = iParam9;
			Global_411012[iVar0 /*85*/].f_42.f_C = 0x00000000;
			Global_411012[iVar0 /*85*/].f_42.f_E = unk_0xF4CCC8CB6DE7F1AE();
			Global_411012[iVar0 /*85*/].f_42.f_12 = 0x00000000;
			Global_411249 = 0x00000000;
			if (bParam6)
			{
				Global_411012[iVar0 /*85*/].f_42.f_5 = 0x00000001;
			}
			if (iParam1 == 0xBC537E0D && bParam10)
			{
				func_133(Global_411012[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_142()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		if (func_129(iVar0) != 0x7FFFFFFF)
		{
			if (func_128(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_143()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		return unk_0x696DDD27ECE4E47C();
	}
	return 0x00000000;
}

int func_144()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_115() - func_118());
	iVar1 = (Global_40001.f_671B - func_398());
	iVar2 = func_145();
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

int func_145()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115();
	if (iVar0 <= 0x00000000)
	{
		return 0x00000000;
	}
	if (unk_0xECB8E23DD6EEDD19())
	{
		if (unk_0x7A7BDE279347E517(iVar0, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x3A6D64D2A1228113() + unk_0x62F8C2EDB26F57B3(0xFFFFFFFF));
		}
	}
	else if (unk_0x7A7BDE279347E517(iVar0, 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000001))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x98DF7171A5F240EC();
	}
	return iVar1;
}

int func_146(int iParam0)
{
	if ((iParam0 == 0x00000001 || iParam0 == 0x00000002) || iParam0 == 0x0000000A)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

char* func_147()
{
	if (func_148())
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "female_reaction_terrible_var_01";
			
			case 0x00000001:
				return "female_reaction_terrible_var_02";
			
			case 0x00000002:
				return "female_reaction_terrible_var_03";
			
			case 0x00000003:
				return "female_reaction_terrible_var_04";
			
			case 0x00000004:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_terrible_var_01";
			
			case 0x00000001:
				return "reaction_terrible_var_02";
			
			case 0x00000002:
				return "reaction_terrible_var_03";
			
			case 0x00000003:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_148()
{
	return func_57(unk_0xD803B885F5E47A62());
}

char* func_149()
{
	if (func_148())
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000005))
		{
			case 0x00000000:
				return "female_reaction_great_var_01";
			
			case 0x00000001:
				return "female_reaction_great_var_02";
			
			case 0x00000002:
				return "female_reaction_great_var_03";
			
			case 0x00000003:
				return "female_reaction_great_var_04";
			
			case 0x00000004:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_great_var_01";
			
			case 0x00000001:
				return "reaction_great_var_02";
			
			case 0x00000002:
				return "reaction_great_var_03";
			
			case 0x00000003:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_150(int iParam0)
{
	if (func_148())
	{
		if ((func_417(unk_0xD803B885F5E47A62()) || func_380(Local_159.f_12) == 0x00000002) || func_380(Local_159.f_12) == 0x00000003)
		{
			if (iParam0 > 0x00002710)
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
				{
					case 0x00000000:
						return "female_reaction_good_var_01";
					
					case 0x00000001:
						return "female_reaction_good_var_02";
					
					case 0x00000002:
						return "female_reaction_good_var_03";
					
					case 0x00000003:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > 0xFFFFD8F0)
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000007))
				{
					case 0x00000000:
						return "female_reaction_impartial_var_01";
					
					case 0x00000001:
						return "female_reaction_impartial_var_02";
					
					case 0x00000002:
						return "female_reaction_impartial_var_03";
					
					case 0x00000003:
						return "female_reaction_impartial_var_04";
					
					case 0x00000004:
						return "female_reaction_impartial_var_05";
					
					case 0x00000005:
						return "female_reaction_impartial_var_06";
					
					case 0x00000006:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
				{
					case 0x00000000:
						return "female_reaction_bad_var_01";
					
					case 0x00000001:
						return "female_reaction_bad_var_02";
					
					case 0x00000002:
						return "female_reaction_bad_var_03";
					
					case 0x00000003:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 0x000003E8)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "female_reaction_good_var_01";
				
				case 0x00000001:
					return "female_reaction_good_var_02";
				
				case 0x00000002:
					return "female_reaction_good_var_03";
				
				case 0x00000003:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > 0xFFFFFC18)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000007))
			{
				case 0x00000000:
					return "female_reaction_impartial_var_01";
				
				case 0x00000001:
					return "female_reaction_impartial_var_02";
				
				case 0x00000002:
					return "female_reaction_impartial_var_03";
				
				case 0x00000003:
					return "female_reaction_impartial_var_04";
				
				case 0x00000004:
					return "female_reaction_impartial_var_05";
				
				case 0x00000005:
					return "female_reaction_impartial_var_06";
				
				case 0x00000006:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "female_reaction_bad_var_01";
				
				case 0x00000001:
					return "female_reaction_bad_var_02";
				
				case 0x00000002:
					return "female_reaction_bad_var_03";
				
				case 0x00000003:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_417(unk_0xD803B885F5E47A62()) || func_380(Local_159.f_12) == 0x00000002) || func_380(Local_159.f_12) == 0x00000003)
	{
		if (iParam0 > 0x00002710)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "reaction_good_var_01";
				
				case 0x00000001:
					return "reaction_good_var_02";
				
				case 0x00000002:
					return "reaction_good_var_03";
				
				case 0x00000003:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > 0xFFFFD8F0)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000008))
			{
				case 0x00000000:
					return "reaction_impartial_var_01";
				
				case 0x00000001:
					return "reaction_impartial_var_02";
				
				case 0x00000002:
					return "reaction_impartial_var_03";
				
				case 0x00000003:
					return "reaction_impartial_var_04";
				
				case 0x00000004:
					return "reaction_impartial_var_05";
				
				case 0x00000005:
					return "reaction_impartial_var_06";
				
				case 0x00000006:
					return "reaction_impartial_var_07";
				
				case 0x00000007:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
			{
				case 0x00000000:
					return "reaction_bad_var_01";
				
				case 0x00000001:
					return "reaction_bad_var_02";
				
				case 0x00000002:
					return "reaction_bad_var_03";
				
				case 0x00000003:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 0x000003E8)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_good_var_01";
			
			case 0x00000001:
				return "reaction_good_var_02";
			
			case 0x00000002:
				return "reaction_good_var_03";
			
			case 0x00000003:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > 0xFFFFFC18)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000008))
		{
			case 0x00000000:
				return "reaction_impartial_var_01";
			
			case 0x00000001:
				return "reaction_impartial_var_02";
			
			case 0x00000002:
				return "reaction_impartial_var_03";
			
			case 0x00000003:
				return "reaction_impartial_var_04";
			
			case 0x00000004:
				return "reaction_impartial_var_05";
			
			case 0x00000005:
				return "reaction_impartial_var_06";
			
			case 0x00000006:
				return "reaction_impartial_var_07";
			
			case 0x00000007:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000004))
		{
			case 0x00000000:
				return "reaction_bad_var_01";
			
			case 0x00000001:
				return "reaction_bad_var_02";
			
			case 0x00000002:
				return "reaction_bad_var_03";
			
			case 0x00000003:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_151(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_154(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_153(0x00000003, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_152(0x00000003, iVar0);
		Global_150976.f_ACC[iVar0] = uParam0;
		StringCopy(&(Global_150976.f_ACC.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_ACC.f_B7[iVar0] = iParam3;
		Global_150976.f_ACC.f_AC[iVar0] = iParam2;
		Global_150976.f_ACC.f_CD[iVar0] = iParam4;
		Global_150976.f_ACC.f_D8[iVar0] = iParam5;
		StringCopy(&(Global_150976.f_ACC.f_103[iVar0 /*16*/]), sParam6, 64);
		Global_150976.f_ACC.f_1A4[iVar0] = iParam7;
		Global_150976.f_ACC.f_1C5[iVar0] = iParam8;
		Global_150976.f_ACC.f_1AF[iVar0] = iParam9;
		Global_150976.f_ACC.f_1BA[iVar0] = iParam10;
		Global_150976.f_ACC.f_1D0[iVar0] = iParam11;
		Global_150976.f_ACC.f_1DB[iVar0] = iParam12;
		Global_150976.f_ACC.f_1E6[iVar0] = iParam13;
		Global_150976.f_ACC.f_1F1[iVar0] = iParam14;
	}
}

void func_152(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_150976.f_1895[iParam0]), iParam1);
}

bool func_153(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_150976.f_1895[iParam0], iParam1);
}

int func_154(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 0x00000001;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_155(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_143() && *uParam1 == 0x00000001)
	{
		bParam3 = 0x00000000;
	}
	if (!bParam3 || func_157(iParam0))
	{
		return func_156(iParam0, 0x00000002, uParam1, iParam2, 0xFFFFFFFF, 0xFFFFFFFF);
	}
	else
	{
		*uParam1 = 0x00000003;
	}
	return 0x00000001;
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0x00000000)
	{
	}
	else if (func_146(iParam1))
	{
	}
	else
	{
		iVar0 = func_398();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0x00000000 && (!func_143() || *uParam2 != 0x00000001))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_124(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_19E12C - func_398());
			if (iParam1 == 0x00000001)
			{
				Global_258BC4 = 0x00000001;
			}
			else if (iVar2 >= Global_40001.f_6724)
			{
				Global_258BC5 = 0x00000001;
			}
			func_123(iVar2, 0x00000000);
			func_121();
			func_120();
			Global_19E12C = (Global_19E12C - iVar2);
			Var3 = func_106(iParam1);
			Var3.f_1 = func_105(iParam1, iParam3, iParam4);
			if (func_104(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0x00000000;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x62F8C2EDB26F57B3(0xFFFFFFFF) + unk_0x3A6D64D2A1228113());
			Var3.f_6 = Global_19E12C;
			Var3.f_7 = iParam5;
			unk_0xB1C8602C4408B407(&Var3);
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_157(int iParam0)
{
	int iVar0;
	
	if (func_333())
	{
		return 0x00000000;
	}
	iVar0 = func_398();
	if (iVar0 < iParam0)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_158(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF);
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0xFFFFFFFF;
	iVar1 = 0x00000000;
	while (iVar1 <= 0x00000009)
	{
		if (iVar0 == 0xFFFFFFFF)
		{
			if (func_153(0x00000007, iVar1) == 0x00000000)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 0xFFFFFFFF)
	{
		Global_150976.f_1 = 0x00000001;
		func_152(0x00000007, iVar0);
		Global_150976.f_11D2[iVar0] = iParam0;
		StringCopy(&(Global_150976.f_11D2.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_150976.f_11D2.f_AC[iVar0] = iParam2;
		Global_150976.f_11D2.f_D8[iVar0] = iParam3;
		Global_150976.f_11D2.f_B7[iVar0] = iParam4;
		Global_150976.f_11D2.f_C2[iVar0] = iParam5;
		Global_150976.f_11D2.f_F9[iVar0] = iParam6;
		Global_150976.f_11D2.f_104[iVar0] = iParam7;
		Global_150976.f_11D2.f_CD[iVar0] = iParam8;
		Global_150976.f_11D2.f_13A[iVar0] = iParam9;
		Global_150976.f_11D2.f_145[iVar0] = iParam10;
		Global_150976.f_11D2.f_165[iVar0] = iParam11;
		Global_150976.f_11D2.f_EE[iVar0] = iParam12;
		Global_150976.f_11D2.f_10F[iVar0] = iParam13;
		Global_150976.f_11D2.f_170[iVar0] = iParam14;
		Global_150976.f_11D2.f_17B[iVar0] = iParam15;
		Global_150976.f_11D2.f_186[iVar0] = iParam16;
		Global_150976.f_11D2.f_E3[iVar0] = iParam17;
	}
}

int func_160(int iParam0)
{
	if ((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 0x00000002 || Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
	{
		switch (iParam0)
		{
			case 0x00001388:
			case 0x00002710:
			case 0x00003A98:
			case 0x00004E20:
			case 0x000061A8:
			case 0x00007530:
			case 0x000088B8:
			case 0x00009C40:
			case 0x0000AFC8:
			case 0x0000C350:
				return 0x00000001;
			}
		
		default:
	}
	return 0x00000000;
}

void func_161(int iParam0)
{
	Local_159.f_31D = iParam0;
}

void func_162()
{
	char* sVar0;
	int iVar1;
	
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000D1, 0x00000001);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D1);
	if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
	{
		if ((unk_0x9A01369A10646AFE(0x00000002, 0x000000D1) && !unk_0x7FEE810EE9E768EB(0x00000002, 0x000000D2)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_159.f_14), 0x00000003);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0x0D3BE1DE0262A012(sVar0, 0x00000000);
		if (func_296(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0x27117E2CDD4D67C3(sVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000004))
			{
				func_295(0x00000000, 0x00000000);
				func_293(0x00000001, sVar0, sVar0);
				func_292("TCP_HANDS");
				func_180(0x00000001, 0x00000002, 0x00000002, 0x00000002, 0x00000001);
				func_179(0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000);
				iVar1 = 0x00000000;
				func_175(iVar1, "TCP_HAND1", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_175(iVar1, "TCP_10", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_175(iVar1, "TCP_9", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_175(iVar1, "TCP_8", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				iVar1 = 0x00000001;
				func_175(iVar1, "TCP_HAND2", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_175(iVar1, "TCP_5", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000039, 0x00000000);
				func_175(iVar1, "TCP_5", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003A, 0x00000000);
				func_175(iVar1, "TCP_5", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000038, 0x00000000);
				iVar1 = 0x00000002;
				func_175(iVar1, "TCP_HAND3", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_175(iVar1, "TCP_2", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000039, 0x00000000);
				func_175(iVar1, "TCP_3", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_175(iVar1, "TCP_4", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000039, 0x00000000);
				iVar1 = 0x00000003;
				func_175(iVar1, "TCP_HAND4", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_175(iVar1, "TCP_A", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_175(iVar1, "TCP_Q", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_175(iVar1, "TCP_9", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				iVar1 = 0x00000004;
				func_175(iVar1, "TCP_HAND5", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_175(iVar1, "TCP_K", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000039, 0x00000000);
				func_175(iVar1, "TCP_K", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_175(iVar1, "TCP_7", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000038, 0x00000000);
				iVar1 = 0x00000005;
				func_175(iVar1, "TCP_HAND6", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
				func_175(iVar1, "TCP_A", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000038, 0x00000000);
				func_175(iVar1, "TCP_7", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x00000039, 0x00000000);
				func_175(iVar1, "TCP_3", 0x00000001, 0x00000001, 0x00000000, 0x00000000);
				func_163(0x0000003B, 0x00000000);
				func_291(0xFFFFFFFF, 0x00000001, 0x00000001);
				unk_0x5D96D8530B3D0904(&(Local_159.f_14), 0x00000004);
			}
			func_261(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		if (unk_0x9A01369A10646AFE(0x00000002, 0x000000CA))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
			func_258(0x00000001, 0xFFFFFFFF);
			unk_0xF5A41F3D3B38EFE3(sVar0);
			iLocal_172 = 0x00000001;
			Local_159.f_14 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Local_159.f_14), 0x00000002);
		}
	}
}

void func_163(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_574E.f_1468 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F >= 0x00000004)
	{
		return;
	}
	if (Global_574E.f_1670 != 0x00000001)
	{
		return;
	}
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		return;
	}
	Global_574E.f_1151[Global_574E.f_1468] = iParam0;
	Global_574E.f_1468++;
	Global_574E.f_84C[Global_574E.f_166E /*5*/][Global_574E.f_166F] = 0x00000004;
	Global_574E.f_166F++;
	if (Global_574E.f_166F >= Global_574E.f_166D)
	{
		fVar0 = func_172();
		if (Global_574E.f_13D3[Global_574E.f_1463] && Global_574E.f_166F == Global_574E.f_166D)
		{
			func_165(0x0000001A, 0x00000001, 0x00000000, &fVar1, &fVar2, 0x00000000);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)])
		{
			Global_574E.f_13CC[(Global_574E.f_1463 - 0x00000001)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_574E.f_166F >= Global_574E.f_166D)
		{
			fVar3 = func_164();
			if (fVar3 > Global_574E.f_1671[Global_574E.f_1462])
			{
				Global_574E.f_1671[Global_574E.f_1462] = fVar3;
			}
		}
	}
}

float func_164()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar0] == 0x00000004)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar1)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)] != 0x00000000)
		{
			if (func_165(Global_574E.f_1151[((Global_574E.f_1468 - iVar1) + iVar0)], 0x00000001, 0x00000000, &fVar3, &fVar4, 0x00000000))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > unk_0x9153358B38685E6E(0.35f, 0x00000000))
	{
		return fVar2;
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

int func_165(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_171(iParam0), 64);
	StringCopy(&cVar1, func_168(iParam0, bParam1), 64);
	if (unk_0x12AB0310C2281427(&cVar1) != 0x00000000)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0xE5AC5CA7914F5BAE(&iVar2, &iVar3);
			fVar5 = unk_0x33D480CCE15C991A(0x00000000);
			if (func_167())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_167())
			{
				fVar4 = 1f;
			}
			if (unk_0x8A22C4C08282BF26(joaat("director_mode")) > 0x00000000)
			{
				unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			unk_0x8A462DAA7D1D9008(&iVar2, &iVar3);
		}
		vVar7 = { unk_0xDE43A059FBFFF38A(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_166(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_166(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 0x0000001E)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 0x0000001D && unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0x0D71AFA59EF5104F() && iParam0 != 0x0000001E)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 0x0000001D)
		{
			if (*fParam3 > Global_574D)
			{
				*fParam4 = (*fParam4 * (Global_574D / *fParam3));
				*fParam3 = Global_574D;
			}
		}
		return 0x00000001;
	}
	return 0x00000000;
}

float func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000021:
		case 0x00000004:
		case 0x0000000B:
		case 0x0000001F:
		case 0x00000014:
		case 0x0000000F:
		case 0x0000000A:
		case 0x0000000C:
		case 0x0000000D:
		case 0x00000020:
		case 0x00000009:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x0000000E:
		case 0x00000012:
		case 0x00000013:
		case 0x00000011:
		case 0x0000001C:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x0000003C:
		case 0x0000003E:
			return 0.5f;
			break;
		
		case 0x0000003D:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_167()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0xE5AC5CA7914F5BAE(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

var func_168(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1B75[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var2 = { func_170(unk_0xD803B885F5E47A62()) };
			if (unk_0x205FB5BBF81D8900(&Var2, &uVar1))
			{
				return func_169(&uVar1);
			}
		}
		else
		{
			return func_169(&(Global_574E.f_1B75[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 0x00000003:
			sVar0[0x00000000] = "MP_hostCrown";
			sVar0[0x00000001] = "MP_hostCrown";
			break;
		
		case 0x00000015:
			sVar0[0x00000000] = "MP_SpecItem_Coke";
			sVar0[0x00000001] = "MP_SpecItem_Coke";
			break;
		
		case 0x00000016:
			sVar0[0x00000000] = "MP_SpecItem_Heroin";
			sVar0[0x00000001] = "MP_SpecItem_Heroin";
			break;
		
		case 0x00000017:
			sVar0[0x00000000] = "MP_SpecItem_Weed";
			sVar0[0x00000001] = "MP_SpecItem_Weed";
			break;
		
		case 0x00000018:
			sVar0[0x00000000] = "MP_SpecItem_Meth";
			sVar0[0x00000001] = "MP_SpecItem_Meth";
			break;
		
		case 0x00000019:
			sVar0[0x00000000] = "MP_SpecItem_Cash";
			sVar0[0x00000001] = "MP_SpecItem_Cash";
			break;
		
		case 0x00000001:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000002:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000004:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000006:
			sVar0[0x00000000] = "Shop_Box_CrossB";
			sVar0[0x00000001] = "Shop_Box_Cross";
			break;
		
		case 0x00000007:
			sVar0[0x00000000] = "Shop_Box_BlankB";
			sVar0[0x00000001] = "Shop_Box_Blank";
			break;
		
		case 0x00000005:
			sVar0[0x00000000] = "Shop_Box_TickB";
			sVar0[0x00000001] = "Shop_Box_Tick";
			break;
		
		case 0x00000008:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000009:
			sVar0[0x00000000] = "Shop_Clothing_Icon_B";
			sVar0[0x00000001] = "Shop_Clothing_Icon_A";
			break;
		
		case 0x0000000A:
			sVar0[0x00000000] = "Shop_GunClub_Icon_B";
			sVar0[0x00000001] = "Shop_GunClub_Icon_A";
			break;
		
		case 0x00000011:
			sVar0[0x00000000] = "Shop_Ammo_Icon_B";
			sVar0[0x00000001] = "Shop_Ammo_Icon_A";
			break;
		
		case 0x00000012:
			sVar0[0x00000000] = "Shop_Armour_Icon_B";
			sVar0[0x00000001] = "Shop_Armour_Icon_A";
			break;
		
		case 0x00000013:
			sVar0[0x00000000] = "Shop_Health_Icon_B";
			sVar0[0x00000001] = "Shop_Health_Icon_A";
			break;
		
		case 0x00000014:
			sVar0[0x00000000] = "Shop_MakeUp_Icon_B";
			sVar0[0x00000001] = "Shop_MakeUp_Icon_A";
			break;
		
		case 0x0000000B:
			sVar0[0x00000000] = "Shop_Tattoos_Icon_B";
			sVar0[0x00000001] = "Shop_Tattoos_Icon_A";
			break;
		
		case 0x0000000C:
			sVar0[0x00000000] = "Shop_Garage_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Icon_A";
			break;
		
		case 0x0000000D:
			sVar0[0x00000000] = "Shop_Garage_Bike_Icon_B";
			sVar0[0x00000001] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 0x0000000E:
			sVar0[0x00000000] = "Shop_Barber_Icon_B";
			sVar0[0x00000001] = "Shop_Barber_Icon_A";
			break;
		
		case 0x0000000F:
			sVar0[0x00000000] = "shop_Lock";
			sVar0[0x00000001] = "shop_Lock";
			break;
		
		case 0x00000010:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x0000001A:
			sVar0[0x00000000] = "arrowleft";
			sVar0[0x00000001] = "arrowleft";
			break;
		
		case 0x0000001B:
			sVar0[0x00000000] = "arrowright";
			sVar0[0x00000001] = "arrowright";
			break;
		
		case 0x0000001C:
			sVar0[0x00000000] = "MP_AlertTriangle";
			sVar0[0x00000001] = "MP_AlertTriangle";
			break;
		
		case 0x0000001D:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x0000001F:
			sVar0[0x00000000] = "Shop_Michael_Icon_B";
			sVar0[0x00000001] = "Shop_Michael_Icon_A";
			break;
		
		case 0x00000020:
			sVar0[0x00000000] = "Shop_Franklin_Icon_B";
			sVar0[0x00000001] = "Shop_Franklin_Icon_A";
			break;
		
		case 0x00000021:
			sVar0[0x00000000] = "Shop_Trevor_Icon_B";
			sVar0[0x00000001] = "Shop_Trevor_Icon_A";
			break;
		
		case 0x00000033:
			sVar0[0x00000000] = "SaleIcon";
			sVar0[0x00000001] = "SaleIcon";
			break;
		
		case 0x00000034:
			sVar0[0x00000000] = "Shop_Tick_Icon";
			sVar0[0x00000001] = "Shop_Tick_Icon";
			break;
		
		case 0x00000036:
			sVar0[0x00000000] = "shop_NEW_Star";
			sVar0[0x00000001] = "shop_NEW_Star";
			break;
		
		case 0x00000037:
			sVar0[0x00000000] = "Shop_Lock_Arena";
			sVar0[0x00000001] = "Shop_Lock_Arena";
			break;
		
		case 0x00000038:
			sVar0[0x00000000] = "Card_Suit_Clubs";
			sVar0[0x00000001] = "Card_Suit_Clubs";
			break;
		
		case 0x00000039:
			sVar0[0x00000000] = "Card_Suit_Hearts";
			sVar0[0x00000001] = "Card_Suit_Hearts";
			break;
		
		case 0x0000003A:
			sVar0[0x00000000] = "Card_Suit_Spades";
			sVar0[0x00000001] = "Card_Suit_Spades";
			break;
		
		case 0x0000003B:
			sVar0[0x00000000] = "Card_Suit_Diamonds";
			sVar0[0x00000001] = "Card_Suit_Diamonds";
			break;
		
		case 0x0000003C:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003E:
			sVar0[0x00000000] = "Shop_Art_Icon_B";
			sVar0[0x00000001] = "Shop_Art_Icon_A";
			break;
		
		case 0x0000003D:
			sVar0[0x00000000] = "Shop_Chips_A";
			sVar0[0x00000001] = "Shop_Chips_B";
			break;
		
		case 0x00000000:
			sVar0[0x00000000] = "";
			sVar0[0x00000001] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0x00000000];
	}
	return sVar0[0x00000001];
}

var func_169(var uParam0)
{
	return uParam0;
}

struct<13> func_170(int iParam0)
{
	struct<13> Var0;
	
	unk_0x379CDB376207BF68(iParam0, &Var0, 0x0000000D);
	return Var0;
}

char* func_171(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1784[iParam0 /*16*/])))
	{
		if (unk_0x12AB0310C2281427(&(Global_574E.f_1784[iParam0 /*16*/])) == 0xA753C1F1)
		{
			Var1 = { func_170(unk_0xD803B885F5E47A62()) };
			unk_0x205FB5BBF81D8900(&Var1, &uVar0);
			return func_169(&uVar0);
		}
		else
		{
			return func_169(&(Global_574E.f_1784[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 0x00000033)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_172()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			iVar3++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			iVar4++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000004)
		{
			iVar5++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			iVar6++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_173(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, iVar6 > 0x00000000, 0x00000000);
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[Global_574E.f_166E /*6*/]));
	}
	iVar7 = 0x00000000;
	while (iVar7 < Global_574E.f_166F)
	{
		if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000001)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000008)
		{
			iVar8++;
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_574E.f_49[(Global_574E.f_166E + iVar8) /*6*/]));
			}
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000002)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[((Global_574E.f_1466 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000003)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x21994591120B91F0(Global_574E.f_104F[((Global_574E.f_1467 - iVar4) + iVar10)], Global_574E.f_10D0[((Global_574E.f_1467 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000005)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000006)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0x6B012227B3921E18(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000007)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_574E.f_84C[Global_574E.f_166E /*5*/][iVar7] == 0x00000009)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
			{
				unk_0xD06AC7C87A34A6AD(&(Global_258E24[((Global_574E.f_1465 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_49[Global_574E.f_166E /*6*/])) != 0x00000000)
	{
		fVar0 = unk_0x79E367314AFBB5CA(0x00000001);
	}
	iVar7 = 0x00000000;
	while (iVar7 < iVar5)
	{
		if (Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)] != 0x00000000)
		{
			func_165(Global_574E.f_1151[((Global_574E.f_1468 - iVar5) + iVar7)], 0x00000001, 0x00000000, &fVar1, &fVar2, 0x00000000);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_173(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_174(Global_574E.f_177B[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 0x00000014 && iVar1 < 0x00000014) && iVar2 < 0x00000014)
			{
				if (bParam0 == 0x00000000)
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 0x000000E6 && iVar1 > 0x000000E6) && iVar2 > 0x000000E6)
			{
				if (bParam0)
				{
					iVar0 = 0x00000000;
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
				}
			}
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xA402F6C87C08815C(0x0000000E, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000000C, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
			}
		}
		else if (bParam0)
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
		else
		{
			unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x7178F32F6742C936(0x00000000, 0x00000000, 0x00000000, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	else
	{
		unk_0x7178F32F6742C936(0x0000009B, 0x0000009B, 0x0000009B, 0x000000FF);
	}
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0xEEF67251E263A87F(0x00000001);
	if (bParam5)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000004);
	}
	else if (bParam6)
	{
		unk_0xD3539A877EC25E86(0f, 0.425f);
		unk_0x7BBAC160090910C3(0x00000006);
	}
	else
	{
		unk_0x7BBAC160090910C3(0x00000000);
	}
	unk_0xF1F881BAAAFB43B1(0f, 1f);
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_174(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0x00000008;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000008;
			break;
		
		case 0x00000001:
			*uParam1 = 0x00000025;
			*uParam2 = 0x00000025;
			*uParam3 = 0x00000027;
			break;
		
		case 0x00000016:
			*uParam1 = 0x0000008C;
			*uParam2 = 0x00000092;
			*uParam3 = 0x0000009A;
			break;
		
		case 0x00000017:
			*uParam1 = 0x0000005B;
			*uParam2 = 0x0000005D;
			*uParam3 = 0x0000005E;
			break;
		
		case 0x00000006:
			*uParam1 = 0x00000051;
			*uParam2 = 0x00000054;
			*uParam3 = 0x00000059;
			break;
		
		case 0x0000006F:
			*uParam1 = 0x000000F0;
			*uParam2 = 0x000000F0;
			*uParam3 = 0x000000F0;
			break;
		
		case 0x0000001C:
			*uParam1 = 0x00000096;
			*uParam2 = 0x00000008;
			*uParam3 = 0x00000000;
			break;
		
		case 0x00000022:
			*uParam1 = 0x00000026;
			*uParam2 = 0x00000003;
			*uParam3 = 0x00000006;
			break;
		
		case 0x00000058:
			*uParam1 = 0x000000F5;
			*uParam2 = 0x00000089;
			*uParam3 = 0x0000000F;
			break;
		
		case 0x0000002D:
			*uParam1 = 0x0000004A;
			*uParam2 = 0x00000016;
			*uParam3 = 0x00000007;
			break;
		
		case 0x00000038:
			*uParam1 = 0x0000002D;
			*uParam2 = 0x0000003A;
			*uParam3 = 0x00000035;
			break;
		
		case 0x0000003A:
			*uParam1 = 0x00000047;
			*uParam2 = 0x00000078;
			*uParam3 = 0x0000003C;
			break;
		
		case 0x00000036:
			*uParam1 = 0x0000004D;
			*uParam2 = 0x00000062;
			*uParam3 = 0x00000068;
			break;
		
		case 0x00000049:
			*uParam1 = 0x0000000E;
			*uParam2 = 0x00000031;
			*uParam3 = 0x0000006D;
			break;
		
		case 0x00000044:
			*uParam1 = 0x00000016;
			*uParam2 = 0x00000022;
			*uParam3 = 0x00000048;
			break;
		
		case 0x0000008C:
			*uParam1 = 0x00000000;
			*uParam2 = 0x000000AE;
			*uParam3 = 0x000000EF;
			break;
		
		case 0x00000083:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000B7;
			*uParam3 = 0x00000000;
			break;
		
		case 0x0000005A:
			*uParam1 = 0x0000008E;
			*uParam2 = 0x0000008C;
			*uParam3 = 0x00000046;
			break;
		
		case 0x00000061:
			*uParam1 = 0x0000009C;
			*uParam2 = 0x0000008D;
			*uParam3 = 0x00000071;
			break;
		
		case 0x00000059:
			*uParam1 = 0x00000091;
			*uParam2 = 0x00000073;
			*uParam3 = 0x00000047;
			break;
		
		case 0x00000069:
			*uParam1 = 0x00000062;
			*uParam2 = 0x00000044;
			*uParam3 = 0x00000028;
			break;
		
		case 0x00000064:
			*uParam1 = 0x0000007C;
			*uParam2 = 0x0000001B;
			*uParam3 = 0x00000044;
			break;
		
		case 0x00000063:
			*uParam1 = 0x00000072;
			*uParam2 = 0x0000002A;
			*uParam3 = 0x0000003F;
			break;
		
		case 0x00000088:
			*uParam1 = 0x000000F6;
			*uParam2 = 0x00000097;
			*uParam3 = 0x00000099;
			break;
		
		case 0x00000031:
			*uParam1 = 0x00000020;
			*uParam2 = 0x00000020;
			*uParam3 = 0x0000002C;
			break;
		
		case 0x00000092:
			*uParam1 = 0x0000001A;
			*uParam2 = 0x00000001;
			*uParam3 = 0x00000017;
			break;
		
		default:
			*uParam1 = 0x000000FF;
			*uParam2 = 0x000000FF;
			*uParam3 = 0x000000FF;
			break;
	}
}

void func_175(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_574E.f_1462 > iParam0)
	{
		return;
	}
	if (Global_574E.f_1462 >= 0x00000080)
	{
		return;
	}
	if (Global_574E.f_1464 >= 0x00000100)
	{
		return;
	}
	if (Global_574E.f_166F < Global_574E.f_166D)
	{
		return;
	}
	if (Global_574E.f_1462 != iParam0)
	{
		Global_574E.f_1462 = iParam0;
		Global_574E.f_1463 = 0x00000000;
	}
	iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
	if (iVar0 != 0x00000001)
	{
		while (Global_574E.f_1463 < 0x00000004 && iVar0 != 0x00000001)
		{
			Global_574E.f_1463++;
			iVar0 = Global_574E.f_13C0[Global_574E.f_1463];
		}
		if (iVar0 != 0x00000001)
		{
			return;
		}
	}
	StringCopy(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]), sParam1, 24);
	if (!unk_0xEA6BC48857E0AC4C(sParam1) && !unk_0xEF07223F00EBE9C9(sParam1))
	{
	}
	Global_574E.f_64A[Global_574E.f_1464] = bParam3;
	Global_574E.f_74B[Global_574E.f_1464] = iParam4;
	Global_574E.f_1464++;
	if (!bParam3)
	{
		func_178(Global_574E.f_1462, 0x00000001);
	}
	else
	{
		func_178(Global_574E.f_1462, 0x00000000);
	}
	if (iParam2 == 0x00000000)
	{
		fVar1 = func_177(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
		if (Global_574E.f_13D3[Global_574E.f_1463])
		{
			func_165(0x0000001A, 0x00000001, 0x00000000, &fVar2, &uVar3, 0x00000000);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_574E.f_13CC[Global_574E.f_1463])
		{
			Global_574E.f_13CC[Global_574E.f_1463] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0x00000000)
		{
			fVar4 = func_176(&(Global_574E.f_49[Global_574E.f_1464 /*6*/]));
			if (fVar4 > Global_574E.f_1671[iParam0])
			{
				Global_574E.f_1671[iParam0] = fVar4;
			}
		}
	}
	unk_0x5D96D8530B3D0904(&(Global_574E.f_13E1[iParam0]), Global_574E.f_1463);
	Global_574E.f_1463++;
	Global_574E.f_1670 = 0x00000001;
	Global_574E.f_166E = (Global_574E.f_1464 - 0x00000001);
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = iParam2;
}

float func_176(char* sParam0)
{
	if (!unk_0xEF07223F00EBE9C9(sParam0))
	{
	}
	return unk_0x9153358B38685E6E(0.35f, 0x00000000);
}

float func_177(char* sParam0)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_173(0x00000000, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_178(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_574E.f_177F[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13C0[0x00000000] = iParam0;
	Global_574E.f_13C0[0x00000001] = iParam1;
	Global_574E.f_13C0[0x00000002] = iParam2;
	Global_574E.f_13C0[0x00000003] = iParam3;
	Global_574E.f_13C0[0x00000004] = iParam4;
	Global_574E.f_146A = 0x00000000;
	if (iParam0 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam1 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam2 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam3 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
	if (iParam4 != 0x00000000)
	{
		Global_574E.f_146A++;
	}
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13DB[0x00000000] = iParam0;
	Global_574E.f_13DB[0x00000001] = iParam1;
	Global_574E.f_13DB[0x00000002] = iParam2;
	Global_574E.f_13DB[0x00000003] = iParam3;
	Global_574E.f_13DB[0x00000004] = iParam4;
}

void func_181()
{
	char* sVar0;
	
	if (unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000002))
	{
		unk_0x0674E58A79778E99(&(Local_159.f_14), 0x00000002);
	}
	unk_0x38C3A68D7861DCFD(0x00000002, 0x000000D2, 0x00000001);
	unk_0x558EC149EB2BC0A2(0x00000002, 0x000000D2);
	if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000))
	{
		if ((unk_0x9A01369A10646AFE(0x00000002, 0x000000D2) && !unk_0x7FEE810EE9E768EB(0x00000002, 0x000000D1)) && !unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 0x00000001);
			unk_0x5D96D8530B3D0904(&(Local_159.f_14), 0x00000000);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		unk_0x0D3BE1DE0262A012(sVar0, 0x00000000);
		if (func_296(0x00000000, 0xFFFFFFFF, 0x00000000) && unk_0x27117E2CDD4D67C3(sVar0))
		{
			if (!unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000001))
			{
				func_295(0x00000000, 0x00000000);
				func_293(0x00000001, sVar0, sVar0);
				func_292("TCP_RULES");
				func_185(0x00000001, iLocal_172, 0x00000006);
				func_184(0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000001);
				func_291(0xFFFFFFFF, 0x00000001, 0x00000001);
				func_290(func_183(iLocal_172), 0x00000000, 0x00000000);
				func_289(func_182(iLocal_172));
				unk_0x5D96D8530B3D0904(&(Local_159.f_14), 0x00000001);
			}
			func_261(0x00000001, 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000001, 0xBF800000, 0x00000000, 0x00000000, 0xFFFFFFFF);
		}
		if (unk_0x9A01369A10646AFE(0x00000002, 0x000000CA))
		{
			unk_0x4D7F4CC43D4D0DE3(0xFFFFFFFF, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 0x00000001);
			func_258(0x00000001, 0xFFFFFFFF);
			unk_0xF5A41F3D3B38EFE3(sVar0);
			iLocal_172 = 0x00000001;
			Local_159.f_14 = 0x00000000;
			unk_0x5D96D8530B3D0904(&(Local_159.f_14), 0x00000002);
		}
		else if (unk_0x9A01369A10646AFE(0x00000002, 0x000000BE))
		{
			iLocal_172++;
			if (iLocal_172 > 0x00000006)
			{
				iLocal_172 = 0x00000001;
			}
			unk_0x0674E58A79778E99(&(Local_159.f_14), 0x00000001);
		}
		else if (unk_0x9A01369A10646AFE(0x00000002, 0x000000BD))
		{
			iLocal_172 = (iLocal_172 - 0x00000001);
			if (iLocal_172 < 0x00000001)
			{
				iLocal_172 = 0x00000006;
			}
			unk_0x0674E58A79778E99(&(Local_159.f_14), 0x00000001);
		}
	}
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "TCP_RULE_1";
		
		case 0x00000002:
			return "TCP_RULE_2";
		
		case 0x00000003:
			return "TCP_RULE_3";
		
		case 0x00000004:
			return "TCP_RULE_4";
		
		case 0x00000005:
			return "TCP_RULE_5";
		
		case 0x00000006:
			if ((func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
			{
				return "TCP_RULE_6b";
			}
			else
			{
				return "TCP_RULE_6a";
			}
			break;
	}
	return "";
}

char* func_183(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000001:
			return "TCP_RULE_1T";
		
		case 0x00000002:
			return "TCP_RULE_2T";
		
		case 0x00000003:
			return "TCP_RULE_3T";
		
		case 0x00000004:
			return "TCP_RULE_4T";
		
		case 0x00000005:
			return "TCP_RULE_5T";
		
		case 0x00000006:
			if ((func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
			{
				return "TCP_RULE_6Tb";
			}
			else
			{
				return "TCP_RULE_6Ta";
			}
			break;
	}
	return "";
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_574E.f_13D3[0x00000000] = iParam0;
	Global_574E.f_13D3[0x00000001] = iParam1;
	Global_574E.f_13D3[0x00000002] = iParam2;
	Global_574E.f_13D3[0x00000003] = iParam3;
	Global_574E.f_13D3[0x00000004] = iParam4;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	Global_574E.f_1667 = iParam0;
	Global_574E.f_1668 = iParam1;
	Global_574E.f_1669 = iParam2;
}

void func_186(int iParam0)
{
	Global_150976.f_461 = iParam0;
}

void func_187(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 0x00000001 || unk_0xB8E3620B82AD47D7(0x00000002))
	{
		*uParam2 = 0x00000000;
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000000);
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
		}
		func_193(uParam2);
	}
	if (Global_141384 < 0x00000002)
	{
		func_192(0x00000001);
	}
	if (*uParam2 == 0x00000000)
	{
		if (!unk_0x83D8570832F172A7(*uParam0))
		{
			*uParam0 = unk_0xB01F55A0FD1CFD49("instructional_buttons");
		}
		if (unk_0x83D8570832F172A7(*uParam0))
		{
			unk_0x7526D52FFFAB1652(*uParam0, "CLEAR_ALL");
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar0 = 0x00000000;
			iVar0 = 0x00000000;
			while (iVar0 < uParam2->f_2B5)
			{
				if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B1, iVar0))
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					if (!unk_0xEAE0D21A50E6C7F4(uParam2->f_2B2, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_37;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_38;
						func_191(unk_0xF59058FCB716F903(iVar1, iVar2, 0x00000001));
						if (iVar3 < 0x00000169)
						{
							func_191(unk_0xF59058FCB716F903(iVar1, iVar3, 0x00000001));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_36;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_37;
						func_191(unk_0xE32F7AC5E6DF304A(iVar4, iVar5, 0x00000001));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_190(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B3, iVar0))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(uParam2->f_1[iVar0 /*57*/].f_37);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				else
				{
					unk_0x7E60C62A7CE58FC8(*uParam0, "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar0);
					func_191(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0xEA6BC48857E0AC4C(&(uParam2->f_1[iVar0 /*57*/].f_10)))
					{
						func_191(&(uParam2->f_1[iVar0 /*57*/].f_10));
					}
					if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AE, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						if (uParam2->f_2B6 == iVar0)
						{
							unk_0x164431059FF80580(uParam2->f_1[iVar0 /*57*/].f_24, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_24);
							if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2AF, iVar0))
							{
								unk_0x6D99DF8263D35CE5(uParam2->f_1[iVar0 /*57*/].f_25);
							}
						}
						unk_0x779B34565F4D71B1();
					}
					else if (unk_0xEAE0D21A50E6C7F4(uParam2->f_2B0, iVar0))
					{
						unk_0x7ACC3006A87F8B39(&(uParam2->f_1[iVar0 /*57*/].f_20));
						unk_0xD06AC7C87A34A6AD(&(uParam2->f_1[iVar0 /*57*/].f_26));
						unk_0x779B34565F4D71B1();
					}
					else
					{
						func_190(&(uParam2->f_1[iVar0 /*57*/].f_20));
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						unk_0x1200CC973A2399C8(0x00000000);
						unk_0x3CAEA85DA607305E(0x00000169);
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar0++;
			}
			unk_0x7E60C62A7CE58FC8(*uParam0, "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF(uParam2->f_2BB);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x7E60D21B163E9D56();
			*uParam2 = 0x00000001;
		}
	}
	uParam2->f_2B7 = 0.05f;
	uParam2->f_2B8 = 0.045f;
	uParam2->f_2B9 = 0f;
	uParam2->f_2BA = 0f;
	if (*uParam2 == 0x00000001)
	{
		func_189(*uParam0, uParam1);
	}
	func_188();
}

void func_188()
{
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000008);
	unk_0x3584F71E5CA29322(0x00000009);
}

void func_189(int iParam0, var uParam1)
{
	unk_0x6567AE843FADBA94(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0x00000000);
}

void func_190(char* sParam0)
{
	unk_0x7ACC3006A87F8B39(sParam0);
	unk_0x779B34565F4D71B1();
}

void func_191(char* sParam0)
{
	unk_0x045A0775396CC970(sParam0);
}

void func_192(int iParam0)
{
	Global_141384 = iParam0;
}

void func_193(var uParam0)
{
	uParam0->f_2B4 = 0x00000000;
}

int func_194(var uParam0)
{
	return uParam0->f_2B4;
}

void func_195(var uParam0, float fParam1)
{
	uParam0->f_2BB = fParam1;
}

struct<9> func_196()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 0x000000FF;
	Var0.f_5 = 0x000000FF;
	Var0.f_6 = 0x000000FF;
	Var0.f_7 = 0x000000C8;
	Var0.f_8 = 0f;
	return Var0;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000004:
		case 0x00000008:
		case 0x0000000C:
			return 0x0000000C;
		
		case 0x00000001:
		case 0x00000005:
		case 0x00000009:
		case 0x0000000D:
			return 0x0000000D;
		
		case 0x00000002:
		case 0x00000006:
		case 0x0000000A:
		case 0x0000000E:
			return 0x0000000E;
		
		case 0x00000003:
		case 0x00000007:
		case 0x0000000B:
		case 0x0000000F:
			return 0x0000000F;
		
		default:
	}
	return 0x00000000;
}

void func_198(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_2B5 >= 0x0000000C)
	{
		return;
	}
	iVar0 = uParam3->f_2B5;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_20), sParam2, 16);
	unk_0x5D96D8530B3D0904(&(uParam3->f_2B1), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_36 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_37 = iParam1;
	unk_0x5D96D8530B3D0904(&(uParam3->f_2B2), iVar0);
	uParam3->f_2B5++;
}

void func_199(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_2B5 >= 0x0000000C)
	{
		return;
	}
	iVar0 = uParam2->f_2B5;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_10), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_20), sParam1, 16);
	uParam2->f_2B5++;
}

void func_200(var uParam0)
{
	func_201(uParam0);
	uParam0->f_2B4 = 0x00000001;
}

void func_201(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0x00000000;
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_10), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_20), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_24 = 0x00000000;
		uParam0->f_1[iVar0 /*57*/].f_25 = 0x00000000;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_26), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0x00000002;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0x00000169;
		uParam0->f_1[iVar0 /*57*/].f_38 = 0x00000169;
		iVar0++;
	}
	uParam0->f_2AE = 0x00000000;
	uParam0->f_2AF = 0x00000000;
	uParam0->f_2B0 = 0x00000000;
	uParam0->f_2B1 = 0x00000000;
	uParam0->f_2B3 = 0x00000000;
	uParam0->f_2B2 = 0x00000000;
	uParam0->f_2B4 = 0x00000000;
	uParam0->f_2B5 = 0x00000000;
	uParam0->f_2B7 = 0f;
	uParam0->f_2B8 = 0f;
	uParam0->f_2B9 = 0f;
	uParam0->f_2BA = 0f;
	uParam0->f_2BB = 1f;
}

var func_202(bool bParam0)
{
	if (func_148())
	{
		if (!bParam0)
		{
			switch (unk_0x09AC81E49EA267F7(0x00000000, 0x00000008))
			{
				case 0x00000000:
					Local_159.f_31C = "female_idle_cardgames_var_01";
					break;
				
				case 0x00000001:
					Local_159.f_31C = "female_idle_cardgames_var_02";
					break;
				
				case 0x00000002:
					Local_159.f_31C = "female_idle_cardgames_var_03";
					break;
				
				case 0x00000003:
					Local_159.f_31C = "female_idle_cardgames_var_04";
					break;
				
				case 0x00000004:
					Local_159.f_31C = "female_idle_cardgames_var_05";
					break;
				
				case 0x00000005:
					Local_159.f_31C = "female_idle_cardgames_var_06";
					break;
				
				case 0x00000006:
					Local_159.f_31C = "female_idle_cardgames_var_07";
					break;
				
				case 0x00000007:
					Local_159.f_31C = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x09AC81E49EA267F7(0x00000000, 0x0000000D))
		{
			case 0x00000000:
				Local_159.f_31C = "idle_cardgames_var_01";
				break;
			
			case 0x00000001:
				Local_159.f_31C = "idle_cardgames_var_02";
				break;
			
			case 0x00000002:
				Local_159.f_31C = "idle_cardgames_var_03";
				break;
			
			case 0x00000003:
				Local_159.f_31C = "idle_cardgames_var_04";
				break;
			
			case 0x00000004:
				Local_159.f_31C = "idle_cardgames_var_05";
				break;
			
			case 0x00000005:
				Local_159.f_31C = "idle_cardgames_var_06";
				break;
			
			case 0x00000006:
				Local_159.f_31C = "idle_cardgames_var_07";
				break;
			
			case 0x00000007:
				Local_159.f_31C = "idle_cardgames_var_08";
				break;
			
			case 0x00000008:
				Local_159.f_31C = "idle_cardgames_var_09";
				break;
			
			case 0x00000009:
				Local_159.f_31C = "idle_cardgames_var_10";
				break;
			
			case 0x0000000A:
				Local_159.f_31C = "idle_cardgames_var_11";
				break;
			
			case 0x0000000B:
				Local_159.f_31C = "idle_cardgames_var_12";
				break;
			
			case 0x0000000C:
				Local_159.f_31C = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_159.f_31C;
}

int func_203()
{
	if (func_204() == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_204()
{
	return Global_1406D3.f_12;
}

void func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_113();
	iVar1 = unk_0xDD0E7998AE8AD485();
	iVar2 = func_111();
	if (iVar0 == 0x00000000)
	{
		func_110();
	}
	else if ((iVar0 - iVar1) >= Global_40001.f_671D)
	{
		func_109();
		iVar2 = 0x00000000;
	}
	if ((iVar2 - iParam0) >= Global_40001.f_671E)
	{
		func_108(0xB402A40B, Global_40001.f_671E);
		func_109();
		Global_258BC5 = 0x00000001;
	}
	else
	{
		func_108(0xB402A40B, (iVar2 - iParam0));
	}
}

int func_206(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

int func_207()
{
	if ((((Local_159.f_2 && Local_159.f_3) && Local_159.f_4) && Local_159.f_6) && (!unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000009) && Local_168.f_E > 0x00000000))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_208()
{
	if (unk_0x0D03A641486A2001() != func_209())
	{
		return unk_0x3DDF605689C8A861(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001()));
	}
	return 0x00000000;
}

int func_209()
{
	return 0xFFFFFFFF;
}

void func_210()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	
	if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF))
	{
		if (bLocal_178)
		{
			func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
		}
		bLocal_178 = 0x00000000;
	}
	if (!unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0))
	{
		if (bLocal_177)
		{
			func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
		}
		bLocal_177 = 0x00000000;
	}
	if ((((Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 >= 0x00000000 && !unk_0x4FD68D5821EE3E19()) && !func_337()) && !unk_0xE57E602827E07C9D()) && Local_116.f_240[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2] < 0x0000000C)
	{
		if (Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] > 0x00000000 && (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1))))
		{
			if ((((unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0)) && !bLocal_177) && !func_72(&uLocal_179)) && !unk_0x9F4FE516EAACCFC5(Local_159.f_D))
			{
				if (!bLocal_178)
				{
					if (unk_0xA4FD7964FEE91ED8(0x00000000) == 0x00000004)
					{
						bLocal_173 = 0x00000001;
					}
					func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
					bLocal_178 = 0x00000001;
				}
			}
		}
		else
		{
			if (bLocal_178)
			{
				func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
			}
			bLocal_178 = 0x00000000;
		}
		if (Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/] > 0x00000000)
		{
			if ((((unk_0x06F8112AA79C53D9(0x00000002, 0x000000D0) && !unk_0x06F8112AA79C53D9(0x00000002, 0x000000CF)) && !bLocal_178) && !func_72(&uLocal_179)) && !unk_0x9F4FE516EAACCFC5(Local_159.f_D))
			{
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()))
				{
					func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000000, 0x00000000);
				}
				bLocal_177 = 0x00000001;
			}
		}
		else
		{
			if (bLocal_177)
			{
				func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
			}
			bLocal_177 = 0x00000000;
		}
	}
	else
	{
		if (bLocal_178 || bLocal_177)
		{
			func_300(unk_0xD803B885F5E47A62(), 0x00000000, 0x00000100, 0x00000000);
		}
		bLocal_178 = 0x00000000;
		bLocal_177 = 0x00000000;
	}
	if (bLocal_177 || bLocal_178)
	{
		unk_0x01861BC775A34949(0x00000001);
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			unk_0x9DD8618CA5BF832D(unk_0x16F2683693E537C9(), 0x000000A6, 0x00000001);
		}
		if (!unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8BC9595FD2792B5D("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x9F4FE516EAACCFC5(Local_159.f_D))
		{
			Local_159.f_D = unk_0x92B061D59B9B540A(0x019286A9, 0x00000001);
			unk_0x86F44313DFA8F00C(Local_159.f_D, func_222(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_221(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_220(bLocal_177), 0x00000000, 0x00000001, 0x00000001, 0x00000002);
			unk_0x91F5B0244AAE6222(Local_159.f_D, "HAND_SHAKE", 0.03f);
			unk_0xB3A1B75CB59FEB56(0x00000001, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		}
		else if (bLocal_177)
		{
			if (Local_116.f_5[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2])
			{
				if (!func_98("TCP_D_HAND", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000)))
				{
					func_97("TCP_D_HAND", func_101(func_9(&(Local_116.f_185[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000));
				}
			}
			else if (!func_335("TCP_D_HAND_D"))
			{
				func_158("TCP_D_HAND_D");
			}
			fVar0 = unk_0x86CC98177DFF41EC(Local_159.f_D);
			fVar1 = 50f;
			fVar1 = func_219();
			fVar0 = func_217(fVar0, fVar1, 0.2f, 0x00000004);
			unk_0x86F44313DFA8F00C(Local_159.f_D, func_222(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_221(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), fVar0, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
		}
		else if (bLocal_178)
		{
			if (bLocal_173)
			{
				fVar2 = unk_0x86CC98177DFF41EC(Local_159.f_D);
				fVar3 = 50f;
				vVar4 = { unk_0x17D61C69BA58F815(Local_159.f_D, 0x00000002) };
				vVar5 = { 0f, 0f, 0f };
				vVar6 = { -38.1166f, -0.0930717f, -102.613f };
				vVar7 = { unk_0xD06724447386BC29(Local_159.f_D) };
				vVar8 = { 0f, 0f, 0f };
				vVar9 = { 966.621f, 32.009f, 116.621f };
				if (vVar4.z < 0f)
				{
					vVar4.z = (vVar4.z + 360f);
				}
				vVar9 = { func_216(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1) };
				vVar6 = { func_215(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1) };
				fVar3 = func_219();
				if (vVar6.z < 0f)
				{
					vVar6.z = (vVar6.z + 360f);
				}
				vVar5 = { func_213(vVar4, vVar6, 0.35f, 0x00000004) };
				vVar8 = { func_212(vVar7, vVar9, 0.35f, 0x00000004) };
				if (vVar5.z > 180f)
				{
					vVar5.z = (vVar5.z - 360f);
				}
				else if (vVar5.z < -180f)
				{
					vVar5.z = (vVar5.z + 360f);
				}
				if (func_211(vVar4, vVar6, 10f, 0x00000000) && func_211(vVar7, vVar9, 0.1f, 0x00000000))
				{
					fVar2 = func_217(fVar2, fVar3, 0.35f, 0x00000004);
				}
				unk_0x86F44313DFA8F00C(Local_159.f_D, vVar8, vVar5, fVar2, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
			}
			else
			{
				fVar10 = unk_0x86CC98177DFF41EC(Local_159.f_D);
				fVar11 = 50f;
				fVar11 = func_219();
				fVar10 = func_217(fVar10, fVar11, 0.35f, 0x00000004);
				unk_0x86F44313DFA8F00C(Local_159.f_D, func_222(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), func_221(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1, Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, bLocal_177), fVar10, 0x00000000, 0x00000001, 0x00000001, 0x00000002);
			}
		}
	}
	else
	{
		if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x9F4FE516EAACCFC5(Local_159.f_D))
		{
			unk_0x01861BC775A34949(0x00000001);
			if (!func_72(&uLocal_179) && bLocal_173)
			{
				func_73(&uLocal_179, 0x00000000, 0x00000000);
				unk_0x82A772610883F395("PokerCamTransition", 0x00000000, 0x00000000);
			}
			else if (func_71(&uLocal_179, 0x00000064, 0x00000000) || !bLocal_173)
			{
				unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
				unk_0x9A8DDC7C522F5BF5(Local_159.f_D, 0x00000000);
				unk_0xA37A90C62806D848(0x00000001);
				func_69(&uLocal_179);
				bLocal_173 = 0x00000000;
			}
		}
	}
	if (bLocal_178 || bLocal_173)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004) || unk_0xEAE0D21A50E6C7F4(Local_116.f_14[Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2], func_197(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1)))
		{
			if (!func_98("TCP_P_HAND", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000)))
			{
				func_97("TCP_P_HAND", func_101(func_9(&(Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1), 0x00000000, 0x00000000), 0x00000000));
			}
		}
	}
}

int func_211(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0x755FF954DAE327E1((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 0x00000001;
				}
			}
		}
	}
	else if (unk_0x755FF954DAE327E1((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0x755FF954DAE327E1((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

Vector3 func_212(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_217(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_217(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_217(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

Vector3 func_213(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0.x = func_214(vParam0.x, vParam1.x, fParam2, iParam3);
	vVar0.y = func_214(vParam0.y, vParam1.y, fParam2, iParam3);
	vVar0.z = func_214(vParam0.z, vParam1.z, fParam2, iParam3);
	return vVar0;
}

float func_214(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x755FF954DAE327E1((fParam1 - fParam0));
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
	fVar1 = func_217(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_215(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_232(iParam0) };
	vVar1 = { -47.16f, 0f, -87.475f };
	return Vector(vVar0.z, 0f, 0f) + vVar1;
}

Vector3 func_216(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_232(iParam0) };
	return unk_0x8A5E176FF719A014(func_361(iParam0), vVar0.z, 0.198f, 0f, 1.388f);
}

float func_217(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 0x00000001:
		case 0x00000006:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 0x00000002:
		case 0x00000007:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 0x00000003:
		case 0x00000008:
			fParam2 = ((-SYSTEM::COS(func_218((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 0x00000004:
		case 0x00000009:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0x00000000:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
			fVar0 = func_217(fParam0, fParam1, fParam2, 0x00000000);
			break;
		
		case 0x00000005:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			fVar0 = func_217(fParam0, fParam1, fParam2, 0x00000005);
			break;
	}
	return fVar0;
}

float func_218(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_219()
{
	if (bLocal_177)
	{
		return 37.8425f;
	}
	return 43.3518f;
}

float func_220(bool bParam0)
{
	float fVar0;
	
	fVar0 = 44.6546f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	if (bLocal_173)
	{
		fVar0 = 50f;
	}
	return fVar0;
}

Vector3 func_221(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		vVar0 = { -74.52f, 0f, 0f };
	}
	else if (bLocal_173)
	{
		return unk_0x3B276DB863622D2E(0x00000002);
	}
	else
	{
		return func_215(iParam0);
	}
	return Vector(func_75(iParam1), 0f, 0f) + vVar0;
}

Vector3 func_222(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (bParam2)
	{
		vVar0 = { 0f, -0.02f, 1.62f };
	}
	else if (bLocal_173)
	{
		return unk_0x07DAF5424BC6779A();
	}
	else
	{
		return func_216(iParam0);
	}
	return unk_0x8A5E176FF719A014(func_76(iParam1), func_75(iParam1), vVar0);
}

void func_223(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000000, 0x00000001, iParam1);
}

int func_224(int iParam0)
{
	if (Local_116.f_240[iParam0] == 0x00000002)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6, 0x00000000))
		{
			Local_159.f_31F = { Local_116.f_A8[iParam0 /*55*/] };
			unk_0x5D96D8530B3D0904(&(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6), 0x00000000);
		}
	}
	else if (Local_116.f_240[iParam0] > 0x00000002 && unk_0xEAE0D21A50E6C7F4(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6, 0x00000000))
	{
		if (Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] > 0x00000000)
		{
			if (Local_159.f_356 != Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/])
			{
				Local_159.f_356 = { Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/] };
			}
			else
			{
				if (Local_159.f_356.f_1[iLocal_176] != Local_116.f_19A[unk_0xD803B885F5E47A62() /*5*/].f_1[iLocal_176])
				{
					iLocal_175 = 0x00000000;
					iLocal_176 = 0x00000000;
					if (Global_40001.f_65B4)
					{
						unk_0x1787A8354D584871(&Local_168);
					}
					func_375(0x00000001);
					unk_0xA37A90C62806D848(0x00000001);
					return 0x00000001;
				}
				iLocal_176++;
				if (iLocal_176 >= Local_159.f_356)
				{
					iLocal_176 = 0x00000000;
				}
			}
		}
		if (Local_116.f_A8[iParam0 /*55*/].f_2[iLocal_175] != Local_159.f_31F.f_2[iLocal_175])
		{
			iLocal_175 = 0x00000000;
			iLocal_176 = 0x00000000;
			if (Global_40001.f_65B4)
			{
				unk_0x1787A8354D584871(&Local_168);
			}
			func_375(0x00000001);
			unk_0xA37A90C62806D848(0x00000001);
			return 0x00000001;
		}
		iLocal_175++;
		if (iLocal_175 >= 0x00000034)
		{
			iLocal_175 = 0x00000000;
		}
	}
	return 0x00000000;
}

void func_225()
{
	int iVar0;
	
	iVar0 = func_380(Local_159.f_12);
	if (iVar0 < 0x00000020)
	{
		unk_0x5D96D8530B3D0904(&(Local_159.f_21), iVar0);
	}
}

int func_226(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_411())
	{
		return 0x00000000;
	}
	iVar0 = func_227(iParam0);
	if (iVar0 != func_411())
	{
		return func_324(iVar0);
	}
	return 0x00000000;
}

int func_227(int iParam0)
{
	if (iParam0 != func_411())
	{
		return Global_18D84D[iParam0 /*615*/].f_B;
	}
	return func_411();
}

void func_228(var uParam0, int iParam1)
{
	if (uParam0->f_7 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_7 && iParam1 != 0x00000000)
	{
		return;
	}
	if ((iParam1 == 0x00000004 || iParam1 == 0x00000005) || iParam1 == 0x00000006)
	{
		if (func_333())
		{
			func_228(uParam0, 0x00000007);
			return;
		}
	}
	uParam0->f_7 = iParam1;
	func_69(&(Local_159.f_31A));
	if ((iParam1 != 0x00000000 && iParam1 != 0x00000003) && iParam1 != 0x00000008)
	{
		func_73(&(Local_159.f_31A), 0x00000000, 0x00000000);
	}
}

int func_229()
{
	int iVar0;
	
	iVar0 = func_380(Local_159.f_12);
	if (iVar0 < 0x00000020)
	{
		return unk_0xEAE0D21A50E6C7F4(Local_159.f_21, iVar0);
	}
	return 0x00000000;
}

char* func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return "sit_enter_left";
		
		case 0x00000001:
			return "sit_enter_left_side";
		
		case 0x00000002:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_231()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_232(int iParam0)
{
	int iVar0;
	
	if (Local_159.f_1A == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_380(iParam0) == 0x00000000 || func_380(iParam0) == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 0x98FFA2D1, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iVar0) && unk_0x1A5AE8A9B1D42A10(iVar0))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000001:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000002:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000003:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000004:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000005:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000006:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000007:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000008:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000009:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000A:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000B:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x0000000C:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x0000000D:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000E:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000F:
				return unk_0xAE6F99477A0FA13D(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_233(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0xEEB20D14BD38615E(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 0x00000002) };
	return vVar0.z;
}

float func_234(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000001) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, 0x00000000) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

Vector3 func_235(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x1BB04F10296A1C5E(func_231(), func_230(iParam1), func_361(iParam0), func_232(iParam0), 0.01f, 0x00000002) };
	return vVar0;
}

int func_236()
{
	unk_0x3F423BF5B8125A50(func_45());
	unk_0x3F423BF5B8125A50(func_78());
	unk_0x3F423BF5B8125A50(func_92());
	unk_0x3F423BF5B8125A50(func_231());
	if (((unk_0xB4AE0788C1587752(func_45()) && unk_0xB4AE0788C1587752(func_78())) && unk_0xB4AE0788C1587752(func_92())) && unk_0xB4AE0788C1587752(func_231()))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_237()
{
	if (func_71(&(Local_159.f_318), 0x00000DAC, 0x00000000))
	{
		func_69(&(Local_159.f_318));
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_238(int iParam0)
{
	if (Local_116.f_75[iParam0] == func_411())
	{
		return 0x00000000;
	}
	return Local_116.f_75[iParam0] != unk_0xD803B885F5E47A62();
}

void func_239(int iParam0)
{
	Global_19E136 = unk_0xDD0E7998AE8AD485();
	Global_19E147 = iParam0;
	if (!func_247())
	{
		func_244();
	}
	if (!func_243())
	{
		func_240();
	}
}

void func_240()
{
	func_108(0xC1F81620, unk_0xDD0E7998AE8AD485());
	func_242();
	func_241();
	Global_19E144 = 0x00000001;
	Global_19E13F = 0x00000000;
}

void func_241()
{
	func_108(0x5F5CFE71, unk_0xDD0E7998AE8AD485());
}

void func_242()
{
	func_108(0x8B348F43, 0x00000000);
	func_108(0x96A1462A, 0x00000000);
	func_108(0x89C32C6E, 0x00000000);
	func_108(0x7B748FD1, 0x00000000);
	func_108(0xDE0E5503, 0x00000000);
	func_108(0xCFF538D1, 0x00000000);
	func_108(0xC29A9E1C, 0x00000000);
	func_108(0x247961D8, 0x00000000);
	func_108(0x1717C715, 0x00000000);
	func_108(0x057DFFB1, 0x00000000);
	func_108(0x5F5CFE71, 0x00000000);
}

bool func_243()
{
	return Global_19E144;
}

void func_244()
{
	func_108(0x37E20A33, unk_0xDD0E7998AE8AD485());
	func_246();
	func_245((unk_0xDD0E7998AE8AD485() + 0x00015180));
	Global_19E143 = 0x00000001;
}

void func_245(int iParam0)
{
	Global_19E13E = iParam0;
}

void func_246()
{
	func_108(0x224B31F3, unk_0xDD0E7998AE8AD485());
}

bool func_247()
{
	return func_112(0x37E20A33) != 0x00000000;
}

bool func_248(int iParam0)
{
	return Local_116.f_75[iParam0] == unk_0xD803B885F5E47A62();
}

void func_249()
{
	func_363(0x00000002);
	unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 0x000000B9, 0x00000000);
	func_339();
	func_300(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
	func_257();
	unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000003);
	func_250();
}

void func_250()
{
	int iVar0;
	int iVar1;
	
	if (Global_19E147 != 0xFFFFFFFF)
	{
		iVar0 = (unk_0xDD0E7998AE8AD485() - Global_19E136);
		iVar1 = (unk_0xDD0E7998AE8AD485() - Global_19E137);
		if (Global_19E137 == 0xFFFFFFFF)
		{
			func_251(iVar0);
		}
		else
		{
			func_251(iVar1);
		}
		func_246();
		func_241();
		Global_19E136 = 0xFFFFFFFF;
		Global_19E137 = 0xFFFFFFFF;
		Global_19E147 = 0xFFFFFFFF;
	}
}

void func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = func_256();
	Global_19E13F = (Global_19E13F + iParam0);
	func_252(iVar0, iParam0);
	func_241();
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 0x0000000C);
	iVar3 = 0x00000001;
	if ((iVar2 % 0x00000020) + 12 > 0x00000020)
	{
		iVar3 = 0x00000002;
	}
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / 32f));
	if (iVar4 < 0x00000000)
	{
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 0x00000009)
		{
			return;
		}
		iVar5 = func_255((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_112(iVar5);
		iVar0++;
	}
	iVar6 = func_254(&uVar1, iParam0, 0x0000000C);
	iVar6 = (iVar6 + iParam1);
	func_253(&uVar1, iParam0, 0x0000000C, iVar6);
	iVar0 = 0x00000000;
	while (iVar0 < iVar3)
	{
		uVar7 = func_255((iVar4 + iVar0));
		func_108(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_253(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar3) / 32f));
	iVar5 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar3 % 0x00000020) + iParam2) - 0x00000020)) / 32f)) + 1;
	if (((iVar4 - 0x00000001) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0x00000000;
	iVar7 = (iVar3 % 0x00000020);
	iVar0 = 0x00000000;
	while (iVar0 < iVar5)
	{
		iVar8 = (0x00000020 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4(iParam3, iVar6))
			{
				unk_0x5D96D8530B3D0904(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0x0674E58A79778E99(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0x00000000)
		{
			iVar7 = 0x00000000;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_254(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
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
	iVar5 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar4) / 32f));
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT((((iVar4 % 0x00000020) + iParam2) - 0x00000020)) / 32f)) + 1;
	if (((iVar5 - 0x00000001) + iVar6) >= *uParam0)
	{
		return 0x00000000;
	}
	iVar7 = 0x00000000;
	iVar8 = (iVar4 % 0x00000020);
	iVar0 = 0x00000000;
	while (iVar0 < iVar6)
	{
		iVar9 = (0x00000020 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 0x00000001))
		{
			if (unk_0xEAE0D21A50E6C7F4((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0x5D96D8530B3D0904(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0x00000000)
		{
			iVar8 = 0x00000000;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_255(int iParam0)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0x00000000)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x12AB0310C2281427(&cVar0);
}

int func_256()
{
	return func_112(0x057DFFB1);
}

void func_257()
{
	Global_2537E2.f_484.f_A = 0x00000000;
}

void func_258(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_260(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (Global_574E.f_20E1)
	{
		unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
		Global_574E.f_20E1 = 0x00000000;
	}
	unk_0xD668DA5CA4A1D2C8(0f);
	if (Global_574E.f_15FC[iVar0])
	{
		unk_0x11CCD0ACA866C6C5(0x00000009, 0x00000000);
		Global_574E.f_15FC[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15EE[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("CommonMenu");
		Global_574E.f_15EE[iVar0] = 0x00000000;
	}
	if (Global_574E.f_15F5[iVar0])
	{
		unk_0xF5A41F3D3B38EFE3("MPShopSale");
		Global_574E.f_15F5[iVar0] = 0x00000000;
	}
	if (bParam0)
	{
		func_259(&(Global_574E.f_161C[iVar0 /*10*/]));
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
	else
	{
		Global_574E.f_1659[iVar0] = 0x00000000;
	}
}

void func_259(int iParam0)
{
	if (iParam0->f_9 != 0x00000000)
	{
		if (unk_0x83D8570832F172A7(*iParam0))
		{
			unk_0xE17FDF9E3068281B(iParam0);
		}
		*iParam0 = 0x00000000;
		iParam0->f_9 = 0x00000000;
	}
}

int func_260(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0xFFFFFFFF)
	{
		if (unk_0x8CD06866876216F2() && unk_0x2E9F2B9C010D34D9())
		{
			iParam2 = unk_0xF35A91B88CC1915F();
		}
	}
	StringCopy(&cVar0, unk_0xBB0808A181D4745C(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x12AB0310C2281427(&cVar0);
	iVar3 = 0xFFFFFFFF;
	iVar2 = 0x00000000;
	while (iVar2 < 0x00000006)
	{
		if (Global_574E.f_1659[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 0x00000001;
		}
		else if (Global_574E.f_1659[iVar2] == 0x00000000)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != 0xFFFFFFFF)
		{
			Global_574E.f_1659[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_261(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	vector3 vVar38;
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
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
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
	
	if (!func_260(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	if (iVar0 == 0xFFFFFFFF)
	{
	}
	if (!func_285(0x00000000, bParam6))
	{
		return;
	}
	unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
	unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_574E)
	{
		if (func_165(0x0000001D, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_574E = 0x00000000;
		}
	}
	if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
	{
		fVar57 = Global_574C;
	}
	else
	{
		fVar57 = (((Global_574C + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_574D;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0xE5AC5CA7914F5BAE(&iVar58, &iVar59);
		fVar61 = unk_0x33D480CCE15C991A(0x00000000);
		if (func_167())
		{
			iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) * fVar61));
		}
		fVar62 = (SYSTEM::TO_FLOAT(iVar58) / SYSTEM::TO_FLOAT(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_167())
		{
			fVar60 = 1f;
		}
		iVar58 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar58) / fVar60));
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar60));
	}
	else
	{
		unk_0x8A462DAA7D1D9008(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_574E.f_1462 <= 0x00000001)
		{
			func_175(Global_574E.f_1462 + 1, "DFLT_MNU_OPT", 0x00000000, 0x00000001, 0x00000000, 0x00000000);
			Global_574E.f_177E = 0x00000001;
		}
	}
	iVar5 = 0x00000000;
	while (iVar5 < 0x00000002)
	{
		if (iVar5 == 0x00000001 && Global_574E.f_1660)
		{
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) == unk_0x12AB0310C2281427("HIDE"))
			{
				fVar49 = Global_574C;
			}
			else
			{
				if (Global_574E)
				{
					StringCopy(&cVar63, func_171(0x0000001D), 64);
					StringCopy(&cVar64, func_168(0x0000001D, 0x00000001), 64);
					if (unk_0x12AB0310C2281427(&(Global_574E.f_1B75[0x0000001D /*16*/])) == 0xA753C1F1)
					{
						func_284(Global_574B, Global_574C, fParam5, (fVar55 - 0f), 0x00000000, 0x00000000, 0x00000000, 0x000000FF);
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
					else
					{
						unk_0x539E86AE011A8B38(&cVar63, &cVar64, (Global_574B + (fParam5 * 0.5f)), (Global_574C + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
					}
				}
				if (Global_574E.f_20C3)
				{
					iVar1 = Global_574E.f_20BF;
					iVar2 = Global_574E.f_20C0;
					iVar3 = Global_574E.f_20C1;
					iVar4 = Global_574E.f_20C2;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				func_284(Global_574B, (Global_574C + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_574C + fVar55) + 0.034722f) + 0f);
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1)) != 0x00000000)
				{
					func_283();
					unk_0x070005E852D4C0E9(&(Global_574E.f_1));
					iVar15 = 0x00000000;
					iVar16 = 0x00000000;
					iVar17 = 0x00000000;
					iVar18 = 0x00000000;
					iVar14 = 0x00000000;
					while (iVar14 < Global_574E.f_44)
					{
						if (Global_574E.f_5[iVar14] == 0x00000002)
						{
							unk_0x6D99DF8263D35CE5(Global_574E.f_A[iVar15]);
							iVar15++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000003)
						{
							unk_0x21994591120B91F0(Global_574E.f_E[iVar16], Global_574E.f_12[iVar16]);
							iVar16++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000001)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000008)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_16[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000005)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000006)
						{
							unk_0x6B012227B3921E18(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000007)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_574E.f_5[iVar14] == 0x00000009)
						{
							unk_0xD06AC7C87A34A6AD(&(Global_574E.f_23[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xE0026608C37C7C41((Global_574B + 0.00390625f), ((Global_574C + fVar55) + 0.00416664f), 0x00000000);
				}
				if (Global_574E.f_1667)
				{
					func_283();
					func_281((((Global_574B + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1668, Global_574E.f_1669);
				}
				else if (Global_574E.f_1663 > Global_574E.f_1469)
				{
					if (Global_574E.f_1666 != 0x00000000)
					{
						func_283();
						func_281((((Global_574B + fParam5) - 0.00390625f) - func_282("CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665)), ((Global_574C + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_574E.f_1666, Global_574E.f_1665);
					}
				}
			}
			iVar6 = Global_574E.f_166A;
			iVar9 = 0x00000000;
			fVar65 = fVar49;
			if (Global_574E.f_20CD)
			{
				iVar1 = Global_574E.f_20C9;
				iVar2 = Global_574E.f_20CA;
				iVar3 = Global_574E.f_20CB;
				iVar4 = Global_574E.f_20CC;
			}
			else
			{
				unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_574E.f_1469 && iVar6 <= Global_574E.f_1462)
			{
				if (iVar6 >= 0x00000000)
				{
					if (Global_574E.f_156D[iVar6])
					{
						if (Global_574E.f_14EC[iVar6] && iVar6 != Global_574E.f_166A)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar54 = Global_574E.f_1671[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			if (Global_574E.f_1663 > Global_574E.f_1469)
			{
				if (Global_574E.f_20D2)
				{
					iVar1 = Global_574E.f_20CE;
					iVar2 = Global_574E.f_20CF;
					iVar3 = Global_574E.f_20D0;
					iVar4 = Global_574E.f_20D1;
				}
				else
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000CC;
				}
				func_284(Global_574B, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { unk_0xDE43A059FBFFF38A("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_574E.f_20DF)
				{
					iVar1 = 0x00000000;
					iVar2 = 0x00000000;
					iVar3 = 0x00000000;
					iVar4 = 0x000000FF;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x00000001, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "shop_arrows_upANDdown", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x12AB0310C2281427(&(Global_574E.f_1252)) != 0x00000000 && Global_574E.f_129E != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_165(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_284(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_280(fVar40);
				unk_0x070005E852D4C0E9(&(Global_574E.f_1252));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_574E.f_129A)
				{
					if (Global_574E.f_1258[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_574E.f_125D[iVar15]);
						iVar15++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_574E.f_1261[iVar16], Global_574E.f_1265[iVar16]);
						iVar16++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_574E.f_1258[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_574E.f_1269[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_574E.f_12A0 != 0x00000000)
				{
					func_165(Global_574E.f_12A0, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_279(Global_574E.f_12A0, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_171(Global_574E.f_12A0), func_168(Global_574E.f_12A0, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_574E.f_129E > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_574E.f_129F) > Global_574E.f_129E)
					{
						StringCopy(&(Global_574E.f_1252), "", 24);
						Global_574E.f_129E = 0xFFFFFFFF;
					}
				}
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_15)) != 0x00000000 && Global_412185.f_41 != 0xFFFFFFFF)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_574B + 0.0046875f);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_165(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_574B + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_280(fVar40);
				unk_0xA1868A78E3C3D56B(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x5D2FD44A8C086959(fVar40, (fVar49 + 0.00277776f));
				unk_0xA402F6C87C08815C(0x00000002, &iVar1, &iVar2, &iVar3, &iVar4);
				func_284(Global_574B, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_574E.f_20D7)
				{
					iVar1 = Global_574E.f_20D3;
					iVar2 = Global_574E.f_20D4;
					iVar3 = Global_574E.f_20D5;
					iVar4 = Global_574E.f_20D6;
				}
				else
				{
					unk_0xA402F6C87C08815C(0x0000008C, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Bgd", (Global_574B + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))), 0f, iVar1, iVar2, iVar3, iVar4, 0x00000000);
				func_280(fVar40);
				unk_0x070005E852D4C0E9(&(Global_412185.f_15));
				iVar15 = 0x00000000;
				iVar16 = 0x00000000;
				iVar17 = 0x00000000;
				iVar14 = 0x00000000;
				while (iVar14 < Global_412185.f_3D)
				{
					if (Global_412185.f_19[iVar14] == 0x00000002)
					{
						unk_0x6D99DF8263D35CE5(Global_412185.f_1E[iVar15]);
						iVar15++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000003)
					{
						unk_0x21994591120B91F0(Global_412185.f_22[iVar16], Global_412185.f_26[iVar16]);
						iVar16++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000001)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000008)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000005)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000006)
					{
						unk_0x6B012227B3921E18(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000007)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_412185.f_19[iVar14] == 0x00000009)
					{
						unk_0xD06AC7C87A34A6AD(&(Global_412185.f_2A[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xE0026608C37C7C41(fVar40, (fVar49 + 0.00277776f), 0x00000000);
				if (Global_412185.f_43 != 0x00000000)
				{
					func_165(Global_412185.f_43, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7);
					func_279(Global_412185.f_43, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x539E86AE011A8B38(func_171(Global_412185.f_43), func_168(Global_412185.f_43, 0x00000001), ((Global_574B + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
				}
				fVar49 = (fVar49 + (((unk_0x9153358B38685E6E(0.35f, 0x00000000) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 0x00000001)))));
				if (Global_412185.f_41 > 0x00000000)
				{
					if ((unk_0x1C0640BA9A7327B3() - Global_412185.f_42) > Global_412185.f_41)
					{
						StringCopy(&(Global_412185.f_15), "", 16);
						Global_412185.f_41 = 0xFFFFFFFF;
					}
				}
			}
			func_274(iVar58, iParam1, iParam8, 0x00000000, 0x00000000, 0x00000000, bParam4, 0x00000001, 0x00000000);
			unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000054);
			unk_0x75BBE9A62B73769F(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 0x00000001 || !Global_574E.f_1660)
		{
			iVar19 = 0x00000000;
			iVar23 = 0x00000000;
			iVar20 = 0x00000000;
			iVar21 = 0x00000000;
			iVar22 = 0x00000000;
			iVar9 = 0x00000000;
			iVar10 = 0x00000000;
			iVar11 = 0x00000000;
			iVar12 = 0x00000000;
			iVar13 = 0x00000000;
			iVar66 = Global_574E.f_1462;
			if (Global_574E.f_1661)
			{
				iVar66 = (Global_574E.f_1664 - 0x00000001);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0x00000000;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_574E.f_1671[iVar6] != 0f)
				{
					fVar54 = Global_574E.f_1671[iVar6];
				}
				if (Global_574E.f_1661)
				{
					iVar6 = Global_574E.f_1F66[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = 0x00000000;
				if (iVar6 >= Global_574E.f_166A && iVar9 < Global_574E.f_1469)
				{
					bVar33 = 0x00000001;
					if (Global_574E.f_166B == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_574E.f_14EC[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_574E.f_16F7[iVar6] = fVar35;
				fVar34 = (Global_574B + 0.0046875f);
				bVar39 = 0x00000000;
				bVar32 = Global_574E.f_166B == iVar6;
				if ((bVar32 && iVar5 == 0x00000001) && bVar33)
				{
					iVar70 = 0x000000FF;
					iVar71 = 0x000000FF;
					iVar72 = 0x000000FF;
					iVar73 = 0x000000FF;
					if (Global_574E.f_20D9)
					{
						unk_0xA402F6C87C08815C(Global_574E.f_20D8, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0xA402F6C87C08815C(0x00000001, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x539E86AE011A8B38("CommonMenu", "Gradient_Nav", (Global_574B + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0x00000000);
					Global_574E.f_16F5 = fVar35;
				}
				iVar8 = 0x00000000;
				while (iVar8 < Global_574E.f_146A)
				{
					if (unk_0xEAE0D21A50E6C7F4(Global_574E.f_13E1[iVar6], iVar8) || Global_574E.f_13C0[iVar8] == 0x00000005)
					{
						if (Global_574E.f_1661)
						{
							iVar19 = Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar20 = Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar21 = Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar22 = Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)];
							iVar23 = Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)];
						}
						else
						{
							Global_574E.f_1F76[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar19;
							Global_574E.f_1F9F[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar20;
							Global_574E.f_1FC8[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar21;
							Global_574E.f_1FF1[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar22;
							Global_574E.f_201A[((iVar9 * Global_574E.f_146A) + iVar8)] = iVar23;
						}
						iVar74 = 0x00000000;
						bVar53 = 0x00000000;
						if (Global_574E.f_177B[0x00000000] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000000])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000000;
							}
						}
						if (Global_574E.f_177B[0x00000001] != 0xFFFFFFFF)
						{
							if ((iVar6 * 5 + iVar8) == Global_574E.f_1778[0x00000001])
							{
								bVar53 = 0x00000001;
								iVar74 = 0x00000001;
							}
						}
						if (Global_574E.f_13C6[iVar8] != -1f)
						{
							fVar34 = ((Global_574B + 0.0046875f) + Global_574E.f_13C6[iVar8]);
						}
						if ((iVar8 < 0x00000004 && Global_574E.f_13C6[iVar8 + 1] != -1f) && fVar34 < Global_574E.f_13C6[iVar8 + 1])
						{
							fVar44 = (Global_574E.f_13C6[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_574B + Global_574D) - 0.0046875f) - fVar34);
						}
						if ((Global_574E.f_13D3[iVar8] && Global_574E.f_16F2) && bVar32)
						{
							bVar52 = 0x00000001;
						}
						else
						{
							bVar52 = 0x00000000;
						}
						switch (Global_574E.f_13C0[iVar8])
						{
							case 0x00000000:
								break;
							
							case 0x00000001:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0x00000000;
										iVar26 = 0x00000000;
										iVar27 = 0x00000000;
										iVar28 = 0x00000000;
										iVar29 = 0x00000000;
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											bVar50 = 0x00000000;
											bVar51 = 0x00000000;
											iVar14 = 0x00000000;
											while (iVar14 < 0x00000004)
											{
												if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
												{
													bVar51 = 0x00000001;
												}
												else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
												{
													bVar50 = 0x00000001;
												}
												iVar14++;
											}
											func_173(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0xBBA442527B4BB1A6(&(Global_574E.f_49[iVar24 /*6*/]));
										}
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												iVar25++;
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
											{
												if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
												{
													unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000)
										{
											fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										}
										if (iVar28 > 0x00000000)
										{
											iVar14 = 0x00000000;
											while (iVar14 < iVar28)
											{
												if (func_165(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0x00000000)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar14)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000003D)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
										Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											iVar69 = (iVar8 - 0x00000001);
											while (iVar69 >= 0x00000000)
											{
												if (Global_574E.f_13DB[iVar69] == 0x00000002)
												{
													Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] = (Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar69)] - Global_574E.f_13CC[iVar8]);
												}
												iVar69 = (iVar69 + 0xFFFFFFFF);
											}
										}
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_171(0x0000001A), func_168(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_165(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_171(0x0000001B), func_168(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									iVar25 = 0x00000000;
									iVar26 = 0x00000000;
									iVar27 = 0x00000000;
									iVar28 = 0x00000000;
									iVar29 = 0x00000000;
									iVar31 = 0x00000000;
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										bVar50 = 0x00000000;
										bVar51 = 0x00000000;
										iVar14 = 0x00000000;
										while (iVar14 < 0x00000004)
										{
											if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005 || Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
											{
												bVar51 = 0x00000001;
											}
											else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
											{
												bVar50 = 0x00000001;
											}
											iVar14++;
										}
										func_173(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_273(bVar32);
										}
										unk_0x070005E852D4C0E9(&(Global_574E.f_49[iVar24 /*6*/]));
									}
									iVar14 = 0x00000000;
									while (iVar14 < 0x00000004)
									{
										if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000001;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
										{
											iVar25++;
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_574E.f_49[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 0x00000008;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000005;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6B012227B3921E18(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000006;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000007;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0xD06AC7C87A34A6AD(&(Global_258E24[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 0x00000009;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 0x00000002;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
										{
											if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
											{
												unk_0x21994591120B91F0(Global_574E.f_104F[(iVar21 + iVar27)], Global_574E.f_10D0[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 0x00000003;
										}
										else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000002 || Global_574E.f_1151[(iVar22 + iVar28)] == 0x00000033) || Global_574E.f_1151[(iVar22 + iVar28)] == 0x0000003D)
											{
												if (func_165(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_165(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
													{
														func_279(Global_574E.f_1151[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 0x00000001)
														{
															if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_171(Global_574E.f_1151[(iVar22 + iVar28)]), func_168(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_171(Global_574E.f_1151[(iVar22 + iVar28)]), func_168(Global_574E.f_1151[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 0x00000004;
										}
										iVar14++;
									}
									if (unk_0x12AB0310C2281427(&(Global_574E.f_49[iVar24 /*6*/])) != 0x00000000 && iVar5 == 0x00000001)
									{
										if (iVar31 == 0x00000004 && Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											unk_0xE0026608C37C7C41(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0x00000000);
										}
										else
										{
											unk_0xE0026608C37C7C41((fVar34 + fVar40), fVar35, 0x00000000);
											if (func_272() && unk_0x8A22C4C08282BF26(joaat("fm_mission_creator")) > 0x00000000)
											{
												if (iVar8 == 0x00000000)
												{
													func_173(0x00000000, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0xD3539A877EC25E86(0f, (0.35f * 0.7f));
													unk_0x7178F32F6742C936(0x000000FF, 0x000000FF, 0x000000FF, 0x00000096);
													unk_0xC1032CAC14DE468A((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0x00000000);
													unk_0x070005E852D4C0E9(&cVar75);
													unk_0x6D99DF8263D35CE5((Global_574E.f_166A + iVar30));
													unk_0xE0026608C37C7C41((fVar34 - fVar80), (fVar35 + fVar79), 0x00000000);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0x00000000)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0x00000000;
										while (iVar14 < iVar28)
										{
											if ((Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000002 && Global_574E.f_1151[(iVar22 + iVar14)] != 0x00000033) && Global_574E.f_1151[(iVar22 + iVar14)] != 0x0000003D)
											{
												if (func_165(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 0x00000001)
													{
														if (func_165(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
														{
															func_279(Global_574E.f_1151[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_574E.f_1151[(iVar22 + iVar14)] == 0x0000001E)
															{
																unk_0x539E86AE011A8B38(func_171(Global_574E.f_1151[(iVar22 + iVar14)]), func_168(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (Global_574B + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else if (Global_574E.f_13DB[iVar8] == 0x00000002)
															{
																unk_0x539E86AE011A8B38(func_171(Global_574E.f_1151[(iVar22 + iVar14)]), func_168(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
															else
															{
																unk_0x539E86AE011A8B38(func_171(Global_574E.f_1151[(iVar22 + iVar14)]), func_168(Global_574E.f_1151[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = 0x00000001;
								iVar19++;
								iVar14 = 0x00000000;
								while (iVar14 < 0x00000004)
								{
									if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000001)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000008)
									{
										iVar19++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000002)
									{
										iVar20++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000003)
									{
										iVar21++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000004)
									{
										iVar22++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000005)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000006)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000007)
									{
										iVar23++;
									}
									else if (Global_574E.f_84C[iVar24 /*5*/][iVar14] == 0x00000009)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 0x00000002:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_173(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_273(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x6D99DF8263D35CE5(Global_574E.f_F4E[iVar20]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_171(0x0000001A), func_168(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_165(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_171(0x0000001B), func_168(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									if (iVar5 == 0x00000001)
									{
										func_173(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										func_271((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_F4E[iVar20], 0x00000000);
									}
								}
								bVar39 = 0x00000001;
								iVar20++;
								break;
							
							case 0x00000003:
								if (bVar33)
								{
									if (!Global_574E.f_1661)
									{
										func_173(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
										if (Global_574E.f_20DD && Global_574E.f_20DE == iVar6)
										{
											func_273(bVar32);
										}
										unk_0xBBA442527B4BB1A6("NUMBER");
										unk_0x21994591120B91F0(Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
										fVar41 = unk_0x79E367314AFBB5CA(0x00000001);
										fVar40 = 0f;
										if (Global_574E.f_13DB[iVar8] == 0x00000002)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_574E.f_13DB[iVar8] == 0x00000000)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
										Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
										fVar41 = Global_574E.f_206C[((iVar9 * Global_574E.f_146A) + iVar8)];
									}
									if (bVar52)
									{
										if (func_165(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, 0x00000000))
										{
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_165(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_171(0x0000001A), func_168(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
										if (func_165(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_165(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 0x00000001)
												{
													unk_0x539E86AE011A8B38(func_171(0x0000001B), func_168(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
												}
											}
										}
									}
									func_173(bVar32, Global_574E.f_64A[iVar24], Global_574E.f_74B[iVar24], bVar53, 0x00000000, 0x00000000, 0x00000000);
									func_270((fVar34 + fVar40), fVar35, "NUMBER", Global_574E.f_104F[iVar21], Global_574E.f_10D0[iVar21]);
								}
								bVar39 = 0x00000001;
								iVar21++;
								break;
							
							case 0x00000004:
								if (bVar33)
								{
									if (func_165(Global_574E.f_1151[iVar22], bVar32, 0x00000000, &fVar36, &fVar37, bParam7))
									{
										if (!Global_574E.f_1661)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_574E.f_13DB[iVar8] == 0x00000002)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_574E.f_13DB[iVar8] == 0x00000000)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar40;
											Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_574E.f_2043[((iVar9 * Global_574E.f_146A) + iVar8)];
											fVar42 = Global_574E.f_2095[((iVar9 * Global_574E.f_146A) + iVar8)];
										}
										if (bVar52)
										{
											if (func_165(0x0000001A, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												if (Global_574E.f_13DB[iVar8] == 0x00000002)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_165(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_279(0x0000001A, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_171(0x0000001A), func_168(0x0000001A, 0x00000001), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
											if (func_165(0x0000001B, 0x00000001, 0x00000000, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_165(0x0000001B, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
												{
													func_279(0x0000001B, 0x00000001, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 0x00000001)
													{
														unk_0x539E86AE011A8B38(func_171(0x0000001B), func_168(0x0000001B, 0x00000001), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
													}
												}
											}
										}
										if (iVar5 == 0x00000001)
										{
											if (func_165(Global_574E.f_1151[iVar22], bVar32, 0x00000001, &fVar36, &fVar37, bParam7))
											{
												func_279(Global_574E.f_1151[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x539E86AE011A8B38(func_171(Global_574E.f_1151[iVar22]), func_168(Global_574E.f_1151[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_269(Global_574E.f_1151[iVar22])), (fVar37 * func_269(Global_574E.f_1151[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0x00000000);
											}
										}
									}
								}
								bVar39 = 0x00000001;
								iVar22++;
								break;
							
							case 0x00000005:
								bVar39 = 0x00000001;
								break;
						}
						if (Global_574E.f_13C0[iVar8] == 0x00000005)
						{
							if (Global_574E.f_13CC[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
							if (Global_574E.f_13D3[iVar8])
							{
								if (func_165(0x0000001A, 0x00000001, 0x00000001, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_574E.f_13CC[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_574E.f_1F66[iVar9] = iVar6;
						Global_574E.f_166C = iVar6;
						iVar9++;
						if (Global_574E.f_14EC[iVar6])
						{
							iVar13++;
						}
						if (Global_574E.f_1671[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_574E.f_1671[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_574E.f_1660)
					{
						Global_574E.f_156D[iVar6] = 0x00000001;
						if (Global_574E.f_146B[iVar6])
						{
							if (bVar32)
							{
								Global_574E.f_1666 = 0x00000000;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_574E.f_1666 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_574E.f_1660)
			{
				Global_574E.f_1662 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_574E.f_1665 = iVar11;
				Global_574E.f_1663 = iVar10;
				Global_574E.f_1660 = 0x00000001;
			}
		}
		if (!Global_574E.f_1661)
		{
			Global_574E.f_1664 = iVar9;
			Global_574E.f_1661 = 0x00000001;
		}
		iVar5++;
	}
	Global_574E.f_16F4 = fVar49;
	Global_574E.f_16F6 = unk_0x1C0640BA9A7327B3();
	unk_0xD668DA5CA4A1D2C8(Global_574E.f_16F4);
	if (!Global_574E.f_20BE)
	{
		func_262(0x00000000);
	}
	Global_574E.f_20BE = 0x00000000;
	if (bParam2)
	{
		unk_0x3584F71E5CA29322(0x0000000A);
	}
	unk_0x3584F71E5CA29322(0x00000006);
	unk_0x3584F71E5CA29322(0x00000007);
	unk_0x3584F71E5CA29322(0x00000009);
	unk_0x3584F71E5CA29322(0x00000008);
	if (bParam0)
	{
		func_186(0x00000001);
	}
	unk_0xD59EF13BB60323B9();
}

void func_262(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (!Global_4C1E.f_1 == 0x00000001)
	{
		if (func_267(0x00000000))
		{
			func_263(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000002);
	}
}

void func_263(int iParam0)
{
	if (func_268())
	{
		return;
	}
	if (Global_4CD0)
	{
		if (func_266())
		{
			func_265(0x00000001, 0x00000001);
		}
		else
		{
			func_265(0x00000000, 0x00000000);
		}
	}
	if (Global_4C1E.f_1 == 0x0000000A || Global_4C1E.f_1 == 0x00000009)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBD, 0x00000010);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(0x00000000);
	}
	Global_5145 = 0x00000005;
	if (iParam0 == 0x00000001)
	{
		unk_0x5D96D8530B3D0904(&Global_1CBC, 0x0000001E);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_1CBC, 0x0000001E);
	}
	if (!func_264())
	{
		Global_4C1E.f_1 = 0x00000003;
	}
}

int func_264()
{
	if (Global_4C1E.f_1 == 0x00000001 || Global_4C1E.f_1 == 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_265(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_267(0x00000000))
		{
			Global_4CD0 = 0x00000001;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_4BDF);
			}
			Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
	else if (Global_4CD0 == 0x00000001)
	{
		Global_4CD0 = 0x00000000;
		Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_4BDF);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_4BD6);
		}
	}
}

bool func_266()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000005);
}

int func_267(int iParam0)
{
	if (iParam0 == 0x00000001)
	{
		if (Global_4C1E.f_1 > 0x00000003)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_1CBC, 0x0000000E))
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else
		{
			return 0x00000000;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_268()
{
	return unk_0xEAE0D21A50E6C7F4(Global_19C087, 0x00000013);
}

float func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x00000035:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_270(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x21994591120B91F0(fParam3, iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

void func_271(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, iParam4);
}

bool func_272()
{
	return unk_0xC146D5FBD23C6954(0x96F02EE6);
}

void func_273(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000000], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xA402F6C87C08815C(Global_574E.f_20DA[0x00000001], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, 0x000000FF);
}

void func_274(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_260(&iVar0, 0x00000000, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_285(bParam4, bParam8))
	{
		return;
	}
	if (func_277())
	{
		return;
	}
	if (unk_0x4FD68D5821EE3E19())
	{
		return;
	}
	if (iParam7 == 0x00000000)
	{
		if (func_275(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			return;
		}
	}
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xDAC65F45B0B2D176() == 0x00000000 || unk_0x4FD68D5821EE3E19())
		{
			return;
		}
	}
	if (Global_574E.f_12A1 != 0x00000000)
	{
		if (unk_0xB8E3620B82AD47D7(0x00000002))
		{
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (Global_574E.f_13A2[iVar1] != 0x00000169)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xF59058FCB716F903(0x00000002, Global_574E.f_13A2[iVar1], 0x00000001), 64);
				}
				else if (Global_574E.f_13AF[iVar1] != 0x00000020)
				{
					StringCopy(&(Global_574E.f_12A3[iVar1 /*16*/]), unk_0xE32F7AC5E6DF304A(0x00000002, Global_574E.f_13AF[iVar1], 0x00000001), 64);
				}
				iVar1++;
			}
			Global_574E.f_12A2 = 0x00000000;
		}
		if (!Global_574E.f_12A2)
		{
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "CLEAR_ALL");
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x7C19E5E4784BD7CF((1f - (Global_574E.f_13D9 / 100f)));
			unk_0x7E60D21B163E9D56();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x1200CC973A2399C8(0x00000001);
				unk_0x7E60D21B163E9D56();
			}
			iVar1 = 0x00000000;
			while (iVar1 < Global_574E.f_12A1)
			{
				if (unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar1 /*4*/])) != unk_0x12AB0310C2281427("PREV"))
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0x3CAEA85DA607305E(iVar1);
					func_191(&(Global_574E.f_12A3[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 0x0000000C && unk_0x12AB0310C2281427(&(Global_574E.f_1364[iVar2 /*4*/])) == unk_0x12AB0310C2281427("PREV"))
					{
						func_191(&(Global_574E.f_12A3[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_574E.f_1395[iVar1] == 0xFFFFFFFF)
					{
						func_190(&(Global_574E.f_1364[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_574E.f_1395[iVar1];
						if (iParam2 >= 0x00000000)
						{
							iVar3 = iParam2;
						}
						unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x164431059FF80580(iVar3, 0x00000046);
						}
						else
						{
							unk_0x6D99DF8263D35CE5(iVar3);
						}
						unk_0x779B34565F4D71B1();
					}
					if (unk_0x0EFF6B4415DAF4A1())
					{
						if (Global_574E.f_13A2[iVar1] != 0x00000169 && unk_0xEAE0D21A50E6C7F4(Global_574E.f_13BC, iVar1))
						{
							unk_0x1200CC973A2399C8(0x00000001);
							unk_0x3CAEA85DA607305E(Global_574E.f_13A2[iVar1]);
						}
						else
						{
							unk_0x1200CC973A2399C8(0x00000000);
							unk_0x3CAEA85DA607305E(0x00000169);
						}
					}
					unk_0x7E60D21B163E9D56();
				}
				iVar1++;
			}
			if (unk_0x12AB0310C2281427(&(Global_412185.f_10)) != unk_0x12AB0310C2281427(""))
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0x3CAEA85DA607305E(Global_574E.f_12A1);
				func_191(&Global_412185);
				if (Global_412185.f_14 == 0xFFFFFFFF)
				{
					func_190(&(Global_412185.f_10));
				}
				else
				{
					iVar4 = Global_574E.f_1395[iVar1];
					if (iParam2 >= 0x00000000)
					{
						iVar4 = iParam2;
					}
					unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
					if (bParam5)
					{
						unk_0x164431059FF80580(iVar4, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iVar4);
					}
					unk_0x779B34565F4D71B1();
				}
				unk_0x7E60D21B163E9D56();
			}
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000000);
			unk_0x3CAEA85DA607305E(0x00000050);
			unk_0x7E60D21B163E9D56();
			unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_574E.f_13DA)
			{
				unk_0x3CAEA85DA607305E(0x00000001);
			}
			else
			{
				unk_0x3CAEA85DA607305E(0x00000000);
			}
			unk_0x7E60D21B163E9D56();
			Global_574E.f_12A2 = 0x00000001;
		}
		iVar1 = 0x00000000;
		while (iVar1 < Global_574E.f_12A1)
		{
			if (Global_574E.f_1395[iVar1] != 0xFFFFFFFF)
			{
				if (iParam2 > 0x00000000)
				{
					unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0x3CAEA85DA607305E(iVar1);
					unk_0x7ACC3006A87F8B39(&(Global_574E.f_1364[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x164431059FF80580(iParam2, 0x00000046);
					}
					else
					{
						unk_0x6D99DF8263D35CE5(iParam2);
					}
					unk_0x779B34565F4D71B1();
					unk_0x7E60D21B163E9D56();
				}
			}
			iVar1++;
		}
		if (Global_412185.f_14 != 0xFFFFFFFF)
		{
			if (iParam2 > 0x00000000)
			{
				unk_0x7E60C62A7CE58FC8(Global_574E.f_161C[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0x3CAEA85DA607305E(iVar1);
				unk_0x7ACC3006A87F8B39(&(Global_412185.f_10));
				if (bParam5)
				{
					unk_0x164431059FF80580(iParam2, 0x00000046);
				}
				else
				{
					unk_0x6D99DF8263D35CE5(iParam2);
				}
				unk_0x779B34565F4D71B1();
				unk_0x7E60D21B163E9D56();
			}
		}
		unk_0xD02CE72B4B66DC29(0x0000004C, 0x00000042);
		unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_574E.f_20E1)
			{
				unk_0x744B56EE9DE7B57F(0x0000000F, 0f, -0.0375f);
				Global_574E.f_20E1 = 0x00000001;
			}
		}
		else if (Global_574E.f_20E1)
		{
			unk_0xA5E3ADAAA4CD5D6C(0x0000000F);
			Global_574E.f_20E1 = 0x00000000;
		}
		unk_0xD59EF13BB60323B9();
		if (Global_574E.f_13BF)
		{
			unk_0xD02CE72B4B66DC29(0x00000052, 0x00000042);
			unk_0x75BBE9A62B73769F(0f, 0f, 0f, 0f);
			unk_0xEF45C43067063F18(Global_574E.f_161C[iVar0 /*10*/], Global_574E.f_13BD, Global_574E.f_13BE, 1f, 1f, 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
			unk_0xD59EF13BB60323B9();
		}
		else
		{
			unk_0x6567AE843FADBA94(Global_574E.f_161C[iVar0 /*10*/], 0x000000FF, 0x000000FF, 0x000000FF, 0x000000FF, 0x00000000);
		}
	}
}

bool func_275(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_276(0xFFFFFFFF, 0x00000000) == 0x00000008;
	}
	else
	{
		bVar0 = Global_184507[iParam0 /*876*/].f_D3 == 0x00000008;
	}
	if (iParam1 == 0x00000001)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 0x00000008;
		}
	}
	return bVar0;
}

int func_276(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 0xFFFFFFFF)
	{
		iVar1 = func_137();
	}
	if (Global_140859[iVar1] == 0x00000001)
	{
		if (bParam1)
		{
		}
		iVar0 = 0x00000008;
	}
	else
	{
		iVar0 = Global_1407E3[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_277()
{
	vector3 vVar0;
	
	if (Global_4C1E.f_1 > 0x00000003)
	{
		return 0x00000001;
	}
	if (func_278())
	{
		vVar0 = { 0f, -500f, 0f };
		unk_0x1CFAC524932A967E(&vVar0);
		if (Global_4BE7 == 0x00000000)
		{
			if (vVar0.y > -119f)
			{
				return 0x00000001;
			}
			else
			{
				return 0x00000000;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 0x00000001;
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000000;
}

int func_278()
{
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_279(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0xA402F6C87C08815C(0x00000001, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 0x000000FF;
	switch (iParam0)
	{
		case 0x0000001C:
			*iParam2 = 0x000000C2;
			*iParam3 = 0x00000050;
			*iParam4 = 0x00000050;
			break;
		
		case 0x0000000F:
		case 0x00000004:
		case 0x00000010:
		case 0x0000001A:
		case 0x0000001B:
		case 0x00000023:
		case 0x00000022:
		case 0x00000030:
		case 0x0000002F:
		case 0x0000002A:
		case 0x00000024:
		case 0x00000025:
		case 0x00000035:
		case 0x00000027:
		case 0x00000028:
		case 0x00000026:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x00000034:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
			if (bParam1)
			{
				*iParam2 = 0x00000000;
				*iParam3 = 0x00000000;
				*iParam4 = 0x00000000;
			}
			break;
		
		case 0x00000036:
			*iParam5 = 0x00000064;
			break;
		
		case 0x0000003E:
			*iParam5 = 0x00000064;
			break;
		
		case 0x00000037:
			unk_0xA402F6C87C08815C(0x00000018, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 0x000000FF;
			break;
	}
}

void func_280(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x4B9228CE1CF0DACA(0x00000002);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1(fParam0, ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_281(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x6D99DF8263D35CE5(iParam3);
	unk_0x6D99DF8263D35CE5(iParam4);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0x00000000);
}

float func_282(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x2EBF5002C6B6A06C(sParam0))
	{
		if (unk_0x12AB0310C2281427(sParam0) == 0x00000000)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_283();
	unk_0xBBA442527B4BB1A6(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0x6D99DF8263D35CE5(iParam2);
	return unk_0x79E367314AFBB5CA(0x00000001);
}

void func_283()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xA402F6C87C08815C(0x00000001, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_574E.f_20C8)
	{
		iVar0 = Global_574E.f_20C4;
		iVar1 = Global_574E.f_20C5;
		iVar2 = Global_574E.f_20C6;
		iVar3 = Global_574E.f_20C7;
	}
	unk_0x7BBAC160090910C3(0x00000000);
	unk_0xD3539A877EC25E86(0f, 0.35f);
	unk_0x7178F32F6742C936(iVar0, iVar1, iVar2, iVar3);
	unk_0xF1F881BAAAFB43B1((Global_574B + 0.0046875f), ((Global_574B + Global_574D) - 0.0046875f));
	unk_0xAAE406A7DA443B93(0x00000000);
	unk_0x7635737DA2E9BC79(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
	unk_0xD1C3D76A894DB0A6(0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
}

void func_284(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0xC1032CAC14DE468A((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0x00000000);
}

int func_285(bool bParam0, bool bParam1)
{
	if (Global_2537E2.f_766.f_2BD != 0x00000000)
	{
		return 0x00000001;
	}
	if ((((((((!unk_0x0F1CCD77290EE12F() || (func_287(0x00000008, 0xFFFFFFFF) && func_286() != 0x00000041)) || (unk_0x8BB17FEBE0394018() != 0x00000000 && !bParam1)) || (unk_0x991B1F0980C62628() && !bParam0)) || unk_0x590766B2AF637235()) || Global_12C52) || Global_574E.f_20E0) || unk_0xE57E602827E07C9D()) || Global_181EC.f_589)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

int func_286()
{
	return Global_14082C;
}

bool func_287(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0x00000005:
			if (iParam1 > 0xFFFFFFFF)
			{
				return Global_150392.f_CB[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_150392.f_418, iParam0);
}

void func_288(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xF59058FCB716F903(0x00000002, iParam0, 0x00000001);
	if (Global_574E.f_12A1 >= 0x0000000C)
	{
		StringCopy(&Global_412185, sVar0, 64);
		StringCopy(&(Global_412185.f_10), sParam1, 16);
		Global_412185.f_14 = iParam2;
		return;
		return;
	}
	unk_0x0674E58A79778E99(&(Global_574E.f_13BC), Global_574E.f_12A1);
	StringCopy(&(Global_574E.f_12A3[Global_574E.f_12A1 /*16*/]), sVar0, 64);
	StringCopy(&(Global_574E.f_1364[Global_574E.f_12A1 /*4*/]), sParam1, 16);
	Global_574E.f_1395[Global_574E.f_12A1] = iParam2;
	Global_574E.f_13A2[Global_574E.f_12A1] = iParam0;
	Global_574E.f_13AF[Global_574E.f_12A1] = 0x00000020;
	Global_574E.f_12A1++;
}

void func_289(char* sParam0)
{
	if (Global_574E.f_129D >= 0x00000003 || Global_574E.f_129A >= 0x00000004)
	{
		return;
	}
	Global_574E.f_1258[Global_574E.f_129A] = 0x00000001;
	Global_574E.f_129A++;
	StringCopy(&(Global_574E.f_1269[Global_574E.f_129D /*16*/]), sParam0, 64);
	Global_574E.f_129D++;
}

void func_290(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1252), sParam0, 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = iParam1;
	Global_574E.f_129F = unk_0x1C0640BA9A7327B3();
	Global_574E.f_12A0 = iParam2;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_291(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_574E.f_166B = iParam0;
	Global_574E.f_16F2 = iParam2;
	if (Global_574E.f_166B < Global_574E.f_166A)
	{
		Global_574E.f_166A = Global_574E.f_166B;
	}
	else if ((Global_574E.f_1661 && Global_574E.f_166B > Global_574E.f_166C) || (!Global_574E.f_1661 && Global_574E.f_166B >= (Global_574E.f_166A + Global_574E.f_1469)))
	{
		iVar0 = Global_574E.f_166A;
		while (iVar0 <= Global_574E.f_166B)
		{
			if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
			{
				if (Global_574E.f_13E1[iVar0] != 0x00000000)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_574E.f_1469 && Global_574E.f_166A < 0x00000080)
		{
			Global_574E.f_166A++;
			iVar1 = 0x00000000;
			iVar0 = Global_574E.f_166A;
			while (iVar0 <= Global_574E.f_166B)
			{
				if (iVar0 >= 0x00000000 && iVar0 < 0x0000007F)
				{
					if (Global_574E.f_13E1[iVar0] != 0x00000000)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	if (bParam1)
	{
		StringCopy(&(Global_574E.f_1252), "", 24);
		StringCopy(&(Global_412185.f_15), "", 16);
	}
}

void func_292(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_574E.f_1), sParam0, 16);
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
}

void func_293(int iParam0, char* sParam1, char* sParam2)
{
	Global_574E = iParam0;
	func_294(0x0000001D, sParam1, sParam2);
}

void func_294(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_574E.f_1784[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_574E.f_1B75[iParam0 /*16*/]), sParam2, 64);
}

void func_295(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		StringCopy(&(Global_574E.f_49[iVar0 /*6*/]), "", 24);
		iVar1 = 0x00000000;
		while (iVar1 < 0x00000004)
		{
			Global_574E.f_84C[iVar0 /*5*/][iVar1] = 0x00000000;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000020)
	{
		StringCopy(&(Global_258E24[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_F4E[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_104F[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000100)
	{
		Global_574E.f_1151[iVar0] = 0x00000000;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000080)
	{
		Global_574E.f_13E1[iVar0] = 0x00000000;
		Global_574E.f_146B[iVar0] = 0x00000000;
		Global_574E.f_14EC[iVar0] = 0x00000000;
		Global_574E.f_16F7[iVar0] = 0f;
		Global_574E.f_156D[iVar0] = 0x00000000;
		Global_574E.f_1671[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000005)
	{
		Global_574E.f_13C0[iVar0] = 0x00000000;
		Global_574E.f_13CC[iVar0] = 0f;
		Global_574E.f_13C6[iVar0] = -1f;
		Global_574E.f_13D3[iVar0] = 0x00000000;
		Global_574E.f_13DB[iVar0] = 0x00000001;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000000C)
	{
		StringCopy(&(Global_574E.f_1364[iVar0 /*4*/]), "", 16);
		Global_574E.f_1395[iVar0] = 0xFFFFFFFF;
		Global_574E.f_13A2[iVar0] = 0x00000169;
		Global_574E.f_13AF[iVar0] = 0x00000020;
		iVar0++;
	}
	iVar0 = 0x00000000;
	while (iVar0 < 0x0000003F)
	{
		StringCopy(&(Global_574E.f_1784[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_574E.f_1B75[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0x00000000;
		while (iVar0 < 0x00000100)
		{
			Global_574E.f_64A[iVar0] = 0x00000000;
			iVar0++;
		}
	}
	StringCopy(&(Global_412185.f_10), "", 16);
	Global_412185.f_14 = 0xFFFFFFFF;
	Global_574E = 0x00000000;
	Global_574E.f_1462 = 0x00000000;
	Global_574E.f_1463 = 0x00000000;
	Global_574E.f_1464 = 0x00000000;
	Global_574E.f_1466 = 0x00000000;
	Global_574E.f_1467 = 0x00000000;
	Global_574E.f_1468 = 0x00000000;
	Global_574E.f_1465 = 0x00000000;
	Global_574E.f_16F2 = 0x00000000;
	Global_574E.f_177E = 0x00000000;
	Global_574E.f_166B = 0x00000000;
	Global_574E.f_166A = 0x00000000;
	Global_574E.f_166C = 0x00000000;
	StringCopy(&(Global_574E.f_1252), "", 24);
	Global_574E.f_129A = 0x00000000;
	Global_574E.f_129B = 0x00000000;
	Global_574E.f_129C = 0x00000000;
	Global_574E.f_129D = 0x00000000;
	Global_574E.f_129E = 0x00000000;
	Global_574E.f_129F = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_1258[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_12A0 = 0x00000000;
	StringCopy(&(Global_412185.f_15), "", 16);
	Global_412185.f_3D = 0x00000000;
	Global_412185.f_3E = 0x00000000;
	Global_412185.f_3F = 0x00000000;
	Global_412185.f_40 = 0x00000000;
	Global_412185.f_41 = 0x00000000;
	Global_412185.f_42 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_412185.f_19[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_412185.f_43 = 0x00000000;
	StringCopy(&(Global_574E.f_1), "", 16);
	Global_574E.f_13D2 = 0f;
	Global_574E.f_44 = 0x00000000;
	Global_574E.f_45 = 0x00000000;
	Global_574E.f_46 = 0x00000000;
	Global_574E.f_47 = 0x00000000;
	Global_574E.f_48 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		Global_574E.f_5[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_1670 = 0x00000000;
	Global_574E.f_166F = 0x00000000;
	Global_574E.f_166D = 0x00000000;
	Global_574E.f_166E = 0x00000000;
	Global_574E.f_12A1 = 0x00000000;
	Global_574E.f_12A2 = 0x00000000;
	Global_574E.f_1469 = 0x0000000A;
	Global_574E.f_146A = 0x00000000;
	Global_574E.f_16F4 = 0f;
	Global_574E.f_16F5 = 0f;
	Global_574E.f_1660 = 0x00000000;
	Global_574E.f_1661 = 0x00000000;
	Global_574E.f_1662 = 0f;
	Global_574E.f_1663 = 0x00000000;
	Global_574E.f_1665 = 0x00000000;
	Global_574E.f_1664 = 0x00000000;
	Global_574E.f_1666 = 0x00000000;
	Global_574E.f_1667 = 0x00000000;
	Global_574E.f_1668 = 0x00000000;
	Global_574E.f_1669 = 0x00000000;
	Global_574E.f_20DD = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000002)
	{
		Global_574E.f_1778[iVar0] = 0xFFFFFFFF;
		Global_574E.f_177B[iVar0] = 0xFFFFFFFF;
		iVar0++;
	}
	Global_574E.f_13D9 = 0f;
	Global_574E.f_13BC = 0x00000000;
	Global_574E.f_13DA = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < Global_574E.f_177F)
	{
		Global_574E.f_177F[iVar0] = 0x00000000;
		iVar0++;
	}
	Global_574E.f_20C8 = 0x00000000;
	Global_574E.f_20C3 = 0x00000000;
	Global_574E.f_20CD = 0x00000000;
	Global_574E.f_20D2 = 0x00000000;
	Global_574E.f_20D7 = 0x00000000;
	Global_574E.f_20D9 = 0x00000000;
	Global_574E.f_20DF = 0x00000000;
	Global_574B = 0.05f;
	Global_574C = 0.05f;
	Global_574D = 0.225f;
	fVar2 = unk_0x33D480CCE15C991A(0x00000000);
	if (bParam0)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_574D = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_574D = 0.225f;
	}
}

bool func_296(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_260(&iVar0, 0x00000001, iParam1))
	{
		return 0x00000000;
	}
	bVar1 = 0x00000001;
	StringCopy(&(Global_574E.f_1603[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xEA6BC48857E0AC4C(&(Global_574E.f_1603[iVar0 /*4*/])))
	{
		unk_0xD7992BEF7A9D109E(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009);
		Global_574E.f_15FC[iVar0] = 0x00000001;
		if (!unk_0x01C309A4BDFCAD82(&(Global_574E.f_1603[iVar0 /*4*/]), 0x00000009))
		{
			bVar1 = 0x00000000;
		}
	}
	unk_0x0D3BE1DE0262A012("CommonMenu", 0x00000000);
	Global_574E.f_15EE[iVar0] = 0x00000001;
	if (!unk_0x27117E2CDD4D67C3("CommonMenu"))
	{
		bVar1 = 0x00000000;
	}
	if (bParam2)
	{
		unk_0x0D3BE1DE0262A012("MPShopSale", 0x00000000);
		Global_574E.f_15F5[iVar0] = 0x00000001;
		if (!unk_0x27117E2CDD4D67C3("MPShopSale"))
		{
			bVar1 = 0x00000000;
		}
	}
	bVar2 = 0x00000000;
	StringCopy(&(Global_574E.f_161C[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_297(&(Global_574E.f_161C[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_297(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0x00000000:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				*uParam0 = unk_0xB01F55A0FD1CFD49(&(uParam0->f_1));
				uParam0->f_9 = 0x00000001;
				if (uParam0->f_7)
				{
					if (unk_0x83D8570832F172A7(*uParam0))
					{
						uParam0->f_8 = unk_0x1C0640BA9A7327B3();
						uParam0->f_9 = 0x00000002;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000001:
			if (unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_8 = unk_0x1C0640BA9A7327B3();
				uParam0->f_9 = 0x00000002;
			}
			break;
		
		case 0x00000002:
			if (!unk_0x83D8570832F172A7(*uParam0))
			{
				uParam0->f_9 = 0x00000000;
			}
			break;
	}
	return uParam0->f_9 == 0x00000002;
}

void func_298(int iParam0)
{
	Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 = iParam0;
	Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 = func_380(iParam0);
}

bool func_299()
{
	return Global_411250 == 0x00000001;
}

void func_300(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
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
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xC6F697B2083C83D4())
		{
			unk_0x31A33F7BCB08CB80(0x00000000);
		}
	}
	if (func_309())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 0x00000001;
		}
	}
	if (!unk_0x8CD06866876216F2())
	{
		iVar0 = iParam2;
		unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = 0x00000001;
		bVar2 = iParam2 & 0x00000002 != 0x00000000;
		bVar3 = iParam2 & 0x00000004 != 0x00000000;
		bVar4 = iParam2 & 0x00000008 != 0x00000000;
		bVar5 = iParam2 & 0x00000010 != 0x00000000;
		bVar6 = iParam2 & 0x00000020 != 0x00000000;
		bVar7 = iParam2 & 0x00000040 != 0x00000000;
		bVar8 = iParam2 & 0x00000080 != 0x00000000;
		bVar9 = iParam2 & 0x00000100 != 0x00000000;
		bVar10 = iParam2 & 0x00000200 != 0x00000000;
		bVar11 = iParam2 & 0x00000400 != 0x00000000;
		bVar12 = iParam2 & 0x00000800 != 0x00000000;
		bVar13 = iParam2 & 0x00001000 != 0x00000000;
		bVar14 = iParam2 & 0x00002000 != 0x00000000;
		bVar15 = iParam2 & 0x00004000 != 0x00000000;
		bVar16 = iParam2 & 0x00008000 != 0x00000000;
		bVar17 = iParam2 & 0x00010000 != 0x00000000;
		bVar18 = iParam2 & 0x00020000 != 0x00000000;
		bVar19 = iParam2 & 0x00040000 != 0x00000000;
		bVar20 = iParam2 & 0x00080000 != 0x00000000;
		bVar21 = iParam2 & 0x00100000 != 0x00000000;
		bVar22 = iParam2 & 0x00200000 != 0x00000000;
		bVar23 = iParam2 & 0x00400000 != 0x00000000;
		bVar24 = iParam2 & 0x00800000 != 0x00000000;
		bVar25 = iParam2 & 0x01000000 != 0x00000000;
		if (iParam2 & 0x02000000 != 0x00000000 || unk_0xA14BB9332558B949())
		{
			bVar1 = 0x00000000;
		}
		if (!func_203())
		{
			bVar26 = 0x00000000;
			if (bParam1 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar16 == 0x00000000 && !bVar21)
			{
				bVar26 = 0x00000001;
			}
			if (bVar10 == 0x00000001)
			{
				bVar26 = 0x00000001;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x40B8C182D63932FC(iParam0) && (unk_0xE1DBBD6CE209517C(iParam0) || iParam3 == 0x00000001))
		{
			if (iParam3 && unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(iParam0), 0x00000000))
			{
				return;
			}
			iVar27 = unk_0x9539D44F3E4492F6(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0x00000000) && unk_0x8CD06866876216F2())
				{
					unk_0x30134914EFF0516E(0x00000001);
				}
				else if (bVar14 || (!func_275(unk_0xD803B885F5E47A62(), 0x00000000) && !func_308()))
				{
					unk_0x4A4806F9D471E491(iVar27, !bVar14, 0x00000000);
				}
				if (!bVar14)
				{
					if (unk_0x8CD06866876216F2() && !bVar19)
					{
						unk_0x30134914EFF0516E(0x00000000);
					}
					Global_25033E[iParam0 /*421*/].f_F4 = 0x00000000;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_305(0x00000000, 0x00000000, 0x00000000);
					if (bVar25)
					{
						unk_0x066C43E677C08D5C();
					}
				}
				if (!func_304(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, 0x00000001, 0x00000000);
					}
				}
				if (!unk_0xD59B17D2DFF98E26(iVar27))
				{
					if (!bVar21)
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000000);
					}
					unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
				}
				else if (!bVar21)
				{
					unk_0x1E9649458B15960F(iVar27, 0x00000000);
				}
				unk_0x25C5402CC10F76CD(iVar27, 0x00000001);
				unk_0x62DE699599F0417E(iParam0, 0x00000000);
				unk_0x7569764C11F70C0A(iParam0, 0x00000000);
				if (unk_0xCCBA4C0B3BD2AB7B(iVar27) && unk_0x8A83E339B374E53A(iVar27))
				{
					unk_0xE7EE28867F07D06D(iVar27);
				}
				unk_0x46CB381A452EF99D(iVar27, 0x00000001);
				if (unk_0x93B62D155C014521(unk_0xD803B885F5E47A62()) == 0x00000000)
				{
					func_303();
					func_302();
				}
				if (unk_0x0C2635BB5127C8FB())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xEB880D98B5988D0C())
				{
				}
				Global_25033E[iParam0 /*421*/].f_F5 = 0x00000000;
				if (!bVar24)
				{
					bVar3 = 0x00000001;
				}
				if (Global_24B2D0.f_A70)
				{
					Global_24B2D0.f_A70 = 0x00000000;
				}
			}
			else
			{
				if (!func_304(iVar27) && !unk_0x20906E1D6BDC7044(iVar27))
				{
					if (!bVar22)
					{
						unk_0x20641932E5104B25(iVar27, !bVar15, 0x00000000);
					}
					if (!unk_0xD59B17D2DFF98E26(iVar27))
					{
						if (!bVar21)
						{
							unk_0x1E9649458B15960F(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x120A395B0ECB8EA5(iVar27, 0x00000001);
						}
					}
					if (func_301(Global_440000.f_38DB3))
					{
						unk_0x1E9649458B15960F(iVar27, 0x00000001);
					}
				}
				if (Global_140856)
				{
					bVar10 = 0x00000000;
				}
				if (bVar10)
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000000);
				}
				else
				{
					unk_0x62DE699599F0417E(iParam0, 0x00000001);
				}
				unk_0x25C5402CC10F76CD(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x2EF364CB160B45F2(iVar27) && !unk_0x405E212DDE472467(iVar27, 0x00000000))
					{
						unk_0x327AAEE25F323797(iVar27);
					}
				}
			}
			iVar28 = 0x00000000;
			if (bVar2)
			{
				iVar28 |= 0x00000002;
			}
			if (bVar3)
			{
				iVar28 |= 0x00000004;
			}
			if (bVar4)
			{
				iVar28 |= 0x00000008;
			}
			if (bVar5)
			{
				iVar28 |= 0x00000010;
			}
			if (bVar6)
			{
				iVar28 |= 0x00000020;
			}
			if (bVar7)
			{
				iVar28 |= 0x00000040;
			}
			if (bVar8)
			{
				iVar28 |= 0x00000080;
			}
			if (bVar9)
			{
				iVar28 |= 0x00000100;
			}
			if (bVar10)
			{
				iVar28 |= 0x00000200;
			}
			if (bVar11)
			{
				iVar28 |= 0x00000400;
			}
			if (bVar12)
			{
				iVar28 |= 0x00000800;
			}
			if (bVar13)
			{
				iVar28 |= 0x00001000;
			}
			unk_0x98E4DC66A651C9FA(iParam0, bParam1, iVar28);
		}
	}
}

bool func_301(int iParam0)
{
	return iParam0 == 0x00000011;
}

void func_302()
{
	vector3 vVar0;
	
	Global_2537E2.f_4D1 = 0x00000000;
	Global_2537E2.f_4D2 = 0x00000000;
	Global_2537E2.f_4D3 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2537E2.f_4D8 = 0xFFFFFFFF;
	Global_2537E2.f_4D9 = 0x00000000;
	Global_24B2D0.f_A7B = { vVar0 };
}

void func_303()
{
	Global_24B2D0.f_2B6 = 0x00000000;
	Global_24B2D0.f_AA6 = 0x00000000;
	Global_24B2D0.f_200 = 0x00000000;
	Global_24B2D0.f_258 = 0x00000000;
	Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_CF = 0x00000000;
	Global_24B2D0.f_A79 = 0x00000000;
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (unk_0x405E212DDE472467(iParam0, 0x00000001))
	{
		return 0x00000001;
	}
	else
	{
		iVar0 = unk_0xD1960163A3042274(iParam0, 0x950B6492);
		if (iVar0 == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_305(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x437347B10A200C4B(iParam1, 0x00000000))
	{
	}
	if (bParam0 == 0x00000001)
	{
		if (unk_0xC844350D5D58C99A(iParam1))
		{
			if (unk_0x34BFC6F0CB887BC2(iParam1))
			{
				if (!unk_0xF816C4B5324CB295(unk_0xD803B885F5E47A62(), unk_0x83FACCC48B68F9D1(iParam1)))
				{
					iVar0 = 0x00000001;
				}
			}
		}
	}
	if (iVar0 == 0x00000000)
	{
		if (iParam2 == 0x00000001)
		{
			if (bParam0 == 0x00000001)
			{
				func_307();
			}
			else if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000001))
			{
				if (unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
				{
					iVar1 = 0x00000000;
					while (iVar1 < 0x00000008)
					{
						unk_0x398B6B43792F03FE(iVar1, Global_240006.f_3A[iVar1]);
						iVar1++;
					}
				}
				unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000001);
			}
		}
		if (func_275(unk_0xD803B885F5E47A62(), 0x00000000))
		{
			unk_0xD51AAA59D51D8056(bParam0, iParam1, 0x00000001);
		}
		else
		{
			unk_0x7AEFB64DFEBF60B0(bParam0, iParam1);
		}
		unk_0xF374D547F2AC15B0(bParam0, iParam1);
		func_306(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_306(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0x00000000)
	{
		unk_0xD8B681091EBE4064(iVar0, bParam1, 0x00000001);
	}
}

void func_307()
{
	int iVar0;
	
	if (!unk_0xB7DDF77EF860941D())
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_240006.f_43, 0x00000002))
		{
			iVar0 = 0x00000000;
			while (iVar0 < 0x00000008)
			{
				Global_240006.f_3A[iVar0] = unk_0xA4FD7964FEE91ED8(iVar0);
				iVar0++;
			}
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000002);
			unk_0x5D96D8530B3D0904(&(Global_240006.f_43), 0x00000000);
		}
	}
}

bool func_308()
{
	return unk_0xEAE0D21A50E6C7F4(Global_240006, 0x00000003);
}

int func_309()
{
	if (Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_23 && !Global_2567E2.f_B1E.f_D7 == 0xFFFFFFFF)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_310()
{
	Global_2537E2.f_484.f_A = 0x00000001;
}

void func_311(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = func_312(*uParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		*uParam0 = 0xFFFFFFFF;
		return;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000001;
			*uParam0 = 0xFFFFFFFF;
			return;
		}
	}
	*uParam0 = 0xFFFFFFFF;
}

int func_312(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_313(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	if (iVar0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	if (!unk_0xE1DBBD6CE209517C(unk_0xA30EC016B12C03E4()))
	{
		return 0x00000000;
	}
	if (func_267(0x00000000))
	{
		return 0x00000000;
	}
	if (unk_0x22A8E52414415B76())
	{
		return 0x00000000;
	}
	if (iVar0 > 0xFFFFFFFF && iVar0 < 0x00000006)
	{
		if (Global_A4A7[iVar0 /*32*/] == 0x00000001 && Global_A4A7[iVar0 /*32*/].f_4 == 0x00000001)
		{
			if (bParam1)
			{
				if (Global_A4A7[iVar0 /*32*/].f_1D)
				{
					return 0x00000000;
				}
			}
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000001;
			return 0x00000001;
		}
		else
		{
			if (Global_A4A7[iVar0 /*32*/] == 0x00000000)
			{
			}
			if (Global_A4A7[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0x00000000;
}

bool func_314(int iParam0)
{
	if (iParam0 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_1A, 0x0000001A);
}

void func_315(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x8A22C4C08282BF26(joaat("context_controller")) < 0x00000001)
	{
	}
	if (unk_0x991B1F0980C62628())
	{
		if (!*uParam0 == 0xFFFFFFFF)
		{
			func_311(uParam0);
		}
		return;
	}
	if (!*uParam0 == 0xFFFFFFFF)
	{
		return;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000006)
	{
		if (!Global_A4A7[iVar0 /*32*/])
		{
			Global_A4A7[iVar0 /*32*/] = 0x00000001;
			Global_A4A7[iVar0 /*32*/].f_1 = Global_A570;
			Global_A570++;
			Global_A4A7[iVar0 /*32*/].f_4 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_1D = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_5 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_A4A7[iVar0 /*32*/].f_8), sParam2, 16);
			Global_A4A7[iVar0 /*32*/].f_6 = iParam3;
			Global_A4A7[iVar0 /*32*/].f_1F = unk_0x0D0A574C76D769AC();
			Global_A4A7[iVar0 /*32*/].f_7 = 0x00000000;
			Global_A4A7[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xEA6BC48857E0AC4C(sParam4))
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000001;
				StringCopy(&(Global_A4A7[iVar0 /*32*/].f_D), sParam4, 64);
				Global_A4A7[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_A4A7[iVar0 /*32*/].f_C = 0x00000000;
				Global_A4A7[iVar0 /*32*/].f_1E = 0x00000000;
			}
			*uParam0 = Global_A4A7[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_316(int iParam0)
{
	if (func_317(iParam0, 0x00000001))
	{
		return Global_18D84D[func_326() /*615*/].f_B.f_1C2;
	}
	return 0xFFFFFFFF;
}

bool func_317(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_318(iParam0))
		{
			return 0x00000000;
		}
	}
	return Global_18D84D[iParam0 /*615*/].f_B != func_411();
}

int func_318(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (Global_18D84D[iParam0 /*615*/].f_B != func_411())
		{
			return Global_18D84D[iParam0 /*615*/].f_B == iParam0;
		}
	}
	return 0x00000000;
}

int func_319()
{
	if (((((((((func_335("TCP_USED") || func_335("CAS_MG_CBAN")) || func_335("CAS_MG_CTIME")) || func_322("CAS_MG_MEMB2", func_323(0x00000001))) || func_335("CAS_MG_SUITE2")) || func_335("CAS_MG_NOCHIPS3")) || func_335("CAS_MG_LOWCHIPS3")) || func_335("CAS_MG_NOCHIPS7")) || func_335("CAS_MG_LOWCHIPS7")) || func_335("TCP_NA"))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_320()
{
	if (!unk_0x7A7BDE279347E517(func_323(0x00000000), 0x00000000, 0x00000001, 0x00000000, 0xFFFFFFFF, 0x00000000))
	{
		func_223("MAITRD_M_D0E", 0xFFFFFFFF);
	}
	else if (func_324(unk_0xD803B885F5E47A62()))
	{
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_199459.f_5, 0x0000001F))
	{
	}
	else if (Global_411250 != 0x00000000)
	{
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(Global_199459.f_5), 0x0000001E);
	}
}

void func_321(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_322(char* sParam0, int iParam1)
{
	unk_0xCECE25C7ECD44603(sParam0);
	unk_0x6D99DF8263D35CE5(iParam1);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_323(bool bParam0)
{
	if (bParam0)
	{
		return 0x000001F4;
	}
	return 0x000001F4;
}

bool func_324(int iParam0)
{
	if (iParam0 == func_411())
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000012);
}

bool func_325()
{
	return unk_0xEAE0D21A50E6C7F4(Global_184507[unk_0xD803B885F5E47A62() /*876*/].f_112.f_171.f_1, 0x00000012);
}

int func_326()
{
	return Global_18D84D[unk_0xD803B885F5E47A62() /*615*/].f_B;
}

bool func_327(bool bParam0)
{
	return func_317(unk_0xD803B885F5E47A62(), bParam0);
}

int func_328(int iParam0)
{
	if (iParam0 != func_411())
	{
		return Global_184507[iParam0 /*876*/].f_112.f_171 != 0x00000000;
	}
	return 0x00000000;
}

int func_329()
{
	if (func_332() <= 0x00000000)
	{
		return 0x00000000;
	}
	if (func_331() <= 0x00000000)
	{
		return 0x00000001;
	}
	if (func_330())
	{
		return 0x00000002;
	}
	return 0x00000003;
}

bool func_330()
{
	return Global_19E13D != 0x00000000;
}

int func_331()
{
	return (Global_40001.f_671E + func_111());
}

int func_332()
{
	return (Global_40001.f_671F - func_111());
}

bool func_333()
{
	return func_329() != 0x00000003;
}

void func_334(char* sParam0)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0x00000000, 0x00000001, 0x00000001, 0xFFFFFFFF);
}

bool func_335(char* sParam0)
{
	unk_0xCECE25C7ECD44603(sParam0);
	return unk_0xE3789B9938DCEAE8(0x00000000);
}

int func_336(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0xFFFFFFFF;
	switch (iParam0)
	{
		case 0x00000000:
			iVar0 = 0xCD517CA1;
			break;
		
		case 0x00000001:
			iVar0 = 0x4E7306F6;
			break;
		
		case 0x00000002:
			iVar0 = 0x3D047ACE;
			break;
		
		case 0x00000005:
			iVar0 = 0x3E510ED6;
			break;
		
		case 0x00000003:
			iVar0 = 0x65272E8B;
			break;
		
		case 0x00000004:
			iVar0 = 0x4432A44A;
			break;
	}
	if (!unk_0x829DE4CDEA2FE156(iVar0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_337()
{
	return unk_0x8BB17FEBE0394018() != 0x00000000;
}

int func_338()
{
	if (Global_40EB30.f_38E == 0x00000001)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_339()
{
	if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 != 0xFFFFFFFF)
	{
		Local_159.f_2 = 0x00000000;
		Local_159.f_3 = 0x00000000;
		Local_159.f_4 = 0x00000000;
		Local_159.f_6 = 0x00000000;
		Local_159.f_16 = 0x00000000;
		Local_158[unk_0xD803B885F5E47A62() /*9*/] = 0x00000000;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0x00000000;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_3 = 0x00000000;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_5 = 0x00000000;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_4 = 0x00000000;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 = 0xFFFFFFFF;
		Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 = 0xFFFFFFFF;
	}
}

bool func_340()
{
	return Global_26B66F.f_19BF;
}

int func_341()
{
	if ((func_342() != 0xFFFFFFFF && func_342() != 0x0000001C) && func_342() != 0x00000011)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_342()
{
	return Global_EC6CD;
}

bool func_343()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2564C8.f_2, 0x0000000B);
}

bool func_344()
{
	return Global_2564C8.f_24F;
}

int func_345(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0x00000000)
	{
		return 0x00000000;
	}
	if (!unk_0xC844350D5D58C99A(iParam0))
	{
		return 0x00000000;
	}
	iVar0 = func_347(iParam0);
	iVar1 = func_346(iVar0);
	if (iVar1 == 0xFFFFFFFF)
	{
		return 0xFFFFFFFF;
	}
	return Global_A58F[iVar1 /*5*/].f_3;
}

int func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (Global_A58F[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_347(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0x00000000)
	{
		return 0xFFFFFFFF;
	}
	iVar0 = 0x00000000;
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000010)
	{
		if (iParam0 == Global_A58F[iVar0 /*5*/].f_1)
		{
			return Global_A58F[iVar0 /*5*/];
		}
		iVar0++;
	}
	return 0xFFFFFFFF;
}

int func_348()
{
	int iVar0;
	
	if (func_317(unk_0xD803B885F5E47A62(), 0x00000001))
	{
		iVar0 = func_326();
		if (func_62(iVar0, 0x00000001, 0x00000001) && unk_0xEAE0D21A50E6C7F4(Global_184507[iVar0 /*876*/].f_112.f_171.f_3, 0x00000006))
		{
			return 0x00000001;
		}
		if ((func_353(unk_0xD803B885F5E47A62(), 0x00000000) && func_351(unk_0xD803B885F5E47A62())) || func_349(unk_0xD803B885F5E47A62()))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_349(int iParam0)
{
	if (func_350(iParam0) != func_411())
	{
		return func_350(iParam0) == func_227(iParam0);
	}
	return 0x00000000;
}

int func_350(int iParam0)
{
	return Global_18D84D[iParam0 /*615*/].f_B.f_23;
}

int func_351(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0xFFFFFFFF)
	{
		return func_352(iParam0, 0x00000009);
	}
	return 0x00000000;
}

bool func_352(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_18D84D[iParam0 /*615*/].f_B.f_4, iParam1);
}

int func_353(int iParam0, int iParam1)
{
	if (Global_18D84D[iParam0 /*615*/].f_B.f_21 != 0xFFFFFFFF || (iParam1 && Global_18D84D[iParam0 /*615*/].f_B.f_20 != 0xFFFFFFFF))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_354()
{
	if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_412() /*421*/].f_136.f_4, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Global_199459.f_6, 0x0000000A))
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_355(int iParam0, vector3 vParam1, float fParam2)
{
	return func_356(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), unk_0xD9522BA9E27E1349(iParam0), vParam1, fParam2);
}

bool func_356(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { unk_0x8A5E176FF719A014(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_357(func_358(vVar0), func_358(vParam2 - vParam0));
	return unk_0x3DCA5D50DD292443(fVar1) <= fParam3;
}

float func_357(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_358(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

Vector3 func_359(int iParam0)
{
	if (Local_159.f_1A == 0x00000001)
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 0x00000001:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 0x00000002:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 0x00000003:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00000000:
				return 1142.798f, 263.5501f, -51.7869f;
			
			case 0x00000001:
				return 1142.82f, 264.2595f, -51.8004f;
			
			case 0x00000002:
				return 1143.339f, 264.7519f, -51.8289f;
			
			case 0x00000003:
				return 1144.052f, 264.7396f, -51.7913f;
			
			case 0x00000004:
				return 1146.849f, 261.9344f, -51.8167f;
			
			case 0x00000005:
				return 1146.865f, 261.2238f, -51.8003f;
			
			case 0x00000006:
				return 1146.325f, 260.7546f, -51.812f;
			
			case 0x00000007:
				return 1145.63f, 260.7765f, -51.7979f;
			
			case 0x00000008:
				return 1134.411f, 266.1568f, -50.9898f;
			
			case 0x00000009:
				return 1133.708f, 266.1863f, -50.9883f;
			
			case 0x0000000A:
				return 1133.242f, 266.7186f, -50.9969f;
			
			case 0x0000000B:
				return 1133.261f, 267.4263f, -50.9812f;
			
			case 0x0000000C:
				return 1149.42f, 251.1891f, -50.9655f;
			
			case 0x0000000D:
				return 1148.727f, 251.1957f, -50.9855f;
			
			case 0x0000000E:
				return 1148.236f, 251.7239f, -51.0083f;
			
			case 0x0000000F:
				return 1148.262f, 252.4149f, -51.0019f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_360(int iParam0, vector3 vParam1, float fParam2)
{
	return SYSTEM::VDIST2(unk_0x68F4C0EC296D3901(iParam0, 0x00000001), vParam1) <= (fParam2 * fParam2);
}

Vector3 func_361(int iParam0)
{
	int iVar0;
	
	if (Local_159.f_1A == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
	}
	else if (func_380(iParam0) == 0x00000000 || func_380(iParam0) == 0x00000001)
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 0x98FFA2D1, 0x00000000, 0x00000000, 0x00000000);
	}
	else
	{
		iVar0 = unk_0x4B72871A3BE7B474(func_76(func_380(iParam0)), 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
	}
	if (unk_0xC844350D5D58C99A(iVar0) && unk_0x1A5AE8A9B1D42A10(iVar0))
	{
		switch (iParam0)
		{
			case 0x00000000:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000001:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000002:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000003:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000004:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000005:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x00000006:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x00000007:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x00000008:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x00000009:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000A:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000B:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			
			case 0x0000000C:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_04"));
			
			case 0x0000000D:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_03"));
			
			case 0x0000000E:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_02"));
			
			case 0x0000000F:
				return unk_0xDAB786DCAB70E241(iVar0, unk_0xF653B9B22DA806A9(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_362(int iParam0)
{
	return Global_181EC.f_158 == iParam0;
}

void func_363(int iParam0)
{
	Local_159.f_31E = iParam0;
}

void func_364(int iParam0)
{
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000020)
	{
		return;
	}
	func_228(&(Local_158[iParam0 /*9*/]), 0x00000000);
	Local_158[iParam0 /*9*/].f_7.f_1 = 0xFFFFFFFF;
}

int func_365()
{
	if (Local_159.f_1A == 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(Local_159.f_22))
		{
			unk_0x523BCC9DC80CD82F(0x24D60401);
			if (!unk_0xB87F6CF6E5628C67(0x24D60401))
			{
				return 0x00000000;
			}
			Local_159.f_22 = unk_0x7707E48765093646(0x24D60401, func_76(0x00000000), 0x00000000, 0x00000000, 0x00000001);
			unk_0x08841CDB215AE18F(Local_159.f_22, func_76(0x00000000), 0x00000000, 0x00000000, 0x00000001);
			unk_0xD8F6A53F4799FAFE(Local_159.f_22, func_75(0x00000000));
			unk_0x1E9649458B15960F(Local_159.f_22, 0x00000001);
			unk_0x71199B01895C6202(0x24D60401);
		}
		else
		{
			return 0x00000001;
		}
	}
	else
	{
		return 0x00000001;
	}
	return 0x00000000;
}

void func_366(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 0x00000001;
}

int func_367()
{
	if (Global_2537E2.f_484.f_5 == 0xFFFFFFFF)
	{
		return 0x00000000;
	}
	return 0x00000001;
}

void func_368(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if ((func_371(unk_0xD803B885F5E47A62(), 0x00000001) || func_371(unk_0xD803B885F5E47A62(), 0x00000002)) || func_370())
			{
				func_228(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000002:
			if ((func_371(unk_0xD803B885F5E47A62(), 0x00000001) || func_371(unk_0xD803B885F5E47A62(), 0x00000002)) || func_370())
			{
				func_228(uParam0, 0x00000003);
			}
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			if (func_369())
			{
				func_228(uParam0, 0x00000008);
			}
			break;
		
		case 0x00000008:
			break;
	}
}

int func_369()
{
	if ((((func_371(unk_0xD803B885F5E47A62(), 0x00000004) || func_371(unk_0xD803B885F5E47A62(), 0x00000005)) || func_371(unk_0xD803B885F5E47A62(), 0x00000006)) || func_371(unk_0xD803B885F5E47A62(), 0x00000007)) || func_370())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_370()
{
	if (func_71(&(Local_159.f_31A), 0x00000DAC, 0x00000000))
	{
		func_69(&(Local_159.f_31A));
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_371(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0x00000000 || iVar0 >= 0x00000020)
	{
		return 0x00000000;
	}
	if (iParam0 < 0x00000000 || iParam0 >= 0x00000020)
	{
		return 0x00000000;
	}
	return unk_0xEAE0D21A50E6C7F4(Local_116.f_258[iParam0], iVar0);
}

void func_372(int iParam0, int iParam1)
{
	Global_56C3.f_9 = iParam0;
	Global_56C3.f_A = iParam1;
}

void func_373(bool bParam0)
{
	if (bParam0)
	{
		func_374(0x00000001);
		func_263(0x00000001);
	}
	if (!unk_0x1A72D8C9F025E5E3() && !unk_0x798A3F1296751F46())
	{
		unk_0x857E3CE01DEA2D26();
		unk_0x5EEBDFEE72949D59(0x00000000);
		unk_0x18B28213EC89540F(0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C8, 0x00000001);
		unk_0x38C3A68D7861DCFD(0x00000002, 0x000000C7, 0x00000001);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000C8);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C8);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000C7);
		unk_0x558EC149EB2BC0A2(0x00000002, 0x000000C7);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000C9);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000CA);
		unk_0x558EC149EB2BC0A2(0x00000000, 0x000000BB);
	}
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		if (func_343())
		{
			Global_2564C8.f_25 = 0x00000001;
		}
	}
	else
	{
		Global_2564C8.f_25 = 0x00000000;
	}
}

void func_375(bool bParam0)
{
	char* sVar0;
	
	if (Local_159.f_31E > 0x00000002 && unk_0xA4FD7964FEE91ED8(0x00000000) != 0x00000004)
	{
		if (((((!func_379() && !func_378()) && !func_377()) && !func_376()) && !func_86(unk_0xD803B885F5E47A62())) && !unk_0x0C2635BB5127C8FB())
		{
			func_300(unk_0xD803B885F5E47A62(), 0x00000001, 0x00000000, 0x00000000);
		}
		func_257();
	}
	if (Local_159.f_31E > 0x00000002)
	{
		func_257();
	}
	if (unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000000) || unk_0xEAE0D21A50E6C7F4(Local_159.f_14, 0x00000003))
	{
		sVar0 = "CasinoUI_Cards_Three";
		if ((func_380(Local_159.f_12) == 0x00000002 || func_380(Local_159.f_12) == 0x00000003) || func_417(unk_0xD803B885F5E47A62()))
		{
			sVar0 = "CasinoUI_Cards_Three_High";
		}
		func_258(0x00000001, 0xFFFFFFFF);
		unk_0xF5A41F3D3B38EFE3(sVar0);
		iLocal_172 = 0x00000001;
		Local_159.f_14 = 0x00000000;
	}
	if (unk_0x9F4FE516EAACCFC5(Local_159.f_D))
	{
		unk_0xB3A1B75CB59FEB56(0x00000000, 0x00000000, 0x00000BB8, 0x00000001, 0x00000000, 0x00000000);
		unk_0x9A8DDC7C522F5BF5(Local_159.f_D, 0x00000000);
		bLocal_173 = 0x00000000;
	}
	if (Local_159.f_1F != 0xFFFFFFFF)
	{
		func_311(&(Local_159.f_1F));
		Local_159.f_1F = 0xFFFFFFFF;
	}
	if (bParam0)
	{
		if (unk_0xEAE0D21A50E6C7F4(Local_159.f_16, 0x00000004) && unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), func_92(), "cards_idle", 0x00000003))
		{
			Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), func_232(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1), 0x00000002, 0x00000001, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
			unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_92(), "cards_fold", 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
			unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000000, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_a", 1000f, -1000f, 0x0000000D);
			unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000001, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_b", 1000f, -1000f, 0x0000000D);
			unk_0xF50FD289C7836651(unk_0x09AD4CE7DA179533(Local_116.f_44[func_41(Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2, 0x00000002, (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_1 - Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 * 4))]), Local_159.f_18, func_92(), "cards_fold_card_c", 1000f, -1000f, 0x0000000D);
			unk_0x914E6894744915F8(Local_159.f_18);
			Local_159.f_7 = 0x00000001;
		}
		else
		{
			Local_159.f_18 = unk_0xF66E5A439A080021(func_361(Local_159.f_12), func_232(Local_159.f_12), 0x00000002, 0x00000000, 0x00000000, 0x3F800000, 0x00000000, 0x3F800000);
			unk_0x753499827286A5DA(unk_0x16F2683693E537C9(), Local_159.f_18, func_231(), func_93(Local_159.f_12), 2f, -2f, 0x0000000D, 0x00000010, 0x447A0000, 0x00000000);
			unk_0x914E6894744915F8(Local_159.f_18);
		}
	}
	Local_159.f_F = 0x00000000;
	Local_159.f_17 = 0x00000000;
	Local_159.f_16 = 0x00000000;
	Local_159.f_1D = 0x00000000;
	Local_158[unk_0xD803B885F5E47A62() /*9*/].f_6 = 0x00000000;
	Local_159.f_1 = 0x00000000;
	Local_159.f_2 = 0x00000000;
	Local_159.f_3 = 0x00000000;
	Local_159.f_4 = 0x00000000;
	Local_159.f_6 = 0x00000000;
	Local_159.f_E = 0x00000000;
	if (!bParam0)
	{
		func_339();
	}
	Local_169.f_4 = func_398();
	Local_169.f_5 = func_206(&uLocal_166, 0x00000000, 0x00000000);
	if (Local_159.f_31E > 0x00000002)
	{
		if (Global_40001.f_65BA)
		{
			unk_0xE70629D68EB9B9E0(&Local_169);
		}
	}
	if (!bParam0)
	{
		unk_0x0674E58A79778E99(&(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4), 0x00000003);
	}
	if (bParam0 || Local_159.f_31E > 0x00000002)
	{
		func_250();
	}
	func_363(0x0000000A);
	func_161(0x00000000);
}

int func_376()
{
	if (unk_0x8A22C4C08282BF26(joaat("maintransition")) > 0x00000000)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_377()
{
	return Global_14086D;
}

int func_378()
{
	if (func_204() == 0x00000003 || func_204() == 0x00000002)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_379()
{
	if (func_204() == 0x00000001 || func_204() == 0x00000004)
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			return 0x00000000;
		
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			return 0x00000001;
		
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
			return 0x00000002;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
			return 0x00000003;
		
		default:
	}
	return 0x00000000;
}

void func_381()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_159.f_1A)
	{
		if (!unk_0xE5DBF9B6126856CA(Local_116.f_32[iVar0]))
		{
		}
		else
		{
			iVar1 = unk_0x1B50683925F00106(Local_116.f_32[iVar0]);
			if (func_383(iVar1))
			{
				if (func_382(iVar0))
				{
					unk_0xC6384DBF5F4B354B(iVar1, 0x00000000, 0x00000001);
				}
				else
				{
					unk_0xC6384DBF5F4B354B(iVar1, 0x00000001, 0x00000000);
				}
			}
		}
		iVar0++;
	}
}

int func_382(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4, 0x00000005) || unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4, 0x00000002))
	{
		return 0x00000000;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_4, 0x00000003))
	{
		if (Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2 != iParam0)
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

int func_383(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0x00000000))
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

void func_384()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < Local_159.f_1A)
	{
		if (Global_265DDC != iVar0 && (Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62())))
		{
			if (!unk_0xC844350D5D58C99A(Local_159.f_23[iVar0]))
			{
				func_387(iVar0);
			}
			else if (unk_0xE5DBF9B6126856CA(Local_116.f_32[iVar0]) && !unk_0xEB6A8945D1AC98A1(unk_0x1B50683925F00106(Local_116.f_32[iVar0])))
			{
				if (!iLocal_184[iVar0])
				{
					if (unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), func_45(), func_44(iVar0), 0x00000003))
					{
						if (unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), 0x64D05356))
						{
							iLocal_185[iVar0] = 0x00000001;
						}
					}
					else
					{
						iLocal_185[iVar0] = 0x00000000;
					}
					if (((iLocal_185[iVar0] || unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), func_45(), func_43(iVar0), 0x00000003)) || Local_116.f_240[iVar0] == 0x00000006) || Local_116.f_240[iVar0] == 0x00000007)
					{
						if (!unk_0xBDEB2DEEF1D23A18(Local_159.f_23[iVar0]))
						{
							unk_0x1E9649458B15960F(Local_159.f_23[iVar0], 0x00000000);
							unk_0x9F528B1B53FBC5D9(Local_159.f_23[iVar0], unk_0x1B50683925F00106(Local_116.f_32[iVar0]), unk_0x4A089F2B762B8D33(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), 0x0000EB95), 0f, 0f, 0f, 0f, 0f, 0f, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000002, 0x00000001);
						}
						iLocal_184[iVar0] = 0x00000001;
					}
				}
				else if ((unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), func_45(), func_31(iVar0), 0x00000003) && unk_0xDDCA9A4E51DADA2B(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), 0x091D5896)) || ((Local_116.f_240[iVar0] < 0x00000005 && !unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), func_45(), func_44(iVar0), 0x00000003)) && !unk_0xB4ECF989E2C1DAC8(unk_0x1B50683925F00106(Local_116.f_32[iVar0]), func_45(), func_43(iVar0), 0x00000003)))
				{
					if (unk_0xBDEB2DEEF1D23A18(Local_159.f_23[iVar0]))
					{
						unk_0x15AFB6CBDE990FB6(Local_159.f_23[iVar0], 0x00000001, 0x00000001);
						unk_0x08841CDB215AE18F(Local_159.f_23[iVar0], func_386(iVar0), 0x00000000, 0x00000000, 0x00000001);
						unk_0xC023D1C4BF532815(Local_159.f_23[iVar0], func_385(iVar0), 0x00000002, 0x00000001);
						unk_0x1E9649458B15960F(Local_159.f_23[iVar0], 0x00000001);
					}
					iLocal_184[iVar0] = 0x00000000;
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_385(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { unk_0xEEB20D14BD38615E(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 0x00000002) };
	return vVar0;
}

Vector3 func_386(int iParam0)
{
	vector3 vVar0;
	
	vVar0 = { unk_0x1BB04F10296A1C5E(func_45(), "deck_pick_up_deck", func_76(iParam0), 0f, 0f, func_75(iParam0), 0.01f, 0x00000002) };
	return vVar0;
}

void func_387(int iParam0)
{
	int iVar0;
	
	if (Local_159.f_5)
	{
		iVar0 = 0xEC2D8B81;
	}
	else
	{
		iVar0 = 0xC5E8D8AD;
	}
	unk_0x523BCC9DC80CD82F(iVar0);
	if (!unk_0xB87F6CF6E5628C67(iVar0))
	{
		return;
	}
	unk_0x3F423BF5B8125A50(func_45());
	if (!unk_0xB4AE0788C1587752(func_45()))
	{
		return;
	}
	if (!unk_0xC844350D5D58C99A(Local_159.f_23[iParam0]))
	{
		Local_159.f_23[iParam0] = unk_0xB0BE3DFBBB59A620(iVar0, func_386(iParam0), 0x00000000, 0x00000000, 0x00000001);
		unk_0x71199B01895C6202(iVar0);
		unk_0x08841CDB215AE18F(Local_159.f_23[iParam0], func_386(iParam0), 0x00000000, 0x00000000, 0x00000001);
		unk_0xC023D1C4BF532815(Local_159.f_23[iParam0], func_385(iParam0), 0x00000002, 0x00000001);
		unk_0x1E9649458B15960F(Local_159.f_23[iParam0], 0x00000001);
		unk_0x8D17794CE3273D70(func_45());
	}
}

void func_388()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	if (((func_362(0x5E44B073) || func_362(0x103C9460)) || func_417(unk_0xD803B885F5E47A62())) && !func_397())
	{
		iLocal_171 = 0x00000001;
		if (!bLocal_170)
		{
			bLocal_170 = (func_406() && func_396());
		}
	}
	else
	{
		if (iLocal_171)
		{
			func_407();
			func_394();
			iLocal_171 = 0x00000000;
		}
		return;
	}
	iVar0 = 0x00000000;
	while (iVar0 < Local_159.f_1A)
	{
		if (iVar0 != iLocal_174 && iVar0 != Local_158[unk_0xD803B885F5E47A62() /*9*/].f_2)
		{
		}
		else
		{
			bVar1 = 0x00000000;
			if (func_59(iVar0, Local_159.f_1A))
			{
				bVar1 = 0x00000001;
			}
			vVar3 = { 0f, 0f, func_75(iVar0) };
			iVar4 = 0x00000000;
			while (iVar4 < 0x00000004)
			{
				iVar5 = Local_116.f_75[(iVar0 * 4 + iVar4)];
				if (iVar5 < 0x00000000 || ((!func_362(0x5E44B073) && !func_362(0x103C9460)) && !func_417(unk_0xD803B885F5E47A62())))
				{
					iVar2 = 0x00000000;
					while (iVar2 < 0x00000003)
					{
						if (unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, iVar2)]))
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, iVar2)]));
						}
						iVar2++;
					}
				}
				else
				{
					if (Local_158[iVar5 /*9*/].f_3 > 0x00000000)
					{
						if (!unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)]))
						{
							if (func_392(Local_158[iVar5 /*9*/].f_3, bVar1) != 0x00000000)
							{
								Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)] = unk_0xB0BE3DFBBB59A620(func_392(Local_158[iVar5 /*9*/].f_3, bVar1), unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_3, 0x00000000, iVar4, bVar1, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
								unk_0x08841CDB215AE18F(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)], unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_3, 0x00000000, iVar4, bVar1, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
								unk_0xC023D1C4BF532815(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)], vVar3 + func_390(Local_158[iVar5 /*9*/].f_4, 0x00000000, iVar4, bVar1), 0x00000002, 0x00000001);
								if (!unk_0xEA6BC48857E0AC4C(func_389(Local_158[iVar5 /*9*/].f_3)))
								{
									unk_0xCEAA091B490F8407(0xFFFFFFFF, func_389(Local_158[iVar5 /*9*/].f_3), Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
								}
							}
						}
						else if (unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)]) != 0x000000FF)
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)]));
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)]))
					{
						if (unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)]) > 0x00000000)
						{
							unk_0x4FB9A846E72E2F23(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)])), 0f, 0.1f, 0x00000000)), 0x00000001);
						}
						else
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, 0x00000000)]));
						}
					}
					if (Local_158[iVar5 /*9*/].f_5 > 0x00000000)
					{
						if (!unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)]))
						{
							if (func_392(Local_158[iVar5 /*9*/].f_5, bVar1) != 0x00000000)
							{
								Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)] = unk_0xB0BE3DFBBB59A620(func_392(Local_158[iVar5 /*9*/].f_5, bVar1), unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_5, 0x00000001, iVar4, bVar1, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
								unk_0x08841CDB215AE18F(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)], unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_5, 0x00000001, iVar4, bVar1, 0x00000000)), 0x00000000, 0x00000000, 0x00000001);
								unk_0xC023D1C4BF532815(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)], vVar3 + func_390(Local_158[iVar5 /*9*/].f_4, 0x00000001, iVar4, bVar1), 0x00000002, 0x00000001);
								if (!unk_0xEA6BC48857E0AC4C(func_389(Local_158[iVar5 /*9*/].f_5)))
								{
									unk_0xCEAA091B490F8407(0xFFFFFFFF, func_389(Local_158[iVar5 /*9*/].f_5), Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
								}
							}
						}
						else if (unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)]) != 0x000000FF)
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)]));
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)]))
					{
						if (unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)]) > 0x00000000)
						{
							unk_0x4FB9A846E72E2F23(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)])), 0f, 0.1f, 0x00000000)), 0x00000001);
						}
						else
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, 0x00000001)]));
						}
					}
					if (Local_158[iVar5 /*9*/].f_4 > 0x00000000)
					{
						if (!unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)]))
						{
							if (func_392(Local_158[iVar5 /*9*/].f_4, bVar1) != 0x00000000)
							{
								Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)] = unk_0xB0BE3DFBBB59A620(func_392(Local_158[iVar5 /*9*/].f_4, bVar1), unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_4, 0x00000002, iVar4, bVar1, 0x00000001)), 0x00000000, 0x00000000, 0x00000001);
								unk_0x08841CDB215AE18F(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)], unk_0x8A5E176FF719A014(func_76(iVar0), vVar3.z, func_391(Local_158[iVar5 /*9*/].f_4, 0x00000002, iVar4, bVar1, 0x00000001)), 0x00000000, 0x00000000, 0x00000001);
								unk_0xC023D1C4BF532815(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)], vVar3 + func_390(Local_158[iVar5 /*9*/].f_4, 0x00000002, iVar4, bVar1), 0x00000002, 0x00000001);
								if (!unk_0xEA6BC48857E0AC4C(func_389(Local_158[iVar5 /*9*/].f_4)))
								{
									unk_0xCEAA091B490F8407(0xFFFFFFFF, func_389(Local_158[iVar5 /*9*/].f_4), Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)], "dlc_vw_table_games_sounds", 0x00000000, 0x00000000);
								}
							}
						}
						else if (unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)]) != 0x000000FF)
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)]));
						}
					}
					else if (unk_0xC844350D5D58C99A(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)]))
					{
						if (unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)]) > 0x00000000)
						{
							unk_0x4FB9A846E72E2F23(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)], SYSTEM::FLOOR(func_217(SYSTEM::TO_FLOAT(unk_0x81D9425174BF4F82(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)])), 0f, 0.1f, 0x00000000)), 0x00000001);
						}
						else
						{
							unk_0xF690C84DADBB3551(&(Local_159.f_28[func_393(iVar0, iVar4, 0x00000002)]));
						}
					}
				}
				iVar4++;
			}
			if (!Local_116.f_5[iVar0])
			{
				Local_159.f_8[iVar0] = 0x00000001;
			}
			else
			{
				Local_159.f_8[iVar0] = 0x00000000;
			}
		}
		iVar0++;
	}
	iLocal_174++;
	if (iLocal_174 >= Local_159.f_1A)
	{
		iLocal_174 = 0x00000000;
	}
}

char* func_389(int iParam0)
{
	switch (iParam0)
	{
		case 0x0000000A:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x00000014:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x0000001E:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x00000028:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000032:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x0000003C:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000046:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00000050:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x0000005A:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00000064:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x00000096:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000000C8:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000000FA:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x0000012C:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x0000015E:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00000190:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x000001C2:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x000001F4:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x000003E8:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 0x000005DC:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000007D0:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x000009C4:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000BB8:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 0x00000DAC:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00000FA0:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00001194:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00001388:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 0x00001770:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 0x00001B58:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00001F40:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00002328:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 0x00002710:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 0x00003A98:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 0x00004E20:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 0x000061A8:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 0x00007530:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 0x000088B8:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 0x00009C40:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 0x0000AFC8:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 0x0000C350:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_390(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0x00000000:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, 66.96f;
					
					case 0x00000001:
						return 0f, 0f, 66.96f;
					
					case 0x00000002:
						return 0f, 0f, 64.08f;
					
					default:
				}
				break;
			
			case 0x00000001:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, 21.24f;
					
					case 0x00000001:
						return 0f, 0f, 15.48f;
					
					case 0x00000002:
						return 0f, 0f, 20.16f;
					
					default:
				}
				break;
			
			case 0x00000002:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, -21.6f;
					
					case 0x00000001:
						return 0f, 0f, -25.56f;
					
					case 0x00000002:
						return 0f, 0f, -21.96f;
					
					default:
				}
				break;
			
			case 0x00000003:
				switch (iParam1)
				{
					case 0x00000000:
						return 0f, 0f, -71.64f;
					
					case 0x00000001:
						return 0f, 0f, -70.2f;
					
					case 0x00000002:
						return 0f, 0f, -68.4f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x00001388:
			case 0x00002710:
			case 0x00003A98:
			case 0x00004E20:
			case 0x000061A8:
			case 0x00007530:
			case 0x000088B8:
			case 0x00009C40:
			case 0x0000AFC8:
			case 0x0000C350:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, 68.76f;
							
							case 0x00000001:
								return 0f, 0f, 68.76f;
							
							case 0x00000002:
								return 0f, 0f, 69.48f;
							
							default:
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, 22.68f;
							
							case 0x00000001:
								return 0f, 0f, 21.96f;
							
							case 0x00000002:
								return 0f, 0f, 22.68f;
							
							default:
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -21.96f;
							
							case 0x00000001:
								return 0f, 0f, -23.04f;
							
							case 0x00000002:
								return 0f, 0f, -21.6f;
							
							default:
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -68.04f;
							
							case 0x00000001:
								return 0f, 0f, -69.84f;
							
							case 0x00000002:
								return 0f, 0f, -69.84f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, 66.96f;
							
							case 0x00000001:
								return 0f, 0f, 66.96f;
							
							case 0x00000002:
								return 0f, 0f, 64.08f;
							
							default:
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, 21.24f;
							
							case 0x00000001:
								return 0f, 0f, 15.48f;
							
							case 0x00000002:
								return 0f, 0f, 20.16f;
							
							default:
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -21.6f;
							
							case 0x00000001:
								return 0f, 0f, -25.56f;
							
							case 0x00000002:
								return 0f, 0f, -21.96f;
							
							default:
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								return 0f, 0f, -71.64f;
							
							case 0x00000001:
								return 0f, 0f, -70.2f;
							
							case 0x00000002:
								return 0f, 0f, -68.4f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_391(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 0x0000000A:
				fVar0 = 0.95f;
				break;
			
			case 0x00000014:
				fVar0 = 0.896f;
				break;
			
			case 0x0000001E:
				fVar0 = 0.901f;
				break;
			
			case 0x00000028:
				fVar0 = 0.907f;
				break;
			
			case 0x00000032:
				fVar0 = 0.95f;
				break;
			
			case 0x0000003C:
				fVar0 = 0.917f;
				break;
			
			case 0x00000046:
				fVar0 = 0.922f;
				break;
			
			case 0x00000050:
				fVar0 = 0.927f;
				break;
			
			case 0x0000005A:
				fVar0 = 0.932f;
				break;
			
			case 0x00000064:
				fVar0 = 0.95f;
				break;
			
			case 0x00000096:
				fVar0 = 0.904f;
				break;
			
			case 0x000000C8:
				fVar0 = 0.899f;
				break;
			
			case 0x000000FA:
				fVar0 = 0.914f;
				break;
			
			case 0x0000012C:
				fVar0 = 0.904f;
				break;
			
			case 0x0000015E:
				fVar0 = 0.924f;
				break;
			
			case 0x00000190:
				fVar0 = 0.91f;
				break;
			
			case 0x000001C2:
				fVar0 = 0.935f;
				break;
			
			case 0x000001F4:
				fVar0 = 0.95f;
				break;
			
			case 0x000003E8:
				fVar0 = 0.95f;
				break;
			
			case 0x000005DC:
				fVar0 = 0.904f;
				break;
			
			case 0x000007D0:
				fVar0 = 0.899f;
				break;
			
			case 0x000009C4:
				fVar0 = 0.915f;
				break;
			
			case 0x00000BB8:
				fVar0 = 0.904f;
				break;
			
			case 0x00000DAC:
				fVar0 = 0.925f;
				break;
			
			case 0x00000FA0:
				fVar0 = 0.91f;
				break;
			
			case 0x00001194:
				fVar0 = 0.935f;
				break;
			
			case 0x00001388:
				fVar0 = 0.95f;
				break;
			
			case 0x00001770:
				fVar0 = 0.919f;
				break;
			
			case 0x00001B58:
				fVar0 = 0.924f;
				break;
			
			case 0x00001F40:
				fVar0 = 0.93f;
				break;
			
			case 0x00002328:
				fVar0 = 0.935f;
				break;
			
			case 0x00002710:
				fVar0 = 0.95f;
				break;
			
			case 0x00003A98:
				fVar0 = 0.902f;
				break;
			
			case 0x00004E20:
				fVar0 = 0.897f;
				break;
			
			case 0x000061A8:
				fVar0 = 0.912f;
				break;
			
			case 0x00007530:
				fVar0 = 0.902f;
				break;
			
			case 0x000088B8:
				fVar0 = 0.922f;
				break;
			
			case 0x00009C40:
				fVar0 = 0.907f;
				break;
			
			case 0x0000AFC8:
				fVar0 = 0.932f;
				break;
			
			case 0x0000C350:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0x00000000:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { 0.59535f, 0.200875f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { 0.51655f, 0.2268f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { 0.689125f, 0.171575f, 0f };
						break;
				}
				break;
			
			case 0x00000001:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { 0.247825f, -0.123625f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { 0.2163f, -0.04745f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { 0.2869f, -0.211925f, 0f };
						break;
				}
				break;
			
			case 0x00000002:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { -0.2804f, -0.109775f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { -0.2552f, -0.031225f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { -0.30935f, -0.205675f, 0f };
						break;
				}
				break;
			
			case 0x00000003:
				switch (iParam1)
				{
					case 0x00000000:
						vVar1 = { -0.606975f, 0.249675f, 0f };
						break;
					
					case 0x00000001:
						vVar1 = { -0.529875f, 0.281425f, 0f };
						break;
					
					case 0x00000002:
						vVar1 = { -0.69795f, 0.211525f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x0000000A:
				fVar0 = 0.95f;
				break;
			
			case 0x00000014:
				fVar0 = 0.896f;
				break;
			
			case 0x0000001E:
				fVar0 = 0.901f;
				break;
			
			case 0x00000028:
				fVar0 = 0.907f;
				break;
			
			case 0x00000032:
				fVar0 = 0.95f;
				break;
			
			case 0x0000003C:
				fVar0 = 0.917f;
				break;
			
			case 0x00000046:
				fVar0 = 0.922f;
				break;
			
			case 0x00000050:
				fVar0 = 0.927f;
				break;
			
			case 0x0000005A:
				fVar0 = 0.932f;
				break;
			
			case 0x00000064:
				fVar0 = 0.95f;
				break;
			
			case 0x00000096:
				fVar0 = 0.904f;
				break;
			
			case 0x000000C8:
				fVar0 = 0.899f;
				break;
			
			case 0x000000FA:
				fVar0 = 0.914f;
				break;
			
			case 0x0000012C:
				fVar0 = 0.904f;
				break;
			
			case 0x0000015E:
				fVar0 = 0.924f;
				break;
			
			case 0x00000190:
				fVar0 = 0.91f;
				break;
			
			case 0x000001C2:
				fVar0 = 0.935f;
				break;
			
			case 0x000001F4:
				fVar0 = 0.95f;
				break;
			
			case 0x000003E8:
				fVar0 = 0.95f;
				break;
			
			case 0x000005DC:
				fVar0 = 0.904f;
				break;
			
			case 0x000007D0:
				fVar0 = 0.899f;
				break;
			
			case 0x000009C4:
				fVar0 = 0.915f;
				break;
			
			case 0x00000BB8:
				fVar0 = 0.904f;
				break;
			
			case 0x00000DAC:
				fVar0 = 0.925f;
				break;
			
			case 0x00000FA0:
				fVar0 = 0.91f;
				break;
			
			case 0x00001194:
				fVar0 = 0.935f;
				break;
			
			case 0x00001388:
				fVar0 = 0.953f;
				break;
			
			case 0x00001770:
				fVar0 = 0.919f;
				break;
			
			case 0x00001B58:
				fVar0 = 0.924f;
				break;
			
			case 0x00001F40:
				fVar0 = 0.93f;
				break;
			
			case 0x00002328:
				fVar0 = 0.935f;
				break;
			
			case 0x00002710:
				fVar0 = 0.95f;
				break;
			
			case 0x00003A98:
				fVar0 = 0.902f;
				break;
			
			case 0x00004E20:
				fVar0 = 0.897f;
				break;
			
			case 0x000061A8:
				fVar0 = 0.912f;
				break;
			
			case 0x00007530:
				fVar0 = 0.902f;
				break;
			
			case 0x000088B8:
				fVar0 = 0.922f;
				break;
			
			case 0x00009C40:
				fVar0 = 0.907f;
				break;
			
			case 0x0000AFC8:
				fVar0 = 0.932f;
				break;
			
			case 0x0000C350:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 0x00001388:
			case 0x00002710:
			case 0x00003A98:
			case 0x00004E20:
			case 0x000061A8:
			case 0x00007530:
			case 0x000088B8:
			case 0x00009C40:
			case 0x0000AFC8:
			case 0x0000C350:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.597825f, 0.20105f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.5151f, 0.22775f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.686125f, 0.171625f, 0f };
								break;
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.248425f, -0.126325f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.2144f, -0.04415f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.285325f, -0.212f, 0f };
								break;
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.281f, -0.111875f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.254775f, -0.029175f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.308175f, -0.199325f, 0f };
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.61015f, 0.24815f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.527375f, 0.283575f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.694475f, 0.214225f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0x00000000:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.59535f, 0.200875f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.51655f, 0.2268f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.689125f, 0.171575f, 0f };
								break;
						}
						break;
					
					case 0x00000001:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { 0.247825f, -0.123625f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { 0.2163f, -0.04745f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { 0.2869f, -0.211925f, 0f };
								break;
						}
						break;
					
					case 0x00000002:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.2804f, -0.109775f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.2552f, -0.031225f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.30935f, -0.205675f, 0f };
								break;
						}
						break;
					
					case 0x00000003:
						switch (iParam1)
						{
							case 0x00000000:
								vVar1 = { -0.606975f, 0.249675f, 0f };
								break;
							
							case 0x00000001:
								vVar1 = { -0.529875f, 0.281425f, 0f };
								break;
							
							case 0x00000002:
								vVar1 = { -0.69795f, 0.211525f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	if (!bParam4)
	{
		vVar1.z = fVar0;
	}
	else
	{
		vVar1.z = fVar0;
		switch (iParam0)
		{
			case 0x0000000A:
			case 0x00000032:
			case 0x00000064:
			case 0x000001F4:
			case 0x000003E8:
			case 0x00001388:
			case 0x00002710:
				vVar1.z = (vVar1.z + 0.004f);
				break;
			}
	}
	return vVar1;
}

int func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 0x0000000A:
				return 0x77B5F838;
			
			case 0x00000014:
				return 0x6B4F3F1F;
			
			case 0x0000001E:
				return 0x6B4F3F1F;
			
			case 0x00000028:
				return 0x6B4F3F1F;
			
			case 0x00000032:
				return 0xDC4EF59F;
			
			case 0x0000003C:
				return 0x6B4F3F1F;
			
			case 0x00000046:
				return 0x6B4F3F1F;
			
			case 0x00000050:
				return 0x6B4F3F1F;
			
			case 0x0000005A:
				return 0x6B4F3F1F;
			
			case 0x00000064:
				return 0x1A49472C;
			
			case 0x00000096:
				return 0x2D1BA3E7;
			
			case 0x000000C8:
				return 0x835C1F04;
			
			case 0x000000FA:
				return 0x2D1BA3E7;
			
			case 0x0000012C:
				return 0x835C1F04;
			
			case 0x0000015E:
				return 0x2D1BA3E7;
			
			case 0x00000190:
				return 0x835C1F04;
			
			case 0x000001C2:
				return 0x2D1BA3E7;
			
			case 0x000001F4:
				return 0x4B92DA34;
			
			case 0x000003E8:
				return 0xB9269F5D;
			
			case 0x000005DC:
				return 0xAB9812D9;
			
			case 0x000007D0:
				return 0xA34066AD;
			
			case 0x000009C4:
				return 0xAB9812D9;
			
			case 0x00000BB8:
				return 0xA34066AD;
			
			case 0x00000DAC:
				return 0xAB9812D9;
			
			case 0x00000FA0:
				return 0xA34066AD;
			
			case 0x00001194:
				return 0xAB9812D9;
			
			case 0x00001388:
				return 0xA629769F;
			
			case 0x00001770:
				return 0xA34066AD;
			
			case 0x00001B58:
				return 0xA34066AD;
			
			case 0x00001F40:
				return 0xA34066AD;
			
			case 0x00002328:
				return 0xA34066AD;
			
			case 0x00002710:
				return 0x0C0DA929;
			
			case 0x00003A98:
				return 0x9C296633;
			
			case 0x00004E20:
				return 0x6DA4F1B6;
			
			case 0x000061A8:
				return 0x9C296633;
			
			case 0x00007530:
				return 0x6DA4F1B6;
			
			case 0x000088B8:
				return 0x9C296633;
			
			case 0x00009C40:
				return 0x6DA4F1B6;
			
			case 0x0000AFC8:
				return 0x9C296633;
			
			case 0x0000C350:
				return 0x6DA4F1B6;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0x0000000A:
				return 0x77B5F838;
			
			case 0x00000014:
				return 0x6B4F3F1F;
			
			case 0x0000001E:
				return 0x6B4F3F1F;
			
			case 0x00000028:
				return 0x6B4F3F1F;
			
			case 0x00000032:
				return 0xDC4EF59F;
			
			case 0x0000003C:
				return 0x6B4F3F1F;
			
			case 0x00000046:
				return 0x6B4F3F1F;
			
			case 0x00000050:
				return 0x6B4F3F1F;
			
			case 0x0000005A:
				return 0x6B4F3F1F;
			
			case 0x00000064:
				return 0x1A49472C;
			
			case 0x00000096:
				return 0x2D1BA3E7;
			
			case 0x000000C8:
				return 0x835C1F04;
			
			case 0x000000FA:
				return 0x2D1BA3E7;
			
			case 0x0000012C:
				return 0x835C1F04;
			
			case 0x0000015E:
				return 0x2D1BA3E7;
			
			case 0x00000190:
				return 0x835C1F04;
			
			case 0x000001C2:
				return 0x2D1BA3E7;
			
			case 0x000001F4:
				return 0x4B92DA34;
			
			case 0x000003E8:
				return 0xB9269F5D;
			
			case 0x000005DC:
				return 0xAB9812D9;
			
			case 0x000007D0:
				return 0xA34066AD;
			
			case 0x000009C4:
				return 0xAB9812D9;
			
			case 0x00000BB8:
				return 0xA34066AD;
			
			case 0x00000DAC:
				return 0xAB9812D9;
			
			case 0x00000FA0:
				return 0xA34066AD;
			
			case 0x00001194:
				return 0xAB9812D9;
			
			case 0x00001388:
				return 0x051D3D08;
			
			case 0x00001770:
				return 0xA34066AD;
			
			case 0x00001B58:
				return 0xA34066AD;
			
			case 0x00001F40:
				return 0xA34066AD;
			
			case 0x00002328:
				return 0xA34066AD;
			
			case 0x00002710:
				return 0x7921397D;
			
			case 0x00003A98:
				return 0x43AF5497;
			
			case 0x00004E20:
				return 0xB83B34A0;
			
			case 0x000061A8:
				return 0x43AF5497;
			
			case 0x00007530:
				return 0xB83B34A0;
			
			case 0x000088B8:
				return 0x43AF5497;
			
			case 0x00009C40:
				return 0xB83B34A0;
			
			case 0x0000AFC8:
				return 0x43AF5497;
			
			case 0x0000C350:
				return 0xB83B34A0;
			}
		
		default:
	}
	return 0x00000000;
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 3 * 4 + iParam1 * 3) + iParam2);
}

void func_394()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000012)
	{
		iVar1 = func_395(iVar0);
		unk_0x71199B01895C6202(iVar1);
		iVar0++;
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
			return 0x77B5F838;
		
		case 0x00000001:
			return 0xDC4EF59F;
		
		case 0x00000002:
			return 0x1A49472C;
		
		case 0x00000003:
			return 0x4B92DA34;
		
		case 0x00000004:
			return 0xB9269F5D;
		
		case 0x00000005:
			return 0xA629769F;
		
		case 0x00000006:
			return 0x0C0DA929;
		
		case 0x00000007:
			return 0x6B4F3F1F;
		
		case 0x00000008:
			return 0x2D1BA3E7;
		
		case 0x00000009:
			return 0x835C1F04;
		
		case 0x0000000A:
			return 0xAB9812D9;
		
		case 0x0000000B:
			return 0xA34066AD;
		
		case 0x0000000C:
			return 0x9C296633;
		
		case 0x0000000D:
			return 0x6DA4F1B6;
		
		case 0x0000000E:
			return 0x051D3D08;
		
		case 0x0000000F:
			return 0x43AF5497;
		
		case 0x00000010:
			return 0x7921397D;
		
		case 0x00000011:
			return 0xB83B34A0;
		
		default:
	}
	return 0x00000000;
}

int func_396()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000012)
	{
		iVar1 = func_395(iVar0);
		unk_0x523BCC9DC80CD82F(iVar1);
		if (!unk_0xB87F6CF6E5628C67(iVar1))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

bool func_397()
{
	return unk_0xEAE0D21A50E6C7F4(Global_199459.f_6, 0x0000000C);
}

int func_398()
{
	return func_399(0x00002038, 0xFFFFFFFF, 0x00000000);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 0x00002CF7)
	{
		if (iParam2 == 0x00000000)
		{
		}
		iVar0 = Global_26E2D2[iParam0 /*3*/][func_400(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, 0xFFFFFFFF))
		{
			return uVar1;
		}
	}
	return 0x00000000;
}

int func_400(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 0xFFFFFFFF)
	{
		iVar1 = func_137();
		if (iVar1 > 0xFFFFFFFF)
		{
			Global_26E1B2 = 0x00000000;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0x00000000;
			Global_26E1B2 = 0x00000001;
		}
	}
	return iVar0;
}

void func_401()
{
	if (Local_159.f_1A == 0x00000001)
	{
		if (!unk_0xC844350D5D58C99A(iLocal_181))
		{
			iLocal_181 = unk_0x4B72871A3BE7B474(func_76(0x00000000), 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (func_412() != func_411() && unk_0x757EF87A33649210())
		{
			if (unk_0xB02B5A3616555A54(iLocal_181) != func_402(func_412()))
			{
				unk_0x4EBF23A230F3B12C(iLocal_181, func_402(func_412()));
			}
		}
	}
	else
	{
		if (!unk_0xC844350D5D58C99A(iLocal_182))
		{
			iLocal_182 = unk_0x4B72871A3BE7B474(1133.74f, 266.6947f, -52.0409f, 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (unk_0xB02B5A3616555A54(iLocal_182) != 0x00000003)
		{
			unk_0x4EBF23A230F3B12C(iLocal_182, 0x00000003);
		}
		if (!unk_0xC844350D5D58C99A(iLocal_183))
		{
			iLocal_183 = unk_0x4B72871A3BE7B474(1148.74f, 251.6947f, -52.0409f, 1f, 0x24D60401, 0x00000000, 0x00000000, 0x00000000);
		}
		else if (unk_0xB02B5A3616555A54(iLocal_183) != 0x00000003)
		{
			unk_0x4EBF23A230F3B12C(iLocal_183, 0x00000003);
		}
	}
}

int func_402(int iParam0)
{
	if (func_405(iParam0))
	{
		return 0x00000001;
	}
	else if (func_404(iParam0))
	{
		return 0x00000002;
	}
	else if (func_403(iParam0))
	{
		return 0x00000003;
	}
	return 0x00000001;
}

int func_403(int iParam0)
{
	if (iParam0 != func_411())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000015);
	}
	return 0x00000000;
}

int func_404(int iParam0)
{
	if (iParam0 != func_411())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000014);
	}
	return 0x00000000;
}

int func_405(int iParam0)
{
	if (iParam0 != func_411())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_184507[iParam0 /*876*/].f_112.f_171.f_1, 0x00000013);
	}
	return 0x00000000;
}

int func_406()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000034)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_159.f_5);
		unk_0x523BCC9DC80CD82F(iVar2);
		if (!unk_0xB87F6CF6E5628C67(iVar2))
		{
			return 0x00000000;
		}
		iVar0++;
	}
	return 0x00000001;
}

void func_407()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000034)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_40(iVar1, Local_159.f_5);
		unk_0x71199B01895C6202(iVar2);
		iVar0++;
	}
}

int func_408()
{
	if (unk_0x8CD06866876216F2() && unk_0xBFF81ED3B99522C7())
	{
		return 0x00000001;
	}
	return 0x00000000;
}

int func_409()
{
	return func_410(unk_0xD803B885F5E47A62());
}

int func_410(int iParam0)
{
	return unk_0xDC4DD3980107166C(Global_25033E[iParam0 /*421*/].f_136.f_3, 0x0000001C, 0x0000001F);
}

int func_411()
{
	return 0xFFFFFFFF;
}

int func_412()
{
	return func_413(unk_0xD803B885F5E47A62());
}

int func_413(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_411())
	{
		return iParam0;
	}
	if (func_415(iParam0) != 0xFFFFFFFF)
	{
		iVar0 = func_414(func_415(iParam0));
		if ((iVar0 == 0x00000002 || iVar0 == 0x00000001) || iVar0 == 0x00000000)
		{
			if (func_317(iParam0, 0x00000000))
			{
				return func_227(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 0x00000003)
		{
			return func_411();
		}
		return Global_25033E[iParam0 /*421*/].f_136.f_8;
	}
	return func_411();
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
		case 0x0000000A:
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
			return 0x00000000;
			break;
		
		case 0x0000003C:
		case 0x0000003D:
		case 0x0000003E:
		case 0x0000003F:
		case 0x00000040:
		case 0x00000041:
		case 0x00000042:
		case 0x00000043:
		case 0x00000044:
		case 0x00000045:
			return 0x00000001;
			break;
		
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x0000001F:
		case 0x00000020:
		case 0x00000021:
		case 0x00000022:
		case 0x00000023:
		case 0x00000024:
		case 0x00000025:
		case 0x00000026:
		case 0x00000027:
		case 0x00000028:
		case 0x00000029:
			return 0x00000002;
			break;
		
		case 0x0000002B:
		case 0x0000002A:
		case 0x0000002C:
		case 0x0000002D:
		case 0x0000002E:
		case 0x0000002F:
		case 0x00000030:
		case 0x00000031:
		case 0x00000032:
		case 0x00000033:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000037:
		case 0x00000038:
		case 0x00000039:
		case 0x0000003A:
		case 0x0000003B:
		case 0x00000062:
		case 0x00000063:
		case 0x00000064:
		case 0x00000070:
		case 0x00000071:
		case 0x00000072:
		case 0x00000073:
		case 0x00000077:
		case 0x00000074:
		case 0x00000076:
		case 0x00000078:
		case 0x00000079:
		case 0x0000007E:
		case 0x0000007F:
		case 0x00000086:
		case 0x00000087:
		case 0x00000088:
		case 0x00000089:
		case 0x0000008A:
		case 0x0000008B:
		case 0x0000008C:
		case 0x0000008D:
		case 0x0000008E:
		case 0x0000008F:
		case 0x00000090:
			return 0x00000003;
			break;
		
		case 0x00000046:
		case 0x00000047:
		case 0x00000048:
		case 0x00000049:
		case 0x0000004A:
		case 0x0000004B:
		case 0x0000004C:
		case 0x0000004D:
		case 0x0000004E:
		case 0x0000004F:
		case 0x00000050:
			return 0x00000004;
			break;
		
		case 0x00000051:
			return 0x00000005;
			break;
		
		case 0x00000052:
			return 0x00000006;
			break;
		
		case 0x00000053:
		case 0x00000054:
		case 0x00000055:
		case 0x00000056:
		case 0x00000057:
			return 0x00000007;
			break;
		
		case 0x00000058:
			return 0x00000008;
			break;
		
		case 0x00000059:
		case 0x0000005A:
		case 0x0000005B:
		case 0x0000005C:
		case 0x0000005D:
		case 0x0000005E:
		case 0x0000005F:
		case 0x00000060:
		case 0x00000061:
			return 0x00000009;
			break;
		
		case 0x00000065:
			return 0x0000000A;
			break;
		
		case 0x00000066:
		case 0x00000067:
		case 0x00000068:
		case 0x00000069:
		case 0x0000006A:
		case 0x0000006B:
		case 0x0000006C:
		case 0x0000006D:
		case 0x0000006E:
		case 0x0000006F:
			return 0x0000000B;
			break;
		
		case 0x00000075:
			return 0x0000000C;
			break;
		
		case 0x0000007A:
			return 0x0000000D;
			break;
		
		case 0x0000007B:
			return 0x0000000E;
			break;
		
		case 0x0000007C:
			return 0x0000000F;
			break;
		
		case 0x0000007D:
			return 0x00000010;
			break;
		
		case 0x00000080:
		case 0x00000081:
		case 0x00000082:
		case 0x00000083:
		case 0x00000084:
		case 0x00000085:
			return 0x00000011;
			break;
		
		case 0x00000091:
			return 0x00000012;
			break;
	}
	return 0xFFFFFFFF;
}

int func_415(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 0x00000001, 0x00000001))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5;
		}
		else if (((Global_14086D || Global_24B2D0.f_A6F) && iParam0 == unk_0xD803B885F5E47A62()) && func_62(iParam0, 0x00000001, 0x00000000))
		{
			return Global_25033E[iParam0 /*421*/].f_136.f_5;
		}
	}
	return 0xFFFFFFFF;
}

int func_416(int iParam0)
{
	if (iParam0 != func_411() && func_62(iParam0, 0x00000001, 0x00000001))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_25033E[iParam0 /*421*/].f_136, 0x00000004);
	}
	return 0x00000000;
}

int func_417(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_414(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000F;
			}
		}
	}
	return 0x00000000;
}

int func_418(int iParam0)
{
	if (iParam0 != func_411())
	{
		if (func_62(iParam0, 0x00000001, 0x00000001))
		{
			if (Global_25033E[iParam0 /*421*/].f_136.f_5 != 0xFFFFFFFF)
			{
				return func_414(Global_25033E[iParam0 /*421*/].f_136.f_5) == 0x0000000E;
			}
		}
	}
	return 0x00000000;
}

bool func_419()
{
	return unk_0xEAE0D21A50E6C7F4(Global_199459.f_3, 0x00000002);
}

void func_420()
{
	if (Local_159.f_31E > 0x00000002)
	{
		if (Global_40001.f_65B4)
		{
			unk_0x1787A8354D584871(&Local_168);
		}
	}
	if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Table_Games"))
	{
		unk_0x8910D3D58E0132B8("DLC_VW_Casino_Table_Games");
	}
	if (unk_0x562F77A7F33D2E46("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0x8910D3D58E0132B8("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_375(0x00000000);
	func_407();
	func_394();
	func_423();
	func_422();
	if (unk_0xC844350D5D58C99A(Local_159.f_22))
	{
		unk_0xF690C84DADBB3551(&(Local_159.f_22));
	}
	if (Local_159.f_31E > 0x00000000)
	{
		unk_0x8D17794CE3273D70(func_45());
		unk_0x8D17794CE3273D70(func_78());
		unk_0x8D17794CE3273D70(func_92());
		unk_0x8D17794CE3273D70(func_231());
	}
	Global_19E12E = 0x00000000;
	func_421();
}

void func_421()
{
	unk_0x10FAF14A60A0DBE1();
}

void func_422()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (iVar0 < 0x00000004)
	{
		if (unk_0xC844350D5D58C99A(Local_159.f_23[iVar0]))
		{
			if (unk_0xD59B17D2DFF98E26(Local_159.f_23[iVar0]))
			{
				unk_0x15AFB6CBDE990FB6(Local_159.f_23[iVar0], 0x00000001, 0x00000001);
			}
			unk_0xF690C84DADBB3551(&(Local_159.f_23[iVar0]));
		}
		iVar0++;
	}
}

void func_423()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0x00000030;
	iVar1 = 0x00000000;
	while (iVar1 < iVar0)
	{
		if (unk_0xC844350D5D58C99A(Local_159.f_28[iVar1]))
		{
			unk_0xF690C84DADBB3551(&(Local_159.f_28[iVar1]));
		}
		iVar1++;
	}
}

int func_424()
{
	var uVar0;
	
	func_432(&uVar0);
	if (Global_140856 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000001;
		}
	}
	if (func_431())
	{
		return 0x00000001;
	}
	if (Global_2594CA)
	{
		return 0x00000001;
	}
	if (func_430())
	{
		return 0x00000001;
	}
	if (func_429(0x0000009F))
	{
		if (!func_428())
		{
			return 0x00000001;
		}
	}
	if (func_429(0x0000009D))
	{
		return 0x00000001;
	}
	if (!unk_0x58424C49F8924842())
	{
		return 0x00000001;
	}
	if (func_425() != 0x00000000)
	{
		if (unk_0x8A22C4C08282BF26(func_425()) == 0x00000000)
		{
			return 0x00000001;
		}
	}
	return 0x00000000;
}

int func_425()
{
	switch (func_427())
	{
		case 0x00000000:
			return func_426();
			break;
		
		case 0x00000002:
			return joaat("creator");
			break;
	}
	return 0x00000000;
}

int func_426()
{
	switch (Global_259530)
	{
		case 0x00000000:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_427()
{
	return Global_7830;
}

bool func_428()
{
	return Global_2564C8.f_256;
}

int func_429(int iParam0)
{
	if (unk_0x9DCC716738C7EA49(0x00000001, iParam0))
	{
		return 0x00000001;
	}
	return 0x00000000;
}

bool func_430()
{
	return Global_258C08;
}

bool func_431()
{
	return Global_2564C8.f_251;
}

void func_432(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0x00000000;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0x00000001))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0x00000001, iVar0);
		if (iVar1 == 0x000000AE)
		{
			unk_0x218F818E64020C17(0x00000001, iVar0, &iVar2, 0x00000002);
			switch (iVar2)
			{
				case 0x918B9E9A:
					func_433(iVar0);
					break;
				
				case 0x231D58EE:
					unk_0x218F818E64020C17(0x00000001, iVar0, &vVar3, 0x00000004);
					if (vVar3.z == 0x26FA13EF)
					{
						*uParam0 = 0x00000001;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_433(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x218F818E64020C17(0x00000001, iParam0, &vVar0, 0x00000003))
	{
		if (func_62(vVar0.y, 0x00000001, 0x00000001))
		{
			iVar1 = unk_0x9539D44F3E4492F6(vVar0.y);
			if (unk_0xC844350D5D58C99A(iVar1))
			{
				if (unk_0x405E212DDE472467(iVar1, 0x00000000))
				{
					iVar2 = unk_0x6937EA2286828455(iVar1, 0x00000000);
					if (unk_0xD6CC9546EDEF00CE(iVar2, vVar0.z) && unk_0x2E9F2B9C010D34D9())
					{
						if (func_434(iVar2, &bVar3))
						{
							unk_0x920D29D81E211607(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x046C362CF15F1935(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_434(int iParam0, var uParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0xAF6690C489CC6203(iParam0))
		{
			if (unk_0x7DDF43006A714856(iParam0))
			{
				if (!unk_0xA7D7011F9888A365(unk_0x134B62B726CEC8E6(iParam0)))
				{
					unk_0x73270B3C9CC833FD(iParam0, 0x00000000, 0x00000001);
					*uParam1 = 0x00000001;
				}
			}
		}
		if (unk_0x9C77D2D0559097F0(iParam0, 0x00000000))
		{
			if (unk_0xAFE0D3608EDA7039(iParam0))
			{
				return 0x00000001;
			}
		}
	}
	return 0x00000000;
}

void func_435()
{
	int iVar0;
	
	if (Global_19E127)
	{
		Global_19E127 = 0x00000000;
	}
	if (func_417(unk_0xD803B885F5E47A62()) && func_412() != func_411())
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_25033E[func_412() /*421*/].f_136.f_4, 0x00000004))
		{
			Local_159.f_5 = 0x00000001;
		}
	}
	while (!(Global_265DDC != 0xFFFFFFFF || func_417(unk_0xD803B885F5E47A62())))
	{
		if (!unk_0x8CD06866876216F2())
		{
			func_420();
		}
		if (func_424())
		{
			func_420();
		}
		SYSTEM::WAIT(0x00000000);
	}
	iVar0 = 0xFFFFFFFF;
	if (func_417(unk_0xD803B885F5E47A62()))
	{
		iVar0 = func_439();
	}
	unk_0x37AD2AB54480FA6A(0x00000020, 0x00000000, iVar0);
	func_437(0x00000000, 0xFFFFFFFF, 0x00000000);
	unk_0x9752E7BAEABA939E(&Local_116, 0x00000279);
	unk_0x35B62793EAE9ADDF(&Local_158, 0x00000121);
	if (func_417(unk_0xD803B885F5E47A62()))
	{
		while (!unk_0x081C8BC5094A7B76(0x0000000F))
		{
			SYSTEM::WAIT(0x00000000);
		}
		Local_159.f_1A = 0x00000001;
		unk_0x991E101AF0F7523A(0x00000001);
		unk_0xE57F9AD44D9539F1(0x0000000F);
	}
	else
	{
		while (!unk_0x081C8BC5094A7B76(0x0000002D))
		{
			SYSTEM::WAIT(0x00000000);
		}
		unk_0x991E101AF0F7523A(0x00000003);
		unk_0xE57F9AD44D9539F1(0x0000002D);
	}
	if (!func_436())
	{
		func_420();
	}
	if (unk_0x8CD06866876216F2())
	{
		unk_0x256D93AFAE851A7A(0x00000000);
	}
	else
	{
		func_420();
	}
	if (unk_0xBFF81ED3B99522C7())
	{
		if (func_417(unk_0xD803B885F5E47A62()))
		{
			Local_116.f_F[0x00000000] = unk_0x09AC81E49EA267F7(0x00000000, 0x0000000E);
		}
		else
		{
			Local_116.f_F[0x00000000] = Global_265DEE[0x00000000];
			Local_116.f_F[0x00000001] = Global_265DEE[0x00000001];
			Local_116.f_F[0x00000002] = Global_265DEE[0x00000002];
			Local_116.f_F[0x00000003] = Global_265DEE[0x00000003];
		}
	}
	Global_19E12E = 0x00000001;
}

int func_436()
{
	int iVar0;
	
	iVar0 = 0x00000000;
	while (0x00000001)
	{
		iVar0++;
		if (!unk_0x8CD06866876216F2())
		{
			return 0x00000000;
		}
		if (unk_0x67CCE3DFA3467CAD())
		{
			return 0x00000001;
		}
		if (func_431())
		{
			return 0x00000000;
		}
		if (func_429(0x0000009D))
		{
			return 0x00000000;
		}
		if (iVar0 >= 0x00000E10)
		{
			return 0x00000000;
		}
		SYSTEM::WAIT(0x00000000);
	}
	return 0x00000000;
}

int func_437(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xDA9EEE4F835948F9();
	while (iVar0 != 0x00000002)
	{
		if (((iVar0 == 0x00000003 || iVar0 == 0x00000004) || iVar0 == 0x00000005) || iVar0 == 0x00000006)
		{
			if (!bParam2)
			{
				func_421();
			}
			else
			{
				return 0x00000000;
			}
		}
		if (!func_438())
		{
			if (iParam0 == 0x00000000)
			{
				if (!unk_0x8CD06866876216F2())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_431())
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0x00000000;
					}
				}
				if (func_429(0x0000009D))
				{
					if (!bParam2)
					{
						func_421();
					}
					else
					{
						return 0x00000000;
					}
				}
			}
			else if (!unk_0x8FE4F98FD4BE2689())
			{
				if (!bParam2)
				{
					func_421();
				}
				else
				{
					return 0x00000000;
				}
			}
		}
		SYSTEM::WAIT(0x00000000);
		iVar0 = unk_0xDA9EEE4F835948F9();
	}
	if (iParam1 > 0xFFFFFFFF)
	{
		Global_1406F5 = iVar0;
	}
	if (iParam0 == 0x00000000)
	{
		if (!unk_0x8CD06866876216F2())
		{
			if (!bParam2)
			{
				func_421();
			}
			else
			{
				return 0x00000000;
			}
		}
	}
	else if (!unk_0x8FE4F98FD4BE2689())
	{
		if (!bParam2)
		{
			func_421();
		}
		else
		{
			return 0x00000000;
		}
	}
	return 0x00000001;
}

bool func_438()
{
	return Global_140856;
}

int func_439()
{
	var uVar0;
	
	uVar0 = Global_25033E[unk_0xD803B885F5E47A62() /*421*/].f_136.f_6;
	return uVar0;
}

