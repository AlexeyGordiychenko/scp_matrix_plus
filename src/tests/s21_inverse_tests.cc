#include "s21_matrix_oop_tests.h"

TEST(Inverse, 0) {
  S21Matrix m1({9,
                9,
                0.8786047244629052,
                6.907065449926161,
                4501219.907889802,
                -0.7458569495519246,
                -0.8595903108891605,
                -110638715.35860525,
                -319190340.7710447,
                0.4763265490919204,
                0.47524851128990075,
                -57743133.02805856,
                0.793376506927722,
                -9.422348212209956,
                0.6722286644367272,
                81787182.89046328,
                -393605338.04644126,
                713565.6996563361,
                64374599.7149289,
                -372549154.46092975,
                -2288196.2031415347,
                -633730121.5274838,
                -35.01523312117835,
                399393184.45998573,
                5768881.699108178,
                963524668.6872226,
                1390.306493267821,
                -0.20988470306434426,
                480.9660085652092,
                0.5091041363839698,
                -70.9438561493045,
                -8838028.493320033,
                231.33690670320706,
                -36.07850489391539,
                -667269472.0092559,
                25825291.263566554,
                -3250497963.7494645,
                -3.902394714884748,
                804162600.8172424,
                474305966.5404515,
                -0.9951239645573237,
                0.39074420267275467,
                -89.65210637848918,
                -0.016221446300363707,
                -9672679.960569533,
                710562963.2492913,
                541308.8740099239,
                1280624408.467882,
                -0.5149602093311066,
                6976997981.069158,
                -36751325.342315845,
                569423.3134178763,
                695966.421248421,
                -0.899034917223402,
                5198138.127418257,
                -13788.0568395099,
                -3597.082546638659,
                136649605.43012962,
                61.70776113640309,
                -1.335932470857073,
                -7298124226.376802,
                -2928516564.1058574,
                -5808849291.418152,
                -17987.03357224132,
                5.024652194913498,
                -38.07616889779919,
                -0.9181677370684338,
                5657969.332082305,
                19514.11606082002,
                -3.155318149032893,
                13.422736202345542,
                -408294.12429361366,
                2488133430.959314,
                -9839911142.317345,
                87286657.2852733,
                -13.616949043925198,
                407.96113161346614,
                45187491.4791442,
                -52698002.79171745,
                -0.4070725426554972,
                -202770511.37113267,
                905524.9189637535,
                15721518.924592026});
  S21Matrix m1_inv({9,
                    9,
                    1.637165311926361E-08,
                    9.578589197467262E-10,
                    3.745876226290829E-09,
                    1.0198403949412512E-09,
                    4.932105487098217E-09,
                    -9.196272919086776E-12,
                    2.52814805857298E-10,
                    -8.890389056109732E-11,
                    -3.3115666568661124E-08,
                    -2.8396947004775855E-08,
                    -2.4353964045368803E-09,
                    -6.526653823605255E-09,
                    -1.3083744845607875E-09,
                    -6.482669502387261E-09,
                    1.6510310129190155E-11,
                    -4.4908586010172327E-10,
                    1.8403816911546476E-10,
                    5.7699696058219866E-08,
                    -3.2173019154064373E-09,
                    -1.6251722619923517E-10,
                    -7.216254622784477E-10,
                    -1.9622842770646085E-10,
                    -9.499786638053833E-10,
                    1.45141448677078E-10,
                    -4.928771348391E-11,
                    1.647971355749095E-11,
                    6.496181668461454E-09,
                    -4.0249454413101606E-08,
                    2.556810285177466E-09,
                    -6.462774851847972E-09,
                    -1.7578126380496867E-09,
                    -8.476919810690417E-09,
                    2.3711814196288126E-11,
                    -5.488505963473483E-10,
                    2.9383555319537056E-11,
                    7.92710406345865E-08,
                    2.2447495225023343E-09,
                    2.8987013472603694E-10,
                    -4.304131337846049E-11,
                    -6.064655964297429E-12,
                    -1.8169023160530995E-11,
                    -1.4474970066733332E-12,
                    -1.3654566816296018E-10,
                    -1.0369839832552331E-11,
                    3.7925129907625573E-10,
                    -1.967907824366988E-09,
                    -2.6611030875444128E-09,
                    -5.668039528435796E-10,
                    -1.29451157912999E-10,
                    -7.381740251487922E-10,
                    1.0171552589128355E-12,
                    -6.644965104476685E-11,
                    1.0871692241918177E-10,
                    5.010522138676206E-09,
                    -2.496175608903591E-09,
                    9.201076785522865E-10,
                    1.8629081726590172E-10,
                    4.21035156750973E-11,
                    2.4247140054786315E-10,
                    1.6942145397533528E-12,
                    2.233791545368604E-11,
                    -3.745138613010872E-11,
                    -1.6451521678882997E-09,
                    3.928898290038908E-10,
                    5.540295692181478E-10,
                    1.1979663146790778E-10,
                    -2.802031901530062E-10,
                    1.5604296098797934E-10,
                    -5.89978208588335E-13,
                    1.39523923394148E-11,
                    -2.2660014215261137E-11,
                    -1.059300531054486E-09,
                    9.75203962002755E-11,
                    1.3996611391857625E-10,
                    2.985644319290752E-11,
                    -7.097063188208646E-11,
                    3.888410589085395E-11,
                    -6.57493039385885E-14,
                    3.497664206881525E-12,
                    -1.0734568764298669E-10,
                    -2.638952675779346E-10});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}

TEST(Inverse, 1) {
  S21Matrix m1({5,
                5,
                23.1181779447437,
                -1763370397.1978297,
                1387.0894899977627,
                44378.13459393798,
                0.46126570931549615,
                -25156283.77579603,
                368009223.6895605,
                49.46157731655979,
                -12.988959911542263,
                718679667.2102906,
                -475156.19820306066,
                0.3734419319477916,
                -46.31745252298983,
                -1427.8238859408154,
                1239575.3464627424,
                31755.52282934592,
                -213955.68898263728,
                24963491.28622434,
                -59757.59500150999,
                0.4704386840062813,
                -552.227295458297,
                -334.4358740944936,
                -4.8531520006026,
                60.42881871402733,
                0.301371391179201});
  S21Matrix m1_inv({5,
                    5,
                    8.191522671239701E-10,
                    3.876266605444335E-09,
                    -2.247364642858736E-06,
                    -1.466598101436638E-11,
                    -5.3716413645276586E-05,
                    -5.669864253825406E-10,
                    8.916907537534036E-13,
                    -5.170815895008954E-10,
                    1.0913892815966316E-13,
                    4.0427783358976886E-07,
                    4.503498594616675E-12,
                    7.988160834379955E-11,
                    -4.632305447044954E-08,
                    4.006590227910957E-08,
                    3.852304295159617E-05,
                    4.346657153727833E-09,
                    3.5426905020895525E-08,
                    -2.054367834165183E-05,
                    3.0843500680467206E-09,
                    0.016062851185572522,
                    3.190059881068353E-10,
                    1.5266673297738843E-09,
                    -7.840115566039038E-08,
                    -5.719479643743135E-13,
                    -2.0869890312541245E-06});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 2) {
  S21Matrix m1({4, 4, -9.566518787322924, -2.487685507966233,
                1045470.3697204437, 1868458.9216245017, 681400027.3095685,
                45.544318713083634, 0.2790142606579169, 199807.6723687291,
                235.28297850511427, -962236.5616276975, -72481.2368404286,
                8373.208630447165, 89728.0878173815, -450.2821548979773,
                782824988.440493, -0.40117608173832375});
  S21Matrix m1_inv(
      {4, 4, -1.5693771172921788E-10, 1.4675666856425247E-09,
       6.977011794667012E-14, 2.0959777406174087E-13, 4.657177310319996E-09,
       3.723999090757152E-13, -1.0392454468253805E-06, -1.0244273935484026E-10,
       2.0941429389701262E-14, -1.682135683784427E-13, -5.977836003381388E-13,
       1.277424647328212E-09, 5.352004138903771E-07, 1.0163602207706185E-13,
       -1.0491802123578506E-12, -7.147654442471192E-10});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 3) {
  S21Matrix m1({4, 4, 47.041090654564854, 11722.03048937237, -0.959692678239129,
                -95476.15264060684, -78948.34256098382, -5210857907.347969,
                0.32929673632204337, -895177.6074835696, 1.8177321194507068,
                4172291856.8369427, -0.13382468578514295, 522688.1292730634,
                2.1291516174548786, 392.71451542243653, 70883015.45885132,
                -868579.0977407458});
  S21Matrix m1_inv(
      {4, 4, 3.2107895176278105E-05, -1.26477426921291E-05,
       -1.5796106468226263E-05, 4.636465182416235E-13, 1.3101023479545862E-09,
       7.861607594630441E-13, 2.4065459689855563E-10, 1.818831025134247E-17,
       -1.281481641720192E-07, -7.597833606591042E-11, -9.453214454798748E-11,
       1.4107750221349276E-08, -1.0457837920095492E-05, -6.23144424848526E-09,
       -7.753192861712544E-09, -1.415754675716041E-13});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 4) {
  S21Matrix m1({8,
                8,
                -0.32751631514964064,
                -0.606440818290349,
                8959.823615586854,
                0.9359698168846741,
                2522827.7936946033,
                -189.75985421525908,
                6005830406.900721,
                -0.22649051319369196,
                28480585.064583853,
                9764.002738986908,
                -95671.5167290663,
                -6964.8777102672175,
                -4503607914.058297,
                1809276172.9425678,
                38946166.86411537,
                898301579.4409658,
                -688796956.6308584,
                -691384.3066809141,
                8419.325379539134,
                902163.2090024618,
                1234235588.7179458,
                -5.135597102821096,
                -299341.1893218667,
                -896.3842149211177,
                268258.5980151647,
                768251774.3699688,
                12472306.625761343,
                -9290.590147464363,
                -284839.8037724388,
                726374.3446022803,
                -151143900.84751216,
                8569025782.597931,
                -95368.26937361981,
                0.7109374312521411,
                -483516942.8200253,
                6.463790356257023,
                0.6961384104628284,
                0.5135782353577861,
                9423206231.527077,
                53931.28429309328,
                -76278.52489828662,
                0.6270434043738875,
                -4433086195.437653,
                -0.2254917661329462,
                -268.34000446312433,
                28473.046956683913,
                -2.8465593642314557,
                -61843.96937764453,
                -961.1568350220083,
                -0.2326560841695705,
                -7431746668.704338,
                -45702538.49066077,
                213.02209854083543,
                -85776655.2031884,
                273792.794703867,
                -3.7515820965205284,
                1662592.8569529192,
                6175693.696004944,
                38886.42315300236,
                -0.7346474612520264,
                26.397382365753852,
                -0.33455070055584746,
                -894559.8643109152,
                0.477464887050593});
  S21Matrix m1_inv({8,
                    8,
                    6.806121415167663E-07,
                    -1.986150093351795E-12,
                    -1.3984348843930943E-09,
                    3.2800218022446033E-12,
                    -4.337845672848913E-07,
                    4.73606408403988E-08,
                    -2.7652955601455314E-11,
                    -5.644754808600619E-10,
                    -1.8323219036634734E-07,
                    5.346119614537631E-13,
                    3.764782956599318E-10,
                    -8.831346627018918E-13,
                    1.1679744424335449E-07,
                    -1.2750529650944056E-08,
                    7.441963179687189E-12,
                    1.620771072610548E-07,
                    -5.991572072916371E-12,
                    3.580417055788142E-15,
                    2.526200701966838E-14,
                    -2.030402964322618E-15,
                    3.818674218172606E-12,
                    -2.2599384155297825E-10,
                    5.000647191557804E-16,
                    2.554250442741267E-13,
                    -1.7436745104300418E-06,
                    -1.03643163112912E-09,
                    -2.1769009119206346E-10,
                    1.0104587149421559E-10,
                    1.111327019264792E-06,
                    -8.452778260891943E-08,
                    -2.18846603604284E-08,
                    -1.2593056148230129E-08,
                    3.810050468193849E-07,
                    -3.50541879829153E-13,
                    3.015547230769052E-11,
                    1.756230985801948E-12,
                    -2.4283153137767934E-07,
                    2.648546828295154E-08,
                    5.6829371881124E-13,
                    -2.1503463509973394E-10,
                    9.295572067985057E-07,
                    5.519094855079746E-10,
                    1.1381413769075821E-10,
                    -5.3662232442889374E-11,
                    -5.924508484427726E-07,
                    6.461688531029551E-08,
                    2.1082981041204515E-12,
                    6.6875645371445605E-09,
                    6.48837372166661E-12,
                    1.6484393240550826E-16,
                    -1.266364866969209E-14,
                    -7.394315814003655E-16,
                    1.0198565788209284E-10,
                    -1.1123174861690545E-11,
                    -2.352435586245095E-16,
                    9.055678576762707E-14,
                    1.63383858797127E-08,
                    -9.578980720476959E-14,
                    -3.3718338300115755E-11,
                    1.1678316143735613E-10,
                    -1.0412690407097892E-08,
                    1.1371038664051403E-09,
                    -6.902320249751806E-13,
                    -1.453151179528743E-08});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 5) {
  S21Matrix m1({5,
                5,
                -958.0011341847619,
                -59034418.79511576,
                0.12051105757185698,
                0.4558984664948602,
                0.9211257458929911,
                0.04398789291924232,
                55919.77495287768,
                -981775.2998809806,
                92.95610025657246,
                8597037.731395585,
                0.9331381816619752,
                0.9986850205267727,
                -96054.56520718407,
                3862921.0260079596,
                743.3726489481995,
                -3.4158266789985303,
                2815533.121899523,
                803310.0495092948,
                -0.7455562050126565,
                27.076038772393208,
                8946232871.15245,
                -92.00576919773755,
                -7148358191.626261,
                -0.08234529939159263,
                15.02398602721825});
  S21Matrix m1_inv({5,
                    5,
                    4.744143017793292E-08,
                    -3.138138404251779E-12,
                    1.8646377680852681E-13,
                    9.947236711044078E-07,
                    1.1178435226879017E-10,
                    -1.694004032190062E-08,
                    1.865687130037461E-15,
                    1.9960888595177246E-15,
                    -1.6137218693400048E-11,
                    -1.8140186153362067E-15,
                    5.937336551929759E-08,
                    -3.927163220109896E-12,
                    2.333580615242358E-13,
                    1.2449053849465824E-06,
                    6.8332820495539245E-15,
                    1.4750322779670368E-09,
                    -2.2481782409665467E-11,
                    2.5887146481720993E-07,
                    3.092795151358161E-08,
                    1.42760117751823E-16,
                    6.890565056346634E-09,
                    1.163186876267725E-07,
                    -2.7724303451968832E-12,
                    1.4216703235557976E-07,
                    7.915815691617156E-16});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 6) {
  S21Matrix m1({6,
                6,
                629881.0921411006,
                821.828324800689,
                0.4371346476773078,
                6102.222004395452,
                -86698500.12318414,
                9.147734610987024,
                764.4970032210722,
                -84864.99026979541,
                4952568623.704959,
                -310039970.5859428,
                1.5826166176972367,
                -0.1981165969069063,
                -0.6551389400168889,
                -70.89177686682821,
                -0.3110013489346922,
                81245789.2918535,
                -806120.3803111071,
                158368.37108017487,
                -32882.50456096876,
                1885735.6605083775,
                58460337.80573302,
                8.253446669224017,
                62578034.39519613,
                637107041.1425936,
                -73.93239511189587,
                -0.061277923355752995,
                -25.461006783511674,
                -6697837.192230494,
                -1338.7027080329071,
                -614432756.585666,
                57849417.6742996,
                50.80947710611648,
                -1984536330.7743092,
                -0.6277843959010599,
                -1.9858189907181467,
                -9649499715.584526});
  S21Matrix m1_inv({6,
                    6,
                    1.9095189007418922E-10,
                    6.92213917713065E-09,
                    4.064832080575914E-09,
                    3.1111662118647664E-10,
                    -2.711156044973071E-07,
                    1.7283918490250125E-08,
                    3.821897463704118E-07,
                    -7.800030917821057E-09,
                    2.0489230723957246E-08,
                    5.297803202229791E-07,
                    6.099463965527707E-07,
                    -3.859373675779064E-09,
                    -5.914795409554707E-13,
                    2.0181146858084195E-10,
                    7.709112339678632E-10,
                    9.111492223248165E-12,
                    9.505510360206909E-12,
                    8.973193523184148E-15,
                    -1.1406188795802516E-10,
                    4.915133332201976E-13,
                    1.2308913173548274E-08,
                    5.34533138020502E-13,
                    -1.5784005171802888E-11,
                    1.2423551969047199E-12,
                    -1.152922280380074E-08,
                    5.021675553556081E-11,
                    3.059234389361724E-11,
                    7.282227663557089E-12,
                    -1.9639259363146022E-09,
                    1.2553445882034457E-10,
                    1.2684295011160997E-12,
                    -6.307821695603343E-15,
                    -1.3417816339805076E-10,
                    -5.9333784758683714E-15,
                    -1.6273084969274736E-09,
                    -1.589555778731829E-14});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 7) {
  S21Matrix m1({5,
                5,
                -33129503.579634212,
                864455636.3328916,
                1081.6215560003895,
                0.8061261769485323,
                769.5782613390379,
                -0.3511374752268369,
                -82396610.37615292,
                32508.687798108895,
                -142.79146264468312,
                -78.1946524119771,
                83022.40042057102,
                6788039063.751538,
                99094.35106708475,
                -105383425.65077363,
                -11530.523479326293,
                728.0241649362744,
                5661.171857024799,
                25.339189532162955,
                85343258.33090973,
                5390506.513698298,
                41.528592583556986,
                1361.6137085238333,
                -0.490243355563591,
                9931.029314034262,
                0.8148960818908295});
  S21Matrix m1_inv({5,
                    5,
                    -3.012598342317882E-08,
                    -9.715808670642221E-09,
                    3.7107157114235736E-09,
                    6.1527831747230845E-12,
                    3.932336310003314E-05,
                    2.2401627204723804E-12,
                    -4.0951755529980237E-10,
                    1.4176011209055746E-10,
                    6.965454951631346E-14,
                    1.5036873557514936E-06,
                    5.673358257723787E-09,
                    2.9722990302603E-05,
                    3.593061890104092E-07,
                    6.232792981101632E-10,
                    0.0038078599265169715,
                    1.2611427473500776E-10,
                    1.5660918961705201E-09,
                    -1.723852919997814E-11,
                    -1.5246551764861577E-11,
                    0.00010064261488545737,
                    -1.992619264433014E-09,
                    -2.4932564261870088E-08,
                    2.705837940023953E-10,
                    1.8575270564915093E-07,
                    -0.0015934128432117316});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 8) {
  S21Matrix m1({5,
                5,
                58672.66487812328,
                -0.3482741624046174,
                -238600.1600152249,
                -0.5185272954171919,
                256615.32524069885,
                70928468.79745653,
                -45887659.65467985,
                66.69684391677299,
                -87757.22130433247,
                366.18845437184854,
                74551740.76724169,
                641687.2988440647,
                42079465.731902756,
                -91858.58489982215,
                0.3773138714678951,
                597129580.9258236,
                -0.5532692400925784,
                196137559.48876143,
                48233.49501445322,
                75.4981957815186,
                0.01802124053130405,
                6563469.070967619,
                0.21091549083569405,
                3.6903129758480677,
                99554588.19163978});
  S21Matrix m1_inv({5,
                    5,
                    1.4026572081735233E-06,
                    -4.999907123384515E-10,
                    1.227309047535725E-09,
                    1.4430166264767374E-09,
                    -3.61553664710244E-09,
                    3.5313160039508687E-06,
                    -2.279255689596701E-08,
                    2.1579322827404568E-08,
                    -3.33808016606574E-10,
                    -9.102357389156758E-09,
                    -4.0950131056177E-06,
                    1.4929534550266794E-09,
                    -1.2055623962340695E-09,
                    3.755452941577285E-10,
                    1.0555440632627925E-08,
                    -0.0007128286007429867,
                    1.1889810939721207E-07,
                    -1.0291735059695153E-05,
                    1.3408430640892168E-06,
                    1.837410064730318E-06,
                    -2.3278738221561643E-07,
                    1.5026711061258693E-09,
                    -1.4223075055258705E-09,
                    2.1957705783073204E-11,
                    1.0644775671989201E-08});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 9) {
  S21Matrix m1({4, 4, 4581818.931654806, -218485514.6287379, -2992861669.539827,
                0.5872986861684045, 2354640.8736508195, -4779715374.554144,
                -4.073445266454147, 688527925.0695344, -0.3284478852148658,
                0.6846646081636826, -20958.47470036343, -62.66717047532304,
                443662259.2905534, -83.45012599170619, -30869909.472885203,
                -496358211.5884637});
  S21Matrix m1_inv(
      {4, 4, -6.398589315146578E-08, 2.926166605094726E-09,
       0.009132879269684167, 2.9059974180640472E-09, -8.271804734304019E-09,
       1.6906407403642825E-10, 0.0011810845646442944, 8.540224074885156E-11,
       1.717746293854339E-10, -7.862336029692437E-12, -7.224011292988639E-05,
       -1.785715072326981E-12, -5.7203501891130777E-08, 2.615998591852726E-09,
       0.008167778235856153, 5.829187287960121E-10});

  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}
TEST(Inverse, 10) {
  S21Matrix m1({4, 3, 0.10319838926268188, -178816.17764510983,
                -11311217.907952188, -1937.39658211047, -11272940.306218794,
                -76754145.5099823, -12.70087714107213, -1828.7561922805007,
                68297352.45250608, 159234.09500537167, -3011.082923844033,
                -152.56720888126085});

  EXPECT_THROW(m1.InverseMatrix(), std::invalid_argument);
}

TEST(Inverse, 11) {
  S21Matrix m1({4,
                7,
                683302369.7225982,
                -1043118.3204607863,
                5110.887985504332,
                0.6997363124382333,
                122.64110904326087,
                4.250807640228329,
                -763217902.9070638,
                -949465661.9939249,
                7.587155828258025,
                -76.18338150989534,
                -25.678929876522073,
                -2076.479688556061,
                -55099487.95079281,
                47595.79116405773,
                -8.692186827373016,
                -6510.1899251993555,
                983393096.0385207,
                499149.98993871175,
                96.85536685922229,
                751826696.3734552,
                3126407732.4884377,
                39600055.86864783,
                -1.0667860533939189,
                5188180930.770152,
                -701.3640430493685,
                420.8814118726234,
                -0.5691486671977477,
                -15.55838680881687});

  EXPECT_THROW(m1.InverseMatrix(), std::invalid_argument);
}

TEST(Inverse, 12) {
  S21Matrix m1({2, 2, 2, 2, 1, 1});
  EXPECT_THROW(m1.InverseMatrix(), std::invalid_argument);
}

TEST(Inverse, 13) {
  S21Matrix m1({1, 1, 5});
  S21Matrix m1_inv({1, 1, 0.2});
  EXPECT_TRUE(m1.InverseMatrix() == m1_inv);
}

TEST(Inverse, 14) {
  S21Matrix m1(1, 1);
  EXPECT_THROW(m1.InverseMatrix(), std::invalid_argument);
}