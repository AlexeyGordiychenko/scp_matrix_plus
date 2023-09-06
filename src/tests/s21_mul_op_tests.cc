#include "s21_matrix_oop_tests.h"

TEST(MulMatrixOP1, 0) {
  S21Matrix m1({2, 3, -78791348.16616526, -24101119.63928908,
                -396968.86657290545, 8699719.512965266, 38934.29053643412,
                -5007388132.567821});
  S21Matrix m2({3, 2, -0.49379866286158003, -6010397.194628217,
                -9.695982920356268, 1.5024930289959937, -3891214630.279168,
                77689574.52496065});
  S21Matrix m1_res({2, 2, 1544691333964935.5, 442726919423425.7,
                    1.9484821960929513E+19, -3.890741422702275E+17});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 1) {
  S21Matrix m1({3, 3, 873236539.9102322, 8.17312452788509, -2053321143.8750188,
                2365.872129264701, -49.0415755307926, -9198.922670644495,
                61642053.621906444, 338367.22666011454, 59221.28415334934});
  S21Matrix m2({3, 3, -0.17370775208379763, -2414.278230389539,
                5520848.350197126, 358333.391434153, -339832855.36901265,
                974871596.0132282, -364832268.27392626, 5034800266.040707,
                938.9997108237292});
  S21Matrix m1_res({3, 3, 7.491178102659767E+17, -1.0338063952462418E+19,
                    4819086410481878.0, 3356046249962.623, -46298078082677.945,
                    -34756255552.8063, -21484597859584.445, 183030215343219.06,
                    670181083942749.2});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 2) {
  S21Matrix m1({2, 7, -9113873.630717002, 419108.9130775677, 698691.9824463313,
                207345549.49361694, -76610470.34927137, -27753.99355141661,
                -3683531358.8736396, 840.5389676118813, 41.699800696841805,
                62409.082564397664, -82093.91403742849, 93310439.331513,
                -0.4789622722395096, -2649040.999831298});
  S21Matrix m2({7, 2, -4282766371.326583, 2095787.312773736,
                -176168.91683415216, -14114.209407926137, -2.358223140893526,
                -26185.350733048952, 50571637.78346795, -5.148871774389605,
                -9653.485029871144, -575461020.7649333, 4747374688.02456,
                -1976578733.0994778, -948671813.1172111, 79704781.41426684});
  S21Matrix m1_res({2, 2, 3.5438496755358607E+18, -2.4947299038894176E+17,
                    2504416020386613.0, -53907660825657880.0});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 3) {
  S21Matrix m1({4, 4, 3392192.864062953, -0.7784968026445095, 658.9932903282834,
                -0.4937504086599158, -89.94037611025256, 877627328.3962175,
                9502881.082813596, -0.4768066440648491, 4276260727.1412325,
                -8.238646659834071, 7392787.369738042, 8.5577339216536,
                -0.6823390123798967, -394484174.4793969, -2.8375669531521606,
                81.43021650640017});
  S21Matrix m2({4, 4, 2.1065994856769246, -741728263.6289865,
                30345702.008647226, 96393713.53392746, 4680985340.994636,
                1089844.1652583813, -906157513.8076969, -0.41593317175380473,
                -84115388.74907722, -9.092352814887828, 8.170884373789258,
                65.1127359588298, -2305.8449421166915, 35654.282512654725,
                -0.6939197041272896, -0.07361824732676392});
  S21Matrix m1_res(
      {4, 4, -59068461789.93257, -2516085323828089.0, 102939179254826.03,
       326986067233226.44, 4.107361320542463E+18, 956543648022373.4,
       -7.952686006008644E+17, -8415962581.394534, -621876740180112.1,
       -3.171823444043185E+18, 1.2976614126302613E+17, 4.122046520098009E+17,
       -1.8465746377539315E+18, -429925766829647.3, 3.574647987620259E+17,
       98305671.84902851});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 4) {
  S21Matrix m1({4, 4, 6754.872282434401, 9.470825134433491, -0.9427412901759262,
                -36480191.53014925, -841961411.6609871, -0.9491135486463385,
                604899556.0424994, -4649281434.7437315, -31752.424503737075,
                37507.06175622607, -1.7218734406062508, 51.28788196237258,
                0.35980184513149194, -95073.91324739602, -364214.39665937173,
                3418364423.7423105});
  S21Matrix m2({1, 4, -4114.000712168494, 8285.574124849749, 0.4932669144464408,
                -6.01038179959695});

  EXPECT_THROW(m1.MulMatrix(m2), std::invalid_argument);
}

TEST(MulMatrixOP1, 5) {
  S21Matrix m1({7,
                5,
                -53620.48991969465,
                401.0772990453677,
                -270834.6447378506,
                915.2380653899128,
                -4038823.559665806,
                -8723548517.011211,
                0.9326867061900239,
                7511664.705847007,
                -0.3952298343885251,
                -71395.98572836892,
                4477060861.608901,
                -92.95596662736796,
                -6718753454.125278,
                -363468954.8956891,
                80.16603264492487,
                939.0584242313604,
                514.6680374302892,
                424260993.6782937,
                -321839.71108323836,
                -4698.672049471615,
                -9523306535.093676,
                2705792632.841919,
                -415073761.66939235,
                8005096.675321388,
                -8849744039.815704,
                -18589681.937658876,
                -3.0987159488502733,
                -545295.4429566878,
                490910.80276335875,
                -9876.09136935172,
                -1816377.5551941153,
                -0.8376638477811146,
                247877861.5921451,
                294.2980824668057,
                -0.37539160087261203});
  S21Matrix m2({5,
                7,
                -3465051.930066425,
                -563170019.0880835,
                -21.229688691296445,
                3.211930213900094,
                0.7317211183350122,
                -296916.20421663986,
                -44629057.59133007,
                692194040.1800007,
                -155.51321060724322,
                42083544.88431843,
                0.6109154973120251,
                -1262403.5357354025,
                9374.91500377563,
                -386.99619173148426,
                579.2503495691675,
                5863115.1176901795,
                5.53639656487716,
                -842421.3439441489,
                -50328.21926210928,
                0.9123519445526023,
                2.5842662112435333,
                730416.0244752,
                -0.008617128631760784,
                518.8627838174094,
                45925.93001195514,
                -8294.366562015388,
                4635127023.724667,
                75286.09142607846,
                -0.3059998699762041,
                400303749.92341125,
                -5647161759.008164,
                -801642.6634667523,
                -384.45088885772316,
                -3810415.0840663207,
                -942330528.2664374});
  S21Matrix m1_res({7,
                    7,
                    463933957504.05536,
                    -1588146698643993.0,
                    22807906836394264.0,
                    3465892022228.5503,
                    14669402735.92627,
                    19647763208967.555,
                    3808299838537086.5,
                    30227553622365548.0,
                    4.912856446515106E+18,
                    403369959409349.7,
                    -6298772055802.281,
                    -384405638914.67334,
                    2590433136233167.5,
                    3.893910278027849E+17,
                    -15782688112450932.0,
                    -2.560739243745802E+18,
                    -777457276173.6497,
                    5643342980412033.0,
                    341161035030190.2,
                    -1.6860540934752512E+18,
                    -1.9983446409551373E+17,
                    363672710021.8969,
                    2485081300212434.0,
                    26558002037874.0,
                    -357417530606287.4,
                    -21350278769318.0,
                    -1491749925180156.0,
                    4362658972295.6714,
                    1.9059378954334577E+18,
                    1.8182209521162225E+18,
                    5.00898056684019E+19,
                    7444338085542665.0,
                    -3391583337027623.5,
                    73678828331999340.0,
                    8.764399726345209E+18,
                    64770321622066.31,
                    10462000965304058.0,
                    55772401454056.21,
                    489771442499.00836,
                    23366060707.599194,
                    2280991137406312.0,
                    838983485545164.5,
                    6437061025444.824,
                    2476265669800918.5,
                    3495709200.7574215,
                    -208817593313692.0,
                    -12475254080916.123,
                    1903648498578.6045,
                    81064235000581.78});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 6) {
  S21Matrix m1({7,
                7,
                9123176.32738067,
                64.94089685474147,
                584580133.194666,
                7655.591683774785,
                786.4447969275996,
                -9177874100.73932,
                20.45415555402792,
                -99518857.12396622,
                -19.891728779684925,
                2512795.2258550976,
                -4306085.911227537,
                -6903.340947596515,
                -0.6475318615943203,
                -0.5293370139763465,
                22602.637503680267,
                455496.45824881736,
                -862645248.6064237,
                -769.9149100345835,
                -368691.7060000356,
                -17.915516607661175,
                3114934.1980670653,
                1140.2547158586628,
                -0.7339892257028368,
                -0.3937682789419451,
                5953832311.372742,
                14.125968293698909,
                -153857892.46405092,
                -806.5778411813286,
                -3429702.548598196,
                2896088511.575826,
                -0.025647001263183533,
                -14930676.051882109,
                73.2531072635404,
                204504.20034156524,
                43343.12058928105,
                -0.16826790414824133,
                -6.093105803565785,
                -16426.995526580646,
                504448.8319466365,
                -5720.250229065581,
                -990.0775673925388,
                -92.61974831277912,
                -289.0898453147058,
                -8905.887234386792,
                -5601.683956665607,
                -43.96587702070762,
                -536119.2557603113,
                6083.998577277865,
                247467.29831008217});
  S21Matrix m2({1, 8, 0.07746175392417065, 32.74388202127065, 83.71318223288428,
                -187398101.70059633, -94563509.50854844, -831939.7403765987,
                59581198.21502919, 8900323057.320547});

  EXPECT_THROW(m1.MulMatrix(m2), std::invalid_argument);
}

TEST(MulMatrixOP1, 7) {
  S21Matrix m1({2, 2, 79076.54127640254, 804766.1843307159, -159.12514531554623,
                0.945394707021767});
  S21Matrix m2({2, 2, -927.003777364694, 502.7711241916579, -25910.008660146956,
                -0.8364634634275503});
  S21Matrix m1_res({2, 2, -20924803057.866432, 39084244.0449303,
                    123014.42573502612, -80004.31898558905});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 8) {
  S21Matrix m1({8,
                8,
                0.15742238809748232,
                82.16493928300771,
                -43691.91231463444,
                18.58565751880671,
                -4538.932798675281,
                -71390.74950039954,
                306.04576180125895,
                80.74263055487609,
                -923173.8400986644,
                712.744512683429,
                9045702.2144031,
                -102687.57347865542,
                2091.2723010440427,
                -77.54281403257247,
                -0.34967146040205044,
                -5026020.55122654,
                -0.3171583983913995,
                -0.21885238539087604,
                7856902.497682452,
                -419341.3795315437,
                1681650629.5353518,
                10.832142556281843,
                670593.3006901573,
                -1773.3397346347933,
                -236183838.1242186,
                796478223.705121,
                64103.10943154368,
                -829.2492144616174,
                -35624.89426615196,
                -7545537.679084454,
                823.7567325779397,
                -0.3736843049835594,
                -20.70014848487847,
                -0.23159996591598786,
                -0.4986363023170792,
                -690550.0498442075,
                -782495286.2155887,
                0.4835126271443275,
                -119.44817677010889,
                -0.4055486278354563,
                -0.29750569752867806,
                100487307.20237952,
                -83.2851569304349,
                4.066685426714779,
                -8109878437.230047,
                -1.0938636548574643,
                -8.057927166390357,
                9929350113.97492,
                -0.6319187610931869,
                -548.79895617066,
                0.671731034934406,
                15289.051274856913,
                89153937.05775589,
                0.9288294879783983,
                29.135633160707965,
                -2401538.956483185,
                4399340.723715443,
                -5550496231.244671,
                -81.87747515475886,
                -82.58845234989775,
                -14338.819994369356,
                4278307.848517894,
                -462638.5672763955,
                0.07323076101827841});
  S21Matrix m2({8,
                8,
                -0.5104653999510769,
                -63.66043106182262,
                0.9418629460868178,
                -2659577.4869964593,
                -24.479811815938703,
                49390.85588174744,
                -7881452001.654061,
                -0.18853005625213826,
                -8661282986.073341,
                -4765289.801602781,
                0.2842273802146579,
                -4343828.686156032,
                6162.833627432237,
                -29616.118342071008,
                -958861.3141800724,
                5560948.9984609615,
                -16.48382814365359,
                -0.3219854116665326,
                -66212.75591382456,
                456.52043687045597,
                -6046963588.49052,
                -61440722.0462605,
                8485.351985921252,
                6665.079435422522,
                682422.6712833033,
                -0.26991792157245886,
                4.121632512964876,
                2222962.1508101895,
                3655075.4490130777,
                17439.200346518992,
                -6035345724.399443,
                7071007.629835748,
                5348963551.663025,
                180.461927364461,
                -0.9168611327737686,
                0.34356048912951365,
                -699988843.4369076,
                990157.5563957558,
                -0.4185984507042976,
                -480.7348819616615,
                -37098.05851607635,
                8107235442.107763,
                -0.49434382242944463,
                -1843.1534381864979,
                -766.7932824493797,
                -69276.32403011725,
                68246.55746598533,
                -0.42614791059103985,
                0.5557717573038207,
                -126940.454381664,
                -87.90433341100339,
                -2095.780114230744,
                -98.75368675940703,
                449554228.0458792,
                -750.6284211375258,
                -99781.72464768194,
                -1722270096.2144587,
                -9047.367363269714,
                -68.72839322037943,
                -5.220484102449751,
                37795631.60924394,
                79602408.51698002,
                -9421.927034015798,
                1.6464494166412824});
  S21Matrix m1_res({8,
                    8,
                    -25126638650463.438,
                    -578782046513171.2,
                    2892969026.689276,
                    -205019415.1173322,
                    267383780067086.7,
                    2828923442822.7114,
                    -118734273139.79576,
                    268799101.9901628,
                    8661107533642478.0,
                    -586525723500.6366,
                    -598596736864.065,
                    2228041663010.5137,
                    -54890832715095180.0,
                    -955903305981170.0,
                    7895828739514013.0,
                    -661859827331.0173,
                    8.99509069378371E+18,
                    306181895861.9904,
                    -521829561973.96826,
                    -929419062340.9595,
                    -1.2246486823703142E+18,
                    1483684893320011.5,
                    2530938180626016.5,
                    -3788141507831.671,
                    -6.898713563894051E+18,
                    -64968885133702830.0,
                    -4236828475.724821,
                    -2831603645641490.5,
                    -357775054895986.7,
                    -38334724600027.05,
                    1.8607123619782318E+18,
                    4429169326707281.5,
                    -4.185539233857921E+18,
                    -137274198970.86713,
                    714636845.139777,
                    -1535279149607.168,
                    5.477354493802665E+17,
                    -774859364259100.8,
                    4167871765933406.0,
                    -4506701264668.377,
                    -6.135081594948953E+19,
                    -570158009842423.9,
                    -674958570216.2847,
                    -436554260056280.5,
                    6.05211160964131E+18,
                    7.823671521154545E+17,
                    -189925808779944.28,
                    562719868975555.2,
                    4.810220222754634E+17,
                    47958219326.37369,
                    83327954.51454863,
                    36415656090.43061,
                    -62497477153282780.0,
                    -102878501061247.17,
                    -92246613730022.02,
                    62190891064.63648,
                    4.807434171521625E+19,
                    61135030551234770.0,
                    -1529472312.3201177,
                    24098697264512700.0,
                    -23678302372472.64,
                    -43685231662291.016,
                    -29350245866017076.0,
                    -30865980875515984.0});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP1, 9) {
  S21Matrix m1({2, 6, 43299598.01106588, -4851.251872998038, -94885079.93874748,
                -6815.782927765259, 6700353155.156154, 1985.185441397992,
                -7727.579143756054, -802122977.9936627, -7.692044363871126,
                69021.98685178891, 0.9008936048438944, 6.120874692313917});
  S21Matrix m2({6, 2, 6813.498166700394, -0.9860743621022271,
                -9809.298919642646, 861.2130115051868, -5932555.686412724,
                -4394386.528799213, -850429.7401934357, -93276259.77322239,
                -70661478.67854345, 833576.3824318406, -0.9876372613320759,
                3592158.383370206});
  S21Matrix m1_res({2, 2, -4.728936497255699E+17, 6002860696122574.0,
                    7809495034262.683, -7128854973575.763});

  EXPECT_TRUE(m1 * m2 == m1_res);
}

TEST(MulMatrixOP2, 0) {
  S21Matrix m1({2, 5, 18614254.79874027, -2130.760476522251,
                -13.911655330818851, -37.02282931589175, 0.6164734218093136,
                -89.7322829843895, 984746.401842623, 235819.83551534556,
                0.08626383086089628, 92412.76530547714});
  S21Matrix m2({5, 2, -58.41963966710356, 59076662.82018362,
                -0.8098587415794504, -92502.04518269488, 0.9501345927383923,
                -9.348351550518695, -9742751031.42612, 0.15803853925413136,
                869098.3498295246, 0.796156269448949});
  S21Matrix m1_res({2, 2, 359617307934.13416, 1099668251493990.4,
                    79474766600.3078, -96394270934.40547});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 1) {
  S21Matrix m1({5,
                5,
                -201357.5222632563,
                81634513.98667815,
                0.8555765283528839,
                -17601924.703682635,
                -58.022526494374624,
                -95521944.40466522,
                593.9198636826643,
                -2826.4686812475447,
                838431634.5414523,
                -34.3213876972865,
                -1.9262688356140756,
                0.7750697713029784,
                -38979165.059995554,
                26914.46030861524,
                -992331.0287695405,
                43901336.84757144,
                1.0775693947428044,
                0.6867360269227066,
                4.870321654613665,
                -0.712003595343182,
                -0.7526236966673368,
                0.51704698111851,
                -43411.866445475214,
                16406715.410685202,
                3676183.25560479});
  S21Matrix m2({2, 2, 7766941437.870148, -40183031.81473335, 0.3962684404713521,
                -6802953.884020959});

  EXPECT_THROW(m1.MulMatrix(m2), std::invalid_argument);
}

TEST(MulMatrixOP2, 2) {
  S21Matrix m1({3, 3, 8787419392.513191, -26482.188146445762,
                -7884811960.907606, 53530089.902701974, 1743846.1183426923,
                7.133873691681803, -2.5543181923258915, -690004.3583639611,
                0.06239858899702655});
  S21Matrix m2({3, 3, -51332.230922151, 0.27129082272491745, -7922836.682304213,
                0.9563933230869445, -0.014027767716615958, -3.618342233039459,
                6092820.16810101, 874.3181260252795, 82213.80921949745});
  S21Matrix m1_res({3, 3, -48491819178593540.0, -6891450071114.338,
                    -70269529131984760.0, -2747773802956.712,
                    14503997.137038594, -424110165611498.7, -148613.32844093058,
                    9733.084116896887, 22739247.808977544});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 3) {
  S21Matrix m1({2, 8, -0.34696485253819154, 965247.5242804139,
                -4.576707364828648, 9693.915673302708, 587728.3953030132,
                -4.641908700693126, 819.13862121873, 3245120295.252041,
                -5125725.716806046, -3187988.731186322, 0.6989928021688304,
                -0.042333223095421646, 482.81918212021037, 3076210.008676632,
                9092.665462396531, 4497787.856106202});
  S21Matrix m2({8, 2, 54000.136394926645, -0.6233246539177709,
                -96886986.00856397, -2908.9653913051116, -463682964.84741557,
                145619734.54252908, -18.072536069770607, 5534480.627884968,
                -45992068.79527757, -32.93822992794965, 0.5681657162404676,
                -287908.420497993, 0.5130744969679462, 960009.0661649371,
                2606134681.945651, 268.43871618133});
  S21Matrix m1_res({2, 2, 8.457099999895833E+18, 922060742074.5754,
                    12030416225326794.0, -866351862212.165});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 4) {
  S21Matrix m1({9,
                6,
                374402.7441079911,
                -77.15084675476618,
                7973780.767524654,
                -0.5853012098848227,
                0.40038011512022575,
                88.51326392246519,
                3709.0440387052295,
                96210991.30910574,
                -668.659678426998,
                -0.4393583808025032,
                -198.81685775136026,
                2371.0394085428898,
                -0.3856819178787897,
                -6905.1927025115165,
                -2196891.5470605786,
                910411.5434707714,
                -41154.5839074998,
                9270227518.41339,
                -872.711961110548,
                -9420857.264843473,
                9363.92891264153,
                -47.326659509014156,
                9122.32828022705,
                333267248.10014755,
                4350.747292451685,
                -803575310.3078417,
                -360894877.24961,
                47.5123894334138,
                -0.4572380314747986,
                -0.7609098704189636,
                -0.8329763576143763,
                -6186.097430122829,
                364094049.38474363,
                -708327601.7025865,
                6545.2692343136,
                -0.28900146170005725,
                -0.9428461856747036,
                -119.71731307480083,
                1595.2408278373432,
                0.48231478783809023,
                35793.12199780116,
                40456333.85913062,
                -5145854970.056885,
                4653.202694446678,
                38602479.52971945,
                -127377550.18008368,
                -6.86900699953259,
                608002.3698551852,
                77.9644228578399,
                -6.772184571156189,
                -9.139408101505492,
                -0.6580651012619311,
                66.16691860961964,
                46.94869032606566});
  S21Matrix m2({1, 1, -0.23950776936845675});

  EXPECT_THROW(m1.MulMatrix(m2), std::invalid_argument);
}

TEST(MulMatrixOP2, 5) {
  S21Matrix m1({3, 3, 770.2887832297165, 65324.71019851768, -33531799.0586405,
                1.5923704018728524, 0.9461936510869183, 242.46528143209966,
                -3.759039129048949, 2237.4293603514916, -48563.96156538445});
  S21Matrix m2({3, 3, -621.4754973782797, -0.1888929853602016,
                -0.20026603395851383, -0.4065696699053737, 2218.2366700893995,
                -1157366.7862357663, 6274.946716383921, 71718.5419845636,
                81.73837329167768});
  S21Matrix m1_res({3, 3, -210410757672.11218, -2404706833082.936,
                    -78345484767.10056, 1520466.7176783022, 17391355.04685332,
                    -1075274.7063288891, -304734844.67950815,
                    -3477973367.8998356, -2593495966.685698});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 6) {
  S21Matrix m1({4, 4, -165794028.60165027, -864323823.6433198,
                -7.750810006722344, -909154159.037635, -218.67409315199149,
                -807.5211786540668, 0.49058228588834996, -0.04234039073688434,
                375783.67703709536, 12226.957081455303, 70353.74372343958,
                2892170668.333197, 6.797358538843211, 5415460191.696811,
                -2229502.6911496874, 812.2965669563206});
  S21Matrix m2({4, 4, -74.00516555072326, -14675.135846440713,
                86648.25474731052, 7048631.555668097, 23643183.518106036,
                47960831.855125554, -10496.478145907706, -74958783.29615949,
                0.5601647336730443, 551941.8417018863, 82837629.83988273,
                -350.88222264428305, -0.6335455200717083, -893240.230004037,
                -0.6423154902177574, -7091075.594586471});
  S21Matrix m1_res({4, 4, -20435353935865056.0, -40639163458394296.0,
                    -5293465194930.138, 70066922041315940.0,
                    -19092355238.361294, -38725869803.82666, 30167073.705647726,
                    58989751991.16608, 287224097851.10425, -2582783461461819.0,
                    5858512354181.632, -20506868623424424.0,
                    1.2803871914603549E+17, 2.5972874439059958E+17,
                    -241529977620201.4, -4.0593631188823104E+17});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 7) {
  S21Matrix m1({2, 2, 1.0515612681300057, 9763197.158853553, 717.9111464754026,
                0.2008142952582832});
  S21Matrix m2({2, 2, 0.851144556441612, 56874036.60789438, -9172342486.039223,
                72.88107685725875});
  S21Matrix m1_res({2, 2, -89551388099729870.0, 771358856.5660458,
                    -1841936881.1554115, 40830504840.493034});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 8) {
  S21Matrix m1({1, 1, 935.5438309991249});
  S21Matrix m2({1, 1, -27.77838716460105});
  S21Matrix m1_res({1, 1, -25987.898746947783});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}

TEST(MulMatrixOP2, 9) {
  S21Matrix m1({8,
                7,
                -798019706.5965154,
                -5452380349.276917,
                -994.526675836574,
                524264722.2970046,
                -89615876.64465114,
                -1286054.3334197304,
                0.7156459683425795,
                22071328.16293349,
                7.459244726575988,
                -7.377829376265945,
                -771.6716760026876,
                -86.85314103925818,
                -73.79937447313996,
                4904524420.128312,
                -26.325303365721453,
                48.08145222525254,
                -32356902.82399376,
                6299141.761299235,
                982507434.2173412,
                759046.931418893,
                -485101.9429568466,
                119734553.73586905,
                7473576184.16301,
                58719743.09013556,
                9445885.206982989,
                -4134.130615838526,
                84918.74161347364,
                -159.87283851953137,
                -598720167.2303121,
                2523466.893436641,
                -6844.578890125331,
                0.5789843872865653,
                21763471.284852743,
                -2009.1870489142116,
                -0.10143766953695044,
                9882650173.665236,
                3819003592.6496844,
                -0.640937612267023,
                -90378.93928767994,
                -69368577.70048544,
                -83269.51462587966,
                -3461072990.4338856,
                479407645.0994178,
                -104818637.1362606,
                7398958994.555892,
                -0.31613255048366584,
                54.92582390375903,
                -427478.1866406818,
                84.03965899903383,
                0.8104191759012332,
                0.7634119302002347,
                -8.143335619997547,
                -0.9940782950144111,
                -0.26850854130613655,
                3501788493.8751297,
                -299974.4991805171});
  S21Matrix m2({7,
                8,
                32.79190190327081,
                -11304.140037602172,
                -0.5729179289420077,
                -9858.718927036081,
                -49103.57861041349,
                0.3741212654776884,
                -1.1662269663861424,
                21416622.27268275,
                -0.9337451761864107,
                -0.3289681502940046,
                -9120890.42997246,
                -0.8831691168670478,
                3046352.4234763286,
                764.674726404665,
                0.7063292759187473,
                66.32025590475186,
                40033577.959931485,
                -533.6690593380392,
                -1377.233922286174,
                -511801525.07923204,
                -1237568741.6301196,
                -0.5530689272897817,
                -0.7496634918273536,
                -550122.5723548857,
                -50.67911242085504,
                86356.84869877093,
                1119596.5376163009,
                681.019651158447,
                0.5353533916777597,
                -502956.1040054097,
                -567600.9056180005,
                -30.32539548547364,
                -9.96743801283227,
                0.9800727201185255,
                729.7820179614164,
                -29373.068070623176,
                -784059.2449478802,
                -4858405850.014999,
                7571945.083559544,
                -0.5530667495269196,
                -28765543.975655906,
                0.5769226406309984,
                892779.486474794,
                5174443.14485156,
                -4518843462.83856,
                520730.50192073657,
                5406418.631434076,
                -3442064.172590329,
                -4.783739059267465,
                42171875.36626137,
                -37201.18031558915,
                83.2744374900377,
                0.17111840561251046,
                -0.30871527242443275,
                -0.6322982696488615,
                6695.498295205213});
  S21Matrix m1_res({8,
                    8,
                    36907484541664.47,
                    54296511615967.84,
                    50316315611728040.0,
                    4715980422708.4,
                    -10687713017538996.0,
                    4.351217779186757E+17,
                    -983095496339948.8,
                    -17086836845904784.0,
                    -20910645997.058033,
                    2.068327430124168E+17,
                    -182455107896144.22,
                    194222630809.87253,
                    -740232730085.7897,
                    420811657380.45984,
                    -3745498456.870509,
                    505531791320570.2,
                    -1317207099628766.8,
                    -19895453104187.52,
                    8509345936950.846,
                    16535384849308482.0,
                    35843533360934932.0,
                    -4.773422638999585E+18,
                    7440020687550108.0,
                    15183028155741.066,
                    2348315148230773.0,
                    -578316854198.2471,
                    -68155099038209230.0,
                    -30053595134082244.0,
                    -50292182293267096.0,
                    21093505668188.44,
                    -4928594992978.839,
                    2532209720441201.0,
                    -236070079536.07196,
                    6768036537115.646,
                    -23001823113581.277,
                    8756021183245.761,
                    37572660066216.69,
                    -1.0573577554785701E+17,
                    164781646592736.78,
                    -12822552832181318.0,
                    2733025022007.1006,
                    -1.4607166277682198E+17,
                    -34704189134975612.0,
                    -96114900980169.05,
                    11579428537429908.0,
                    3.3702363086424454E+17,
                    -525660591068850.4,
                    2.116303521519112E+17,
                    2.9621911419202746E+17,
                    -9364308323856.186,
                    945467285164553.6,
                    -3.7868054356282373E+18,
                    -9.155131520439501E+18,
                    -573517656279.2292,
                    -2316889822111.0073,
                    6198422551211801.0,
                    -1.007308512385827E+17,
                    -12648467022093.852,
                    3126336084645670.0,
                    18119809609642830.0,
                    -1.5824034033710535E+19,
                    1823489385152497.5,
                    18932134555348756.0,
                    -12053382701399024.0});

  m1 *= m2;
  EXPECT_TRUE(m1 == m1_res);
}
