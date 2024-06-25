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
	var uLocal_25 = 0;
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
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	struct<110> Local_47 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_62 = 0;
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
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 3;
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
	var uLocal_197 = 16;
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
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 16;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 3;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 1092616192;
	var uLocal_535 = 1101004800;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 3;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 5;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 5;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 3;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 13;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 4;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 4;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 4;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 4;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 4;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 4;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 4;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 8;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_801 = 0;
	var uLocal_802 = 16;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	struct<3> Local_969 = { 0, 0, 0 } ;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	bool bLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	struct<3> Local_982 = { 0, 0, 0 } ;
	struct<3> Local_983 = { 0, 0, 0 } ;
	struct<2> Local_984 = { 0, 0 } ;
	var uLocal_985 = 0;
	struct<2> Local_986 = { 0, 0 } ;
	var uLocal_987 = 0;
	int iLocal_988 = 0;
	char[] cLocal_989[8] = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	char[] cLocal_993[8] = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	bool bLocal_997 = 0;
	int iLocal_998 = 0;
	char cLocal_999[48] = "";
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	var uLocal_1003 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_46 = joaat("p_amb_phone_01");
	Local_969 = { 693,1158f, -1012,418f, 21,72802f };
	Local_982 = { 692,8695f, -998,7867f, 22,3201f };
	Local_983 = { 693,3784f, -1025,671f, 21,506f };
	if (unk_0x96CFB880BAC634CE(3))
	{
		func_112();
		func_110();
		func_108();
	}
	func_100();
	unk_0x925970A93719CADE(1);
	while (true)
	{
		unk_0xECF30459397D5190("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_972)
		{
			if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_969, 200f, 200f, 200f, 0, 1, 0) && !unk_0x7B780C491DEC834E(Local_969, 50f))
			{
				unk_0x2094BC4B6731BA68(Local_969, 50f, 1, 0, 0, 0);
				iLocal_972 = 1;
			}
		}
		else if (!unk_0x65FFA94B82A71741(unk_0x4A8C381C258A124D(), Local_969, 200f, 200f, 200f, 0, 1, 0))
		{
			iLocal_972 = 0;
		}
		if (!iLocal_977)
		{
			if (Global_98010.f_358 == unk_0x70E57E9927B6BA58("AHP1_TRUCKCALLED") || Global_97940)
			{
				func_99(543);
				Global_98010.f_358 = 0;
				iLocal_977 = 1;
			}
		}
		func_98();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((unk_0xFC8BFE4B41177C22(iLocal_800[iVar0]) && !unk_0x4FAFF4BCB7633475(iLocal_800[iVar0])) && unk_0xFC8BFE4B41177C22(iLocal_798))
			{
				if (system::vdist2(unk_0xD1A6A821F5AC81DB(iLocal_800[iVar0], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 2500f)
				{
					unk_0x44FB298D6382876D(iLocal_800[iVar0], 1);
					unk_0xD844F5E50DAB6FF7(iLocal_800[iVar0], unk_0x4A8C381C258A124D(), 300f, 20000, 1, 0);
					unk_0xF09E30AF1B8FB379(&(iLocal_800[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1002 < 8 && iLocal_967 >= 0)
		{
			func_96();
		}
		switch (iLocal_967)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_800)
				{
					if (unk_0xFC8BFE4B41177C22(iLocal_800[iVar1]))
					{
						if (unk_0xFC8BFE4B41177C22(unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D())))
						{
							iVar2 = unk_0x31945A289F1359A1(unk_0x4A8C381C258A124D());
							if ((unk_0xD9F5E1FEFD1329E4(iVar2, 0) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iVar2, 1)) < 30f) && unk_0x2E6A27037F1DC473(iVar2, joaat("firetruk")))
							{
								unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_801);
								unk_0xD414C47AFF81382A(5, iLocal_801, joaat("player"));
								unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
								unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_95())
				{
					unk_0xA62957B100C8DE6D(15f, 15f, 4);
					unk_0x86A2BC11844DEEB3("AHP1_START");
					iLocal_967++;
				}
				break;
			
			case 0:
				if (!unk_0xFC8BFE4B41177C22(iLocal_798))
				{
					func_95();
					if ((unk_0xFC8BFE4B41177C22(unk_0xDC8D5832207C2EAD()) && unk_0xD9F5E1FEFD1329E4(unk_0xDC8D5832207C2EAD(), 0)) && unk_0x4B423FAA24E8ABF0(unk_0xDC8D5832207C2EAD()) == joaat("firetruk"))
					{
						iLocal_798 = unk_0xDC8D5832207C2EAD();
						unk_0xEE0BCDB1B5E36BCB(iLocal_798, 1, 1);
					}
				}
				else
				{
					func_46();
					if (!iLocal_973 && unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
					{
						func_45(iLocal_798, -1);
						func_44(iLocal_798, -1);
						func_43(541, 0);
						iLocal_973 = 1;
					}
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), Local_969) < system::pow(100f, 2f))
					{
						unk_0xAD69CF046AA50E85(1);
					}
					func_95();
					if (bLocal_978)
					{
						if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0) && unk_0xD9F5E1FEFD1329E4(iLocal_799, 0))
						{
							func_37(iLocal_799);
							if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iLocal_799) && unk_0x65FFA94B82A71741(iLocal_798, Local_969, Global_20, 1, 1, 0))
							{
								if (unk_0xC450B06E5AAA0985(uLocal_796))
								{
									unk_0xFE54B8568B2ABD12(&uLocal_796);
								}
								unk_0xA62957B100C8DE6D(5f, 15f, 4);
								iLocal_967++;
							}
						}
					}
					else if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
					{
						func_37(iLocal_798);
						if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iLocal_798) && unk_0x65FFA94B82A71741(iLocal_798, Local_969, Global_20, 1, 1, 0))
						{
							if (unk_0xC450B06E5AAA0985(uLocal_796))
							{
								unk_0xFE54B8568B2ABD12(&uLocal_796);
							}
							unk_0xA62957B100C8DE6D(5f, 15f, 4);
							iLocal_967++;
						}
					}
				}
				if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
				{
					unk_0xA62957B100C8DE6D(5f, 10f, 4);
					iLocal_967 = 100;
				}
				if (!unk_0xFC8BFE4B41177C22(iLocal_798))
				{
					func_15("AHP_LOSTTRUCK");
				}
				else if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
				{
					if ((system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_798, 1)) > 22500f && unk_0xF6C26AE940C14749(iLocal_798)) || system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_798, 1)) > 90000f)
					{
						func_15("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_15("AHP_DEADTRUCK");
				}
				break;
			
			case 1:
				if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
				{
					if (func_12(iLocal_798, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_976)
						{
							func_11("AHP_GETOUT", 7500, 1);
							iLocal_976 = 1;
						}
						unk_0x86A2BC11844DEEB3("AHP1_STOP");
						unk_0xA62957B100C8DE6D(10f, 10f, 4);
						iLocal_967++;
					}
				}
				break;
			
			case 2:
				if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
				{
					if (!unk_0x65FFA94B82A71741(iLocal_798, Local_969, Global_20 + Vector(2f, 2f, 2f), 1, 1, 0))
					{
						iLocal_967 = 0;
					}
					else if (bLocal_978)
					{
						if (unk_0xFC8BFE4B41177C22(iLocal_799))
						{
							if (!unk_0x21478251925DBFD7(iLocal_799, iLocal_798))
							{
								unk_0xDD38B2935A3EAC56(iLocal_798, 0, 0);
								if (unk_0xE101D58DA98B6070(iLocal_798))
								{
									unk_0x4539850624F18A9E(iLocal_798, 0);
								}
								unk_0x0B74F181ADFC39BF(iLocal_798, 2);
								unk_0x406CBCEA35499884();
								system::settimera(0);
								iLocal_967++;
							}
							else
							{
								unk_0xD4BC322888F79B7E(iLocal_799, iLocal_798);
							}
						}
					}
					else if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_798, 0))
					{
						if (unk_0xE101D58DA98B6070(iLocal_798))
						{
							unk_0x4539850624F18A9E(iLocal_798, 0);
						}
						unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
						unk_0x0B74F181ADFC39BF(iLocal_798, 2);
						unk_0x406CBCEA35499884();
						system::settimera(0);
						iLocal_967++;
					}
				}
				break;
			
			case 3:
				if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
				{
					if (system::timera() > 3000)
					{
						unk_0xA62957B100C8DE6D(5f, 5f, 4);
						func_6();
					}
				}
				break;
			
			case 100:
				if (unk_0xC450B06E5AAA0985(uLocal_796))
				{
					unk_0xFE54B8568B2ABD12(&uLocal_796);
				}
				if (!func_5(13))
				{
					func_4(13, 1);
				}
				iLocal_967++;
				break;
			
			case 101:
				func_95();
				if (bLocal_978)
				{
					func_37(iLocal_799);
				}
				else
				{
					func_37(iLocal_798);
				}
				if (!iLocal_979)
				{
					if ((unk_0xD9F5E1FEFD1329E4(iLocal_798, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_798, 0)) || (unk_0xD9F5E1FEFD1329E4(iLocal_799, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_799, 0)))
					{
						if ((unk_0xDECEB0709855F876(unk_0x4A8C381C258A124D(), "DAVIS") && unk_0xDF93B3CFAC96698F(unk_0x4A8C381C258A124D()) > 5f) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
						{
							if (func_3())
							{
								unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								unk_0x7A9F2D6596A1FF08("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_979 = 1;
						}
					}
				}
				if (!unk_0xFC8BFE4B41177C22(iLocal_798))
				{
					func_15("AHP_LOSTTRUCK");
				}
				else if (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0))
				{
					if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
					{
						unk_0x406CBCEA35499884();
						iLocal_967 = 0;
					}
					else if (unk_0xF4244288C3EF3306(unk_0x4A8C381C258A124D(), iLocal_798))
					{
						if (!iLocal_975)
						{
							func_11("AHP_LOSECOPS", 7500, 1);
							iLocal_975 = 1;
							iLocal_968 = unk_0x1DD05E817C89C737();
						}
					}
					else if ((iLocal_975 && (unk_0x1DD05E817C89C737() - iLocal_968) < 7500) && unk_0xFBA523E6F8ACE541())
					{
						unk_0x406CBCEA35499884();
					}
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_798, 1)) > 22500f)
					{
						func_15("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_15("AHP_DEADTRUCK");
				}
				break;
		}
		if (unk_0xFC8BFE4B41177C22(iLocal_798))
		{
			if (!func_2(iLocal_798))
			{
				func_1(iLocal_798, 0);
			}
		}
		system::wait(0);
	}
}

void func_1(int iParam0, int iParam1)
{
	Global_101533.f_22[iParam1] = iParam0;
}

int func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_101533.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_3()
{
	if (BitTest(unk_0xC5935DFB3F39785A(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_4(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113969.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113969.f_9088.f_99.f_58[iParam0] = iParam1;
}

int func_5(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_99.f_58[iParam0];
}

void func_6()
{
	unk_0xD7C0EA10993D3214(0, 0);
	func_7(0, 0);
	func_108();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_64168)
	{
		Global_64168 = iParam1;
	}
	if (bParam0)
	{
		if ((func_10(0) && Global_79636.f_1 == 1) && func_9(Global_79636))
		{
		}
		else
		{
			Global_64166 = 1;
		}
	}
	if (Global_113969.f_9088 || func_10(0))
	{
		iVar0 = func_8();
		iVar1 = Global_92265[iVar0 /*5*/];
		uVar2 = Global_79660.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113969.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 4);
		unk_0x0B0C9A0F9AAEB7F0(&Global_79638, true);
		Global_79654 = uVar2;
		Global_79655 = unk_0x1DD05E817C89C737();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_92265[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_10(bool bParam0)
{
	if (!bParam0 && unk_0x486FF5D06E9659F1(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79638, 0);
}

void func_11(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 1);
}

int func_12(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_14(bParam5, bParam6);
	func_13(iParam0);
	if ((unk_0x1DD05E817C89C737() - Global_30) > 500)
	{
		unk_0xE5EE5C9DDF05D925(iParam0, iParam1, iParam2, iParam4);
	}
	Global_30 = unk_0x1DD05E817C89C737();
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0x1D5CD3EAAA7422B0(unk_0xDF93B3CFAC96698F(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(int iParam0)
{
	if (!unk_0x1C2F771CDC87A3A5(iParam0, 0))
	{
		if (unk_0xA03728CC57F6DD36(iParam0))
		{
			if (unk_0x772683F12F46CE82(iParam0))
			{
				unk_0x5B29AF88D03CEB7A(iParam0, 0);
			}
		}
	}
}

void func_14(bool bParam0, bool bParam1)
{
	unk_0x66EFB3D6110055C4(0, 71, 1);
	unk_0x66EFB3D6110055C4(0, 72, 1);
	unk_0x66EFB3D6110055C4(0, 76, 1);
	unk_0x66EFB3D6110055C4(0, 73, 1);
	unk_0x66EFB3D6110055C4(0, 59, 1);
	unk_0x66EFB3D6110055C4(0, 60, 1);
	if (bParam0)
	{
		unk_0x66EFB3D6110055C4(0, 75, 1);
	}
	unk_0x66EFB3D6110055C4(0, 80, 1);
	if (!bParam1)
	{
		unk_0x66EFB3D6110055C4(0, 69, 1);
		unk_0x66EFB3D6110055C4(0, 70, 1);
		unk_0x66EFB3D6110055C4(0, 68, 1);
	}
	unk_0x66EFB3D6110055C4(0, 74, 1);
	unk_0x66EFB3D6110055C4(0, 86, 1);
	unk_0x66EFB3D6110055C4(0, 81, 1);
	unk_0x66EFB3D6110055C4(0, 82, 1);
	unk_0x66EFB3D6110055C4(0, 138, 1);
	unk_0x66EFB3D6110055C4(0, 136, 1);
	unk_0x66EFB3D6110055C4(0, 114, 1);
	unk_0x66EFB3D6110055C4(0, 107, 1);
	unk_0x66EFB3D6110055C4(0, 110, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 89, 1);
	unk_0x66EFB3D6110055C4(0, 87, 1);
	unk_0x66EFB3D6110055C4(0, 88, 1);
	unk_0x66EFB3D6110055C4(0, 113, 1);
	unk_0x66EFB3D6110055C4(0, 115, 1);
	unk_0x66EFB3D6110055C4(0, 116, 1);
	unk_0x66EFB3D6110055C4(0, 117, 1);
	unk_0x66EFB3D6110055C4(0, 118, 1);
	unk_0x66EFB3D6110055C4(0, 119, 1);
	unk_0x66EFB3D6110055C4(0, 352, 1);
	unk_0x66EFB3D6110055C4(0, 131, 1);
	unk_0x66EFB3D6110055C4(0, 132, 1);
	unk_0x66EFB3D6110055C4(0, 123, 1);
	unk_0x66EFB3D6110055C4(0, 126, 1);
	unk_0x66EFB3D6110055C4(0, 129, 1);
	unk_0x66EFB3D6110055C4(0, 130, 1);
	unk_0x66EFB3D6110055C4(0, 133, 1);
	unk_0x66EFB3D6110055C4(0, 134, 1);
	unk_0x1C74A3A76F738D39();
}

void func_15(char* sParam0)
{
	int iVar0;
	
	unk_0xD7C0EA10993D3214(0, 0);
	func_21(sParam0);
	while (!func_20())
	{
		system::wait(0);
	}
	if (unk_0xFC8BFE4B41177C22(iLocal_798))
	{
		if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_798, 0))
		{
			unk_0x8C1F7D7A31B2A38E(&iLocal_798);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_800)
	{
		if (unk_0xFC8BFE4B41177C22(iLocal_800[iVar0]))
		{
			unk_0x734A9F4537A31459(&(iLocal_800[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98010.f_9)
	{
		if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[iVar0]))
		{
			unk_0x734A9F4537A31459(&(Global_98010.f_9[iVar0]));
		}
		iVar0++;
	}
	unk_0x2094BC4B6731BA68(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 100f, 1, 1, 0, 0);
	unk_0x86A2BC11844DEEB3("AHP1_FAIL");
	if (func_19())
	{
		func_112();
	}
	else if (func_18())
	{
		func_16(229,1676f, -1614,979f, 28,2892f, 142,5156f);
	}
	func_108();
}

void func_16(struct<3> Param0, float fParam1)
{
	if (func_17(Global_79630, 0f, 0f, 0f, 0))
	{
		Global_79630 = { Param0 };
		Global_79633 = fParam1;
	}
}

bool func_17(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_18()
{
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
		{
			if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), 226,6765f, -1668,942f, 25,46082f, 185,6446f, -1635,836f, 39,29184f, 57,75f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19()
{
	if (Global_101533 == 7)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	if (Global_4)
	{
		return 1;
	}
	if (Global_101533 == 7 || Global_101533 == 8)
	{
		return 1;
	}
	return 0;
}

void func_21(char* sParam0)
{
	func_36(sParam0);
	func_22(0);
}

void func_22(int iParam0)
{
	int iVar0;
	
	if (Global_113969.f_9088 || func_10(0))
	{
		iVar0 = func_8();
		if (!func_23(iVar0))
		{
			return;
		}
		unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
		Global_101569 = iParam0;
	}
}

int func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_28();
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x97915D82C999021F(5000);
	}
	iVar0 = Global_92265[iParam0 /*5*/];
	iVar1 = Global_79660.f_109[iVar0 /*4*/];
	func_27(iVar1, 1);
	unk_0x3ECCF6485789A1D6(unk_0x259BE71D8A81D4FA(), 0);
	unk_0xF064FD8FB64821D1(unk_0x259BE71D8A81D4FA(), 0);
	func_24(&(Global_113969.f_2366.f_539), iVar1);
	if (Global_95688 == Global_101570)
	{
		Global_113969.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_92301[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x40AC02FA167D4D0A(0);
		}
	}
	Global_113969.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_95688 = Global_101570;
	if (iParam0 == -1)
	{
		if (Global_113969.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_92265[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_24(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113969.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113969.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_26(Global_113969.f_18536[iVar0], &Var2, &fVar3))
			{
				Global_113969.f_18536[iVar0] = 318;
				func_25(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98903[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_9 = 0f;
				Global_98903[iVar0 /*29*/].f_12 = 0f;
				Global_98903[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_10 = 0f;
				Global_98903[iVar0 /*29*/].f_13 = 0f;
				Global_98903[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_11 = 0f;
				Global_98903[iVar0 /*29*/].f_14 = 0f;
				Global_98903[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_26 = 0f;
				Global_98903[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_27 = 0f;
				Global_98903[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98903[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_25(var uParam0)
{
	*uParam0 = -15;
}

int func_26(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115,1569f, -1286,684f, 28,2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90,0089f, -1324,195f, 28,3203f };
			*fParam2 = 194,1887f;
			return 1;
			break;
		
		case 9:
			return func_26(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_26(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807,2979f, -48,4004f, 36,8173f };
			*fParam2 = 201,6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432,34f, -1887,383f, 70,5768f };
			*fParam2 = 350,0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666,204f, 1967,25f, 143,3213f };
			*fParam2 = 0,7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440,22f, -127,02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135,055f, -1759,64f, 27,8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687,6992f, -1744,03f, 28,3624f };
			*fParam2 = 267,1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56,5117f, -744,6122f, 43,1356f };
			*fParam2 = 340,0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506,485f, -1884,967f, 24,764f };
			*fParam2 = 22,9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555,958f, 953,6136f, 77,2063f };
			*fParam2 = 152,8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220,72f, -64,4177f, 68,2922f };
			*fParam2 = (250,4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048,07f, 3840,84f, 34,2238f };
			*fParam2 = 119,603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464,22f, -1592,98f, 38,73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744,79f + 0,0186f), (-465,86f - 0,0114f), 36,6399f };
			*fParam2 = 51,7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508,1f, 173,6278f };
			*fParam2 = 151,2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72,2278f, -1464,68f, 28,2915f };
			*fParam2 = 156,8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24,2312f };
			*fParam2 = 7,2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257,9167f, -1120,786f, 28,3684f };
			*fParam2 = 97,2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422,5858f, -978,6332f, 69,7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294,8521f, 882,9366f, 197,8527f };
			*fParam2 = 162,693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771,802f, 794,4316f, 138,4211f };
			*fParam2 = 128,9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495,595f, -1848,821f, 70,2075f };
			*fParam2 = 32,2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897,554f, 4032,241f, 50,1419f };
			*fParam2 = 192,8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973,355f, 3818,204f, 32,005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725,8f, 33,0673f };
			*fParam2 = -3,7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4,0205f, -2975,341f, 798,4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709,0244f, -2916,479f, 5,0589f };
			*fParam2 = 355,326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643,5248f, -2917,325f, 5,1337f };
			*fParam2 = 334,1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595,2742f, -2819,183f, 5,0559f };
			*fParam2 = 46,8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314,4171f, 965,207f, 208,4024f };
			*fParam2 = 165,9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321,537f, 4975,455f, 25,9097f };
			*fParam2 = 221,228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111,1318f, 6316,479f, 30,4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731,3261f, 106,68f, 54,7169f };
			*fParam2 = 98,9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257,5f, -526,9999f, 30,2361f };
			*fParam2 = 220,9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736,9869f, -2050,678f, 28,2718f };
			*fParam2 = 83,9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262,5499f, -2540,15f, 4,8433f };
			*fParam2 = -64,1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315,7789f, 6201,355f, 30,4322f };
			*fParam2 = 127,7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118,0988f, -1264,916f, 32,3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37,5988f, -1351,52f, 28,2954f };
			*fParam2 = 90,0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558,2693f, 261,1167f, 82,07f };
			*fParam2 = 84,6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196,9999f, 507,9999f, 132,477f };
			*fParam2 = 99,6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312,01f, -1645,87f, 51,2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818,7374f, 6,4824f, 41,2432f };
			*fParam2 = 211,8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091,258f, 4714,852f, 40,1936f };
			*fParam2 = 136,0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762,59f, 3247,212f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764,013f, 3252,902f, 40,735f };
			*fParam2 = 27,0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_27(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_95498[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_95498[iParam0 /*2*/] = 0;
	}
}

void func_28()
{
	Global_101568 = 1;
	if (unk_0x6652E84A43F51B8B(unk_0x259BE71D8A81D4FA(), 1))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_29())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
	}
	else if (!unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		if (unk_0xD6F9DEE4765092A9(&Global_79622))
		{
			switch (func_29())
			{
				case 0:
					StringCopy(&Global_79622, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_79622, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_79622, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_79626, "", 16);
		}
		Global_101568 = 0;
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 25);
	}
}

int func_29()
{
	func_30();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		if (func_34(Global_113969.f_2366.f_539.f_4321) != unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D()))
		{
			iVar0 = func_33(unk_0x4A8C381C258A124D());
			if (func_32(iVar0) && (!func_31(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_32(Global_113969.f_2366.f_539.f_4321))
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

bool func_31(int iParam0)
{
	return Global_44042 == iParam0;
}

bool func_32(int iParam0)
{
	return iParam0 < 3;
}

int func_33(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar1 = unk_0x4B423FAA24E8ABF0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)
{
	if (func_32(iParam0))
	{
		return func_35(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_35(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

void func_36(char* sParam0)
{
	if (!unk_0xD6F9DEE4765092A9(sParam0))
	{
		if (unk_0x09112CCF7824FE38(sParam0) <= 16)
		{
			StringCopy(&Global_79622, sParam0, 16);
			StringCopy(&Global_79626, "", 16);
			if (unk_0xE7585CE3CDD6F47E())
			{
				unk_0x98188EDB7446A033();
			}
		}
	}
}

void func_37(int iParam0)
{
	if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
	{
		if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) > 0)
		{
			if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
			{
				if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
				{
					if (unk_0xC450B06E5AAA0985(uLocal_797))
					{
						unk_0xFE54B8568B2ABD12(&uLocal_797);
					}
				}
				else if (!unk_0xC450B06E5AAA0985(uLocal_797))
				{
					uLocal_797 = func_41(iParam0, 0, 0);
				}
			}
		}
		else if (unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
		{
			if (unk_0xC450B06E5AAA0985(uLocal_797))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_797);
			}
			if (!unk_0xC450B06E5AAA0985(uLocal_796))
			{
				unk_0x406CBCEA35499884();
				if (!iLocal_971)
				{
					func_40("AHP_DROPOFF", 7500, 1);
					iLocal_971 = 1;
				}
				uLocal_796 = func_38(Local_969, 1);
				unk_0xA62957B100C8DE6D(3f, 2f, 3);
			}
		}
		else
		{
			if (unk_0xC450B06E5AAA0985(uLocal_796))
			{
				unk_0xFE54B8568B2ABD12(&uLocal_796);
			}
			if (!unk_0xC450B06E5AAA0985(uLocal_797))
			{
				unk_0x406CBCEA35499884();
				if (!iLocal_970)
				{
					func_40("AHP_GETBAKIN", 7500, 1);
					iLocal_970 = 1;
				}
				uLocal_797 = func_41(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (unk_0xC450B06E5AAA0985(uLocal_797))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_797);
		}
		if (unk_0xC450B06E5AAA0985(uLocal_796))
		{
			unk_0xFE54B8568B2ABD12(&uLocal_796);
		}
	}
}

var func_38(struct<3> Param0, int iParam1)
{
	var uVar0;
	
	uVar0 = unk_0x34864AB7DA700AA6(Param0);
	unk_0x5D3946F818C6B331(uVar0, func_39(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
	unk_0xBC64B805EE071A37(uVar0, iParam1);
	return uVar0;
}

float func_39(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_40(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x17EA339F685C42D2(sParam0);
	unk_0x0A3136AD174470CC(iParam1, 0);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	return func_42(iParam0, !bParam1, bParam2);
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xFC8BFE4B41177C22(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x18E23E031A9B798F(iParam0);
	if (unk_0x55B80B6E7AB61270(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_39(unk_0x76CD105BCAC6EB9F(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6A52036D51C7E18E(uVar0, bParam1);
		}
		else
		{
			unk_0x61183D6239A9D7B8(uVar0, 2);
		}
	}
	else if (unk_0x0101C509A6E67F99(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_39(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
		unk_0x6A52036D51C7E18E(uVar0, bParam1);
	}
	else if (unk_0xBE79A96C521F4432(iParam0))
	{
		unk_0x5D3946F818C6B331(uVar0, func_39(unk_0x76CD105BCAC6EB9F(), 0,7f, 0,7f));
	}
	return uVar0;
}

void func_43(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_64176 = iParam0;
	if (!Global_64174)
	{
		Global_64174 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_76261)
		{
			if (Global_76262[iVar0 /*9*/] == iParam0)
			{
				Global_76262[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_44(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_64179 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_76261)
	{
		if (iParam1 == -1 || Global_76262[iVar0 /*9*/] == iParam1)
		{
			if (Global_76262[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_76262[iVar0 /*9*/].f_6 = iParam0;
				Global_76262[iVar0 /*9*/].f_7 = 1;
				Global_76262[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, int iParam1)
{
	Global_64177 = iParam0;
	Global_64178 = iParam1;
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_978)
	{
		iVar0 = iLocal_799;
	}
	else
	{
		iVar0 = iLocal_798;
	}
	if (!unk_0x3555462DB47B7AB1())
	{
		switch (iLocal_980)
		{
			case 0:
				if ((unk_0xD9F5E1FEFD1329E4(iVar0, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = func_93(iVar1);
						if ((!unk_0x4FAFF4BCB7633475(iVar2) && unk_0xCECDBB848D53DEB2(iVar2, iVar0, 0)) && unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) == iVar2)
						{
							if (!func_92(iVar2) && func_91(iVar2, 0))
							{
								if (func_90(iVar2, 0))
								{
									iLocal_1001 = 0;
									iLocal_981 = iVar1;
									iLocal_980 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			
			case 1:
				if (unk_0xD9F5E1FEFD1329E4(iVar0, 0))
				{
					if ((((unk_0x4FAFF4BCB7633475(func_93(iLocal_981)) || unk_0xFD5C5BBD1FE92BB7(iVar0, -1, 0) != func_93(iLocal_981)) || !unk_0xCECDBB848D53DEB2(func_93(iLocal_981), iVar0, 0)) || !func_92(func_93(iLocal_981))) || !unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iVar0, 0))
					{
						func_89(func_93(iLocal_981));
						iLocal_980 = 0;
					}
					else
					{
						switch (iLocal_1001)
						{
							case 0:
								iLocal_1001 = 2;
								break;
							
							case 1:
								if (unk_0xFFEB5F24B372DFF6(Local_984.f_0, Local_984.f_1, Local_986.f_0, Local_986.f_1))
								{
									iLocal_1001++;
								}
								break;
							
							case 2:
								unk_0xCF6CC9EA0D2EFE23(func_93(iLocal_981), iVar0, Local_969, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
								if (system::vdist(unk_0xD1A6A821F5AC81DB(iVar0, 1), Local_969) > 250f)
								{
									unk_0x5D97A268AAF6B6AB(iVar0, system::vdist(unk_0xD1A6A821F5AC81DB(iLocal_798, 1), Local_969));
								}
								iLocal_1001++;
								break;
							
							case 3:
								if (unk_0x5105BE70DEF1F5FB(iVar0, 697,6884f, -1013,364f, 27,4968f, 688,3482f, -1013,179f, 22,32968f, 29,25f, 0, 1, 0))
								{
									if (system::vdist(unk_0xD1A6A821F5AC81DB(iVar0, 1), Local_982) < system::vdist(unk_0xD1A6A821F5AC81DB(iVar0, 1), Local_983))
									{
										if (bLocal_978)
										{
											unk_0xCF6CC9EA0D2EFE23(func_93(iLocal_981), iVar0, Local_983, 5f, 0, unk_0x4B423FAA24E8ABF0(iVar0), 262144, 2f, 2f);
										}
										else
										{
											unk_0x2D864CC37DDFA963(func_93(iLocal_981), iVar0, Local_969, 180f, 1, 15f, 0);
										}
									}
									else if (bLocal_978)
									{
										unk_0xCF6CC9EA0D2EFE23(func_93(iLocal_981), iVar0, Local_982, 5f, 0, unk_0x4B423FAA24E8ABF0(iVar0), 262144, 2f, 2f);
									}
									else
									{
										unk_0x2D864CC37DDFA963(func_93(iLocal_981), iVar0, Local_969, 0f, 1, 15f, 0);
									}
									iLocal_1001++;
								}
								break;
							
							case 4:
								break;
							}
						}
				}
				func_47();
				break;
		}
	}
	else if (iLocal_980 != 0)
	{
		if (func_89(func_93(iLocal_981)))
		{
			iLocal_980 = 0;
		}
	}
}

void func_47()
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	if (!unk_0x4FAFF4BCB7633475(func_93(iLocal_981)) && unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
	{
		if ((((unk_0xFC8BFE4B41177C22(iLocal_798) && unk_0xD9F5E1FEFD1329E4(iLocal_798, 0)) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_798, 0)) && unk_0xCECDBB848D53DEB2(func_93(iLocal_981), iLocal_798, 0)) || (((unk_0xFC8BFE4B41177C22(iLocal_799) && unk_0xD9F5E1FEFD1329E4(iLocal_799, 0)) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_799, 0)) && unk_0xCECDBB848D53DEB2(func_93(iLocal_981), iLocal_799, 0)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_988)
	{
		case 0:
			uVar1 = func_86();
			if (func_72(0, 1, 145, 0, uVar1, &cLocal_989, &cLocal_993, 1))
			{
				func_71(&uLocal_802, 0);
				func_71(&uLocal_802, 1);
				func_71(&uLocal_802, 2);
				if (func_29() == 1)
				{
					func_70(&uLocal_802, 0, func_93(0), "MICHAEL", 0, 1);
					func_70(&uLocal_802, 1, unk_0x4A8C381C258A124D(), "FRANKLIN", 0, 1);
				}
				else
				{
					func_70(&uLocal_802, 1, func_93(1), "FRANKLIN", 0, 1);
					func_70(&uLocal_802, 0, unk_0x4A8C381C258A124D(), "MICHAEL", 0, 1);
				}
				if (!iLocal_998)
				{
					iLocal_1000 = unk_0x1DD05E817C89C737();
				}
				iLocal_988 = 1;
			}
			break;
		
		case 1:
			if (bVar0)
			{
				if ((unk_0x1DD05E817C89C737() - iLocal_1000) > 5000 || iLocal_998)
				{
					if (func_69(&uLocal_802, &cLocal_989, &cLocal_993, 8, 0, 0, 0))
					{
						iLocal_998 = 1;
						iLocal_988 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!bLocal_997)
			{
				if (!bVar0)
				{
					cLocal_999 = { func_68() };
					func_67();
					bLocal_997 = true;
				}
			}
			else if (bVar0)
			{
				if (func_51(&uLocal_802, &cLocal_989, &cLocal_993, &cLocal_999, 8, 0, 0))
				{
					bLocal_997 = false;
				}
			}
			if (unk_0x3555462DB47B7AB1() || (!bLocal_997 && !func_50()))
			{
				func_48();
				iLocal_988 = 3;
				iLocal_1000 = unk_0x1DD05E817C89C737();
			}
			break;
		
		case 3:
			if ((unk_0x1DD05E817C89C737() - iLocal_1000) > 10000)
			{
				iLocal_988 = 0;
			}
			break;
	}
}

void func_48()
{
	Global_21152 = 0;
	func_49();
}

void func_49()
{
	if (unk_0x1F9EB85925C3ECD7())
	{
		unk_0xC78B293A5F4EACF9();
		Global_23297 = 0;
		unk_0x0F15249D24BC5ADA(1);
		Global_22286 = 6;
		return;
	}
}

int func_50()
{
	if (Global_22286 != 0 || unk_0x1F9EB85925C3ECD7())
	{
		return 1;
	}
	return 0;
}

bool func_51(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_66(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 1;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_52(sParam2, iParam4, 0);
}

int func_52(char* sParam0, int iParam1, bool bParam2)
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
					func_65();
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
		if (func_64(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_63();
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
			unk_0x8744D2E3FC95740E(&Global_8802, false);
			if (bParam2)
			{
				func_62();
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
				if (func_61())
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
			if (func_60())
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
			func_59();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_58();
		func_53();
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
		func_65();
	}
	return 0;
}

void func_53()
{
	if (!func_54())
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

int func_54()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (unk_0x259BE71D8A81D4FA() == func_57())
	{
		return 0;
	}
	if (func_55(unk_0x259BE71D8A81D4FA()))
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

bool func_55(int iParam0)
{
	return func_56(iParam0, 20);
}

var func_56(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

int func_57()
{
	return -1;
}

void func_58()
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

void func_59()
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

int func_60()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_61()
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

void func_62()
{
	if (func_31(14))
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
		Global_20930 = func_29();
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

void func_63()
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

bool func_64(int iParam0, int iParam1)
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

void func_65()
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
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

void func_67()
{
	Global_21152 = 0;
	func_65();
}

struct<6> func_68()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_22286 == 4)
	{
		iVar1 = unk_0xE7365CC791D1E4EB();
		iVar1 = (iVar1 + Global_23296);
		iVar2 = iVar1 + 1;
		if (iVar2 > -1 && iVar1 > -1)
		{
			if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar2 /*6*/])))
			{
				return Global_21154[iVar2 /*6*/];
			}
			else
			{
				iVar3 = iVar2;
				while (iVar3 < 70)
				{
					if (unk_0x6BA487C862DB8DDF(&(Global_21154[iVar3 /*6*/])))
					{
						return Global_21154[iVar3 /*6*/];
						iVar3 = 70;
					}
					iVar3++;
				}
				return Var0;
			}
			return Global_21154[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_69(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_66(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_52(sParam2, iParam3, 0);
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_71(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_83(iParam0);
	iVar1 = func_83(iParam1);
	iVar2 = func_83(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = func_82(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && func_5(137)) && iParam3 == 1)
		{
			if (func_81(&(Global_113969.f_18106.f_388), iParam3, &iVar3, &iVar4, uParam4))
			{
				if (bParam7)
				{
					func_76(&(Global_113969.f_18106.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (func_81(&(Global_113969.f_18106.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				func_76(&(Global_113969.f_18106.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = func_75(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (func_81(&(Global_113969.f_18106.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				func_76(&(Global_113969.f_18106.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { func_73(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

struct<4> func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, "F", 16);
	if (iParam3 == 0)
	{
		StringConCat(&Var0, "p", 16);
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(&Var0, "a", 16);
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&Var0, "c", 16);
		if (iParam2 < iParam1)
		{
			iVar1 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar1;
		}
		if (iParam1 < iParam0)
		{
			iVar2 = iParam0;
			iParam0 = iParam1;
			iParam1 = iVar2;
		}
		if (iParam2 < iParam1)
		{
			iVar3 = iParam1;
			iParam1 = iParam2;
			iParam2 = iVar3;
		}
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_74(iParam2), 16);
		}
	}
	else
	{
		StringConCat(&Var0, "x", 16);
		StringConCat(&Var0, func_74(iParam0), 16);
		StringConCat(&Var0, func_74(iParam1), 16);
		if (iParam2 != 7)
		{
			StringConCat(&Var0, func_74(iParam2), 16);
		}
	}
	return Var0;
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "M";
			break;
		
		case 1:
			return "F";
			break;
		
		case 2:
			return "T";
			break;
		
		case 3:
			return "L";
			break;
		
		case 4:
			return "J";
			break;
		
		case 5:
			return "A";
			break;
	}
	return "X";
}

int func_75(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == iParam1 || iParam1 == iParam2) || iParam2 == iParam0)
	{
		return 3;
	}
	if (((iParam0 == 1 || iParam1 == 1) || iParam2 == 1) && ((iParam0 == 2 || iParam1 == 2) || iParam2 == 2))
	{
		if ((iParam0 == 0 || iParam1 == 0) || iParam2 == 0)
		{
			return 0;
		}
		if ((iParam0 == 3 || iParam1 == 3) || iParam2 == 3)
		{
			return 1;
		}
	}
	return 3;
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	func_80((*uParam0)[iParam2], &iVar0, &iVar1, &iVar2);
	func_79((*uParam0)[iParam2], &iVar3, &iVar4, &iVar5);
	func_78((*uParam0)[iParam2], &iVar6);
	if (iParam1 == 0)
	{
		iVar0++;
		if (iVar0 > iVar3)
		{
			iVar0 = iVar3;
		}
	}
	else if (iParam1 == 1)
	{
		iVar1++;
		if (iVar1 > iVar4)
		{
			iVar1 = iVar4;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2++;
		if (iVar2 > iVar5)
		{
			iVar2 = iVar5;
		}
	}
	func_77(uParam0[iParam2], iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6);
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	*uParam0 = 0;
	*uParam0 = (*uParam0 || system::shift_left(iParam1 & 15, 28));
	*uParam0 = (*uParam0 || system::shift_left(iParam2 & 15, 24));
	*uParam0 = (*uParam0 || system::shift_left(iParam3 & 15, 20));
	*uParam0 = (*uParam0 || system::shift_left(iParam4 & 15, 16));
	*uParam0 = (*uParam0 || system::shift_left(iParam5 & 15, 12));
	*uParam0 = (*uParam0 || system::shift_left(iParam6 & 15, 8));
	*uParam0 = (*uParam0 || iParam7 & 255);
}

void func_78(var uParam0, int iParam1)
{
	*iParam1 = uParam0 & 255;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = system::shift_right(iParam0, 16) & 15;
	*iParam2 = system::shift_right(iParam0, 12) & 15;
	*iParam3 = system::shift_right(iParam0, 8) & 15;
}

void func_80(int iParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam1 = system::shift_right(iParam0, 28) & 15;
	*iParam2 = system::shift_right(iParam0, 24) & 15;
	*iParam3 = system::shift_right(iParam0, 20) & 15;
}

int func_81(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	*iParam2 = 0;
	while (*iParam2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		bVar6 = false;
		func_78((*uParam0)[*iParam2], &bVar6);
		if (BitTest(uParam4, bVar6))
		{
			func_80((*uParam0)[*iParam2], &iVar0, &iVar1, &iVar2);
			func_79((*uParam0)[*iParam2], &iVar3, &iVar4, &iVar5);
			if (iParam1 == 0)
			{
				if (iVar0 < iVar3)
				{
					*uParam3 = iVar0;
					return 1;
				}
			}
			else if (iParam1 == 1)
			{
				if (iVar1 < iVar4)
				{
					*uParam3 = iVar1;
					return 1;
				}
			}
			else if (iParam1 == 2)
			{
				if (iVar2 < iVar5)
				{
					*uParam3 = iVar2;
					return 1;
				}
			}
		}
		*iParam2++;
	}
	*iParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_85())
	{
		return func_84(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_85())
	{
		return 6;
	}
	if (iParam0 == 205)
	{
		return 6;
	}
	return 6;
}

var func_84(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_11;
}

int func_85()
{
	if (Global_32948 == 0 || Global_32948 == 2)
	{
		return 204;
	}
	return 161;
}

int func_86()
{
	int iVar0;
	
	iVar0 = 0;
	unk_0x0B0C9A0F9AAEB7F0(&iVar0, true);
	if (Local_47.f_109 == 0)
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 2);
	}
	if (func_5(128))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 4);
		if (!func_88(24))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 21);
		}
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 3);
	}
	if (func_5(131))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 6);
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 5);
	}
	if (func_5(137))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 9);
	}
	else if (func_5(126))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 8);
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 7);
	}
	if (func_5(137))
	{
		if (!func_5(135) && !func_5(136))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 10);
		}
		if (func_5(135))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 11);
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 13);
		}
		if (func_5(136))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 12);
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 14);
		}
	}
	if (!func_88(20))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 15);
	}
	if (!func_88(46))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 16);
	}
	if (func_5(129) && !BitTest(iVar0, 9))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 17);
	}
	if (func_88(40) && !func_88(43))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 18);
	}
	if (func_88(43) && !func_88(42))
	{
		unk_0x0B0C9A0F9AAEB7F0(&iVar0, 19);
	}
	if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
	{
		if (func_87(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)))
		{
			unk_0x0B0C9A0F9AAEB7F0(&iVar0, 20);
		}
	}
	return iVar0;
}

int func_87(struct<2> Param0, Vector3 vParam1)
{
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113969.f_9088.f_330[iParam0 /*6*/];
}

int func_89(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_97367, bVar0))
		{
			return 0;
		}
		unk_0x8744D2E3FC95740E(&Global_97367, bVar0);
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97367, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				return 0;
			}
		}
		if (BitTest(Global_97366, bVar0))
		{
			unk_0xA83DA0A0DF32920C(iParam0, 0, 0);
			unk_0x788F35D395511DFE(iParam0, 0, 1);
			unk_0x0B0C9A0F9AAEB7F0(&Global_97367, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x4A8C381C258A124D())
			{
				return 0;
			}
		}
		if (BitTest(Global_97366, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	bool bVar0;
	
	return 0;
	if (!unk_0x4FAFF4BCB7633475(iParam0))
	{
		bVar0 = func_33(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_93(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_97367, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_29())
	{
		return unk_0x4A8C381C258A124D();
	}
	return Global_98991[func_94(iParam0)];
}

int func_94(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_95()
{
	if (((unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0) && unk_0xD9F5E1FEFD1329E4(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), 0)) && unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != iLocal_798) && unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0) != iLocal_799)
	{
		if (unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("firetruk")))
		{
			iLocal_798 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
			unk_0xEE0BCDB1B5E36BCB(iLocal_798, 1, 1);
			iLocal_973 = 0;
			return 1;
		}
		if (unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("towtruck")) || unk_0x2E6A27037F1DC473(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0), joaat("towtruck2")))
		{
			if (unk_0xFC8BFE4B41177C22(unk_0x314C37CF34534BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))))
			{
				if (unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(unk_0x314C37CF34534BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))), 0))
				{
					iLocal_799 = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
					unk_0xEE0BCDB1B5E36BCB(iLocal_799, 1, 1);
					if (unk_0xE93EDE86BBB66532(unk_0x314C37CF34534BCB(iLocal_799)) != iLocal_798)
					{
						iLocal_798 = unk_0xE93EDE86BBB66532(unk_0x314C37CF34534BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0)));
						iLocal_973 = 0;
						unk_0xEE0BCDB1B5E36BCB(iLocal_798, 1, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_96()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (iLocal_1002 < 8)
	{
		if (iLocal_1002 < 4)
		{
			if (unk_0xFC8BFE4B41177C22(Global_98010.f_9[iLocal_1002]))
			{
				if (!unk_0x4FAFF4BCB7633475(Global_98010.f_9[iLocal_1002]))
				{
					if (system::vdist2(unk_0xD1A6A821F5AC81DB(Global_98010.f_9[iLocal_1002], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) < 900f)
					{
						unk_0xEE0BCDB1B5E36BCB(Global_98010.f_9[iLocal_1002], 1, 1);
						iLocal_800[iLocal_1002] = Global_98010.f_9[iLocal_1002];
						bVar0 = true;
						Global_98010.f_9[iLocal_1002] = 0;
					}
					else if (system::vdist2(unk_0xD1A6A821F5AC81DB(Global_98010.f_9[iLocal_1002], 1), unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1)) > 2500f && unk_0xF6C26AE940C14749(Global_98010.f_9[iLocal_1002]))
					{
						unk_0xEE0BCDB1B5E36BCB(Global_98010.f_9[iLocal_1002], 1, 1);
						unk_0x734A9F4537A31459(&(Global_98010.f_9[iLocal_1002]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (unk_0x02E029D1D9614563(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), 30f, 1, 1, &iVar1, 0, 1, 21))
			{
				if ((unk_0xFC8BFE4B41177C22(iVar1) && !unk_0x4FAFF4BCB7633475(iVar1)) && !func_97(iVar1, &iLocal_800))
				{
					unk_0xEE0BCDB1B5E36BCB(iVar1, 1, 1);
					iLocal_800[iLocal_1002] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_800[iLocal_1002]))
			{
				unk_0x3CEA1FD137ACE2D9(iLocal_800[iLocal_1002], iLocal_801);
				unk_0xF165EAD0AA08F3B6(unk_0x259BE71D8A81D4FA(), 1, 0);
				unk_0xBE8796DB2B90A437(iLocal_800[iLocal_1002], 17, 0);
				unk_0x446468040E515438(unk_0x259BE71D8A81D4FA(), 0f);
			}
			iLocal_1002++;
		}
	}
}

int func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0xFC8BFE4B41177C22(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			if (unk_0xFC8BFE4B41177C22((*iParam1)[iVar0]))
			{
				if (iParam0 == (*iParam1)[iVar0])
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_98()
{
	if (bLocal_978)
	{
		if (((!unk_0xD9F5E1FEFD1329E4(iLocal_799, 0) || (unk_0xD9F5E1FEFD1329E4(iLocal_799, 0) && !unk_0x21478251925DBFD7(iLocal_798, iLocal_799))) || (unk_0xD9F5E1FEFD1329E4(iLocal_798, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_798, 0))) || (unk_0xFC8BFE4B41177C22(iLocal_799) && system::vdist(unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1), unk_0xD1A6A821F5AC81DB(iLocal_799, 1)) > 250f))
		{
			bLocal_978 = false;
		}
	}
	else if ((unk_0xD9F5E1FEFD1329E4(iLocal_799, 0) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iLocal_799, 0)) && unk_0x21478251925DBFD7(iLocal_798, iLocal_799))
	{
		bLocal_978 = true;
	}
}

void func_99(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_64167 = 0;
	if (!Global_64391[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_76261)
	{
		if (Global_76262[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_76262[iVar1 /*9*/].f_1 = 1;
			Global_76262[iVar1 /*9*/].f_2 = 0f;
			if (Global_76262[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_100()
{
	struct<3> Var0;
	int iVar1;
	
	if ((unk_0xFC8BFE4B41177C22(Global_98010[0]) && unk_0xD9F5E1FEFD1329E4(Global_98010[0], 0)) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_98010[0], 0))
	{
		unk_0xEE0BCDB1B5E36BCB(Global_98010[0], 1, 1);
		iLocal_798 = Global_98010[0];
		Global_98010[0] = 0;
	}
	if ((unk_0xFC8BFE4B41177C22(Global_98010[1]) && unk_0xD9F5E1FEFD1329E4(Global_98010[1], 0)) && unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), Global_98010[1], 0))
	{
		if (unk_0xFC8BFE4B41177C22(unk_0x314C37CF34534BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))) && unk_0xD9F5E1FEFD1329E4(unk_0xE93EDE86BBB66532(unk_0x314C37CF34534BCB(unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0))), 0))
		{
			unk_0xEE0BCDB1B5E36BCB(Global_98010[1], 1, 1);
			iLocal_799 = Global_98010[1];
			Global_98010[1] = 0;
			unk_0xEE0BCDB1B5E36BCB(Global_98010[0], 1, 1);
			iLocal_798 = Global_98010[0];
			Global_98010[0] = 0;
			bLocal_978 = true;
		}
	}
	unk_0xF2CB0224D3BE0B42("AHPREP1", 0);
	while (!unk_0xDCB78A15E5F495DC(0))
	{
		system::wait(0);
	}
	if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
	{
		unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
	}
	unk_0x06CD913C241C765E("FireMen", &iLocal_801);
	unk_0xD414C47AFF81382A(5, joaat("player"), iLocal_801);
	unk_0xD414C47AFF81382A(5, iLocal_801, joaat("player"));
	if (func_10(0))
	{
		unk_0xEC9DAA34BBB4658C(joaat("s_m_y_fireman_01"));
		while (!unk_0x6252BC0DD8A320DB(joaat("s_m_y_fireman_01")))
		{
			system::wait(0);
		}
		Var0 = { 202,0504f, -1655,773f, 28,8031f };
		uLocal_1003 = unk_0xA7B0B03284E7503C(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), 0, 1, 1, 1, 1);
		unk_0x2094BC4B6731BA68(Var0, 20f, 1, 0, 0, 0);
		iLocal_800[0] = unk_0xB1DBFEB95C0EFB88(21, joaat("s_m_y_fireman_01"), 215,7186f, -1644,622f, 28,7719f, 357,5736f, 1, 1);
		iLocal_800[1] = unk_0xB1DBFEB95C0EFB88(21, joaat("s_m_y_fireman_01"), 214,4446f, -1643,72f, 28,7776f, 279,1055f, 1, 1);
		iLocal_800[2] = unk_0xB1DBFEB95C0EFB88(21, joaat("s_m_y_fireman_01"), 217,0826f, -1644,117f, 28,7155f, 72,8262f, 1, 1);
		iVar1 = 0;
		while (iVar1 <= (iLocal_800 - 1))
		{
			if (!unk_0x4FAFF4BCB7633475(iLocal_800[iVar1]))
			{
				unk_0x21B9EFA4B4AA3A5B(iLocal_800[iVar1], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				unk_0xBE8796DB2B90A437(iLocal_800[iVar1], 17, 0);
				unk_0x3CEA1FD137ACE2D9(iLocal_800[iVar1], iLocal_801);
			}
			iVar1++;
		}
		unk_0xD414C47AFF81382A(255, joaat("player"), iLocal_801);
		unk_0xD414C47AFF81382A(255, iLocal_801, joaat("player"));
		iLocal_967 = -1;
		if (func_107())
		{
			func_106(354,3055f, -1722,206f, 28,259f, 109,6154f, 1, 0);
			func_103(0, -1, 1);
		}
	}
	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
	{
		unk_0x10B228D2FDB7AF16(500);
	}
	if (func_18())
	{
		iLocal_974 = 1;
	}
	if (!func_10(0))
	{
		unk_0x86A2BC11844DEEB3("AHP1_START");
	}
	iLocal_973 = 0;
	func_101(68);
}

void func_101(int iParam0)
{
	Global_97368 = 0;
	switch (iParam0)
	{
		case 72:
			func_102(2);
			func_102(4);
			break;
		
		case 73:
			func_102(0);
			func_102(1);
			func_102(7);
			break;
		
		case 92:
			func_102(10);
			func_102(9);
			func_102(13);
			func_102(6);
			break;
		
		case 68:
			func_102(11);
			break;
		
		case 78:
			func_102(14);
			break;
		
		case 79:
			func_102(3);
			break;
		
		default:
			break;
	}
}

void func_102(bool bParam0)
{
	unk_0x0B0C9A0F9AAEB7F0(&Global_97368, iParam0);
}

void func_103(int iParam0, int iParam1, int iParam2)
{
	if (func_107() && func_105())
	{
		while (Global_101528 != 6)
		{
			system::wait(0);
		}
		unk_0x98E393364463951A(0);
		if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				unk_0x5EF96FB2D3902DC7(unk_0x4A8C381C258A124D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x4FAFF4BCB7633475(unk_0x4A8C381C258A124D()))
			{
				if (unk_0xFC8BFE4B41177C22(iParam0))
				{
					if (unk_0xD9F5E1FEFD1329E4(iParam0, 0))
					{
						if (!unk_0xCECDBB848D53DEB2(unk_0x4A8C381C258A124D(), iParam0, 0))
						{
							unk_0x73CAFD2038E812B3(unk_0x4A8C381C258A124D(), iParam0, iParam1);
							unk_0xD815D4BD1AE9E85A(0f, 1065353216);
							unk_0x64BB72494B9DF6DC(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
			{
				unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 1, 0);
			}
		}
		unk_0x7919995BD2B8745C();
		func_104(0);
	}
}

void func_104(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 13);
	}
	else
	{
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 13);
	}
}

var func_105()
{
	return BitTest(Global_101533.f_20, 13);
}

void func_106(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_107())
	{
		unk_0xAECC5FA98C879D67(0);
		unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 2);
		unk_0x98E393364463951A(1);
		if (unk_0x75EAB09F5E974116(unk_0x259BE71D8A81D4FA()))
		{
			unk_0x4686BC3BFDBB5348(unk_0x259BE71D8A81D4FA(), 0, 0);
		}
		Global_101529 = { Param0 };
		Global_101532 = fParam1;
		Global_101528 = 1;
		if (iParam2 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 14);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(Global_101533.f_20), 24);
		}
		else
		{
			unk_0x8744D2E3FC95740E(&(Global_101533.f_20), 24);
		}
		func_104(1);
	}
}

int func_107()
{
	if (Global_101533 == 10 || Global_101533 == 9)
	{
		return 1;
	}
	return 0;
}

void func_108()
{
	func_109();
	if (unk_0xFC8BFE4B41177C22(iLocal_798))
	{
		unk_0x68298CA6191CDFDB(&iLocal_798);
	}
	unk_0xD7B6A43ACC36D868(uLocal_1003, 0);
	unk_0xBBC29EBE6E1A48FA();
}

void func_109()
{
	Global_97368 = 0;
}

void func_110()
{
	int iVar0;
	
	if (unk_0xA6E4F7A73ABC4A76("buddyDeathResponse"))
	{
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_113969.f_9088 || func_10(0))
	{
		if (!func_111())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_23(iVar0))
				{
					return;
				}
				unk_0x0B0C9A0F9AAEB7F0(&(Global_92265[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_28();
		}
	}
}

int func_111()
{
	if (((Global_101533 == 13 || Global_101533 == 10) || Global_101533 == 11) || Global_101533 == 12)
	{
		return 0;
	}
	return 1;
}

void func_112()
{
	if (iLocal_974 == 1)
	{
		func_16(354,3055f, -1722,206f, 28,259f, 109,6154f);
	}
}

