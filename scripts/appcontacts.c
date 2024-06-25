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
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	int iLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81[1] = { 0 };
	char cLocal_82[16] = "";
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	char cLocal_106[16] = "";
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 16;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
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
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	char cLocal_278[16] = "";
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	struct<3> Local_281 = { 0, 0, 0 } ;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	struct<3000> Local_292 = { 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_293 = { 0, 0, 0 } ;
	char cLocal_294[64] = "";
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
#endregion

void __EntryFunction__()
{
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
	fLocal_19 = 0f;
	fLocal_23 = -0,0375f;
	fLocal_24 = 0,17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_61 = ((0,05f + 0,275f) - 0,01f);
	iLocal_70 = 9999;
	iLocal_71 = 9999;
	fLocal_94 = 0,82f;
	fLocal_95 = 0,42f;
	fLocal_96 = 0f;
	fLocal_97 = 0f;
	unk_0x51CC1333A10C4E09();
	unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
	unk_0x8744D2E3FC95740E(&Global_8801, 18);
	unk_0x8744D2E3FC95740E(&Global_8801, 20);
	iLocal_274 = func_325(12);
	iLocal_275 = func_325(2);
	iLocal_276 = func_325(0);
	iLocal_78 = unk_0xCA369FBC0DE29517();
	if (Global_79389)
	{
		func_315();
	}
	else
	{
		func_303();
	}
	if (!Global_20930.f_1 == 10)
	{
		if (Global_20930.f_1 > 3)
		{
			if (Global_20930.f_1 != 9)
			{
				Global_20930.f_1 = 7;
			}
		}
	}
	iLocal_103 = unk_0x1DD05E817C89C737();
	func_302(147, 1320);
	func_302(74, 180);
	func_302(75, 190);
	while (true)
	{
		system::wait(0);
		if (BitTest(Global_8801, 18))
		{
			func_301();
			if (Global_20930.f_1 > 3)
			{
				Global_20930.f_1 = 8;
			}
			unk_0x8744D2E3FC95740E(&Global_8801, 18);
			func_300();
		}
		if ((iLocal_88 == 1 && Global_20930.f_1 == 10) && Local_292.f_2999 == 1)
		{
			func_190();
		}
		if (Global_20930.f_1 != 9)
		{
			switch (Global_20930.f_1)
			{
				case 7:
					if (BitTest(Global_8800, 16))
					{
						func_189();
					}
					else
					{
						func_186();
						if (BitTest(Global_8801, 0))
						{
							iLocal_104 = unk_0x1DD05E817C89C737();
							if ((iLocal_104 - iLocal_103) > 1000)
							{
								if (iLocal_105)
								{
									func_185();
								}
								else
								{
									func_165();
								}
							}
							if (iLocal_105)
							{
								func_164();
							}
						}
						else
						{
							func_165();
						}
					}
					if (!BitTest(Global_8800, 9))
					{
						if (func_163(2, Global_20902, 0))
						{
							if (BitTest(Global_8801, 0))
							{
							}
							else if (Global_20873 == 0)
							{
								if (!BitTest(Global_8801, 19))
								{
									func_161();
									func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									iLocal_80 = 0;
									StringCopy(&cLocal_82, "", 16);
									func_159();
									Global_20910 = 0;
									iLocal_88 = 0;
									func_160(Global_20911, "DISPLAY_VIEW", 11f, -1082130432, -1082130432, -1082130432, -1082130432);
									func_158(Global_20911, "SET_HEADER", "CELL_221", 0, 0, 0, 0);
									if (Global_20918)
									{
										func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
										func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
										unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
										func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
									}
									else
									{
										func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
										func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
										unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
										func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
									}
									if (Global_20930.f_1 > 3)
									{
										Global_20930.f_1 = 8;
									}
								}
							}
						}
					}
					break;
				
				case 8:
					if (iLocal_88 == 1)
					{
						func_186();
						func_190();
					}
					else if (iLocal_86 == 0)
					{
						func_147();
						func_136();
					}
					else
					{
						if (system::timera() > 1500)
						{
							iLocal_290 = 0;
							while (iLocal_290 < 4)
							{
								if (unk_0x1B79E937E91F40C3(&(Global_2169[Global_8115 /*29*/].f_3), &(Global_8638[iLocal_290 /*16*/])))
								{
									if (!unk_0x1B79E937E91F40C3(&(Global_8638[iLocal_290 /*16*/].f_8), "CELL_SFUN_NULL"))
									{
										bLocal_287 = true;
										iLocal_289 = iLocal_290;
									}
									else
									{
										bLocal_287 = false;
									}
								}
								iLocal_290++;
							}
							if (iLocal_87 == 0)
							{
								unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
								uLocal_73 = unk_0x6CA3F2B87712B6A4();
								while (!unk_0xA6F779AA284EB20E(uLocal_73))
								{
									system::wait(0);
								}
								iLocal_74 = unk_0x5DEF122A58D4F685(uLocal_73);
								func_134();
							}
						}
						func_186();
						if (bLocal_288 == 1)
						{
							if (!Global_113969.f_18106.f_396)
							{
								if (!func_130(Global_20930, Global_8115))
								{
									Global_113969.f_18106.f_396 = 1;
								}
							}
						}
						if (func_130(Global_20930, Global_8115))
						{
							if (!Global_113969.f_18106.f_397)
							{
								if (bLocal_287 == 1)
								{
									if (func_129(Global_97360))
									{
										switch (func_127("AM_H_BBUDDY"))
										{
											case 2:
												func_125("AM_H_BBUDDY", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_113969.f_18106.f_397 = 1;
												break;
										}
										if (func_127("AM_H_BBUDDY1") == 0)
										{
											func_120("AM_H_BBUDDY1", 1);
										}
									}
									else
									{
										switch (func_127("AM_H_BBUDDY1"))
										{
											case 2:
												func_125("AM_H_BBUDDY1", 2, 500, 10000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												Global_113969.f_18106.f_397 = 1;
												break;
										}
										if (func_127("AM_H_BBUDDY") == 0)
										{
											func_120("AM_H_BBUDDY", 1);
										}
									}
								}
							}
						}
						if (iLocal_87)
						{
							func_119();
						}
						else
						{
							func_88();
						}
					}
					if (func_163(2, Global_20898, 0))
					{
						func_87();
						Global_20908 = 1;
						if (Global_79389)
						{
							func_315();
						}
						else
						{
							func_303();
						}
						system::wait(0);
						if (Global_20930.f_1 > 3)
						{
							Global_20930.f_1 = 7;
						}
						StringCopy(&cLocal_82, "", 16);
						if (iLocal_86 == 1)
						{
							iLocal_86 = 0;
						}
						if (iLocal_87 == 1)
						{
							iLocal_87 = 0;
						}
						iLocal_88 = 0;
					}
					break;
				
				case 10:
					if (iLocal_99 == 4)
					{
					}
					func_3();
					break;
				
				case 6:
					func_300();
					break;
				
				default:
					break;
			}
			if (!Global_20930.f_1 == 8)
			{
				if ((Global_9408 - Global_9407) > Global_9409)
				{
					if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
					{
						if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
						{
							if (func_163(2, Global_20898, 0))
							{
								if (BitTest(Global_8801, 0))
								{
									func_87();
								}
								else
								{
									func_87();
									if (!Global_20930.f_1 == 10)
									{
										func_300();
									}
									else if (Global_8115 == 132)
									{
										if (Global_2746025.f_1 || BitTest(Global_8801, 20))
										{
											Global_20930.f_1 = 7;
											func_160(Global_20911, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
											if (BitTest(Global_8801, 0))
											{
												func_158(Global_20911, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
											}
											else
											{
												func_158(Global_20911, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
											}
											unk_0x8E4825CCACA34B58(iLocal_78);
											iLocal_99 = 0;
										}
									}
									else
									{
										func_301();
										Global_20930.f_1 = 7;
										func_2();
										func_160(Global_20911, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
										if (BitTest(Global_8801, 0))
										{
											func_158(Global_20911, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
										}
										else
										{
											func_158(Global_20911, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
										}
										unk_0x8E4825CCACA34B58(iLocal_78);
										iLocal_99 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			Global_20932 = 6;
			func_300();
		}
		if (func_1())
		{
			func_300();
		}
	}
}

int func_1()
{
	if (((Global_20930.f_1 == 1 || Global_20930.f_1 == 3) || Global_20930.f_1 == 0) || Global_20874 == 1)
	{
		Global_20917 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	if (!Global_20930.f_1 == 10 && !Global_20930.f_1 == 9)
	{
		if (BitTest(Global_8800, 9))
		{
			system::wait(750);
		}
		if (Global_20930.f_1 > 6)
		{
			func_160(Global_20911, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (BitTest(Global_8801, 0))
			{
				func_158(Global_20911, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_158(Global_20911, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_8803 = 99;
			if (BitTest(Global_8800, 9))
			{
				if (Global_20918)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else if (BitTest(Global_8801, 0))
			{
				if (Global_20918)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				if (iLocal_68 > 0)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_20873 == 0)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_68 > 0)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_3()
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	
	switch (iLocal_99)
	{
		case 0:
			if (Global_8115 == 81)
			{
				if (Global_1835500 == 0)
				{
					Global_1835500 = 1;
				}
				if (unk_0x00F2D73E763510A4("LOWCAAU"))
				{
					unk_0x4AB15E3851FF326B("LOWCAAU", 15);
					while (!unk_0xDCB78A15E5F495DC(15))
					{
						system::wait(0);
					}
				}
				StringCopy(&cLocal_106, "LOWCA_CALL10_1", 16);
			}
			else
			{
				if (unk_0x00F2D73E763510A4(&Global_23309))
				{
					unk_0xF2CB0224D3BE0B42(&Global_23309, 1);
					while (!unk_0xDCB78A15E5F495DC(1))
					{
						system::wait(0);
					}
				}
				cLocal_106 = { Global_118[Global_8115 /*10*/] };
				StringConCat(&cLocal_106, "_1", 16);
			}
			if (unk_0x6BA487C862DB8DDF(&cLocal_106) || iLocal_277 == 1)
			{
				iLocal_100 = Global_23306;
				if (func_86(129))
				{
					iLocal_100 = Global_97941;
				}
			}
			else
			{
				iLocal_100 = Global_23305;
			}
			if ((iLocal_277 == 1 && unk_0x1B79E937E91F40C3(&cLocal_278, "CELLPHONE_CHEAT")) && Global_79389 == 0)
			{
				if ((unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SEAPLANE") || unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DUELC")) || unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_BUBBLE"))
				{
					bLocal_92 = true;
				}
				if (bLocal_92)
				{
					if (func_85())
					{
						iLocal_93 = 0;
					}
					else
					{
						iLocal_93 = 1;
					}
				}
				if (iLocal_93 == 0)
				{
					iLocal_101 = unk_0x1DD05E817C89C737();
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(3);
					unk_0x882AEFD55B8D51FB("STRING");
					unk_0x6CA7A80BDD78C062(&cLocal_82, -1);
					unk_0xCFAD3D478C87321A();
					func_84("CELL_300");
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_MONOC"))
					{
						func_84("CELL_MONOSIGNAL");
					}
					else if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DIRECTOR"))
					{
						func_84("CELL_DRCT");
					}
					else
					{
						func_84("CELL_CHEAT");
					}
					func_84("CELL_195");
					unk_0xE6B753D52F4CA222();
					func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					iLocal_99 = 1;
				}
				else
				{
					iLocal_99 = 2;
					iLocal_101 = unk_0x1DD05E817C89C737();
				}
			}
			else
			{
				iLocal_99 = 2;
				iLocal_101 = unk_0x1DD05E817C89C737();
			}
			break;
		
		case 1:
			iLocal_102 = unk_0x1DD05E817C89C737();
			if ((iLocal_102 - iLocal_101) > 1500)
			{
				iLocal_99 = 3;
			}
			break;
		
		case 2:
			iLocal_102 = unk_0x1DD05E817C89C737();
			if (iLocal_100 != Global_23305)
			{
				if (unk_0x9F0C06CFBACDD6A1(iLocal_78))
				{
					if (Global_2746025.f_37 == 0)
					{
						if (Global_20873)
						{
							unk_0xBF3D28CA44F3BE2D(iLocal_78, "Dial_and_Remote_Ring", &Global_20919, 1);
						}
						else if ((iLocal_102 - iLocal_101) > 1700)
						{
							unk_0xBF3D28CA44F3BE2D(iLocal_78, "Remote_Ring", &Global_20919, 1);
						}
					}
				}
			}
			else if ((func_86(130) || func_86(132)) || func_86(128))
			{
				if (unk_0x9F0C06CFBACDD6A1(iLocal_78))
				{
					if (Global_2746025.f_37 == 0)
					{
						if (Global_20873)
						{
							unk_0xBF3D28CA44F3BE2D(iLocal_78, "Dial_and_Remote_Ring", &Global_20919, 1);
						}
						else if ((iLocal_102 - iLocal_101) > 1700)
						{
							unk_0xBF3D28CA44F3BE2D(iLocal_78, "Remote_Ring", &Global_20919, 1);
						}
					}
				}
			}
			if ((iLocal_102 - iLocal_101) > iLocal_100)
			{
				if (iLocal_100 == Global_23305)
				{
					bLocal_89 = false;
					if ((Global_8115 == 130 || Global_8115 == 132) || Global_8115 == 128)
					{
						if (!BitTest(Global_8801, 20))
						{
							bLocal_89 = true;
							if ((iLocal_102 - iLocal_101) > iLocal_100 + 10000)
							{
								if (Global_20930.f_1 == 10)
								{
									if (Global_8115 == 130)
									{
										Global_20930.f_1 = 3;
									}
								}
							}
						}
					}
					if (!bLocal_89)
					{
						iLocal_99 = 4;
						unk_0x8E4825CCACA34B58(iLocal_78);
						iLocal_90 = 0;
						system::settimerb(0);
						if (func_83(Global_8115, Global_20930) == 0)
						{
							if (Global_8115 == 132)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(4);
								unk_0x330108B080A2132F(0);
								unk_0x330108B080A2132F(2);
								unk_0x882AEFD55B8D51FB("CELL_CONDFON");
								unk_0x60D332F23943B34F(&Global_22301);
								unk_0xCFAD3D478C87321A();
								func_84("CELL_300");
								func_84("CELL_220");
								func_84("CELL_219");
								unk_0xE6B753D52F4CA222();
							}
							else
							{
								func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(5), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_220", "CELL_195", 0);
							}
						}
						else
						{
							func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(5), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_220", &(Global_2169[Global_8115 /*29*/].f_3), 0);
						}
						func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					iLocal_99 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_277 == 1)
			{
				if (unk_0x1B79E937E91F40C3(&cLocal_278, "CELLPHONE_CHEAT") && Global_79389 == 0)
				{
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_MONOC"))
					{
						if (Global_9604 == 0)
						{
							Global_9604 = 1;
							Global_113969.f_14054[0 /*20*/].f_6 = 5;
							Global_113969.f_14054[2 /*20*/].f_6 = 5;
							Global_113969.f_14054[1 /*20*/].f_6 = 5;
							if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
							{
								if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
								{
									if (!unk_0x8764A5B95AE1F967(4, unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 40f))
									{
										unk_0xD2FD15A3D9DEE4CC(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) + Vector(2f, 0f, 0f), 4, 0,1f, 1, 0, 1065353216, 0);
									}
								}
							}
						}
						else
						{
							Global_9604 = 0;
						}
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SUPJUM"))
					{
						func_82(0, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_HEALA"))
					{
						func_82(6, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SLIDEYC"))
					{
						func_82(1, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_FASTR"))
					{
						func_82(2, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_WANTDN"))
					{
						func_82(9, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_WANTUP"))
					{
						func_82(8, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_WEATHER"))
					{
						func_82(5, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_FASTS"))
					{
						func_82(3, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_POWER"))
					{
						func_82(7, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_CHUTE"))
					{
						func_82(10, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_BANG"))
					{
						func_82(11, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_FLAMB"))
					{
						func_82(12, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_EXPMEL"))
					{
						func_82(13, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_ZEROG"))
					{
						func_82(14, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_INVINC"))
					{
						func_82(15, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SLOWMO"))
					{
						func_82(16, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SKYFA"))
					{
						func_82(17, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DRUNK"))
					{
						func_82(18, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DEADEYE"))
					{
						func_82(19, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_WEAPONS"))
					{
						func_82(4, 0);
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_BUZZARD"))
					{
						func_82(20, joaat("buzzard"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_COMET2"))
					{
						func_82(20, joaat("comet2"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_BMX"))
					{
						func_82(20, joaat("bmx"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_CADDY"))
					{
						func_82(20, joaat("caddy"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DUSTER"))
					{
						func_82(20, joaat("duster"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_PCJ"))
					{
						func_82(20, joaat("pcj"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_RAPIDGT"))
					{
						func_82(20, joaat("rapidgt"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_STRETCH"))
					{
						func_82(20, joaat("stretch"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_STUNT"))
					{
						func_82(20, joaat("stunt"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_TRASH"))
					{
						func_82(20, joaat("trash"));
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SANCHEZ"))
					{
						func_82(20, joaat("sanchez"));
					}
					if (func_85())
					{
						if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_SEAPLANE"))
						{
							func_82(20, joaat("dodo"));
						}
						if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DUELC"))
						{
							func_82(20, joaat("dukes2"));
						}
						if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_BUBBLE"))
						{
							func_82(20, joaat("submersible2"));
						}
					}
					if (unk_0x1B79E937E91F40C3(&Local_281, "CHEAT_DIRECTOR"))
					{
						iVar0 = func_44(0, 0, 119);
						if (iVar0 != 0)
						{
							func_42(iVar0);
						}
						else
						{
							func_41();
						}
					}
					func_36(0);
				}
				else if (unk_0x1B79E937E91F40C3(&cLocal_278, "CELLPHONE_CHEAT"))
				{
					func_36(0);
				}
				else
				{
					func_35(&uLocal_109, 1, 0, &Local_281, 0, 1);
					Global_23307 = 0;
					func_34(&uLocal_109, Global_8115, &Global_23309, &cLocal_278, 2, 0, 0, 0, 0);
				}
			}
			else
			{
				switch (Global_8115)
				{
					case 81:
						StringCopy(&Var1, "BENNY", 24);
						break;
					
					case 0:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
					
					case 2:
						StringCopy(&Var1, "TREVOR", 24);
						break;
					
					case 1:
						StringCopy(&Var1, "FRANKLIN", 24);
						break;
					
					case 12:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 13:
						StringCopy(&Var1, "LESTER", 24);
						break;
					
					case 15:
						StringCopy(&Var1, "TRACEY", 24);
						break;
					
					case 19:
						StringCopy(&Var1, "LAMAR", 24);
						break;
					
					case 17:
						StringCopy(&Var1, "AMANDA", 24);
						break;
					
					case 45:
						StringCopy(&Var1, "MALEEXECASSIST", 24);
						break;
					
					case 29:
						StringCopy(&Var1, "FEMEXECASSIST", 24);
						break;
					
					case 35:
						StringCopy(&Var1, "CHENGSR", 24);
						break;
					
					case 14:
						StringCopy(&Var1, "JIMMY", 24);
						break;
					
					case 103:
						StringCopy(&Var1, "TONYA", 24);
						break;
					
					case 50:
						StringCopy(&Var1, "BEVERLY", 24);
						break;
					
					case 64:
						StringCopy(&Var1, "NIGEL", 24);
						break;
					
					case 34:
						StringCopy(&Var1, "OSCAR", 24);
						break;
					
					case 49:
						StringCopy(&Var1, "BARRY", 24);
						break;
					
					case 33:
						StringCopy(&Var1, "GAYMILITARY", 24);
						break;
					
					case 20:
						StringCopy(&Var1, "NervousRon", 24);
						break;
					
					case 24:
						StringCopy(&Var1, "Wade", 24);
						break;
					
					case 69:
						StringCopy(&Var1, "OMEGA", 24);
						break;
					
					case 60:
						StringCopy(&Var1, "MARNIE", 24);
						break;
					
					case 37:
						StringCopy(&Var1, "STRETCH", 24);
						break;
					
					case 23:
						StringCopy(&Var1, "STEVE", 24);
						break;
					
					case 51:
						StringCopy(&Var1, "CRIS", 24);
						break;
					
					case 30:
						StringCopy(&Var1, "Dave", 24);
						break;
					
					case 58:
						StringCopy(&Var1, "JOSH", 24);
						break;
					
					case 36:
						StringCopy(&Var1, "FRIEDLANDER", 24);
						break;
					
					case 62:
						StringCopy(&Var1, "MAUDE", 24);
						break;
					
					case 55:
						StringCopy(&Var1, "JIMMYBOSTON", 24);
						break;
					
					case 56:
						StringCopy(&Var1, "JOE", 24);
						break;
					
					case 26:
						StringCopy(&Var1, "SOLOMON", 24);
						break;
					
					case 54:
						StringCopy(&Var1, "CLETUS", 24);
						break;
					
					case 43:
						StringCopy(&Var1, "TANISHA", 24);
						break;
					
					case 16:
						StringCopy(&Var1, "ABIGAIL", 24);
						break;
					
					case 44:
						StringCopy(&Var1, "DENISE", 24);
						break;
					
					case 84:
						StringCopy(&Var1, "BRUCIE", 24);
						break;
					
					case 70:
						StringCopy(&Var1, "BikerBoss", 24);
						break;
					
					case 72:
						StringCopy(&Var1, "MexicanBoss", 24);
						break;
					
					case 89:
						StringCopy(&Var1, "MECHANIC", 24);
						break;
					
					case 91:
						StringCopy(&Var1, "MorsMutual", 24);
						break;
					
					case 85:
						StringCopy(&Var1, "FM_MERRYWEATHER", 24);
						break;
					
					case 41:
						StringCopy(&Var1, "PEGASUS", 24);
						break;
					
					case 18:
						StringCopy(&Var1, "SIMEON", 24);
						break;
					
					case 31:
						StringCopy(&Var1, "MARTIN", 24);
						break;
					
					case 52:
						StringCopy(&Var1, "DOM", 24);
						break;
					
					case 86:
						StringCopy(&Var1, "GERALD", 24);
						break;
					
					default:
						StringCopy(&Var1, "MICHAEL", 24);
						break;
				}
				func_35(&uLocal_109, 1, 0, &Var1, 0, 1);
				Global_23307 = 0;
				switch (Global_8115)
				{
					case 81:
						func_9(&uLocal_109, 81, "LOWCAAU", "LOWCA_CALL10", 2, 0, 0, 0, 0);
						break;
					
					case 13:
						func_9(&uLocal_109, 12, &Global_23309, "LES_APH2", 2, 0, 0, 0, 0);
						break;
					
					case 36:
						iVar2 = unk_0x5295501D0862870D();
						if (iVar2 > 17 || iVar2 < 9)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "SHR_APH3", 2, 0, 0, 0, 0);
						}
						if (iVar2 > 8 && iVar2 < 13)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "SHR_APH1", 2, 0, 0, 0, 0);
						}
						if (iVar2 > 12 && iVar2 < 18)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "SHR_APH2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 17:
						if (func_8(21) && !func_8(22))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "AMA_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, &(Global_118[Global_8115 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 20:
						if (Global_79389)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_RBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, &(Global_118[Global_8115 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 44:
						if (func_7(126))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "DEN_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, &(Global_118[Global_8115 /*10*/]), 2, 0, 0, 0, 0);
						}
						break;
					
					case 15:
						if (!func_8(19))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "TRA_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "TRA_APH2", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "TRA_APH3", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "TRA_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 19:
						if (!func_8(19))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "LAM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(20))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "LAM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "LAM_APH3", 2, 0, 0, 0, 0);
						}
						break;
					
					case 14:
						if (!func_8(19))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "JIM_APH1", 2, 0, 0, 0, 0);
						}
						else if (!func_8(21))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "JIM_APH3", 2, 0, 0, 0, 0);
						}
						else if (!func_8(22))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "JIM_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "JIM_APH4", 2, 0, 0, 0, 0);
						}
						break;
					
					case 49:
						if (func_6(7))
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "BAR_APH2", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "BAR_APH1", 2, 0, 0, 0, 0);
						}
						break;
					
					case 85:
						iLocal_291 = unk_0xC5935DFB3F39785A(0, 100);
						if (iLocal_291 <= 50)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_MWBusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_MWBusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 41:
						iLocal_291 = unk_0xC5935DFB3F39785A(0, 100);
						if (iLocal_291 <= 50)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_PGbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_PGbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 91:
						iLocal_291 = unk_0xC5935DFB3F39785A(0, 100);
						if (iLocal_291 <= 50)
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_INSbusy", 2, 0, 0, 0, 0);
						}
						else
						{
							func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_INSbusy2", 2, 0, 0, 0, 0);
						}
						break;
					
					case 86:
						func_9(&uLocal_109, Global_8115, &Global_23309, "ANS_GBusy", 2, 0, 0, 0, 0);
						break;
					
					default:
						func_9(&uLocal_109, Global_8115, &Global_23309, &(Global_118[Global_8115 /*10*/]), 2, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 31);
			}
			break;
		
		case 4:
			if (unk_0x9F0C06CFBACDD6A1(iLocal_78))
			{
				unk_0xBF3D28CA44F3BE2D(iLocal_78, "Remote_Engaged", &Global_20919, 1);
			}
			if (system::timerb() > 1500)
			{
				if (iLocal_90 == 0)
				{
					if (Global_20930 == 2)
					{
						if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
						{
							func_4(unk_0x4A8C381C258A124D(), "PHONE_CALL_NOT_CONNECTED", 24);
							iLocal_90 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_4(var uParam0, char* sParam1, int iParam2)
{
	unk_0x04C016145CE6A18B(uParam0, sParam1, func_5(iParam2), 1);
}

int func_5(int iParam0)
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

int func_6(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113969.f_18577[iParam0 /*6*/], 3);
}

int func_7(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

int func_8(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

void func_9(var uParam0, int iParam1, char* sParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (Global_79389 || func_33(0))
	{
		if (Global_8115 == 81)
		{
			if (Global_1835500 == 0)
			{
				Global_1835500 = 1;
			}
			func_10(uParam0, iParam1, sParam2, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else if (Global_1835500 == 1)
		{
			func_34(uParam0, iParam1, &Global_23309, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
		else
		{
			func_10(uParam0, iParam1, &Global_23309, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
		}
	}
	else
	{
		func_10(uParam0, iParam1, &Global_23309, cParam3, iParam4, iParam5, iParam6, iParam7, bParam8);
	}
}

int func_10(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	if (iParam5 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	Global_2883585 = 0;
	return func_11(sParam3, iParam4, bParam8);
}

int func_11(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					unk_0x0F15249D24BC5ADA(0);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x1F9EB85925C3ECD7())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_29();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			unk_0x8744D2E3FC95740E(&Global_8800, 20);
			unk_0x8744D2E3FC95740E(&Global_8801, 17);
			unk_0x8744D2E3FC95740E(&Global_8802, 0);
			if (bParam2)
			{
				func_21();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				if (unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (func_20())
				{
					return 0;
				}
				if (unk_0x6F21822F60DC0945(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()))
				{
					return 0;
				}
				if (unk_0x08DAD6B08438A17C(unk_0x4A8C381C258A124D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79389)
				{
					if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
					{
						return 0;
					}
					if (unk_0x74CD4FE549433E92(unk_0x4A8C381C258A124D()))
					{
						return 0;
					}
					if (unk_0xFD2D7766E325A3B2(unk_0x259BE71D8A81D4FA(), 0))
					{
						return 0;
					}
				}
			}
			if (func_19())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_18();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_17();
		func_12();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_12()
{
	if (!func_13())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

int func_13()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_16())
	{
		return 0;
	}
	if (func_14(unk_0x259BE71D8A81D4FA()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[unk_0x259BE71D8A81D4FA() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0x834C960822A4683F())
	{
		return 0;
	}
	return 1;
}

bool func_14(int iParam0)
{
	return func_15(iParam0, 20);
}

var func_15(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_16()
{
	return -1;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0F15249D24BC5ADA(0);
	Global_22286 = 1;
}

void func_18()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	unk_0x8744D2E3FC95740E(&Global_8801, 16);
}

int func_19()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
	{
		iVar0 = 0;
		unk_0x23B29877D0BE9547(unk_0x4A8C381C258A124D(), &iVar1, 1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x196704C916969409() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0x49F8918E2DC5FFBC(unk_0x4A8C381C258A124D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_21()
{
	if (func_28(14))
	{
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_22();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

var func_22()
{
	func_23();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_23()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_26(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_25(unk_0x4A8C381C258A124D());
			if (func_24(iVar0) && (!func_28(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_24(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_24(int iParam0)
{
	return iParam0 < 3;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(uParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)
{
	if (func_24(iParam0))
	{
		return func_27(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_27(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_28(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
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

void func_31()
{
	unk_0xC78B293A5F4EACF9();
	Global_23297 = 0;
	if ((unk_0xE87F28FD4128D063() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		unk_0x0F15249D24BC5ADA(0);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

void func_32(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = uParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

var func_33(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

int func_34(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_32(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	if (iParam5 == 1)
	{
		Global_22298 = 1;
	}
	else
	{
		Global_22298 = 0;
	}
	Global_2883585 = 1;
	return func_11(sParam3, iParam4, bParam8);
}

void func_35(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 0);
			}
			else
			{
				unk_0xC1BC1B8A5AA67C6B(iParam2, 1);
			}
		}
		if (!unk_0x4FAFF4BCB7633475(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x26C12212366CBF6E(iParam2, 0);
			}
			else
			{
				unk_0x26C12212366CBF6E(iParam2, 1);
			}
		}
	}
}

void func_36(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_39())
		{
			func_37(1, 1);
		}
		else
		{
			func_37(0, 0);
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
	if (!func_19())
	{
		Global_20930.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
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

int func_38(int iParam0)
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

bool func_39()
{
	return BitTest(Global_1956920, 5);
}

bool func_40()
{
	return BitTest(Global_1956920, 19);
}

void func_41()
{
	float fVar0;
	
	unk_0x98E393364463951A(1);
	unk_0x4CC1CF98851922CE(2, 201);
	unk_0x4CC1CF98851922CE(2, 202);
	fVar0 = 0f;
	while ((!unk_0x875A214D5EBCA509(2, 201) && !unk_0x875A214D5EBCA509(2, 202)) || fVar0 < 1f)
	{
		hud::set_warning_message_with_header("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, false, -1, 0, 0, true, 0);
		system::wait(0);
		fVar0 = (fVar0 + unk_0x0B852B0BF94A8DC1());
	}
	unk_0x98E393364463951A(0);
	if (unk_0x875A214D5EBCA509(2, 201))
	{
		unk_0x8F72AF14CE5AACE4(0);
		Global_112911 = 1;
	}
}

void func_42(int iParam0)
{
	float fVar0;
	char* sVar1;
	
	unk_0x98E393364463951A(1);
	unk_0x4CC1CF98851922CE(2, 201);
	fVar0 = 0f;
	while (!unk_0x875A214D5EBCA509(2, 201) || fVar0 < 1f)
	{
		sVar1 = func_43(iParam0, 119);
		hud::set_warning_message("FBR_GENERIC", 16384, 0, false, -1, "FBR_DIR_MODE", sVar1, true, 0);
		system::wait(0);
		fVar0 = (fVar0 + unk_0x0B852B0BF94A8DC1());
	}
	unk_0x98E393364463951A(0);
}

char* func_43(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_44(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (unk_0x486FF5D06E9659F1(unk_0x931D15B1D60C81B0()) > 1)
		{
			return 2;
		}
	}
	if (func_81() && !func_28(14))
	{
		return 3;
	}
	if (func_80())
	{
		return 3;
	}
	if (func_79())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_78())
		{
			return 8;
		}
	}
	if (Global_98433)
	{
		return 3;
	}
	if (Global_33206)
	{
		return 8;
	}
	if (Global_33097)
	{
		return 8;
	}
	if (Global_2883694)
	{
		if (unk_0x486FF5D06E9659F1(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2883693)
	{
		if (unk_0x486FF5D06E9659F1(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (unk_0x486FF5D06E9659F1(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (unk_0x486FF5D06E9659F1(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (unk_0x486FF5D06E9659F1(joaat("creator")) > 0)
	{
		return 3;
	}
	if (unk_0x486FF5D06E9659F1(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_77(bParam1))
	{
		return 3;
	}
	if (unk_0x9857C978BD3CBEDA(unk_0x4A8C381C258A124D()) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D()))
	{
		return 12;
	}
	if (func_76(Global_112993, 256))
	{
		return 3;
	}
	if (((func_75() || func_74()) || func_65()) || func_64())
	{
		return 5;
	}
	if (func_64())
	{
		return 5;
	}
	if (func_63())
	{
		return 5;
	}
	if (func_62())
	{
		return 5;
	}
	if (func_74())
	{
		return 5;
	}
	if (func_61() && !Global_112916)
	{
		return 8;
	}
	if (func_65())
	{
		return 5;
	}
	if (unk_0x3555462DB47B7AB1() || func_60())
	{
		return 4;
	}
	if (func_59())
	{
		return 4;
	}
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_48(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (unk_0x333554781C7582D7(unk_0x4A8C381C258A124D()) || unk_0x57E7FD3BD6BB28C0(unk_0x4A8C381C258A124D()) != -1)
			{
				return 11;
			}
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1) || Global_113016)
			{
				return 10;
			}
		}
	}
	if (Global_33204)
	{
		return 8;
	}
	if (Global_79387)
	{
		return 4;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0 || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
		{
			return 6;
		}
		if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
		{
			return 8;
		}
		if (unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D()))
		{
			return 8;
		}
	}
	if (unk_0x76CD105BCAC6EB9F())
	{
		return 7;
	}
	if (func_47())
	{
		return 8;
	}
	if (Global_32951)
	{
		return 3;
	}
	if (unk_0xE37AC296E66C33AF())
	{
		return 4;
	}
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 439,4357f, -997,4747f, 28,9584f, 428,3288f, -997,0398f, 24,8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_45(0))
		{
			return 8;
		}
	}
	if (unk_0x92D9D3367234ABE7(unk_0x4A8C381C258A124D()))
	{
		return 9;
	}
	return 0;
}

int func_45(bool bParam0)
{
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if ((((((((((!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) || !unk_0xFB1E434B5C3D0CEE(unk_0x259BE71D8A81D4FA())) || unk_0x65F146FF416F109F(unk_0x4A8C381C258A124D())) || unk_0x1B32E388988DD296(unk_0x4A8C381C258A124D(), 0)) || unk_0xFFAC548682B3D56E(unk_0x4A8C381C258A124D())) || unk_0xA6534E6C7AE314D6(unk_0x4A8C381C258A124D())) || unk_0x9D6DF8F3584AAC2B(unk_0x4A8C381C258A124D())) || unk_0x0B3FC0E7676E79BF(unk_0x4A8C381C258A124D())) || unk_0x3F18810075C77D41(unk_0x4A8C381C258A124D())) || unk_0x8BF5256C439DF778(unk_0x4A8C381C258A124D())) || unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		return 0;
	}
	if ((((((func_59() || Global_23692.f_4) || func_46()) || unk_0x8B27A086F4268F56()) || unk_0x46150A5112561134()) || func_60()) || func_80())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (unk_0x3D2EB53CF281A77E())
		{
			return 0;
		}
	}
	return 1;
}

int func_46()
{
	if (!unk_0x76CD105BCAC6EB9F())
	{
		return Global_98991.f_44 == 1;
	}
	return 0;
}

bool func_47()
{
	return Global_61347;
}

int func_48(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	
	if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 207,4336f, -1019,795f, -100,4728f, 189,9338f, -1019,623f, -95,56883f, 17,1875f, 0, 1, 0) && unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 1))
	{
		return 5;
	}
	Var0 = { func_58(unk_0x259BE71D8A81D4FA()) };
	if (Global_113056[10 /*10*/].f_1)
	{
		if (system::vdist2(Var0, 241,9889f, 360,4732f, 105,6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_8(2) && !func_8(17))
	{
		if (system::vdist2(Var0, -59,96629f, -1099,005f, 25,52088f) < 8f)
		{
			if (unk_0x26715B0ED6702C87(Var0, -61,26628f, -1096,505f, 25,52088f, -58,43333f, -1101,147f, 29,24937f, 1,25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (system::vdist2(Var0, -740,9346f, 5599,426f, 40,71515f) < 11f)
	{
		if (unk_0x26715B0ED6702C87(Var0, -746,1299f, 5599,226f, 40,47561f, -737,632f, 5599,364f, 44,1693f, 3,375f, 0, 1))
		{
			return 9;
		}
	}
	if (system::vdist2(Var0, -740,9346f, 5590,426f, 40,71515f) < 11f)
	{
		if (unk_0x26715B0ED6702C87(Var0, -746,1299f, 5590,667f, 40,4392f, -737,6585f, 5590,592f, 44,52327f, 3,375f, 0, 1))
		{
			return 9;
		}
	}
	if (system::vdist2(Var0, 446,3265f, 5566,35f, 780,2151f) < 11f)
	{
		if (unk_0x26715B0ED6702C87(Var0, 451,1661f, 5566,451f, 780,1703f, 442,5211f, 5566,374f, 783,9819f, 3,375f, 0, 1))
		{
			return 9;
		}
	}
	if (system::vdist2(Var0, 446,3265f, 5577,35f, 780,2151f) < 11f)
	{
		if (unk_0x26715B0ED6702C87(Var0, 451,1661f, 5577,867f, 780,1899f, 442,5765f, 5577,579f, 783,9086f, 3,375f, 0, 1))
		{
			return 9;
		}
	}
	if (system::vdist2(Var0, 128,83f, -1297,98f, 29,3f) < 2f || system::vdist2(Var0, 95,07f, -1284,98f, 29,3f) < 2f)
	{
		return 9;
	}
	if (system::vdist2(Var0, 1081,951f, -1976,762f, 30,47218f) < 6f && func_57(26))
	{
		return 9;
	}
	if (!iLocal_25)
	{
		func_49(iParam0);
	}
	iVar1 = unk_0xF8F35890F43ED2AE(unk_0x4A8C381C258A124D());
	if (iVar1 == 0)
	{
		return 0;
	}
	else if ((iVar1 == Global_112931 || iVar1 == Global_112932) || iVar1 == Global_112933)
	{
		return 9;
	}
	else if (iVar1 == Global_112922)
	{
		return 9;
	}
	else if (iVar1 == Global_112923)
	{
		return 9;
	}
	else if (iVar1 == Global_112926)
	{
		return 9;
	}
	else if (iVar1 == Global_112925)
	{
		return 9;
	}
	else if (iVar1 == Global_112927)
	{
		return 9;
	}
	else if (iVar1 == Global_112928)
	{
		return 9;
	}
	else if (iVar1 == Global_112929)
	{
		return 9;
	}
	else if (iVar1 == Global_112930)
	{
		return 9;
	}
	else if (iVar1 == Global_112934)
	{
		return 9;
	}
	else if (iVar1 == Global_112935)
	{
		return 9;
	}
	else if (iVar1 == Global_112936)
	{
		return 9;
	}
	else if (iVar1 == Global_112937)
	{
		return 9;
	}
	else if (iVar1 == Global_112938)
	{
		return 9;
	}
	else if ((iVar1 == Global_112939 || iVar1 == Global_112940) && func_8(67))
	{
		return 9;
	}
	iVar2 = 0;
	while (iVar2 <= (19 - 1))
	{
		if (iVar1 == Global_112941[iVar2])
		{
			return 9;
		}
		iVar2++;
	}
	return 0;
}

void func_49(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_52(24, &Global_112922);
	func_52(47, &Global_112923);
	func_52(10, &Global_112931);
	func_52(9, &Global_112932);
	func_52(8, &Global_112933);
	func_52(21, &Global_112934);
	func_52(11, &Global_112935);
	func_52(18, &Global_112939);
	func_52(19, &Global_112940);
	Global_112926 = unk_0x0556019E7EE8EC9A(-76,6618f, 6222,191f, 32,2412f, "V_factory1");
	Global_112925 = unk_0x0556019E7EE8EC9A(-98,2637f, 6210,022f, 31,924f, "V_factory2");
	Global_112927 = unk_0x0556019E7EE8EC9A(-115,8956f, 6179,749f, 32,4102f, "V_factory3");
	Global_112928 = unk_0x0556019E7EE8EC9A(-149,8199f, 6144,978f, 31,3353f, "V_factory4");
	Global_112929 = unk_0x0556019E7EE8EC9A(16,3605f, -1100,259f, 28,797f, "v_gun");
	Global_112930 = unk_0x0556019E7EE8EC9A(125,1948f, -1284,13f, 28,2847f, "v_strip3");
	Global_112936 = unk_0x0556019E7EE8EC9A(-545,5717f, 1987,145f, 126,0262f, "cs6_08_mine_int");
	Global_112937 = unk_0x0556019E7EE8EC9A(2330,598f, 2571,935f, 45,6802f, "ch3_01_trlr_int");
	Global_112938 = unk_0x0556019E7EE8EC9A(-54,7f, -1092,7f, 26,4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_112941[iVar0] = unk_0x0E171121A3A25363(func_50(iVar0));
		iVar0++;
	}
	iLocal_25 = 1;
}

Vector3 func_50(int iParam0)
{
	if (!func_51(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711,8212f, -915,9057f, 18,2377f;
		
		case 1:
			return -52,7185f, -1756,175f, 28,4432f;
		
		case 2:
			return 1159,441f, -325,6666f, 68,2272f;
		
		case 3:
			return 1699,429f, 4928,642f, 41,0858f;
		
		case 4:
			return -1822,926f, 788,9531f, 137,212f;
		
		case 5:
			return 1166,427f, 2703,528f, 37,1574f;
		
		case 6:
			return -2973,414f, 390,6885f, 14,0433f;
		
		case 7:
			return -1225,86f, -903,5782f, 11,3263f;
		
		case 8:
			return 1140,659f, -981,0806f, 45,4158f;
		
		case 9:
			return -1490,275f, -382,8514f, 39,1634f;
		
		case 10:
			return -3240,719f, 1004,508f, 11,8468f;
		
		case 11:
			return -3039,249f, 589,3831f, 6,9251f;
		
		case 12:
			return 544,4275f, 2672,061f, 41,1726f;
		
		case 13:
			return 2558,754f, 385,599f, 107,6391f;
		
		case 14:
			return 2681,511f, 3282,763f, 54,2573f;
		
		case 15:
			return 1731,153f, 6411,633f, 34,0373f;
		
		case 16:
			return 1964,931f, 3741,207f, 31,3599f;
		
		case 17:
			return 29,0707f, -1348,773f, 28,5101f;
		
		case 18:
			return 376,8503f, 323,9777f, 102,5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_51(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_52(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_53(iParam0) };
	*uParam1 = unk_0x0556019E7EE8EC9A(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_53(int iParam0)
{
	struct<5> Var0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447,4833f, 280,3197f, 77,5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906,786f, -573,7576f, 19,0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399,973f, 1148,756f, 113,3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598,6379f, -1608,399f, 26,0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556,5089f, 286,3181f, 81,1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111,7116f, -11,912f, 69,5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274,934f, -1714,726f, 53,7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147,433f, -2201,37f, 3,688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320,9934f, 265,2515f, 82,1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425,564f, -244,3f, 15,8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377,153f, -717,567f, 10,0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245,1564f, 370,211f, 104,7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173,1176f, -1003,279f, -99,9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199,9715f, -999,6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228,6058f, -992,0537f, -99,9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854,254f, 3686,739f, 33,2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444,8907f, 6013,587f, 30,7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522,845f, 3707,965f, 19,9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717,2994f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717,299f, -974,4271f, 23,9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449,785f, 4983,825f, 45,8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087,195f, -1988,445f, 28,649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982,233f, -2160,382f, 28,4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479,0568f, -1316,825f, 28,2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005,663f, -478,3461f, 49,0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var1 = { func_56(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var1 = { func_56(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var1 = { func_56(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var1 = { func_56(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var1 = { func_56(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var1 = { func_56(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var1 = { func_56(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312298[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var1 = { func_56(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var1 = { func_56(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var1 = { func_56(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var1 = { func_56(38, 0) };
			Var0 = { -20,1f, -580,8f, 91,3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var1 = { func_56(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var1 = { func_56(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var1 = { func_56(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var1 = { func_56(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var1 = { func_56(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470,3754f, -698,5207f, 51,5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460,6133f, -691,5562f, 69,9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300,633f, -997,4288f, -99,9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374,2012f, 416,9688f, 142,5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16,29585f, -684,0385f, 33,50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341,1f, -1000f, -99,2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199,9716f, -1018,954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388,001f, -618,4197f, 30,8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var1 = { func_56(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var1 = { func_56(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var1 = { func_56(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var1 = { func_56(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var1 = { func_56(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var1 = { func_56(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var1 = { func_56(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var1 = { func_56(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var1 = { func_56(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var1 = { func_56(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var1 = { func_56(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var1 = { func_56(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var1 = { func_56(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var1 = { func_56(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var1 = { func_56(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var1 = { func_56(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var1 = { func_56(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var1 = { func_56(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var1 = { func_56(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var1 = { func_56(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var1 = { func_56(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var1 = { func_56(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938,3077f, -3196,112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512,5f, 4852f, -62,6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61,9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047,6f, -232,3503f, 38,0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520,0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266,802f, -3014,849f, -49,4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974,9203f, -3000,065f, -40,647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969,5376f, -3000,411f, -48,647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094,997f, -3100,012f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059,995f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010,008f, -3100f, -39,9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372,6707f, 405,5235f, 144,5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282,0588f, -955,17f, 85,3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342,7946f, -997,4225f, -99,7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260,3268f, -997,4298f, -100,0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108,2369f, -753,5364f, 233,1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135,3226f, -746,3677f, 253,1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108,2572f, -753,5342f, 44,7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228,6161f, -992,053f, -99,9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796,7f, -39,1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694,4f, 5898,9f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121,8f, 5516,3f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279,6f, 5233,2f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158,6f, 5467,1f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705,9f, 5838,5f, -152,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316,5f, 5184f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276,1f, -80,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090,2f, 5559,2f, -101,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808,6f, -39,3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721,8f, 5781,4f, -146,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780,8f, 5703,4f, -136,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868,1f, 5659,2f, -126,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218,2f, 5321,2f, -85,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278,5f, 4859,7f, -44,7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187,2f, 5419,8f, -96,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344,7f, 5136,4f, -75,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363,4f, 5039,5f, -65,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049,3f, 5602,1f, -107,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337,8f, 4944,3f, -55,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961,5f, 5646,9f, -117,4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345,0041f, 4842,001f, -59,9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279,9322f, -1337,49f, 23,7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604,664f, -3012,583f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505,783f, -3012,587f, -79,9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630,4205f, -236,7843f, 37,057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182,5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093,6f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009,5f, -3196,6f, -38,5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976,6364f, 70,29476f, 115,1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479,3f, -273,9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48,5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497,7f, -312,8f, -69,9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523,4f, -270f, -58,7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504,4f, -257,2f, -39,1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281,4f, -64,7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488,3f, -267,4f, -70,6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519,9f, -255,3f, -24,1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572,9f, -253,4f, -64,7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103,562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113,4f, 25,7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99,2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1,1f, -705,6f, 16,1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99,4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935,7f, -2992,2f, 13,9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152,3f, -1004,4f, -97,8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415,1f, -69,6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984,4f, -95,4f, 76,8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930,1f, -2269,9f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930,1f, -2240,1f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930,1f, -2213,2f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930,1f, -2183,4f, -50,4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421,015f, -3012,587f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113,2f, 27,6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_222620[0 /*160*/].f_16 };
			Var0.f_3 = func_55(&(Global_4718592.f_222620[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_222620[1 /*160*/].f_16 };
			Var0.f_3 = func_55(&(Global_4718592.f_222620[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_222620[2 /*160*/].f_16 };
			Var0.f_3 = func_55(&(Global_4718592.f_222620[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_222620[3 /*160*/].f_16 };
			Var0.f_3 = func_55(&(Global_4718592.f_222620[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_222620[4 /*160*/].f_16 };
			Var0.f_3 = func_55(&(Global_4718592.f_222620[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196,14f, -580,65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
			if (func_54(Var0))
			{
			}
			return Var0;
	}
}

int func_54(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_55(var uParam0)
{
	return uParam0;
}

struct<6> func_56(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_95498[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_92265)
	{
		if (Global_92265[iVar0 /*5*/] != -1)
		{
			if (Global_79660.f_109[Global_92265[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(iParam0), 0);
}

bool func_59()
{
	return Global_1575083;
}

int func_60()
{
	if (unk_0x486FF5D06E9659F1(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return unk_0x1DD05E817C89C737() <= Global_23831.f_6481 + 100;
}

bool func_62()
{
	return BitTest(Global_79638, 9);
}

bool func_63()
{
	return BitTest(Global_79638, 8);
}

int func_64()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0) && !unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (((((((((((((((unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_intro", 3) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_base", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_enterchair", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_exitchair", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_a", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_b", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_c", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@barbers", "player_idle_d", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_intro", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_base", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_65()
{
	int iVar0;
	
	if (func_75())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_66(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_66(int iParam0)
{
	return func_67(iParam0, 20, 1);
}

int func_67(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (unk_0x76CD105BCAC6EB9F())
	{
		if (func_73() == 0)
		{
			return BitTest(func_68(func_72(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		uVar0 = func_69(iParam0, iParam1);
		if (unk_0xDF7F16323520B858(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_69(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(0, iParam0, func_70(uParam1));
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_71();
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

int func_71()
{
	return Global_1574926;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12924;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		default:
			break;
	}
	return 14835;
}

int func_73()
{
	return Global_32948;
}

bool func_74()
{
	return Global_101585.f_394 > 0;
}

bool func_75()
{
	return Global_101585.f_393 > 0;
}

bool func_76(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_77(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

bool func_78()
{
	return Global_101572.f_1;
}

bool func_79()
{
	return Global_79657;
}

int func_80()
{
	if (Global_79650)
	{
		return 1;
	}
	else if (Global_64160 && !Global_64166)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	return 1;
}

void func_82(int iParam0, int iParam1)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_33200, iParam0);
	Global_33201 = iParam1;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

void func_84(char* sParam0)
{
	unk_0x882AEFD55B8D51FB(sParam0);
	unk_0xCFAD3D478C87321A();
}

int func_85()
{
	var uVar0;
	
	if (Global_152848 == 2)
	{
		return 1;
	}
	else if (Global_152848 == 3)
	{
		return 0;
	}
	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 2);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 4);
				unk_0x0B0C9A0F9AAEB7F0(&uVar0, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x76CA59C648318506())
				{
					uVar0 = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&uVar0, 0);
					unk_0xED11291F7127888E(uVar0);
				}
				return 1;
			}
		}
	}
	if (unk_0x76CA59C648318506())
	{
		if (BitTest(unk_0x38640D2193CB547F(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if ((Global_23400 || Global_23399) || Global_23401)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		if (Global_20930.f_1 == 10)
		{
			if (Global_8115 == iParam0)
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
	return 0;
}

void func_87()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Back", &Global_20919, 1);
	}
}

void func_88()
{
	if (Global_20908 == 0)
	{
		if (func_163(2, Global_20899, 0))
		{
			unk_0x8744D2E3FC95740E(&Global_8801, 0);
			iLocal_87 = 0;
			func_161();
			Global_20908 = 1;
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_73 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_73))
			{
				system::wait(0);
			}
			iLocal_77 = unk_0x5DEF122A58D4F685(uLocal_73);
			if (func_114(Global_8115))
			{
				if (iLocal_77 == 0)
				{
					if (bLocal_287)
					{
						Global_23400 = 0;
						Global_23399 = 0;
						Global_23401 = 1;
						func_100();
					}
					else
					{
						Global_23400 = 0;
						Global_23399 = 0;
						Global_23401 = 0;
						func_100();
					}
				}
				if (iLocal_77 == 1)
				{
					if (bLocal_287)
					{
						Global_23400 = 0;
						Global_23399 = 0;
						Global_23401 = 0;
						func_100();
					}
					else if (func_90(Global_8115, Global_20930))
					{
						func_89();
						iLocal_87 = 1;
					}
					else
					{
						Global_23400 = 1;
						Global_23399 = 0;
						Global_23401 = 0;
						func_100();
					}
				}
				if (iLocal_77 == 2)
				{
					if (func_90(Global_8115, Global_20930))
					{
						func_89();
						iLocal_87 = 1;
					}
					else
					{
						Global_23400 = 1;
						Global_23399 = 0;
						Global_23401 = 0;
						func_100();
					}
				}
			}
			else
			{
				if (iLocal_77 == 0)
				{
					if (bLocal_287)
					{
						Global_23400 = 0;
						Global_23399 = 0;
						Global_23401 = 1;
						func_100();
					}
					else if (func_90(Global_8115, Global_20930))
					{
						func_89();
						iLocal_87 = 1;
					}
					else
					{
						Global_23400 = 1;
						Global_23399 = 0;
						Global_23401 = 0;
						func_100();
					}
				}
				if (iLocal_77 == 1)
				{
					if (func_90(Global_8115, Global_20930))
					{
						func_89();
						iLocal_87 = 1;
					}
					else
					{
						Global_23400 = 1;
						Global_23399 = 0;
						Global_23401 = 0;
						func_100();
					}
				}
			}
		}
	}
}

void func_89()
{
	func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (Global_20918)
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
	func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_270", 0, 0, 0, 0);
	func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_271", 0, 0, 0, 0);
	func_160(Global_20911, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(Global_20911, "SET_HEADER", "CELL_269", 0, 0, 0, 0);
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_99();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_28(6) && !func_28(7))
	{
		if (func_91(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_99();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!func_96(6))
	{
		iVar1 = func_94(iParam0);
		iVar2 = func_94(iParam1);
		if (iVar1 != 7 && iVar2 != 7)
		{
			iVar3 = func_93(iVar1, iVar2);
			if (iVar3 != 10)
			{
				iVar4 = func_92(iVar3);
				if (iVar4 == 3 || iVar4 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 < 9)
	{
		return Global_97369[iParam0 /*2*/];
	}
	return -1;
}

int func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_94(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_99())
	{
		return func_95(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_99())
	{
		return 6;
	}
	if (iParam0 == 205)
	{
		return 6;
	}
	return 6;
}

var func_95(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_11;
}

int func_96(int iParam0)
{
	if (Global_44042 == 15)
	{
		return 0;
	}
	if (func_97(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_97(int iParam0)
{
	return func_98(iParam0, Global_44042);
}

int func_98(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_99()
{
	if (Global_32948 == 0 || Global_32948 == 2)
	{
		return 204;
	}
	return 161;
}

void func_100()
{
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 10;
		func_113();
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			if (!unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
				{
					if (!func_112())
					{
						func_111();
					}
				}
				else if (func_110() == 0)
				{
					func_111();
				}
			}
		}
		if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_109();
			func_160(Global_20911, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if (func_83(Global_8115, Global_20930) == 0)
	{
		func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
	}
	else
	{
		func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_211", &(Global_2169[Global_8115 /*29*/].f_3), 0);
	}
	func_103();
	if (Global_79389)
	{
		func_101(1918, 1, -1);
	}
}

void func_101(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_68(iParam0, func_70(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_102(iParam0, iVar0, iParam2, 1);
}

void func_102(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_69(iParam0, uParam2);
		if (iVar0 != 0)
		{
			unk_0x1164A75E490C27B6(iVar0, iParam1, iParam3);
		}
	}
}

void func_103()
{
	int iVar0;
	char cVar1[24];
	
	if (Global_20913 == 1)
	{
		return;
	}
	if (Global_20930.f_1 < 4)
	{
		return;
	}
	while (!unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		if (Global_79389)
		{
			return;
		}
		system::wait(0);
	}
	switch (Global_20930.f_1)
	{
		case 6:
			func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_107(Global_9405);
			if (Global_9405 == 1)
			{
				func_160(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20934), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20934;
			}
			else
			{
				func_160(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(Global_20935), -1082130432, -1082130432, -1082130432);
				Global_20910 = Global_20935;
			}
			if (Global_20918)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21147 == 0)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else if (Global_79389)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else
			{
				if (Global_21146 == 1)
				{
					if (Global_20918)
					{
						func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_20918)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
			}
			if (Global_79389)
			{
				iVar0 = Global_20934;
				func_160(Global_20911, "DISPLAY_VIEW", 4f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
				func_160(Global_20911, "DISPLAY_VIEW", 1f, system::to_float(iVar0), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_20929 == 1)
			{
				func_106();
				func_160(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_84("CELL_300");
					func_84("CELL_217");
					func_84("CELL_217");
					unk_0xE6B753D52F4CA222();
				}
				else if (func_83(Global_8115, Global_20930) == 0)
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_217", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
				func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_22286 == 4 || Global_22286 == 3)
			{
				func_160(Global_20911, "SET_THEME", system::to_float(Global_113969.f_14054[Global_20930 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_106();
				if (Global_22299)
				{
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(4);
					unk_0x330108B080A2132F(0);
					unk_0x330108B080A2132F(2);
					unk_0x882AEFD55B8D51FB("CELL_CONDFON");
					unk_0x60D332F23943B34F(&Global_22301);
					unk_0xCFAD3D478C87321A();
					func_84("CELL_300");
					func_84("CELL_219");
					func_84("CELL_219");
					unk_0xE6B753D52F4CA222();
				}
				else
				{
					if (Global_22544)
					{
						StringCopy(&cVar1, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar1, "CELL_211", 24);
					}
					if (func_83(Global_8115, Global_20930) == 0)
					{
						func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", &cVar1, "CELL_195", 0);
					}
					else
					{
						func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), &cVar1, &(Global_2169[Global_8115 /*29*/].f_3), 0);
					}
				}
				func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_104();
			break;
		
		default:
			break;
	}
}

void func_104()
{
	if (unk_0xA0C7B98BCF1EEF9E(Global_20911))
	{
		func_105();
		if (Global_20929 == 1)
		{
			if (Global_20918)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_22333)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (BitTest(Global_8800, 20))
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
		}
		else
		{
			func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			unk_0x8744D2E3FC95740E(&Global_8800, 17);
			if (BitTest(Global_8800, 20))
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_20873)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_105()
{
	if (Global_79389)
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		unk_0x8744D2E3FC95740E(&Global_8800, 17);
	}
}

void func_106()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20930 == 0)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_20930 == 1)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_20930 == 2)
		{
			switch (Global_113969.f_14054[Global_20930 /*20*/].f_6)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_20930 == 3)
		{
			switch (Global_4543360)
			{
				case 1:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 0);
					break;
				
				case 2:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 1);
					break;
				
				case 3:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 2);
					break;
				
				case 4:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 3);
					break;
				
				case 5:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 4);
					break;
				
				case 6:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 5);
					break;
				
				case 7:
					unk_0x454108124161B7D7(unk_0x259BE71D8A81D4FA(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_107(int iParam0)
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_108();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_28(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_84(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar2);
								unk_0xE6B753D52F4CA222();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_84(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(Global_8806);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_84(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar7);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_84(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(iVar8);
								unk_0xE6B753D52F4CA222();
							}
							else if (iVar1 == 8)
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_84(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if ((iVar1 == 23 && unk_0x1B79E937E91F40C3(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
								unk_0x330108B080A2132F(1);
								unk_0x330108B080A2132F(iVar0);
								unk_0x330108B080A2132F(Global_8807[iVar1 /*15*/].f_10);
								unk_0x330108B080A2132F(0);
								func_84(&(Global_8807[iVar1 /*15*/]));
								unk_0x330108B080A2132F(42);
								unk_0xE6B753D52F4CA222();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_157(Global_20911, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_8807[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_109()
{
	if (Global_9605[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9605[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9605[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 25);
	unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 11);
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			if (Global_20873 == 0)
			{
				if (Global_8115 != 128)
				{
					if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
					{
						if (Global_22286 != 2)
						{
						}
					}
				}
			}
		}
		if (func_28(14))
		{
			return 0;
		}
		if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			return 0;
		}
		if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
		{
			if (!unk_0x9CA0AFAD60564183())
			{
				if (unk_0x69799E0840A34AFB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)))
				{
					return 0;
				}
			}
		}
		if (((unk_0x2CFBD7757B4D922F(unk_0x4A8C381C258A124D()) || unk_0x9AC89B274C35B3FC(unk_0x4A8C381C258A124D())) || unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA())) || (unk_0xC3174723CF144560(unk_0x4A8C381C258A124D()) && !(BitTest(Global_4718592.f_37, 17) && (unk_0x834C960822A4683F() || Global_1919896))))
		{
			return 0;
		}
		if (Global_113017)
		{
			return 0;
		}
	}
	if (Global_79389)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || unk_0x9CA0AFAD60564183()))
	{
		iVar2 = 1;
		if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
		{
			if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
			{
				uVar3 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				if ((((((((unk_0x78B050AFBA6D1517(unk_0x4B423FAA24E8ABF0(uVar3)) || unk_0x3801E353091A2E42(unk_0x4B423FAA24E8ABF0(uVar3))) || unk_0x9910CD0D8626AA28(unk_0x4B423FAA24E8ABF0(uVar3))) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("seashark")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("seashark2")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("rhino")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("submersible")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("submersible2")) || unk_0x4B423FAA24E8ABF0(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4543362 || iVar2 == 1)
	{
		if (unk_0x486FF5D06E9659F1(joaat("apptrackify")) > 0 || Global_113969.f_14054.f_89)
		{
			if (unk_0x486FF5D06E9659F1(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_112() && unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()) && iVar1 == 0)
		{
			iVar2 = unk_0xB204F40D393426B6(unk_0x4A8C381C258A124D(), 0, 1);
			if (Global_79389)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
				{
					iVar0 = 1;
				}
			}
			else if (unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
			{
				iVar0 = 1;
			}
			if (!Global_20873)
			{
				if (Global_8115 != 128)
				{
					if (iVar0 == 0)
					{
						if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
						{
							if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
							{
							}
							else
							{
								if (Global_79389)
								{
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 0);
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 0);
									unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 0);
								}
								unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 11);
								unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_112()
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	struct<2> Var0;
	
	unk_0x78C4EBB0251847E2(&Var0);
	if (Global_20883[Global_20875 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_20870 = 1;
	}
}

int func_114(int iParam0)
{
	int iVar0;
	
	if (func_115(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_650)
	{
		if (Global_113969.f_7691.f_199[iVar0 /*15*/].f_6 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_7691.f_136)
	{
		if (Global_113969.f_7691[iVar0 /*15*/].f_6 == iParam0)
		{
			if (BitTest(Global_113969.f_7691[iVar0 /*15*/].f_1, 7))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = Global_92265[iVar0 /*5*/];
		if (iVar1 != -1)
		{
			iVar2 = -1;
			iVar2 = Global_79660.f_109[Global_92265[iVar0 /*5*/] /*4*/];
			if (iVar2 != -1)
			{
				if (func_116(Global_92301[iVar2 /*34*/].f_12, iParam0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_116(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 19:
			return func_118(uParam0, 8);
			break;
		
		case 14:
			return func_118(uParam0, 16);
			break;
		
		case 17:
			return func_118(uParam0, 32);
			break;
	}
	return func_117(uParam0, iParam1);
}

int func_117(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			return BitTest(uParam0, iParam1);
		
		default:
	}
	return 0;
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_119()
{
	if (Global_20908 == 0)
	{
		if (func_163(2, Global_20899, 0))
		{
			unk_0x8744D2E3FC95740E(&Global_8801, 0);
			func_161();
			Global_20908 = 1;
			unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
			uLocal_73 = unk_0x6CA3F2B87712B6A4();
			while (!unk_0xA6F779AA284EB20E(uLocal_73))
			{
				system::wait(0);
			}
			iLocal_77 = unk_0x5DEF122A58D4F685(uLocal_73);
			if (iLocal_77 == 0)
			{
				Global_23395[Global_20930] = 1;
				iLocal_86 = 0;
				Global_23400 = 0;
				Global_23399 = 1;
				Global_23401 = 0;
				func_100();
			}
			else
			{
				iLocal_87 = 0;
				func_134();
			}
		}
	}
}

void func_120(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_112606 && iParam1)
	{
		if (func_124(sParam0) && !unk_0xA5DAECD045AA8024())
		{
			unk_0x428C32CC68809A35(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_113969.f_20413.f_145 - 2))
			{
				func_123(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_122((Global_113969.f_20413.f_145 - 1));
			Global_113969.f_20413.f_145 = (Global_113969.f_20413.f_145 - 1);
			func_121();
			return;
		}
		iVar0++;
	}
}

void func_121()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113969.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[0])
			{
				Global_113969.f_20413.f_146[0] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[1])
			{
				Global_113969.f_20413.f_146[1] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113969.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113969.f_20413[iVar0 /*16*/].f_12 > Global_113969.f_20413.f_146[2])
			{
				Global_113969.f_20413.f_146[2] = Global_113969.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_122(int iParam0)
{
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_113969.f_20413[iParam0 /*16*/].f_4), "", 16);
	Global_113969.f_20413[iParam0 /*16*/].f_8 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = -1;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = 0;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = 0;
}

void func_123(int iParam0, int iParam1)
{
	Global_113969.f_20413[iParam0 /*16*/] = { Global_113969.f_20413[iParam1 /*16*/] };
	Global_113969.f_20413[iParam0 /*16*/].f_4 = { Global_113969.f_20413[iParam1 /*16*/].f_4 };
	Global_113969.f_20413[iParam0 /*16*/].f_8 = Global_113969.f_20413[iParam1 /*16*/].f_8;
	Global_113969.f_20413[iParam0 /*16*/].f_10 = Global_113969.f_20413[iParam1 /*16*/].f_10;
	Global_113969.f_20413[iParam0 /*16*/].f_9 = Global_113969.f_20413[iParam1 /*16*/].f_9;
	Global_113969.f_20413[iParam0 /*16*/].f_11 = Global_113969.f_20413[iParam1 /*16*/].f_11;
	Global_113969.f_20413[iParam0 /*16*/].f_12 = Global_113969.f_20413[iParam1 /*16*/].f_12;
	Global_113969.f_20413[iParam0 /*16*/].f_13 = Global_113969.f_20413[iParam1 /*16*/].f_13;
	Global_113969.f_20413[iParam0 /*16*/].f_14 = Global_113969.f_20413[iParam1 /*16*/].f_14;
	Global_113969.f_20413[iParam0 /*16*/].f_15 = Global_113969.f_20413[iParam1 /*16*/].f_15;
}

var func_124(var uParam0)
{
	unk_0x39DCBE5519BD783A(uParam0);
	return unk_0x7EBCD400E7DE179C(0);
}

void func_125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_126(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_126(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x1B79E937E91F40C3(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(&(Global_113969.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113969.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_8 = (unk_0x1DD05E817C89C737() + iParam3);
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = ((unk_0x1DD05E817C89C737() + iParam3) + iParam4);
		}
		else
		{
			Global_113969.f_20413[Global_113969.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113969.f_20413.f_145++;
		func_121();
	}
}

int func_127(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, &Global_112609))
	{
		return 1;
	}
	if (func_128(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_128(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_113969.f_20413.f_145)
	{
		if (unk_0x1B79E937E91F40C3(sParam0, &(Global_113969.f_20413[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_129(int iParam0)
{
	return 0;
	if (((iParam0 == 92 || iParam0 == 68) || iParam0 == 79) || iParam0 == 34)
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	return 0;
	iVar0 = func_99();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((Global_97360 != -1 && BitTest(Global_92301[Global_97360 /*34*/].f_15, 15)) && BitTest(Global_97361, iParam1))
	{
		if (Global_97359 != 5 || func_133() == Global_97360)
		{
			if (!func_132(12))
			{
				if (func_131(iParam0, iParam1, &iVar1) && func_92(iVar1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_131(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_94(iParam0);
	iVar1 = func_94(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		*uParam2 = func_93(iVar0, iVar1);
		if (*uParam2 != 10)
		{
			return 1;
		}
	}
	*uParam2 = 10;
	return 0;
}

bool func_132(int iParam0)
{
	return BitTest(Global_97368, iParam0);
}

int func_133()
{
	return Global_79652;
}

void func_134()
{
	system::settimera(0);
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 8;
	}
	if (Global_20918)
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
	iLocal_86 = 1;
	func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_114(Global_8115))
	{
		if (bLocal_287)
		{
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, &(Global_8638[iLocal_289 /*16*/].f_8), 0, 0, 0, 0);
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_288)
			{
				if (func_135(Global_8115, Global_20930))
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(2), system::to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_90(Global_8115, Global_20930))
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(2), system::to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
			if (bLocal_288)
			{
				if (func_135(Global_8115, Global_20930))
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
				}
				if (func_90(Global_8115, Global_20930))
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
				}
			}
		}
	}
	else if (bLocal_287)
	{
		func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, &(Global_8638[iLocal_289 /*16*/].f_8), 0, 0, 0, 0);
		if (bLocal_288)
		{
			if (func_135(Global_8115, Global_20930))
			{
				func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
			}
			if (func_90(Global_8115, Global_20930))
			{
				func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
			}
		}
	}
	else if (bLocal_288)
	{
		if (func_135(Global_8115, Global_20930))
		{
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_209", 0, 0, 0, 0);
		}
		if (func_90(Global_8115, Global_20930))
		{
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_222", 0, 0, 0, 0);
		}
	}
	func_160(Global_20911, "DISPLAY_VIEW", 18f, system::to_float(iLocal_74), -1082130432, -1082130432, -1082130432);
	func_158(Global_20911, "SET_HEADER", &(Global_2169[Global_8115 /*29*/].f_3), 0, 0, 0, 0);
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_99();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if ((iParam0 == 1 && iParam1 == 0) || (iParam0 == 0 && iParam1 == 1))
	{
		if (func_8(90) && !func_8(20))
		{
			return 0;
		}
	}
	if (!func_96(6))
	{
		if (func_131(iParam0, iParam1, &iVar1) && func_92(iVar1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_136()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		unk_0x66EFB3D6110055C4(0, 22, 1);
	}
	if (func_163(2, Global_20899, 0))
	{
		func_161();
		Global_20908 = 1;
		unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
		uLocal_73 = unk_0x6CA3F2B87712B6A4();
		while (!unk_0xA6F779AA284EB20E(uLocal_73))
		{
			system::wait(0);
		}
		iVar0 = unk_0x5DEF122A58D4F685(uLocal_73);
		iLocal_79 = Global_9591[iVar0];
		uLocal_81[0] = unk_0xFACCDE46E24AD056(&(Global_9508[iLocal_79 /*5*/]));
		if (unk_0x1B79E937E91F40C3(uLocal_81[0], "*"))
		{
			cLocal_82 = { Global_9574[Global_20930 /*4*/] };
			iLocal_80 = unk_0x09112CCF7824FE38(&cLocal_82);
		}
		else if (unk_0x09112CCF7824FE38(&cLocal_82) < 14)
		{
			StringConCat(&cLocal_82, uLocal_81[0], 16);
			iLocal_80++;
		}
		unk_0x88F483FBD433696A(Global_20911, "SET_HEADER");
		unk_0x882AEFD55B8D51FB("STRING");
		unk_0x6CA7A80BDD78C062(&cLocal_82, -1);
		unk_0xCFAD3D478C87321A();
		unk_0xE6B753D52F4CA222();
	}
	if (func_163(2, 178, 0))
	{
		func_87();
		Global_20908 = 1;
		if (unk_0x09112CCF7824FE38(&cLocal_82) > 0)
		{
			StringCopy(&cLocal_82, unk_0xA4FC5B871651C9F9(&cLocal_82, 0, (iLocal_80 - 1)), 16);
			iLocal_80 = (iLocal_80 - 1);
		}
		unk_0x88F483FBD433696A(Global_20911, "SET_HEADER");
		unk_0x882AEFD55B8D51FB("STRING");
		unk_0x6CA7A80BDD78C062(&cLocal_82, -1);
		unk_0xCFAD3D478C87321A();
		unk_0xE6B753D52F4CA222();
	}
	if (func_163(2, Global_20902, 0))
	{
		if (!func_146())
		{
			func_161();
			Global_9574[Global_20930 /*4*/] = { cLocal_82 };
			Global_8115 = 144;
			iLocal_277 = 0;
			if (Global_20930.f_1 > 3)
			{
				Global_20930.f_1 = 10;
				func_113();
				if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
				{
					if (!unk_0x69799E0840A34AFB(unk_0x4A8C381C258A124D()))
					{
						if (unk_0xD6179D448A06A77F(unk_0x4A8C381C258A124D(), 0))
						{
							if (!func_112())
							{
								func_111();
							}
						}
						else if (func_110() == 0)
						{
							func_111();
						}
					}
				}
			}
			iVar1 = 0;
			iLocal_91 = 0;
			iVar3 = func_99();
			while (iVar1 < iVar3)
			{
				iVar4 = iVar1;
				if (iVar4 != 146)
				{
					sVar2 = unk_0xFACCDE46E24AD056(&(Global_118[iVar1 /*10*/].f_4));
					if (unk_0x1B79E937E91F40C3(sVar2, &cLocal_82))
					{
						if ((func_145(iVar4, Global_20930) == 1 || func_145(iVar4, Global_20930) == 2) || unk_0x1B79E937E91F40C3(sVar2, unk_0xFACCDE46E24AD056(&(Global_118[130 /*10*/].f_4))))
						{
							Global_8115 = iVar4;
						}
						else
						{
							iLocal_91 = 1;
						}
					}
				}
				iVar1++;
			}
			if ((Global_8115 == 144 && iLocal_277 == 0) && iLocal_91 == 0)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(4);
				unk_0x330108B080A2132F(0);
				unk_0x330108B080A2132F(3);
				unk_0x882AEFD55B8D51FB("STRING");
				unk_0x6CA7A80BDD78C062(&cLocal_82, -1);
				unk_0xCFAD3D478C87321A();
				func_84("CELL_300");
				func_84("CELL_211");
				func_84("CELL_195");
				unk_0xE6B753D52F4CA222();
				func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
				iLocal_277 = 0;
				iVar5 = 0;
				while (iVar5 < 37)
				{
					sVar6 = unk_0xFACCDE46E24AD056(&(Global_8119[iVar5 /*14*/]));
					if (unk_0x1B79E937E91F40C3(sVar6, &cLocal_82))
					{
						iLocal_277 = 1;
						cLocal_278 = { Global_8119[iVar5 /*14*/].f_4 };
						Local_281 = { Global_8119[iVar5 /*14*/].f_8 };
					}
					iVar5++;
				}
				if (iLocal_277 == 0)
				{
					iLocal_85 = unk_0x09112CCF7824FE38(&cLocal_82);
					if (iLocal_85 > 6)
					{
						StringCopy(&(uLocal_285[0]), unk_0xA4FC5B871651C9F9(&cLocal_82, 0, 1), 4);
						StringCopy(&(uLocal_285[1]), unk_0xA4FC5B871651C9F9(&cLocal_82, 1, 2), 4);
						StringCopy(&(uLocal_285[2]), unk_0xA4FC5B871651C9F9(&cLocal_82, 2, 3), 4);
						StringCopy(&(uLocal_285[3]), unk_0xA4FC5B871651C9F9(&cLocal_82, 3, 4), 4);
						StringCopy(&(uLocal_285[4]), unk_0xA4FC5B871651C9F9(&cLocal_82, 4, 5), 4);
						StringCopy(&(uLocal_285[5]), unk_0xA4FC5B871651C9F9(&cLocal_82, 5, 6), 4);
						if (((unk_0x1B79E937E91F40C3(&(uLocal_285[0]), "1") && unk_0x1B79E937E91F40C3(&(uLocal_285[1]), "9")) && unk_0x1B79E937E91F40C3(&(uLocal_285[2]), "9")) && unk_0x1B79E937E91F40C3(&(uLocal_285[3]), "9"))
						{
							iVar7 = func_144(&(uLocal_285[4]));
							iVar8 = func_144(&(uLocal_285[5]));
							func_143(iVar7, iVar8);
							iLocal_277 = 1;
						}
						if (iLocal_277 == 0)
						{
							if (iLocal_85 == 10 || iLocal_85 == 7)
							{
								if (iLocal_85 == 10)
								{
									StringCopy(&(uLocal_285[0]), unk_0xA4FC5B871651C9F9(&cLocal_82, 3, 4), 4);
									StringCopy(&(uLocal_285[1]), unk_0xA4FC5B871651C9F9(&cLocal_82, 4, 5), 4);
									StringCopy(&(uLocal_285[2]), unk_0xA4FC5B871651C9F9(&cLocal_82, 5, 6), 4);
									StringCopy(&(uLocal_285[3]), unk_0xA4FC5B871651C9F9(&cLocal_82, 6, 7), 4);
									StringCopy(&(uLocal_285[4]), unk_0xA4FC5B871651C9F9(&cLocal_82, 7, 8), 4);
									StringCopy(&(uLocal_285[5]), unk_0xA4FC5B871651C9F9(&cLocal_82, 8, 9), 4);
									StringCopy(&(uLocal_285[6]), unk_0xA4FC5B871651C9F9(&cLocal_82, 9, 10), 4);
								}
								else
								{
									StringCopy(&(uLocal_285[0]), unk_0xA4FC5B871651C9F9(&cLocal_82, 0, 1), 4);
									StringCopy(&(uLocal_285[1]), unk_0xA4FC5B871651C9F9(&cLocal_82, 1, 2), 4);
									StringCopy(&(uLocal_285[2]), unk_0xA4FC5B871651C9F9(&cLocal_82, 2, 3), 4);
									StringCopy(&(uLocal_285[3]), unk_0xA4FC5B871651C9F9(&cLocal_82, 3, 4), 4);
									StringCopy(&(uLocal_285[4]), unk_0xA4FC5B871651C9F9(&cLocal_82, 4, 5), 4);
									StringCopy(&(uLocal_285[5]), unk_0xA4FC5B871651C9F9(&cLocal_82, 5, 6), 4);
									StringCopy(&(uLocal_285[6]), unk_0xA4FC5B871651C9F9(&cLocal_82, 6, 7), 4);
								}
								if ((((unk_0x1B79E937E91F40C3(&(uLocal_285[0]), "5") && unk_0x1B79E937E91F40C3(&(uLocal_285[1]), "5")) && unk_0x1B79E937E91F40C3(&(uLocal_285[2]), "5")) && unk_0x1B79E937E91F40C3(&(uLocal_285[3]), "0")) && unk_0x1B79E937E91F40C3(&(uLocal_285[4]), "1"))
								{
									iVar9 = func_144(&(uLocal_285[5]));
									iVar10 = func_144(&(uLocal_285[6]));
									func_143(iVar9, iVar10);
									iLocal_277 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (func_145(Global_8115, Global_20930) == 2 || Global_8115 == 130)
				{
					func_142(Global_8115, Global_20930, 1);
					if (Global_8115 == 130)
					{
						if (!func_145(130, 0) == 1)
						{
							func_138(130, 4, 1);
							func_138(130, 3, 0);
						}
						if (Global_79389)
						{
							if (!func_137(130, 3))
							{
								func_138(130, 3, 1);
							}
						}
					}
				}
				if (func_83(Global_8115, Global_20930) == 0)
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_118[Global_8115 /*10*/].f_4), "CELL_300", "CELL_211", "CELL_195", 0);
				}
				else
				{
					func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3), -1f, -1f, &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), "CELL_211", &(Global_2169[Global_8115 /*29*/].f_3), 0);
				}
			}
			func_103();
		}
	}
}

int func_137(int iParam0, int iParam1)
{
	if (func_145(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_138(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_21();
		if (iParam1 == 4)
		{
			func_141(iParam0, 0, 1);
			func_141(iParam0, 1, 1);
			func_141(iParam0, 2, 1);
			func_142(iParam0, 0, 1);
			func_142(iParam0, 1, 1);
			func_142(iParam0, 2, 1);
		}
		else
		{
			if (func_145(iParam0, iParam1) == 1 && func_83(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_141(iParam0, iVar0, 1);
			func_142(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_140(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_140(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_139();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_140(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_139();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_140(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_139();
			}
		}
	}
}

void func_139()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xFACCDE46E24AD056(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		unk_0xCCDB0041859B85A6("");
		StringCopy(&cVar1, unk_0xFACCDE46E24AD056(&(Global_9410[1 /*6*/])), 64);
		sVar2 = unk_0xFACCDE46E24AD056("CELL_253");
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_255");
		unk_0xACF853FB3F6EA7D4(&(Global_9410[1 /*6*/]));
		unk_0x5C7E2225D7451992(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x8744D2E3FC95740E(&Global_8800, 0);
}

struct<4> func_140(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_142(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 + iParam1);
	iVar0 = (20 - iVar0);
	iVar0 += 5;
	switch (iVar0)
	{
		case 7:
			StringCopy(&cLocal_278, "ANS_RAN1", 16);
			StringCopy(&Local_281, "ANS_M_USA1", 24);
			break;
		
		case 8:
			StringCopy(&cLocal_278, "ANS_RAN2", 16);
			StringCopy(&Local_281, "ANS_F_USA1", 24);
			break;
		
		case 9:
			StringCopy(&cLocal_278, "ANS_RAN3", 16);
			StringCopy(&Local_281, "ANS_M_ENG1", 24);
			break;
		
		case 10:
			StringCopy(&cLocal_278, "ANS_RAN4", 16);
			StringCopy(&Local_281, "ANS_M_USA2", 24);
			break;
		
		case 11:
			StringCopy(&cLocal_278, "ANS_RAN5", 16);
			StringCopy(&Local_281, "ANS_M_ASIAN", 24);
			break;
		
		case 12:
			StringCopy(&cLocal_278, "ANS_RAN6", 16);
			StringCopy(&Local_281, "ANS_F_USA2", 24);
			break;
		
		case 13:
			StringCopy(&cLocal_278, "ANS_RAN7", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		case 14:
			StringCopy(&cLocal_278, "ANS_RAN8", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		case 15:
			StringCopy(&cLocal_278, "ANS_RAN9", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		case 16:
			StringCopy(&cLocal_278, "ANS_RAN10", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		case 17:
			StringCopy(&cLocal_278, "ANS_RAN1", 16);
			StringCopy(&Local_281, "ANS_M_USA1", 24);
			break;
		
		case 18:
			StringCopy(&cLocal_278, "ANS_RAN2", 16);
			StringCopy(&Local_281, "ANS_F_USA1", 24);
			break;
		
		case 19:
			StringCopy(&cLocal_278, "ANS_RAN3", 16);
			StringCopy(&Local_281, "ANS_M_ENG1", 24);
			break;
		
		case 20:
			StringCopy(&cLocal_278, "ANS_RAN4", 16);
			StringCopy(&Local_281, "ANS_M_USA2", 24);
			break;
		
		case 21:
			StringCopy(&cLocal_278, "ANS_RAN5", 16);
			StringCopy(&Local_281, "ANS_M_ASIAN", 24);
			break;
		
		case 22:
			StringCopy(&cLocal_278, "ANS_RAN6", 16);
			StringCopy(&Local_281, "ANS_F_USA2", 24);
			break;
		
		case 23:
			StringCopy(&cLocal_278, "ANS_RAN7", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		case 24:
			StringCopy(&cLocal_278, "ANS_RAN8", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		case 25:
			StringCopy(&cLocal_278, "ANS_RAN9", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
		
		default:
			StringCopy(&cLocal_278, "ANS_RAN8", 16);
			StringCopy(&Local_281, "ANSWER_FX", 24);
			break;
	}
}

int func_144(char* sParam0)
{
	if (unk_0x1B79E937E91F40C3(sParam0, "0"))
	{
		return 0;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "1"))
	{
		return 1;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "2"))
	{
		return 2;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "3"))
	{
		return 3;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "4"))
	{
		return 4;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "5"))
	{
		return 5;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "6"))
	{
		return 6;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "7"))
	{
		return 7;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "8"))
	{
		return 8;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "9"))
	{
		return 9;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "A"))
	{
		return 10;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "B"))
	{
		return 11;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "C"))
	{
		return 12;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "D"))
	{
		return 13;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "E"))
	{
		return 14;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "F"))
	{
		return 15;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "G"))
	{
		return 16;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "H"))
	{
		return 17;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "I"))
	{
		return 18;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "J"))
	{
		return 19;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "K"))
	{
		return 20;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "L"))
	{
		return 21;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "M"))
	{
		return 22;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "N"))
	{
		return 23;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "O"))
	{
		return 24;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "P"))
	{
		return 25;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "Q"))
	{
		return 26;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "R"))
	{
		return 27;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "S"))
	{
		return 28;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "T"))
	{
		return 29;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "U"))
	{
		return 30;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "V"))
	{
		return 31;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "W"))
	{
		return 32;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "X"))
	{
		return 33;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "Y"))
	{
		return 34;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "Z"))
	{
		return 35;
	}
	if (unk_0x1B79E937E91F40C3(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_145(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

int func_146()
{
	if (Global_79389)
	{
		return 0;
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xB96BD3A32937D44E(unk_0x259BE71D8A81D4FA()))
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

void func_147()
{
	if (Global_20909)
	{
		if (system::timera() > 50)
		{
			Global_20909 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (unk_0x875A214D5EBCA509(2, 180))
		{
			switch (Global_20910)
			{
				case 0:
					func_155();
					Global_20910 = 1;
					break;
				
				case 1:
					func_155();
					Global_20910 = 2;
					break;
				
				case 2:
					func_155();
					func_153();
					Global_20910 = 3;
					break;
				
				case 3:
					func_155();
					Global_20910 = 4;
					break;
				
				case 4:
					func_155();
					Global_20910 = 5;
					break;
				
				case 5:
					func_155();
					func_153();
					Global_20910 = 6;
					break;
				
				case 6:
					func_155();
					Global_20910 = 7;
					break;
				
				case 7:
					func_155();
					Global_20910 = 8;
					break;
				
				case 8:
					func_155();
					func_153();
					Global_20910 = 9;
					break;
				
				case 9:
					func_155();
					Global_20910 = 10;
					break;
				
				case 10:
					func_155();
					Global_20910 = 11;
					break;
				
				case 11:
					func_155();
					func_153();
					Global_20910 = 0;
					break;
				}
		}
		if (unk_0x875A214D5EBCA509(2, 181))
		{
			switch (Global_20910)
			{
				case 0:
					func_151();
					func_148();
					Global_20910 = 11;
					break;
				
				case 1:
					func_151();
					Global_20910 = 0;
					break;
				
				case 2:
					func_151();
					Global_20910 = 1;
					break;
				
				case 3:
					func_151();
					func_148();
					Global_20910 = 2;
					break;
				
				case 4:
					func_151();
					Global_20910 = 3;
					break;
				
				case 5:
					func_151();
					Global_20910 = 4;
					break;
				
				case 6:
					func_151();
					func_148();
					Global_20910 = 5;
					break;
				
				case 7:
					func_151();
					Global_20910 = 6;
					break;
				
				case 8:
					func_151();
					Global_20910 = 7;
					break;
				
				case 9:
					func_151();
					func_148();
					Global_20910 = 8;
					break;
				
				case 10:
					func_151();
					Global_20910 = 9;
					break;
				
				case 11:
					func_151();
					Global_20910 = 10;
					break;
				}
			}
	}
	if (Global_20909 == 0)
	{
		if (func_163(2, Global_20905, 0))
		{
			func_155();
			Global_20909 = 1;
			system::settimera(0);
			switch (Global_20930.f_1)
			{
				case 6:
					if (Global_20910 < (34 - 1))
					{
						Global_20910++;
					}
					break;
				
				case 5:
					if (Global_20910 < 3)
					{
						Global_20910++;
					}
					break;
				}
		}
		if (func_163(2, Global_20904, 0))
		{
			func_151();
			Global_20909 = 1;
			system::settimera(0);
			if (Global_20910 > 0)
			{
				Global_20910 = (Global_20910 - 1);
			}
		}
		if (func_163(2, Global_20906, 0))
		{
			func_148();
			Global_20909 = 1;
			system::settimera(0);
			if (Global_20910 > 3)
			{
				Global_20910 = (Global_20910 - 4);
			}
		}
		if (func_163(2, Global_20907, 0))
		{
			func_153();
			Global_20909 = 1;
			system::settimera(0);
			if (Global_20910 < 8)
			{
				Global_20910 += 4;
			}
		}
	}
}

void func_148()
{
	func_160(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_149();
}

void func_149()
{
	if (func_150())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(1);
		}
		else
		{
			unk_0xBF3F90E670404C44(2);
		}
	}
}

int func_150()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = unk_0xBF03D0685ADC793B();
	iVar1 = unk_0xBCF87EE3DC296C2A(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4543362 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_151()
{
	func_160(Global_20911, "SET_INPUT_EVENT", system::to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_152();
}

void func_152()
{
	if (func_150())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(3);
		}
		else
		{
			unk_0xBF3F90E670404C44(4);
		}
	}
}

void func_153()
{
	func_160(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_154();
}

void func_154()
{
	if (func_150())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(2);
		}
		else
		{
			unk_0xBF3F90E670404C44(1);
		}
	}
}

void func_155()
{
	func_160(Global_20911, "SET_INPUT_EVENT", system::to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
	func_156();
}

void func_156()
{
	if (func_150())
	{
		if (Global_21150 == 0)
		{
			unk_0xBF3F90E670404C44(4);
		}
		else
		{
			unk_0xBF3F90E670404C44(3);
		}
	}
}

void func_157(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	if (!unk_0xD6F9DEE4765092A9(sParam7))
	{
		func_84(sParam7);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam8))
	{
		func_84(sParam8);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam9))
	{
		func_84(sParam9);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam10))
	{
		func_84(iParam10);
	}
	if (!unk_0xD6F9DEE4765092A9(iParam11))
	{
		func_84(iParam11);
	}
	unk_0xE6B753D52F4CA222();
}

void func_158(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	func_84(sParam2);
	if (!unk_0xD6F9DEE4765092A9(sParam3))
	{
		func_84(sParam3);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam4))
	{
		func_84(sParam4);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam5))
	{
		func_84(sParam5);
	}
	if (!unk_0xD6F9DEE4765092A9(sParam6))
	{
		func_84(sParam6);
	}
	unk_0xE6B753D52F4CA222();
}

void func_159()
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	
	StringCopy(&(Global_9508[0 /*5*/]), "CELL_900", 16);
	Global_9508[0 /*5*/].f_4 = 10;
	StringCopy(&(Global_9508[1 /*5*/]), "CELL_901", 16);
	Global_9508[1 /*5*/].f_4 = 0;
	StringCopy(&(Global_9508[2 /*5*/]), "CELL_902", 16);
	Global_9508[2 /*5*/].f_4 = 1;
	StringCopy(&(Global_9508[3 /*5*/]), "CELL_903", 16);
	Global_9508[3 /*5*/].f_4 = 2;
	StringCopy(&(Global_9508[4 /*5*/]), "CELL_904", 16);
	Global_9508[4 /*5*/].f_4 = 3;
	StringCopy(&(Global_9508[5 /*5*/]), "CELL_905", 16);
	Global_9508[5 /*5*/].f_4 = 4;
	StringCopy(&(Global_9508[6 /*5*/]), "CELL_906", 16);
	Global_9508[6 /*5*/].f_4 = 5;
	StringCopy(&(Global_9508[7 /*5*/]), "CELL_907", 16);
	Global_9508[7 /*5*/].f_4 = 6;
	StringCopy(&(Global_9508[8 /*5*/]), "CELL_908", 16);
	Global_9508[8 /*5*/].f_4 = 7;
	StringCopy(&(Global_9508[9 /*5*/]), "CELL_909", 16);
	Global_9508[9 /*5*/].f_4 = 8;
	StringCopy(&(Global_9508[10 /*5*/]), "CELL_910", 16);
	Global_9508[10 /*5*/].f_4 = 9;
	StringCopy(&(Global_9508[11 /*5*/]), "CELL_911", 16);
	Global_9508[11 /*5*/].f_4 = 11;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar0[iVar1] = 0;
		iVar1++;
	}
	if (Global_9591[0] == 0)
	{
	}
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (iVar1 == Global_9508[iVar2 /*5*/].f_4)
			{
				if (iVar0[iVar1] == 0)
				{
					Global_9591[iVar1] = iVar2;
					unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
					unk_0x330108B080A2132F(11);
					unk_0x330108B080A2132F(iVar1);
					func_84(&(Global_9508[iVar2 /*5*/]));
					unk_0xE6B753D52F4CA222();
					iVar0[iVar1] = 1;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_160(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x88F483FBD433696A(uParam0, sParam1);
	unk_0x330108B080A2132F(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x330108B080A2132F(system::round(fParam6));
	}
	unk_0xE6B753D52F4CA222();
}

void func_161()
{
	if (!unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
	{
		unk_0xBF3D28CA44F3BE2D(-1, "Menu_Accept", &Global_20919, 1);
		func_162();
	}
}

void func_162()
{
	if (func_150())
	{
		unk_0xBF3F90E670404C44(5);
	}
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x875A214D5EBCA509(iParam0, iParam1) || (iParam2 == 1 && unk_0xDEE3EFEA31A1F555(iParam0, iParam1)))
	{
		if (unk_0x761778199FE1211C())
		{
			if (unk_0x66DA7155B68E7638() == 0 || (unk_0xA43CD45F18522E3F() && unk_0xAE231F549813BBDF(2)))
			{
				return 0;
			}
		}
		if (unk_0x4D9174D8796EA622() || unk_0xB11671B812399BA2())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_164()
{
	if (func_163(2, Global_20898, 0))
	{
		iLocal_105 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 0);
		func_87();
		Global_20908 = 1;
		if (Global_79389)
		{
			func_315();
		}
		else
		{
			func_303();
		}
		system::wait(0);
		if (Global_20930.f_1 > 3)
		{
			Global_20930.f_1 = 7;
		}
		StringCopy(&cLocal_82, "", 16);
	}
}

void func_165()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_20908 == 0)
	{
		if (func_163(2, Global_20899, 0))
		{
			if (!func_146())
			{
				Global_23400 = 0;
				Global_23399 = 0;
				Global_23401 = 0;
				iLocal_277 = 0;
				func_161();
				Global_20908 = 1;
				if (iLocal_68 > 0)
				{
					unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
					uLocal_73 = unk_0x6CA3F2B87712B6A4();
					while (!unk_0xA6F779AA284EB20E(uLocal_73))
					{
						system::wait(0);
					}
					iLocal_76 = unk_0x5DEF122A58D4F685(uLocal_73);
					bVar0 = false;
					if (unk_0x261E3728EE56B3AC())
					{
						if (Global_79389)
						{
							if (iLocal_76 < iLocal_71)
							{
								bVar0 = true;
							}
						}
						else if (iLocal_76 == iLocal_70 || iLocal_76 > iLocal_70)
						{
							bVar0 = true;
						}
					}
					if (BitTest(Global_8801, 0))
					{
						bVar0 = false;
					}
					if (bVar0)
					{
						Local_292.f_2936 = (iLocal_76 - iLocal_70);
						func_170();
					}
					else
					{
						if (iLocal_76 < 0)
						{
							iLocal_76 = 0;
						}
						Global_8115 = Global_20936[iLocal_76];
						if (Global_21142 != 145)
						{
							if (Global_8115 != Global_21142)
							{
								iLocal_64 = 1;
							}
							else
							{
								iLocal_64 = 0;
							}
						}
						else
						{
							iLocal_64 = 0;
						}
						if (iLocal_64 == 0)
						{
							if (BitTest(Global_8800, 9))
							{
								if (!BitTest(Global_8800, 29))
								{
									func_169(Global_8115, 1);
									if (func_83(Global_8115, Global_20930) == 0)
									{
										func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(1), -1f, -1f, "CELL_288", "CELL_300", &(Global_118[Global_8115 /*10*/].f_4), "CELL_195", 0);
									}
									else
									{
										func_157(Global_20911, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(1), -1f, -1f, "CELL_288", &(Global_2169[Global_8115 /*29*/].f_7), &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_3), 0);
									}
									func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
									func_160(Global_20911, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
									unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 29);
								}
							}
							else
							{
								bLocal_287 = false;
								bLocal_288 = false;
								if (Global_79389)
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (unk_0x1B79E937E91F40C3(&(Global_2169[Global_8115 /*29*/].f_3), &(Global_8703[iVar1 /*24*/])))
										{
											if (!unk_0x1B79E937E91F40C3(&(Global_8703[iVar1 /*24*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_287 = true;
												iLocal_289 = iVar1;
											}
										}
										iVar1++;
									}
								}
								else
								{
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (unk_0x1B79E937E91F40C3(&(Global_2169[Global_8115 /*29*/].f_3), &(Global_8638[iVar2 /*16*/])))
										{
											if (!unk_0x1B79E937E91F40C3(&(Global_8638[iVar2 /*16*/].f_8), "CELL_SFUN_NULL"))
											{
												bLocal_287 = true;
												iLocal_289 = iVar2;
												if (iLocal_289 == iLocal_289)
												{
												}
											}
										}
										iVar2++;
									}
								}
								if (func_167(Global_8115) && BitTest(Global_8801, 0) == 0)
								{
									if (func_135(Global_8115, Global_20930) == 0 && func_90(Global_8115, Global_20930) == 0)
									{
										bLocal_288 = false;
									}
									else
									{
										bLocal_288 = true;
									}
								}
								if (BitTest(Global_8801, 0))
								{
									func_166();
									iLocal_105 = 1;
								}
								else if (bLocal_288 == 0 && bLocal_287 == 0)
								{
									Global_23400 = 0;
									Global_23399 = 0;
									Global_23401 = 0;
									if (BitTest(Global_8801, 19) && Global_8115 == 129)
									{
									}
									else
									{
										func_100();
									}
								}
								else
								{
									func_134();
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_166()
{
	iLocal_103 = unk_0x1DD05E817C89C737();
	func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	system::wait(0);
	switch (Global_8115)
	{
		case 2:
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(0), 0f, -1f, -1f, "CELL_7001", &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), 0, 0);
			break;
		
		case 0:
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(0), 0f, -1f, -1f, "CELL_7002", &(Global_2169[Global_8115 /*29*/].f_3), &(Global_2169[Global_8115 /*29*/].f_7), 0, 0);
			break;
		
		case 12:
			func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(0), 0f, -1f, -1f, "CELL_7003", &(Global_2169[Global_8115 /*29*/].f_3), "CELL_E_311", 0, 0);
			break;
	}
	if (Global_20918)
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	if (Global_20918)
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	func_160(Global_20911, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_158(Global_20911, "SET_HEADER", "CELL_249", 0, 0, 0, 0);
}

int func_167(int iParam0)
{
	switch (Global_20930)
	{
		case 0:
			if (func_168(iParam0, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_168(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_168(iParam0, 2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_99();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar1 = func_94(iParam0);
	iVar2 = func_94(iParam1);
	if (iVar1 != 7 && iVar2 != 7)
	{
		iVar3 = func_93(iVar1, iVar2);
		if (iVar3 != 10)
		{
			if (func_92(iVar3) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_169(int iParam0, int iParam1)
{
	Global_2169[iParam0 /*29*/].f_18 = iParam1;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_18 = iParam1;
	}
}

void func_170()
{
	var uVar0;
	
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 8;
	}
	if (Global_20918)
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	unk_0x8744D2E3FC95740E(&Global_8800, 17);
	func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_157(Global_20911, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f, "CELL_208", 0, 0, 0, 0);
	func_174(&Local_292);
	if (Global_20930.f_1 > 3)
	{
		func_160(Global_20911, "DISPLAY_VIEW", 18f, system::to_float(iLocal_74), -1082130432, -1082130432, -1082130432);
		iLocal_74 = 0;
		if (func_173(&Local_292))
		{
			uVar0 = unk_0xBD6CA019F46AB947(Local_292[Local_292.f_2936]);
		}
		else
		{
			uVar0 = func_171(&(Local_292.f_34[func_172(Local_292.f_2936, &Local_292) /*29*/].f_13));
		}
		unk_0x88F483FBD433696A(Global_20911, "SET_HEADER");
		unk_0x882AEFD55B8D51FB("CELL_CONDFNH");
		unk_0x60D332F23943B34F(uVar0);
		unk_0xCFAD3D478C87321A();
		unk_0xE6B753D52F4CA222();
		Local_292.f_2999 = 0;
		iLocal_88 = 1;
	}
}

var func_171(var uParam0)
{
	return uParam0;
}

int func_172(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = (iParam0 - uParam1->f_33);
	if (iVar0 >= 100)
	{
		iVar0 = 99;
	}
	return iVar0;
}

int func_173(var uParam0)
{
	if (uParam0->f_2936 < uParam0->f_33)
	{
		return 1;
	}
	return 0;
}

void func_174(var uParam0)
{
	int iVar0;
	struct<22> Var1;
	var uVar2;
	char* sVar3;
	bool bVar4;
	struct<13> Var5;
	
	iVar0 = 0;
	if (func_184(uParam0, &uVar2))
	{
		if (func_173(uParam0))
		{
			uParam0->f_2963 = { func_183((*uParam0)[uParam0->f_2936]) };
			sVar3 = unk_0xBD6CA019F46AB947((*uParam0)[uParam0->f_2936]);
		}
		else
		{
			uParam0->f_2963 = { uParam0->f_34[func_172(uParam0->f_2936, uParam0) /*29*/] };
			sVar3 = func_171(&(uParam0->f_34[func_172(uParam0->f_2936, uParam0) /*29*/].f_13));
		}
		StringCopy(&(uParam0->f_2983), sVar3, 64);
		bVar4 = false;
		if (unk_0x473AAB3F1DA97144())
		{
			if (!Global_1836703)
			{
				if (func_182(unk_0x259BE71D8A81D4FA()))
				{
					bVar4 = true;
				}
			}
		}
		if (func_173(uParam0))
		{
			if (((unk_0x9F1D63C7BDCDFBC5((*uParam0)[uParam0->f_2936]) || unk_0xF3BBDC6EE4727F8B((*uParam0)[uParam0->f_2936])) || unk_0x37B71363FBA86179((*uParam0)[uParam0->f_2936])) || unk_0xDCEC24AE33904F8D((*uParam0)[uParam0->f_2936]))
			{
				bVar4 = false;
			}
		}
		if (!unk_0xD25970CBEE074E07())
		{
			bVar4 = false;
		}
		if (unk_0xF4E95755715FE93D(0))
		{
			bVar4 = false;
		}
		if (unk_0x73038C255039CB0A(&(uParam0->f_2963)) || unk_0x4BD40114338C93C0(&(uParam0->f_2963)))
		{
			bVar4 = false;
		}
		if (unk_0xD948F622B2C316C0(&(uParam0->f_2963)) || unk_0x48888A41791BFEF1(&(uParam0->f_2963)))
		{
			bVar4 = false;
		}
		if (unk_0x6FE3848CD1092574())
		{
			if (func_181())
			{
				if (unk_0x03D7696E3D331706())
				{
					bVar4 = false;
				}
			}
			else if (func_180())
			{
				bVar4 = false;
			}
		}
		if (bVar4)
		{
			if (Global_79389)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT_EMPTY");
				unk_0x330108B080A2132F(iVar0);
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(18);
				unk_0x330108B080A2132F(iVar0);
				unk_0x330108B080A2132F(0);
				if (!Global_2746025.f_1 || Global_2746025.f_38)
				{
					unk_0x882AEFD55B8D51FB("CELL_MP_1000");
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("CELL_MP_1000b");
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
			else if (Global_44042 == 15)
			{
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT_EMPTY");
				unk_0x330108B080A2132F(iVar0);
				unk_0xE6B753D52F4CA222();
				unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
				unk_0x330108B080A2132F(18);
				unk_0x330108B080A2132F(iVar0);
				unk_0x330108B080A2132F(0);
				if (!Global_2746025.f_1 || Global_2746025.f_38)
				{
					unk_0x882AEFD55B8D51FB("CELL_MP_1000");
					unk_0xCFAD3D478C87321A();
				}
				else
				{
					unk_0x882AEFD55B8D51FB("CELL_MP_1000b");
					unk_0xCFAD3D478C87321A();
				}
				unk_0xE6B753D52F4CA222();
				uParam0->f_2937[iVar0] = 1;
				iVar0++;
			}
		}
		bVar4 = false;
		if (func_173(uParam0))
		{
			Var5 = { func_183((*uParam0)[uParam0->f_2936]) };
			if (((func_182(unk_0x259BE71D8A81D4FA()) && func_182((*uParam0)[uParam0->f_2936])) && unk_0x6404C6D45C897433(&Var5)) && unk_0xDBDF80673BBA3D65(2))
			{
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT_EMPTY");
			unk_0x330108B080A2132F(iVar0);
			unk_0xE6B753D52F4CA222();
			unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(18);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(0);
			unk_0x882AEFD55B8D51FB("CELL_MP_1009");
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			uParam0->f_2937[iVar0] = 2;
			iVar0++;
		}
		bVar4 = false;
		if (func_173(uParam0))
		{
			if (unk_0xFD8C855412F74D0F() < unk_0x93352D3163414D4A())
			{
				if (!unk_0xEDD63461767A518C(&(uParam0->f_2963)))
				{
					bVar4 = true;
				}
			}
		}
		if (bVar4)
		{
			unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(18);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(0);
			unk_0x882AEFD55B8D51FB("PIM_DFRQ2");
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			uParam0->f_2937[iVar0] = 3;
			iVar0++;
		}
		bVar4 = false;
		bVar4 = true;
		if (bVar4)
		{
			unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(18);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(0);
			unk_0x882AEFD55B8D51FB("CELL_MP_1007");
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			uParam0->f_2937[iVar0] = 4;
			iVar0++;
		}
		bVar4 = false;
		if (unk_0x7260716F2E4D7661())
		{
			if (unk_0xE582BF3EDDBB1A68(&(uParam0->f_2963)))
			{
				unk_0xC07B1AA6155EC337(&Var1, 35, &(uParam0->f_2963));
			}
		}
		if (Var1.f_0 != -1)
		{
			if (Var1.f_21 == 1)
			{
				if (unk_0xFE087BC8EB584AA2() && !func_179(Var1.f_0))
				{
					bVar4 = true;
					uParam0->f_2947 = { Var1.f_1 };
				}
			}
		}
		if (bVar4)
		{
			unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(18);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(0);
			unk_0x882AEFD55B8D51FB("CELL_MP_1003");
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			uParam0->f_2937[iVar0] = 5;
			iVar0++;
		}
		unk_0x8744D2E3FC95740E(&Global_8802, 6);
		bVar4 = false;
		if (func_173(uParam0))
		{
			if (func_178(unk_0x259BE71D8A81D4FA(), 1, 1))
			{
				if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), (*uParam0)[uParam0->f_2936]))
				{
					if (!func_177((*uParam0)[uParam0->f_2936], 0))
					{
						if (!BitTest(Global_2657971[(*uParam0)[uParam0->f_2936] /*465*/].f_200, 2))
						{
							bVar4 = true;
							unk_0x0B0C9A0F9AAEB7F0(&Global_8802, 6);
						}
					}
				}
			}
			if ((*uParam0)[uParam0->f_2936] != func_16() && func_178((*uParam0)[uParam0->f_2936], 0, 0))
			{
				if (func_175((*uParam0)[uParam0->f_2936], 146))
				{
					bVar4 = false;
				}
			}
		}
		if (Global_1836671 || Global_1836672)
		{
			bVar4 = false;
		}
		if (bVar4)
		{
			unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
			unk_0x330108B080A2132F(18);
			unk_0x330108B080A2132F(iVar0);
			unk_0x330108B080A2132F(0);
			if (!BitTest(Global_2672855.f_1029, (*uParam0)[uParam0->f_2936]))
			{
				unk_0x882AEFD55B8D51FB("CELL_MP_1008");
			}
			else
			{
				unk_0x882AEFD55B8D51FB("CELL_MP_1008b");
			}
			unk_0xCFAD3D478C87321A();
			unk_0xE6B753D52F4CA222();
			uParam0->f_2937[iVar0] = 7;
			iVar0++;
		}
	}
	else
	{
		unk_0xCCDB0041859B85A6("CELL_LEFT_SESS");
		unk_0x25ABFB435E16C7D9(1, 1);
		func_36(0);
		return;
	}
}

int func_175(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_176(iParam0);
	}
	return 0;
}

int func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

int func_178(int iParam0, bool bParam1, bool bParam2)
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

int func_179(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7260716F2E4D7661() && unk_0xFE087BC8EB584AA2())
	{
		iVar0 = unk_0xAB468D6C5C0FC4AF();
		if (iVar0 > 0)
		{
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				unk_0xDF6959109D35BAAB(&Global_2707237, iVar1);
				if (iParam0 == Global_2707237)
				{
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

bool func_180()
{
	return (unk_0x3B880DE16766E9C3() || unk_0x716271729B9FB8E6());
}

bool func_181()
{
	return (unk_0xFD5A25A8B9488D42() || unk_0x6823557BDD18031C());
}

int func_182(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x62B038F95CEA3FE9() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x259BE71D8A81D4FA())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0x0BA1A956D36B210F() || func_180())
	{
		if (unk_0x9A9677D7F3615A86(0, iVar0))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	if (unk_0x1226C55CA7D2269A() || func_181())
	{
		if (iParam0 == unk_0x259BE71D8A81D4FA())
		{
			if (unk_0x521B8DE052C56837(0, -3, 1) || unk_0x9A9677D7F3615A86(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_183(iParam0) };
			if (unk_0x9A9677D7F3615A86(0, -1) || (unk_0x9A9677D7F3615A86(1, -1) && unk_0xEDD63461767A518C(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0x761778199FE1211C())
	{
		if (unk_0x9A9677D7F3615A86(0, iVar0))
		{
			if (unk_0xD25970CBEE074E07())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_183(int iParam0)
{
	struct<13> Var0;
	
	unk_0x464E131FD68B953F(iParam0, &Var0, 13);
	return Var0;
}

int func_184(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x261E3728EE56B3AC())
	{
		*iParam1 = 2;
	}
	else if (uParam0->f_2936 < uParam0->f_33)
	{
		if (func_178((*uParam0)[uParam0->f_2936], 0, 1))
		{
			return 1;
		}
		else
		{
			*iParam1 = 2;
		}
	}
	else
	{
		iVar0 = func_172(uParam0->f_2936, uParam0);
		if (unk_0x484CF81C32C3D413(&(uParam0->f_34[iVar0 /*29*/])))
		{
			return 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	return 0;
}

void func_185()
{
	if (func_163(2, Global_20899, 0))
	{
		unk_0x8744D2E3FC95740E(&Global_8801, 0);
		iLocal_105 = 0;
		func_161();
		Global_20908 = 1;
		Global_23400 = 0;
		Global_23399 = 0;
		Global_23401 = 0;
		func_100();
	}
}

void func_186()
{
	if (iLocal_98)
	{
		if (system::timera() > 150)
		{
			iLocal_98 = 0;
		}
	}
	if (unk_0xAE231F549813BBDF(2))
	{
		if (func_163(2, 181, 0))
		{
			if (iLocal_72 > 0)
			{
				iLocal_72 = (iLocal_72 - 1);
			}
			else
			{
				iLocal_72 = (iLocal_68 - 1);
			}
			func_148();
			iLocal_98 = 1;
			system::settimera(0);
		}
		if (func_163(2, 180, 0))
		{
			iLocal_72++;
			if (iLocal_72 == iLocal_68)
			{
				iLocal_72 = 0;
			}
			func_153();
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_163(2, Global_20906, 0))
		{
			if (iLocal_72 > 0)
			{
				iLocal_72 = (iLocal_72 - 1);
			}
			else
			{
				iLocal_72 = (iLocal_68 - 1);
			}
			func_148();
			iLocal_98 = 1;
			system::settimera(0);
		}
		if (func_163(2, Global_20907, 0))
		{
			iLocal_72++;
			if (iLocal_72 == iLocal_68)
			{
				iLocal_72 = 0;
			}
			func_153();
			iLocal_98 = 1;
			system::settimera(0);
		}
		if (func_163(2, Global_20905, 0))
		{
			func_188();
			func_188();
			func_188();
			func_188();
			func_188();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
			iLocal_98 = 1;
			system::settimera(0);
		}
		if (func_163(2, Global_20904, 0))
		{
			func_187();
			func_187();
			func_187();
			func_187();
			func_187();
			unk_0xBF3D28CA44F3BE2D(-1, "Menu_Navigate", &Global_20919, 1);
			iLocal_98 = 1;
			system::settimera(0);
		}
	}
}

void func_187()
{
	if (iLocal_72 > 0)
	{
		iLocal_72 = (iLocal_72 - 1);
	}
	else
	{
		iLocal_72 = (iLocal_68 - 1);
	}
	func_160(Global_20911, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_188()
{
	iLocal_72++;
	if (iLocal_72 == iLocal_68)
	{
		iLocal_72 = 0;
	}
	func_160(Global_20911, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_189()
{
	iLocal_72++;
	if (iLocal_72 == iLocal_68)
	{
		iLocal_72 = 0;
		unk_0x8744D2E3FC95740E(&Global_8800, 16);
	}
	func_153();
	unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
	uLocal_73 = unk_0x6CA3F2B87712B6A4();
	while (!unk_0xA6F779AA284EB20E(uLocal_73))
	{
		system::wait(0);
	}
	iLocal_76 = unk_0x5DEF122A58D4F685(uLocal_73);
	if (iLocal_76 < 0)
	{
		iLocal_76 = 0;
	}
	if (Global_79389)
	{
		if (iLocal_76 > iLocal_71 || iLocal_76 == iLocal_71)
		{
			if (Global_23317 == Global_20936[iLocal_76])
			{
				unk_0x8744D2E3FC95740E(&Global_8800, 16);
			}
		}
	}
	else if (Global_23317 == Global_20936[iLocal_76])
	{
		unk_0x8744D2E3FC95740E(&Global_8800, 16);
	}
}

void func_190()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<22> Var4;
	int iVar5;
	struct<13> Var6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<13> Var11;
	
	if (BitTest(Global_8802, 6))
	{
		if (!unk_0xBE0146369C46314B(&(Local_292.f_2963)))
		{
			unk_0x8744D2E3FC95740E(&Global_8802, 6);
			StringCopy(&cLocal_82, "", 16);
			Global_20930.f_1 = 3;
		}
	}
	switch (Local_292.f_2999)
	{
		case 0:
			if (BitTest(uLocal_286, 1))
			{
				if (!Global_101585.f_1482)
				{
					unk_0x8744D2E3FC95740E(&uLocal_286, 0);
					unk_0x8744D2E3FC95740E(&uLocal_286, 1);
				}
				return;
			}
			if (Local_292.f_2976)
			{
				if (Local_292.f_2981)
				{
					iVar5 = 2;
					hud::set_warning_message_with_header("HUD_CONNPROB", "HUD_DISCON", iVar5, 0, false, -1, 0, 0, true, 0);
					if (Local_292.f_2982)
					{
						if (func_163(2, Global_20899, 0) || unk_0x6D05C5731A838CB3(2, 201))
						{
							Global_20930.f_1 = 3;
						}
					}
					else if (func_163(2, Global_20899, 0) || unk_0x6D05C5731A838CB3(2, 201))
					{
					}
					else
					{
						Local_292.f_2982 = 1;
					}
				}
				else
				{
					iLocal_74 = Local_292.f_2946;
					switch (Local_292.f_2937[Local_292.f_2946])
					{
						case 1:
							if (!Global_2746025.f_1)
							{
								if (!unk_0x8BDB5F6FED3994AD() && !unk_0x810D839B3DC43B18())
								{
									Local_292.f_2976 = 0;
									func_299();
									Local_292.f_2977 = 0;
									if (func_173(&Local_292))
									{
										sVar7 = unk_0xBD6CA019F46AB947(Local_292[Local_292.f_2936]);
									}
									else
									{
										sVar7 = func_171(&(Local_292.f_34[func_172(Local_292.f_2936, &Local_292) /*29*/].f_13));
									}
									func_298(sVar7);
									Local_292.f_2999 = 1;
									func_297(&(Local_292.f_2979));
									func_296(0);
									if (Global_79389)
									{
										iVar9 = Global_262145.f_162;
										if (!unk_0xF299749D63CC7167(iVar9, 0, 1, 0, &iVar8, -1, 0))
										{
											iVar9 = (iVar9 - iVar8);
										}
										Var6 = { func_183(unk_0x259BE71D8A81D4FA()) };
										if (iVar9 > 0)
										{
											if (func_295())
											{
												func_283(joaat("service_spend_call_player"), iVar9, &iVar0, 0, 1, 0);
												Global_4535950[iVar0 /*85*/].f_14 = { Var6 };
											}
											else
											{
												unk_0x3C433641FBE9B092(iVar9, &Var6, 0, 1);
											}
										}
										func_101(1917, 1, -1);
									}
								}
								else if (unk_0x8BDB5F6FED3994AD())
								{
								}
								else if (unk_0x810D839B3DC43B18())
								{
									if (!Global_2746025.f_59)
									{
										Global_2746025 = 1;
										Global_2746025.f_2 = 1;
										Global_2746025.f_59 = 1;
									}
								}
							}
							else if (Global_2746025.f_38)
							{
							}
							else
							{
								func_282();
								unk_0xBF3D28CA44F3BE2D(-1, "Hang_Up", &Global_20919, 1);
								if (Global_2746025.f_1)
								{
									func_280();
								}
								Global_20930.f_1 = 3;
							}
							return;
							break;
						
						case 2:
							if (func_279(&(Global_2738934.f_388[Local_292[Local_292.f_2936] /*2*/])))
							{
								if (!func_278(&(Global_2738934.f_388[Local_292[Local_292.f_2936] /*2*/]), 30000, 0))
								{
									if (func_266(0, 0, 1, 1))
									{
										func_256("CELL_MP_1009H", unk_0xBD6CA019F46AB947(Local_292[Local_292.f_2936]), func_257(Local_292[Local_292.f_2936], -2, 0, 0, 0), -1);
									}
									Local_292.f_2976 = 0;
									return;
								}
							}
							Var10 = { func_183(Local_292[Local_292.f_2936]) };
							if (((!func_182(unk_0x259BE71D8A81D4FA()) || !func_182(Local_292[Local_292.f_2936])) || !unk_0x6404C6D45C897433(&Var10)) || !unk_0xDBDF80673BBA3D65(2))
							{
								if (func_266(1, 1, 1, 1))
								{
									if (!unk_0x1B79E937E91F40C3(unk_0xBD6CA019F46AB947(Local_292[Local_292.f_2936]), "**Invalid**"))
									{
										func_256("CELL_MP_1009M", unk_0xBD6CA019F46AB947(Local_292[Local_292.f_2936]), func_257(Local_292[Local_292.f_2936], -2, 0, 0, 0), -1);
									}
									else
									{
										func_255("CELL_MP_1009N", -1);
									}
								}
								Local_292.f_2976 = 0;
								return;
							}
							Local_292.f_2976 = 0;
							Local_292.f_2999 = 2;
							iLocal_303 = 1;
							return;
							break;
						
						case 3:
							if (!unk_0xD731E73BAE356976())
							{
								if (unk_0x0BA1A956D36B210F() && !unk_0xEDD63461767A518C(&(Local_292.f_2963)))
								{
									if (unk_0x454174F8A9B8D8A1(&(Local_292.f_2963), ""))
									{
										Local_292.f_2976 = 0;
										Global_20930.f_1 = 3;
									}
								}
								else
								{
									unk_0xAD9DEC6201018EA3(&(Local_292.f_2963));
									Local_292.f_2976 = 0;
									Global_20930.f_1 = 3;
								}
							}
							break;
						
						case 5:
							if (unk_0x7260716F2E4D7661())
							{
								if (unk_0xE582BF3EDDBB1A68(&(Local_292.f_2963)))
								{
									unk_0xC07B1AA6155EC337(&Var4, 35, &(Local_292.f_2963));
								}
							}
							if (Var4.f_0 != -1)
							{
								if (Var4.f_21 == 1)
								{
									if (!func_179(Var4.f_0))
									{
										if (unk_0xA360DA3480F0FFB9(Var4.f_0))
										{
											Local_292.f_2976 = 0;
											unk_0xCCDB0041859B85A6("CREW_JOIN");
											unk_0x60D332F23943B34F(&(Var4.f_1));
											unk_0x25ABFB435E16C7D9(1, 1);
											Global_20930.f_1 = 3;
										}
										else
										{
											Global_20930.f_1 = 3;
											Local_292.f_2976 = 0;
											Global_20930.f_1 = 3;
										}
										return;
									}
								}
							}
							Local_292.f_2976 = 0;
							break;
						
						case 4:
							Local_292.f_2976 = 0;
							func_170();
							unk_0xAD9DEC6201018EA3(&(Local_292.f_2963));
							break;
						
						case 7:
							if (BitTest(Global_2672855.f_1029, Local_292[Local_292.f_2936]))
							{
								unk_0x8744D2E3FC95740E(&(Global_2672855.f_1029), Local_292[Local_292.f_2936]);
							}
							else
							{
								Global_2672855.f_1029 = 0;
								unk_0x0B0C9A0F9AAEB7F0(&(Global_2672855.f_1029), Local_292[Local_292.f_2936]);
							}
							func_170();
							Local_292.f_2976 = 0;
							break;
						}
				}
			}
			else if (Global_20908 == 0)
			{
				if (func_163(2, Global_20899, 0))
				{
					Local_292.f_2982 = 0;
					Local_292.f_2981 = 0;
					unk_0x8744D2E3FC95740E(&Global_8801, 0);
					iLocal_87 = 0;
					func_161();
					Global_20908 = 1;
					unk_0x88F483FBD433696A(Global_20911, "GET_CURRENT_SELECTION");
					uLocal_73 = unk_0x6CA3F2B87712B6A4();
					while (!unk_0xA6F779AA284EB20E(uLocal_73))
					{
						system::wait(0);
					}
					Local_292.f_2946 = unk_0x5DEF122A58D4F685(uLocal_73);
					if (!func_184(&Local_292, &iVar3))
					{
						switch (iVar3)
						{
							case 0:
								func_254("PLAYER_N_ON", 7500, 1);
								break;
							
							case 1:
								func_254("PLAYERLEFT", 7500, 1);
								break;
							
							case 2:
								Global_2746025.f_59 = 0;
								Local_292.f_2981 = 1;
								Local_292.f_2976 = 1;
								return;
								break;
						}
						Global_20930.f_1 = 3;
						return;
					}
					Global_2746025.f_59 = 0;
					Local_292.f_2976 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_184(&Local_292, &iVar3))
			{
				func_296(1);
				func_282();
				Local_292.f_2978 = 1;
				Local_292.f_2977 = 1;
				return;
			}
			else if (Local_292.f_2977)
			{
				if (!Local_292.f_2978)
				{
					if (!Global_2746025.f_1 || !unk_0x5150DDF9D3BDA9E5())
					{
						func_296(1);
						func_282();
						Local_292.f_2978 = 1;
						Local_292.f_2977 = 1;
						return;
					}
					if (unk_0x261E3728EE56B3AC())
					{
						if (func_163(2, Global_20900, 0))
						{
							func_282();
							Local_292.f_2976 = 0;
							return;
						}
						if (func_253(Global_2746025.f_20))
						{
							if (unk_0xEDD63461767A518C(&(Global_2746025.f_20)))
							{
								if (!unk_0x484CF81C32C3D413(&(Global_2746025.f_20)))
								{
									func_296(1);
									func_282();
									Local_292.f_2978 = 1;
									Local_292.f_2977 = 1;
									return;
								}
							}
						}
						else
						{
							func_296(1);
							func_282();
							Local_292.f_2978 = 1;
							Local_292.f_2977 = 1;
							return;
						}
					}
					else
					{
						func_282();
						Local_292.f_2976 = 0;
						func_170();
						return;
					}
					if (!Global_2746025.f_37)
					{
						if (Global_2746025.f_33 == -1)
						{
							if (func_278(&(Local_292.f_2979), 40000, 1))
							{
								func_296(1);
								func_282();
								Local_292.f_2978 = 1;
								Local_292.f_2977 = 1;
								return;
							}
						}
						else
						{
							switch (Global_2746025.f_33)
							{
								case 1:
									func_252();
									func_251();
									if (unk_0x76CD105BCAC6EB9F())
									{
										if (iVar1 == iVar2)
										{
										}
									}
									unk_0x8E4825CCACA34B58(iLocal_78);
									return;
									break;
								
								case 2:
									func_296(1);
									func_282();
									Local_292.f_2978 = 1;
									return;
									break;
								
								default:
									func_296(1);
									func_282();
									Local_292.f_2978 = 1;
									return;
									break;
								}
							}
						}
				}
			}
			else if (!func_279(&(Local_292.f_2979)))
			{
				func_297(&(Local_292.f_2979));
				func_250(&(Local_292.f_2979), 1, 0);
			}
			else
			{
				if (func_278(&(Local_292.f_2979), 15000, 1))
				{
					func_282();
					func_87();
					func_301();
					Global_20930.f_1 = 3;
					return;
				}
				if (Global_2746025.f_1 || BitTest(Global_8801, 20))
				{
					if (func_163(2, Global_20900, 0))
					{
						func_282();
						Global_20930.f_1 = 3;
						return;
					}
				}
				if (Global_2746025.f_1)
				{
					if (func_249(&Local_292, &(Local_292.f_2983)))
					{
						func_248(&(Local_292.f_2979), 1, 0);
						Local_292.f_2978 = 0;
						Local_292.f_2977 = 1;
						if (Global_79389)
						{
							func_246(105, 1, -1, 1);
						}
					}
					else
					{
						func_296(1);
						func_282();
						Local_292.f_2978 = 1;
						Local_292.f_2977 = 1;
						return;
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_303 == 1)
			{
				if (func_240(&Local_293, &(Local_293.f_1), &(Local_293.f_2), 0, 0, &cLocal_294, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0))
				{
					StringCopy(&cLocal_294, unk_0x43FB09E8020180EA(), 64);
					Local_293.f_0 = 0;
					Local_293.f_2 = 0;
					Local_293.f_1 = 0;
					iLocal_303 = 0;
					func_248(&(Global_2738934.f_388[Local_292[Local_292.f_2936] /*2*/]), 0, 0);
					if (unk_0xD6F9DEE4765092A9(&cLocal_294))
					{
					}
					else
					{
						iLocal_304 = unk_0x09112CCF7824FE38(&cLocal_294);
						StringCopy(&cLocal_294, unk_0x96793ADAC5A06FCB(&cLocal_294, 0, iLocal_304, 63), 64);
						Var11 = { func_183(Local_292[Local_292.f_2936]) };
						unk_0x44FC944CCE2884A5(&cLocal_294, &Var11);
						func_191("CP_TM_SENT", Local_292[Local_292.f_2936], 0, 0, 0, 1, 0);
						func_101(1916, 1, -1);
					}
					Local_292.f_2999 = 0;
				}
				if (Local_293.f_0 == 2)
				{
					Local_293.f_0 = 0;
					Local_293.f_2 = 0;
					Local_293.f_1 = 0;
					iLocal_303 = 0;
					Local_292.f_2999 = 0;
				}
			}
			break;
	}
}

int func_191(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = unk_0x1864096A95E36EBA(iParam1);
	if (unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), iParam1) || iParam3)
	{
		if (func_239(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, unk_0xBD6CA019F46AB947(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, unk_0xBD6CA019F46AB947(iParam1), 64);
			}
			if (unk_0xD6F9DEE4765092A9(&Var2))
			{
			}
			unk_0xCCDB0041859B85A6(sParam0);
			if ((iVar1 != -1 && unk_0x834C960822A4683F()) && iVar1 < 4)
			{
				if (Global_4718592.f_121471[iVar1] != -1)
				{
					unk_0x4E5A3D96808F7F84(func_201(iVar1, iParam1, 0));
				}
				else
				{
					unk_0x4E5A3D96808F7F84(func_257(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				unk_0x4E5A3D96808F7F84(func_257(iParam1, -2, 1, 0, 0));
			}
			unk_0x60D332F23943B34F(func_199(&Var2));
			if (!bParam4)
			{
				iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
			}
			else
			{
				Global_2707307 = { func_183(iParam1) };
				if (unk_0xC07B1AA6155EC337(&Global_2707237, 35, &Global_2707307))
				{
					iVar3 = 0;
					if (unk_0x1B79E937E91F40C3(&(Global_2707237.f_22), "Leader") && Global_2707237.f_30 == 0)
					{
						iVar3 = 1;
					}
					if (Global_2707237.f_21 > 0)
					{
						iVar4 = 0;
					}
					else
					{
						iVar4 = 1;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_198(&Var2) };
						}
						iVar0 = unk_0x4252EAF1B00ED825(iVar4, unk_0xF05A19B508A1ECF0(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, iVar3, 0, Global_2707237, &Var2, Global_1576240, Global_1576241, Global_1576242);
					}
					else
					{
						iVar0 = unk_0xB262204BCFF28FCC(iVar4, unk_0xF05A19B508A1ECF0(&Global_2707237, 35), &(Global_2707237.f_17), Global_2707237.f_30, iVar3, 0, Global_2707237, Global_1576240, Global_1576241, Global_1576242);
					}
				}
				else
				{
					iVar0 = unk_0x25ABFB435E16C7D9(0, 1);
				}
			}
			func_192(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_192(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_197() || !unk_0x834C960822A4683F()) || !func_195(unk_0x259BE71D8A81D4FA(), 0))
	{
		return;
	}
	iVar0 = func_193(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1937329.f_5[iVar0 /*53*/] = iParam0;
		Global_1937329.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1937329.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1937329.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1937329.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1937329.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1937329.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1937329.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1937329 - 1))
	{
		if (iParam0 > Global_1937329.f_5[iVar0 /*53*/].f_1)
		{
			func_194(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1937329++;
	if (Global_1937329 > 5)
	{
		Global_1937329 = 5;
		return Global_1937329;
	}
	return (Global_1937329 - 1);
}

void func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1937329.f_5[iVar0 /*53*/] = { Global_1937329.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_195(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_239(iParam0))
	{
		return 0;
	}
	if (iParam0 == unk_0x259BE71D8A81D4FA())
	{
		bVar0 = func_196(-1, 0) == 8;
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

int func_196(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
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

bool func_197()
{
	return unk_0x087611B922B50F13(-1762644250);
}

struct<16> func_198(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_199(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_200(&cVar0);
}

var func_200(char[4] cParam0)
{
	return cParam0;
}

int func_201(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058116.f_14[iParam0];
	if (func_223())
	{
		iVar2 = func_219(iParam1);
		if (!iVar2 == -1)
		{
			return func_217(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_8534[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_16())
	{
		if (Global_4718592.f_121471[iParam0] != -1 && Global_4718592.f_121471[iParam0] <= 4)
		{
			if (Global_4718592.f_121471[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_121471[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_121471[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_121471[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_121471[iParam0];
			}
		}
		else
		{
			iVar0 = func_207(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_206(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_203(iParam0, unk_0x1864096A95E36EBA(iParam1), 0, -1))
		{
			iVar0 = func_202(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_202(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_203(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058116.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25622, bVar0))
			{
				bVar1 = Global_1058116.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_204(iParam0, bVar0, iParam1, bVar1) || !func_204(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25624[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3541, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3541, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3541, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_204(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3592[iParam0 /*25891*/].f_25623, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3592[iParam2 /*25891*/].f_25623, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		iVar4 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_178(iVar1, 1, 1) || func_195(iVar1, 0)) || BitTest(Global_2657971[iVar1 /*465*/].f_200, 2)) || func_205(iVar1))
		{
		}
		else if (unk_0x1864096A95E36EBA(iVar1) != iParam2)
		{
		}
		else
		{
			uVar2 = unk_0x56E414973C2A8C0E(iVar1);
			if (unk_0x4FAFF4BCB7633475(uVar2))
			{
			}
			else
			{
				iVar3 = unk_0x4B423FAA24E8ABF0(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_205(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 14);
}

int func_206(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_185777;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_185778;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_185779;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_185780;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_207(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x762604C40829DB72(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1864096A95E36EBA(iParam0);
	if ((func_216() || (func_215() && func_213())) && Global_1680185.f_1)
	{
		if (bParam1)
		{
			return func_212(iParam2, iVar0);
		}
		else
		{
			return func_212(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_203(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_211(1);
				}
				else
				{
					return func_211(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_208(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_208(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_211(1);
	}
	return func_211(0);
}

int func_208(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_210(iParam0, iParam1, iParam3);
	if (func_209(Global_4718592.f_127178, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_209(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_203(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_211(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_210(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_213()
{
	if (func_214())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_190336, 4);
}

bool func_214()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_215()
{
	if (unk_0x834C960822A4683F())
	{
		return BitTest(Global_4718592.f_190336, 0);
	}
	return ((BitTest(Global_4718592.f_190336, 0) || Global_1919908) && unk_0x486FF5D06E9659F1(joaat("fm_deathmatch_creator")) > 0);
}

int func_216()
{
	if (func_214() && unk_0x834C960822A4683F())
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_218(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_218(int iParam0)
{
	return Global_2648938.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (func_239(iParam0))
	{
		if (func_221(iParam0, 1))
		{
			return Global_2648938.f_818.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (func_239(iParam0))
	{
		return Global_1887305[iParam0 /*610*/].f_10;
	}
	return func_16();
}

int func_221(int iParam0, bool bParam1)
{
	if (!func_239(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return func_239(Global_1887305[iParam0 /*610*/].f_10);
}

int func_222(int iParam0)
{
	if (func_239(iParam0))
	{
		if (func_239(Global_1887305[iParam0 /*610*/].f_10))
		{
			return Global_1887305[iParam0 /*610*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_223()
{
	if ((((((((func_238() || func_237()) || func_236()) || func_235()) || func_234()) || func_232()) || func_230()) || func_227()) || func_224())
	{
		return 1;
	}
	if (unk_0x834C960822A4683F() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return func_225(Global_4718592.f_127178);
}

int func_225(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_226(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_226(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35481[iParam0];
	}
	return -1;
}

int func_227()
{
	return func_228(Global_4718592.f_127178);
}

int func_228(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_229(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_230()
{
	return func_231(Global_4718592.f_127178);
}

int func_231(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_232()
{
	return func_233(Global_4718592.f_127178);
}

int func_233(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_234()
{
	return Global_2684504.f_24;
}

var func_235()
{
	return Global_2684504.f_21;
}

var func_236()
{
	return Global_2684504.f_19;
}

var func_237()
{
	return Global_2684504.f_18;
}

var func_238()
{
	return Global_2684504.f_17;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_240(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34, int iParam35, bool bParam36, bool bParam37, bool bParam38)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x78ABC1D11B34F324() || unk_0x15CCE8886267624F())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_245())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*uParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_245())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (unk_0x486FF5D06E9659F1(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (unk_0x486FF5D06E9659F1(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10";
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_245())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (unk_0x1226C55CA7D2269A())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (unk_0x761778199FE1211C())
				{
					iVar7 = 6;
				}
				else if (unk_0x8608526719A575EE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH";
					}
				}
				if (iParam35 != -1)
				{
					iVar6 = iParam35;
				}
				if (unk_0xD6F9DEE4765092A9(sParam5))
				{
					unk_0xCFF30C6181F9B8BC(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					unk_0xCFF30C6181F9B8BC(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (unk_0x761778199FE1211C())
				{
					iVar8 = 6;
				}
				else if (unk_0x8608526719A575EE() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (unk_0x8608526719A575EE() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_244())
					{
						iVar9 = 64;
					}
					unk_0x8CB5613E14D44228(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_127185)))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_127185), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					unk_0x8CB5613E14D44228(2);
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_186239)))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_186239), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0x8CB5613E14D44228(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_186239)))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_186239), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					unk_0x8CB5613E14D44228(2);
					Var10 = { Global_4718592.f_186271[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4718592.f_186352[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&Var10))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					unk_0x8CB5613E14D44228(2);
					unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_CDM_T";
					}
					else
					{
						sVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					unk_0x8CB5613E14D44228(2);
					unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!unk_0xD6F9DEE4765092A9(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					unk_0x8CB5613E14D44228(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (unk_0x8608526719A575EE() == 0)
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*uParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar11 = 0;
					while (iVar11 <= 7)
					{
						if (unk_0xFF692AB7350A74D7(&(Global_4718592.f_127336[iVar11 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_127336[iVar11 /*16*/]), "", 64);
						}
						iVar11++;
					}
					unk_0x305739C2F5BFA5D9(iVar8, sVar4, sVar5, &(Global_4718592.f_127336[0 /*16*/]), &(Global_4718592.f_127336[1 /*16*/]), &(Global_4718592.f_127336[2 /*16*/]), &(Global_4718592.f_127336[3 /*16*/]), &(Global_4718592.f_127336[4 /*16*/]), &(Global_4718592.f_127336[5 /*16*/]), &(Global_4718592.f_127336[6 /*16*/]), &(Global_4718592.f_127336[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					iVar9 = 126;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(&(Global_4718592.f_108016[iParam16 /*43*/].f_6[0 /*16*/])))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						iVar12 = 0;
						while (iVar12 <= 1)
						{
							if (unk_0xFF692AB7350A74D7(&(Global_4718592.f_108016[iParam16 /*43*/].f_6[iVar12 /*16*/])))
							{
								StringCopy(&(Global_4718592.f_108016[iParam16 /*43*/].f_6[iVar12 /*16*/]), "", 64);
							}
							iVar12++;
						}
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, &(Global_4718592.f_108016[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4718592.f_108016[iParam16 /*43*/].f_6[1 /*16*/]), "", "", iVar9);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_245())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE";
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF";
						}
						if (unk_0x1226C55CA7D2269A())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					else if (func_245())
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS";
						}
						if (unk_0x1226C55CA7D2269A())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
						iVar9 = 21;
					}
					else
					{
						if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F";
						}
						if (unk_0x1226C55CA7D2269A())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4";
						}
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam14)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F";
					}
					iVar9 = 61;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N";
					}
					if (func_181())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS";
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS";
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					unk_0x8CB5613E14D44228(64);
					iVar9 = 15;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B";
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U";
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N";
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I";
					}
					else if (*uParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15";
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F";
					}
					if (unk_0x1226C55CA7D2269A() || func_181())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam36)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "ACID_NAME_TIP1";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "ACID_NAME_TIP2";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "ACID_NAME_TIP3";
					}
					else
					{
						sVar4 = "ACID_NAME_TIP4";
					}
					if (bParam23)
					{
						sVar4 = "ACID_NAME_TIP5s";
					}
					if (unk_0x1226C55CA7D2269A() || func_181())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam37)
				{
					if (*uParam1 == 0)
					{
						sVar4 = "LAB_NAME_TIP1";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "LAB_NAME_TIP2";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "LAB_NAME_TIP3";
					}
					else
					{
						sVar4 = "LAB_NAME_TIP4";
					}
					if (bParam23)
					{
						sVar4 = "LAB_NAME_TIP5s";
					}
					if (unk_0x1226C55CA7D2269A() || func_181())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam38)
				{
					if (bParam23)
					{
						sVar4 = "CSTM_TLTIP_TIP5";
					}
					else if (bParam19)
					{
						sVar4 = "CSTM_TLTIP_TIP6";
					}
					else if (*uParam1 == 0)
					{
						sVar4 = "CSTM_TLTIP_TIP1";
					}
					else if (*uParam1 == -1)
					{
						sVar4 = "CSTM_TLTIP_TIP2";
					}
					else if (*uParam1 == -2)
					{
						sVar4 = "CSTM_TLTIP_TIP3";
					}
					else
					{
						sVar4 = "CSTM_TLTIP_TIP4";
					}
					if (unk_0x1226C55CA7D2269A() || func_181())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					unk_0x8CB5613E14D44228(64);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (unk_0xD6F9DEE4765092A9(sParam5))
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						unk_0xCFF30C6181F9B8BC(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (unk_0x8608526719A575EE() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_245())
							{
								if (*uParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD";
								}
								else if (*uParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE";
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF";
								}
							}
							else if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE";
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_245())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*uParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE";
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF";
							}
						}
						else if (func_245())
						{
							if (*uParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*uParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*uParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*uParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (unk_0x1226C55CA7D2269A())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC";
						}
					}
					iVar13 = 0;
					while (iVar13 <= 7)
					{
						if (unk_0xFF692AB7350A74D7(&(Global_4718592.f_127207[iVar13 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_127207[iVar13 /*16*/]), "", 64);
						}
						iVar13++;
					}
					if (!unk_0xD6F9DEE4765092A9(sParam33))
					{
						sVar4 = sParam33;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (bParam11)
					{
						unk_0x305739C2F5BFA5D9(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						unk_0x305739C2F5BFA5D9(iVar8, sVar4, sVar5, &(Global_4718592.f_127207[0 /*16*/]), &(Global_4718592.f_127207[1 /*16*/]), &(Global_4718592.f_127207[2 /*16*/]), &(Global_4718592.f_127207[3 /*16*/]), &(Global_4718592.f_127207[4 /*16*/]), &(Global_4718592.f_127207[5 /*16*/]), &(Global_4718592.f_127207[6 /*16*/]), &(Global_4718592.f_127207[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1919021, "", 64);
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = unk_0x66DA7155B68E7638();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*uParam1 = 0;
					return 0;
				
				case 2:
					*uParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (unk_0xD6F9DEE4765092A9(&Global_1919021))
						{
							StringCopy(&Global_1919021, unk_0x43FB09E8020180EA(), 64);
							if (unk_0xD6F9DEE4765092A9(&Global_1919021))
							{
								*uParam1 = 0;
								return 1;
							}
							iVar1 = unk_0x09112CCF7824FE38(unk_0x43FB09E8020180EA());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!unk_0xD6F9DEE4765092A9(&Global_1919021))
									{
										if (unk_0x1B79E937E91F40C3(" ", unk_0xA4FC5B871651C9F9(&Global_1919021, 0, 1)))
										{
											iVar2 = unk_0x09112CCF7824FE38(&Global_1919021);
											StringCopy(&Global_1919021, unk_0xA4FC5B871651C9F9(&Global_1919021, 1, iVar2), 64);
										}
									}
									else
									{
										*uParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (unk_0x3D1C2138A70E7348(*uParam1))
					{
						if (!unk_0x11A87C58414E6C46(*uParam1))
						{
							unk_0x65662724C6BC4810();
							iVar0 = unk_0x0AE6BE5940D835FA(*uParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1919021, unk_0x43FB09E8020180EA(), 64);
										iVar1 = unk_0x09112CCF7824FE38(&Global_1919021);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!unk_0xD6F9DEE4765092A9(&Global_1919021))
												{
													if (unk_0x1B79E937E91F40C3(" ", unk_0xA4FC5B871651C9F9(&Global_1919021, iVar3, iVar3 + 1)))
													{
														*uParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*uParam1 != -3)
									{
										*uParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (unk_0x486FF5D06E9659F1(joaat("appinternet")) == 0)
							{
								unk_0x65662724C6BC4810();
								*uParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							unk_0xE2E0A9E99F465D83(&Global_1919021, uParam1);
						}
						else
						{
							unk_0x9586B50628529A63(&Global_1919021, uParam1);
						}
					}
					else if (unk_0xD6F9DEE4765092A9(unk_0x43FB09E8020180EA()))
					{
						*uParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x65662724C6BC4810();
						return 0;
					}
					else if (bParam22)
					{
						unk_0xE2E0A9E99F465D83(unk_0x43FB09E8020180EA(), uParam1);
					}
					else
					{
						unk_0x9586B50628529A63(unk_0x43FB09E8020180EA(), uParam1);
					}
					if (func_181())
					{
						if ((!unk_0x261E3728EE56B3AC() || func_242() == 0) || func_241() == 1)
						{
							*uParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						unk_0xB661D6EC3F065818("ERROR_CHECKYACHTNAME");
						unk_0x654AFEEF256E650F(1);
					}
					else if (bParam29)
					{
						unk_0xB661D6EC3F065818("ERROR_CHECKVEHICLENAME");
						unk_0x654AFEEF256E650F(1);
					}
					else
					{
						unk_0xB661D6EC3F065818("ERROR_CHECKPROFANITY");
						unk_0x654AFEEF256E650F(1);
					}
					if (!unk_0x3D1C2138A70E7348(*uParam1))
					{
						if (!unk_0xD6F9DEE4765092A9(&Global_1919021))
						{
							*uParam1 = -1;
						}
						else
						{
							*uParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						unk_0x65662724C6BC4810();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_241()
{
	if (!func_242())
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	if (func_243())
	{
		return 0;
	}
	if (unk_0x5676319ACE5BEC37() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_243()
{
	return Global_2696683;
}

int func_244()
{
	return 0;
	return func_197();
}

int func_245()
{
	if ((((unk_0x8608526719A575EE() == 7 || unk_0x8608526719A575EE() == 8) || unk_0x8608526719A575EE() == 9) || unk_0x8608526719A575EE() == 10) || unk_0x8608526719A575EE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_247(iParam0, iParam2);
	if (iVar0 != 0)
	{
		unk_0xF1D0B0CE940F620D(iVar0, iParam1, iParam3);
	}
}

var func_247(int iParam0, var uParam1)
{
	return unk_0xD69CE161FE614531(2, uParam0, func_70(uParam1));
}

void func_248(var uParam0, bool bParam1, bool bParam2)
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

int func_249(var uParam0, char* sParam1)
{
	if (Global_2746025.f_1)
	{
		if (unk_0x5150DDF9D3BDA9E5())
		{
			unk_0x02D78E296BAAE4A1(&(uParam0->f_2963));
			Global_2746025.f_20 = { uParam0->f_2963 };
			StringCopy(&(Global_2746025.f_4), sParam1, 64);
			return 1;
		}
	}
	return 0;
}

void func_250(var uParam0, bool bParam1, bool bParam2)
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

void func_251()
{
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 9;
		Global_22299 = 1;
		if (Global_79389)
		{
			if (!unk_0x761778199FE1211C())
			{
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2738934.f_1847), 15);
			}
		}
	}
}

void func_252()
{
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(4);
	unk_0x330108B080A2132F(0);
	unk_0x330108B080A2132F(2);
	unk_0x882AEFD55B8D51FB("CELL_CONDFON");
	unk_0x60D332F23943B34F(&Global_22301);
	unk_0xCFAD3D478C87321A();
	func_84("CELL_300");
	func_84("CELL_219");
	func_84("CELL_219");
	unk_0xE6B753D52F4CA222();
	Global_2746025.f_37 = 1;
	unk_0x8744D2E3FC95740E(&Global_8800, 27);
	func_103();
}

bool func_253(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xA8F635A578C0CE07(&uParam0, 13);
}

void func_254(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

void func_255(char* sParam0, int iParam1)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam1);
}

void func_256(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0xAC98CA65AD9A3215(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x4E5A3D96808F7F84(iParam2);
	}
	unk_0x60D332F23943B34F(uParam1);
	unk_0x5E01B6B1F460FE3F(0, 0, 1, iParam3);
}

int func_257(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (!func_239(iParam0))
	{
		return 1;
	}
	if (func_264(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_121471[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_264(unk_0x259BE71D8A81D4FA()) || (func_263() && func_262())) && !BitTest(Global_2738934.f_4712, 31)) && !bParam4)
	{
		uVar1 = func_261();
		if (unk_0xFC8BFE4B41177C22(uVar1))
		{
			if (unk_0x501EBB0523078750(uVar1))
			{
				if (unk_0x1C1C92A1CBAE364B(uVar1) != -1)
				{
					if (func_178(unk_0x1C1C92A1CBAE364B(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
						{
							if (Global_4718592.f_121471[iParam1] != -1)
							{
								return func_201(iParam1, iParam0, 0);
							}
							else
							{
								return func_259(iParam0, unk_0x1C1C92A1CBAE364B(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_259(iParam0, unk_0x1C1C92A1CBAE364B(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
			{
				if (Global_4718592.f_121471[iParam1] != -1)
				{
					return func_201(iParam1, iParam0, 0);
				}
				else
				{
					return func_258(0, -1, 0);
				}
			}
			else
			{
				return func_258(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x834C960822A4683F()) && iParam1 < 4)
	{
		if (Global_4718592.f_121471[iParam1] != -1)
		{
			return func_201(iParam1, iParam0, 0);
		}
		else
		{
			return func_259(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
		}
	}
	return func_259(iParam0, unk_0x259BE71D8A81D4FA(), iParam1, bParam2, bParam3);
}

int func_258(bool bParam0, int iParam1, bool bParam2)
{
	return func_207(unk_0x259BE71D8A81D4FA(), bParam0, iParam1, bParam2);
}

int func_259(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1864096A95E36EBA(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845281[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_223())
			{
				iVar3 = func_219(iParam0);
				if (!iVar3 == -1)
				{
					return func_217(iVar3);
				}
			}
			if ((func_260(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_203(unk_0x1864096A95E36EBA(iParam1), unk_0x1864096A95E36EBA(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_211(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_202(1);
			}
			else
			{
				return func_207(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836681 || Global_1836671) || Global_1845281[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836681 == 1 && Global_1836691 == 0))
			{
				return func_211(1);
			}
			else
			{
				return func_207(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836675 && Global_1836148.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_219(iParam0);
	if (!iVar4 == -1)
	{
		return func_217(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_260(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && unk_0x1864096A95E36EBA(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == unk_0x1864096A95E36EBA(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1864096A95E36EBA(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1864096A95E36EBA(iParam0) == iParam2;
	}
	return unk_0x1864096A95E36EBA(iParam0) == iParam2;
}

var func_261()
{
	return Global_2621446.f_2;
}

var func_262()
{
	return BitTest(Global_2621446, 4);
}

var func_263()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 14);
}

int func_264(int iParam0)
{
	if (func_195(iParam0, 0))
	{
		return 1;
	}
	if (func_265())
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

bool func_265()
{
	return BitTest(Global_2621446, 3);
}

int func_266(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x4C705AAF75363287())
	{
		return 0;
	}
	if (func_277())
	{
		return 0;
	}
	if (!unk_0x9390801B06EE998F())
	{
		return 0;
	}
	if (func_61())
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_273(unk_0x259BE71D8A81D4FA(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_272(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (func_271())
	{
		return 0;
	}
	if (unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		return 0;
	}
	if (unk_0x4D9174D8796EA622())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()))
		{
			return 0;
		}
	}
	if (Global_1836444)
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (func_268())
	{
		return 0;
	}
	if (Global_76498)
	{
		return 0;
	}
	if (Global_2749856)
	{
		return 0;
	}
	if (func_267())
	{
		return 0;
	}
	return 1;
}

bool func_267()
{
	return Global_2708056;
}

bool func_268()
{
	return Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_193 != 0;
}

bool func_269()
{
	return Global_2684504.f_693;
}

bool func_270()
{
	return Global_2684504.f_848;
}

bool func_271()
{
	return Global_2672855.f_2881.f_582;
}

int func_272(int iParam0)
{
	if (Global_2657971[iParam0 /*465*/].f_219 == 0)
	{
		return 0;
	}
	return 1;
}

int func_273(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_274(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_274(int iParam0)
{
	return func_275(iParam0);
}

var func_275(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

bool func_276()
{
	return BitTest(Global_1845281[unk_0x259BE71D8A81D4FA() /*883*/].f_36.f_18, 0);
}

int func_277()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

int func_278(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_250(uParam0, bParam2, 0);
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

bool func_279(var uParam0)
{
	return uParam0->f_1;
}

void func_280()
{
	Global_2746025.f_1 = 0;
	Global_2746025 = 0;
	Global_2746025.f_2 = 0;
	Global_2746025.f_33 = -1;
	Global_2746025.f_34 = -1;
	StringCopy(&(Global_2746025.f_4), "", 64);
	StringCopy(&(Global_2746025.f_39[0 /*16*/]), "", 64);
	Global_2746025.f_38 = 0;
	Global_2746025.f_56 = 0;
	Global_2746025.f_57 = 0;
	Global_2746025.f_58 = -2;
	Global_2746025.f_3 = 0;
	func_281(&(Global_2746025.f_20));
}

void func_281(var uParam0)
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

void func_282()
{
	Global_2746025.f_2 = 1;
	Global_2746025.f_38 = 1;
	if (unk_0x261E3728EE56B3AC())
	{
		if (unk_0x5150DDF9D3BDA9E5())
		{
			while (unk_0x8BDB5F6FED3994AD())
			{
				system::wait(0);
			}
			unk_0x7D8697356CC73FFD();
			Global_2746025 = 0;
			Global_2746025.f_2 = 0;
		}
		else if (func_253(Global_2746025.f_20))
		{
			if (unk_0xEDD63461767A518C(&(Global_2746025.f_20)))
			{
				if (!unk_0x484CF81C32C3D413(&(Global_2746025.f_20)))
				{
					func_280();
				}
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}
	if (Global_2746025.f_37)
	{
		func_36(0);
	}
	Global_2746025.f_37 = 0;
	Global_2746025.f_3 = 0;
}

void func_283(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_295())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_284(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
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
		case joaat("service_earn_debug"):
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
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
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
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_284(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_284(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
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
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
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
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
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
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
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
			func_284(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_295())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x134EF45B578F4CCF(func_71()) || unk_0x34F31012FED51A0F())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x54BC5E0B6A29AE8A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x5F7C6361179DFFC4(iVar4))
		{
			*uParam0 = func_291(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_290(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_285(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_285(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2657971[unk_0x259BE71D8A81D4FA() /*465*/].f_127.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_286(iParam0);
	}
}

void func_286(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_295())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_289(iParam0))
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
		func_287(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_287(var uParam0)
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
	func_288(&(uParam0->f_14));
	func_288(&(uParam0->f_14.f_13));
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

void func_288(var uParam0)
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

int func_289(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_290(int iParam0, var uParam1)
{
	Global_2698855 = uParam1;
	Global_2698854 = iParam0;
}

int func_291(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_295())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_292(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_292(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_294(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_293();
		unk_0x71A6F836422FDD2B(1, &Var0, 37, iVar1, Var0.f_0);
	}
}

void func_293()
{
	unk_0x97A5024CE91641F1("AM_ARENA_SHP");
}

var func_294(int iParam0)
{
	var uVar0;
	
	if (func_239(iParam0))
	{
		unk_0x0B0C9A0F9AAEB7F0(&uVar0, iParam0);
	}
	return uVar0;
}

int func_295()
{
	if (unk_0x761778199FE1211C())
	{
		return unk_0xC18CB5D7A27A2E00();
	}
	return 0;
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&Global_8801, 20);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&Global_8801, 20);
	}
}

void func_297(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_298(char* sParam0)
{
	Global_8115 = 132;
	StringCopy(&Global_22301, sParam0, 64);
	if (Global_20930.f_1 > 3)
	{
		Global_20930.f_1 = 10;
		func_111();
	}
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x330108B080A2132F(4);
	unk_0x330108B080A2132F(0);
	unk_0x330108B080A2132F(2);
	unk_0x882AEFD55B8D51FB("CELL_CONDFON");
	unk_0x60D332F23943B34F(&Global_22301);
	unk_0xCFAD3D478C87321A();
	func_84("CELL_300");
	func_84("CELL_211");
	func_84("CELL_211");
	unk_0xE6B753D52F4CA222();
	unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 20);
	func_103();
	unk_0x8744D2E3FC95740E(&Global_8800, 20);
}

void func_299()
{
	unk_0xD9C7584E971C091E();
	Global_2746025 = 1;
	Global_2746025.f_2 = 0;
	Global_2746025.f_33 = -1;
	Global_2746025.f_34 = -1;
	Global_2746025.f_38 = 0;
}

void func_300()
{
	unk_0x8E4825CCACA34B58(iLocal_78);
	unk_0x394AFAC073E1F277(iLocal_78);
	Local_292.f_2978 = 0;
	unk_0x8744D2E3FC95740E(&Global_8800, 16);
	unk_0x8744D2E3FC95740E(&Global_8800, 9);
	unk_0x8744D2E3FC95740E(&Global_8800, 29);
	unk_0x8744D2E3FC95740E(&Global_8801, 20);
	unk_0x8744D2E3FC95740E(&Global_8801, 0);
	unk_0x8744D2E3FC95740E(&Global_8801, 18);
	func_302(12, iLocal_274);
	func_302(2, iLocal_275);
	func_302(0, iLocal_276);
	if (Local_292.f_2999 == 1)
	{
		if (unk_0x261E3728EE56B3AC())
		{
			if (Global_2746025.f_33 == -1)
			{
				func_282();
			}
		}
	}
	unk_0xBBC29EBE6E1A48FA();
}

void func_301()
{
	if (!Global_79389)
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (BitTest(Global_8800, 11))
			{
				if (!Global_20873)
				{
					unk_0x0974B2530CABDF56(unk_0x4A8C381C258A124D(), 0, 1);
				}
				if (Global_79389)
				{
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 244, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 243, 1);
					unk_0x0428AFDCAA63B06E(unk_0x4A8C381C258A124D(), 242, 1);
				}
				unk_0x8744D2E3FC95740E(&Global_8800, 11);
			}
		}
	}
}

void func_302(int iParam0, int iParam1)
{
	Global_2169[iParam0 /*29*/].f_1 = iParam1;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_1 = iParam1;
	}
}

void func_303()
{
	int iVar0[205];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_302(147, 1320);
	func_302(74, 180);
	func_302(75, 190);
	func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	system::wait(0);
	iLocal_68 = 0;
	iLocal_105 = 0;
	iLocal_88 = 0;
	func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iVar1 = 0;
	while (iVar1 < 204)
	{
		iVar2 = 0;
		iVar3 = 204;
		func_302(iVar3, 5000);
		func_21();
		while (iVar2 < 204)
		{
			if (BitTest(Global_8801, 0))
			{
				if ((iVar2 == 2 || iVar2 == 0) || iVar2 == 12)
				{
					func_302(12, 3);
					func_302(2, 1);
					func_302(0, 2);
					bLocal_65 = true;
				}
				else
				{
					bLocal_65 = false;
				}
			}
			else if (func_145(iVar2, Global_20930) == 1)
			{
				bLocal_65 = true;
			}
			else
			{
				bLocal_65 = false;
			}
			if (bLocal_65)
			{
				if (iVar2 != Global_20930)
				{
					if (iVar0[iVar2] == 0)
					{
						if (func_314(iVar2, Global_20930) == 1 || func_91(iVar2, Global_20930))
						{
							fLocal_66 = (system::to_float(func_325(iVar2)) / 100f);
						}
						else
						{
							fLocal_66 = system::to_float(func_325(iVar2));
						}
						if (func_314(iVar3, Global_20930) == 1 || func_91(iVar3, Global_20930))
						{
							fLocal_67 = (system::to_float(func_325(iVar3)) / 100f);
						}
						else
						{
							fLocal_67 = system::to_float(func_325(iVar3));
						}
						if (fLocal_66 < fLocal_67)
						{
							iVar3 = iVar2;
							if (BitTest(Global_8801, 0))
							{
								if (iVar3 == 2)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, "CELL_7001", &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 0)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, "CELL_7002", &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 12)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, "CELL_7003", &(Global_2169[iVar3 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		Global_20936[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (!BitTest(Global_8801, 0))
		{
			if (func_145(iVar3, Global_20930) == 1)
			{
				if (iVar2 != Global_20930)
				{
					if (func_83(iVar3, Global_20930) == 0)
					{
						if (func_314(iVar3, Global_20930) == 1 || func_91(iVar3, Global_20930))
						{
							func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 1f, -1f, -1f, &(Global_118[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, &(Global_118[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_314(iVar3, Global_20930) == 1 || func_91(iVar3, Global_20930))
					{
						func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 1f, -1f, -1f, &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (func_145(iVar1, Global_20930) == 1)
		{
			if (iVar1 != Global_20930)
			{
				iLocal_68++;
			}
		}
		iVar1++;
	}
	if (!BitTest(Global_8801, 0))
	{
		if (unk_0x261E3728EE56B3AC())
		{
			if (Global_20873 == 0)
			{
				func_305();
			}
		}
	}
	func_304();
}

void func_304()
{
	if (!Global_20930.f_1 == 10 && !Global_20930.f_1 == 9)
	{
		if (BitTest(Global_8800, 9))
		{
			system::wait(750);
		}
		if (Global_20930.f_1 > 6)
		{
			func_160(Global_20911, "DISPLAY_VIEW", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (BitTest(Global_8801, 0))
			{
				func_158(Global_20911, "SET_HEADER", "CELL_7000", 0, 0, 0, 0);
			}
			else
			{
				func_158(Global_20911, "SET_HEADER", "CELL_0", 0, 0, 0, 0);
			}
			Global_8803 = 99;
			if (BitTest(Global_8800, 9))
			{
				if (Global_20918)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x8744D2E3FC95740E(&Global_8800, 17);
			}
			else if (BitTest(Global_8801, 0))
			{
				if (Global_20918)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_210", 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
					func_157(Global_20911, "SET_SOFT_KEYS", 3f, 0f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_20918)
			{
				if (iLocal_68 > 0)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
				}
				if (Global_20873 == 0)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, "CELL_207", 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
					unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				if (iLocal_68 > 0)
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				else
				{
					func_157(Global_20911, "SET_SOFT_KEYS", 2f, 0f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_157(Global_20911, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
				unk_0x0B0C9A0F9AAEB7F0(&Global_8800, 17);
				func_157(Global_20911, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
	func_302(12, iLocal_274);
	func_302(2, iLocal_275);
	func_302(0, iLocal_276);
}

void func_305()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	int iVar5;
	
	func_302(147, 1320);
	func_302(74, 180);
	func_302(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_69 = iLocal_68;
	iLocal_70 = iLocal_69;
	func_313(&Local_292);
	iVar4 = 0;
	if (Global_79389)
	{
		if (func_308() == 0)
		{
			iVar4 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(iVar2);
		if (func_178(iVar0, 0, 1))
		{
			if (iVar4 == 0)
			{
				if (!iVar0 == unk_0x259BE71D8A81D4FA())
				{
					Local_292[iVar1] = iVar0;
					func_307(unk_0xBD6CA019F46AB947(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_292.f_33 = iVar1;
	iVar2 = 0;
	iVar1 = 0;
	if (func_182(unk_0x259BE71D8A81D4FA()))
	{
		iVar5 = unk_0xFD8C855412F74D0F();
		if (iVar5 > 100)
		{
			iVar5 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			if (unk_0xB8CDCB967533FCB3(unk_0x5FDC59F83F2D1C9F(iVar2)))
			{
				if (unk_0x68809A66A3FB7B8F(unk_0x5FDC59F83F2D1C9F(iVar2)))
				{
					Var3 = { func_306(iVar2) };
					if (!unk_0xBE0146369C46314B(&Var3))
					{
						if (iVar4 == 0)
						{
							if (iVar1 < 100)
							{
								Local_292.f_34[iVar1 /*29*/] = { Var3 };
								if (func_181())
								{
									StringCopy(&(Local_292.f_34[iVar1 /*29*/].f_13), unk_0x6FB5D26E5812C023(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_292.f_34[iVar1 /*29*/].f_13), unk_0x5FDC59F83F2D1C9F(iVar2), 64);
								}
								func_307(&(Local_292.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_292.f_2935 = (Local_292.f_33 + iVar1);
}

struct<13> func_306(int iParam0)
{
	struct<13> Var0;
	
	unk_0x1530EB7A9B636789(iParam0, &Var0, 13);
	return Var0;
}

void func_307(var uParam0)
{
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x74BF156C860580D4(system::to_float(2));
	unk_0x74BF156C860580D4(system::to_float(iLocal_69));
	unk_0x74BF156C860580D4(0f);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(uParam0);
	unk_0xCFAD3D478C87321A();
	func_84("CELL_MP_999");
	func_84("CELL_MP_999");
	unk_0xE6B753D52F4CA222();
	iLocal_69++;
	iLocal_68++;
}

int func_308()
{
	if (!func_309())
	{
		return 0;
	}
	return 1;
}

int func_309()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_312())
	{
		return 1;
	}
	if (func_311())
	{
		return 1;
	}
	return func_310(120, -1);
}

int func_310(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_247(iParam0, iParam1);
	if (unk_0xF249567F2E83E093(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_311()
{
	return Global_1575071;
}

bool func_312()
{
	return Global_1575073;
}

void func_313(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = func_16();
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		uParam0->f_34[iVar0 /*29*/] = { Var1 };
		iVar0++;
	}
	uParam0->f_2936 = 0;
	uParam0->f_33 = 0;
	uParam0->f_2935 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_2937[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2946 = 0;
	StringCopy(&(uParam0->f_2947), "", 64);
	uParam0->f_2963 = { Var1 };
	uParam0->f_2976 = 0;
	uParam0->f_2977 = 0;
	func_297(&(uParam0->f_2979));
	uParam0->f_2999 = 0;
	StringCopy(&(uParam0->f_2983), "", 64);
}

int func_314(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_19[iParam1];
}

void func_315()
{
	int iVar0[205];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_302(147, 1320);
	func_302(74, 180);
	func_302(75, 190);
	func_160(Global_20911, "SET_DATA_SLOT_EMPTY", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
	system::wait(0);
	func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(0), 0f, -1f, -1f, "CELL_232", "CELL_233", "CELL_393", 0, 0);
	iLocal_68 = 0;
	if (!BitTest(Global_8801, 0))
	{
		if (unk_0x261E3728EE56B3AC())
		{
			if (Global_20873 == 0 && func_324(0))
			{
				func_322();
			}
		}
	}
	iLocal_71 = iLocal_68;
	iLocal_105 = 0;
	iLocal_88 = 0;
	iVar1 = iLocal_68;
	while (iVar1 < 204)
	{
		iVar2 = 0;
		iVar3 = 204;
		func_302(iVar3, 5000);
		func_21();
		while (iVar2 < 204)
		{
			if (BitTest(Global_8801, 0))
			{
				if ((iVar2 == 2 || iVar2 == 0) || iVar2 == 12)
				{
					func_302(12, 3);
					func_302(2, 1);
					func_302(0, 2);
					bLocal_65 = true;
				}
				else
				{
					bLocal_65 = false;
				}
			}
			else if (func_145(iVar2, Global_20930) == 1)
			{
				bLocal_65 = true;
			}
			else
			{
				bLocal_65 = false;
			}
			if (func_321())
			{
				if (Global_1836577 == 1 && iVar2 == 19)
				{
					bLocal_65 = false;
				}
				if (Global_1836576 == 1 && iVar2 == 175)
				{
					bLocal_65 = false;
				}
			}
			iVar4 = iVar2;
			if ((func_320(iVar4) && !func_317(iVar4)) && !func_316(iVar4))
			{
				bLocal_65 = false;
			}
			if (bLocal_65)
			{
				if (iVar2 != Global_20930)
				{
					if (iVar0[iVar2] == 0)
					{
						if (func_314(iVar2, Global_20930) == 1 || func_91(iVar2, Global_20930))
						{
							fLocal_66 = (system::to_float(func_325(iVar2)) / 100f);
						}
						else
						{
							fLocal_66 = system::to_float(func_325(iVar2));
						}
						if (func_314(iVar3, Global_20930) == 1 || func_91(iVar3, Global_20930))
						{
							fLocal_67 = (system::to_float(func_325(iVar3)) / 100f);
						}
						else
						{
							fLocal_67 = system::to_float(func_325(iVar3));
						}
						if (fLocal_66 < fLocal_67)
						{
							iVar3 = iVar2;
							if (BitTest(Global_8801, 0))
							{
								if (iVar3 == 2)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, "CELL_7001", &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 0)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, "CELL_7002", &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
								}
								if (iVar3 == 12)
								{
									func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, "CELL_7003", &(Global_2169[iVar3 /*29*/].f_3), "CELL_E_311", 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
		Global_20936[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (!BitTest(Global_8801, 0))
		{
			if (func_145(iVar3, Global_20930) == 1)
			{
				if (iVar2 != Global_20930)
				{
					if (func_83(iVar3, Global_20930) == 0)
					{
						if (func_314(iVar3, Global_20930) == 1 || func_91(iVar3, Global_20930))
						{
							func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 1f, -1f, -1f, &(Global_118[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
						else
						{
							func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, &(Global_118[iVar3 /*10*/].f_4), "CELL_195", "CELL_300", 0, 0);
						}
					}
					else if (func_314(iVar3, Global_20930) == 1 || func_91(iVar3, Global_20930))
					{
						func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 1f, -1f, -1f, &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
					}
					else
					{
						func_157(Global_20911, "SET_DATA_SLOT", system::to_float(2), system::to_float(iVar1), 0f, -1f, -1f, &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_3), &(Global_2169[iVar3 /*29*/].f_7), 0, 0);
					}
				}
			}
		}
		if (func_145(iVar1, Global_20930) == 1)
		{
			if (iVar1 != Global_20930)
			{
				iLocal_68++;
			}
		}
		iVar1++;
	}
	func_304();
}

int func_316(int iParam0)
{
	if (BitTest(Global_8800, 16))
	{
		return Global_23317 == iParam0;
	}
	return 0;
}

int func_317(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!func_319())
	{
		return 1;
	}
	iVar0 = func_318(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = (iVar0 / 32);
		bVar2 = (iVar0 % 32);
		switch (iVar1)
		{
			case 0:
				return !BitTest(func_68(10869, -1), bVar2);
			
			case 1:
				return !BitTest(func_68(10870, -1), bVar2);
			
			case 2:
				return !BitTest(func_68(10871, -1), bVar2);
			}
		
		default:
	}
	return 0;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		case 18:
			return 2;
		
		case 19:
			return 3;
		
		case 20:
			return 4;
		
		case 22:
			return 5;
		
		case 31:
			return 6;
		
		case 41:
			return 7;
		
		case 52:
			return 8;
		
		case 53:
			return 9;
		
		case 62:
			return 10;
		
		case 74:
			return 11;
		
		case 75:
			return 11;
		
		case 76:
			return 12;
		
		case 77:
			return 13;
		
		case 78:
			return 14;
		
		case 79:
			return 15;
		
		case 80:
			return 16;
		
		case 81:
			return 17;
		
		case 82:
			return 18;
		
		case 84:
			return 19;
		
		case 85:
			return 20;
		
		case 86:
			return 21;
		
		case 130:
			return 22;
		
		case 104:
			return 23;
		
		case 105:
			return 24;
		
		case 106:
			return 25;
		
		case 107:
			return 26;
		
		case 108:
			return 27;
		
		case 109:
			return 28;
		
		case 110:
			return 29;
		
		case 111:
			return 30;
		
		case 131:
			return 31;
		
		case 147:
			return 32;
		
		case 148:
			return 33;
		
		case 151:
			return 34;
		
		case 152:
			return 35;
		
		case 153:
			return 36;
		
		case 154:
			return 37;
		
		case 155:
			return 38;
		
		case 156:
			return 39;
		
		case 157:
			return 40;
		
		case 158:
			return 41;
		
		case 159:
			return 42;
		
		case 163:
			return 43;
		
		case 164:
			return 44;
		
		case 167:
			return 45;
		
		case 168:
			return 46;
		
		case 169:
			return 47;
		
		case 171:
			return 48;
		
		case 172:
			return 49;
		
		case 173:
			return 50;
		
		case 175:
			return 51;
		
		case 176:
			return 52;
		
		case 179:
			return 53;
		
		case 180:
			return 54;
		
		case 181:
			return 55;
		
		case 182:
			return 56;
		
		case 183:
			return 57;
		
		case 184:
			return 58;
		
		case 188:
			return 59;
		
		case 189:
			return 60;
		
		case 165:
			return 61;
		
		case 190:
			return 62;
		
		case 191:
			return 63;
		
		case 195:
			return 64;
		
		case 196:
			return 65;
		
		case 197:
			return 66;
		
		case 201:
			return 67;
		
		default:
	}
	return -1;
}

bool func_319()
{
	return Global_262145.f_33126;
}

bool func_320(int iParam0)
{
	return func_318(iParam0) != -1;
}

int func_321()
{
	if (Global_79389)
	{
		if (Global_1836576 || Global_1836577 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	int iVar5;
	
	func_302(147, 1320);
	func_302(74, 180);
	func_302(75, 190);
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iLocal_69 = iLocal_68;
	iLocal_70 = iLocal_69;
	func_313(&Local_292);
	iVar4 = 0;
	if (Global_79389)
	{
		if (func_308() == 0)
		{
			iVar4 = 1;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = unk_0xB23E0F9B63D009A8(iVar2);
		if (func_178(iVar0, 0, 1))
		{
			if (iVar4 == 0)
			{
				if (!iVar0 == unk_0x259BE71D8A81D4FA())
				{
					Local_292[iVar1] = iVar0;
					func_323(unk_0xBD6CA019F46AB947(iVar0));
					iVar1++;
				}
			}
		}
		iVar2++;
	}
	Local_292.f_33 = iVar1;
	iVar1 = 0;
	iVar2 = 0;
	if (func_182(unk_0x259BE71D8A81D4FA()))
	{
		iVar5 = unk_0xFD8C855412F74D0F();
		if (iVar5 > 100)
		{
			iVar5 = 100;
		}
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			if (unk_0xB8CDCB967533FCB3(unk_0x5FDC59F83F2D1C9F(iVar2)))
			{
				if (unk_0x68809A66A3FB7B8F(unk_0x5FDC59F83F2D1C9F(iVar2)))
				{
					Var3 = { func_306(iVar2) };
					if (!unk_0xBE0146369C46314B(&Var3))
					{
						if (iVar4 == 0)
						{
							if (iVar1 < 100)
							{
								Local_292.f_34[iVar1 /*29*/] = { Var3 };
								if (func_181())
								{
									StringCopy(&(Local_292.f_34[iVar1 /*29*/].f_13), unk_0x6FB5D26E5812C023(iVar2), 64);
								}
								else
								{
									StringCopy(&(Local_292.f_34[iVar1 /*29*/].f_13), unk_0x5FDC59F83F2D1C9F(iVar2), 64);
								}
								func_323(&(Local_292.f_34[iVar1 /*29*/].f_13));
								iVar1++;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	Local_292.f_2935 = (Local_292.f_33 + iVar1);
}

void func_323(var uParam0)
{
	unk_0x88F483FBD433696A(Global_20911, "SET_DATA_SLOT");
	unk_0x74BF156C860580D4(system::to_float(2));
	unk_0x74BF156C860580D4(system::to_float(iLocal_69));
	unk_0x74BF156C860580D4(0f);
	unk_0x882AEFD55B8D51FB("STRING");
	unk_0x60D332F23943B34F(uParam0);
	unk_0xCFAD3D478C87321A();
	func_84("CELL_MP_999");
	func_84("CELL_MP_999");
	unk_0xE6B753D52F4CA222();
	iLocal_69++;
	iLocal_68++;
}

int func_324(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (!func_319())
	{
		return 1;
	}
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	switch (iVar0)
	{
		case 0:
			return !BitTest(func_68(10869, -1), bVar1);
		
		case 1:
			return !BitTest(func_68(10870, -1), bVar1);
		
		case 2:
			return !BitTest(func_68(10871, -1), bVar1);
		
		default:
	}
	return 0;
}

var func_325(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_1;
}

