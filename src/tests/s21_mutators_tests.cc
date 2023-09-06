#include "s21_matrix_oop_tests.h"

TEST(Mutators, 0) {
  S21Matrix m1({6,
                6,
                -0.14843110457804876,
                -1180.9164648772007,
                3817339.4914666894,
                -0.6766353188146927,
                -2162010.910645107,
                -288819.3769153961,
                -42.24865091949648,
                9516.185902818565,
                0.7983186834888216,
                8233380.340029817,
                47.45432699764126,
                -0.5851450636033034,
                24367.02650570122,
                -36250449.02631621,
                -895930658.6283872,
                0.6348919475529397,
                15352613.940879533,
                88.50090649481123,
                -10575786.968589673,
                -98102377.59036645,
                2134.089419363082,
                2309780.552579178,
                497745117.11045545,
                -50944802.81140999,
                232988.10113496115,
                6.818967238280399,
                -9048232.527116107,
                -20.21189953047058,
                98451824.99066669,
                -96696144.68273397,
                -16.98399959473731,
                -771985711.49462,
                0.4809502391334233,
                -617.2024392645218,
                973.0523395585559,
                -93943.21897579283});
  S21Matrix m1_res({11,
                    5,
                    -0.14843110457804876,
                    -1180.9164648772007,
                    3817339.4914666894,
                    -0.6766353188146927,
                    -2162010.910645107,
                    -42.24865091949648,
                    9516.185902818565,
                    0.7983186834888216,
                    8233380.340029817,
                    47.45432699764126,
                    24367.02650570122,
                    -36250449.02631621,
                    -895930658.6283872,
                    0.6348919475529397,
                    15352613.940879533,
                    -10575786.968589673,
                    -98102377.59036645,
                    2134.089419363082,
                    2309780.552579178,
                    497745117.11045545,
                    232988.10113496115,
                    6.818967238280399,
                    -9048232.527116107,
                    -20.21189953047058,
                    98451824.99066669,
                    -16.98399959473731,
                    -771985711.49462,
                    0.4809502391334233,
                    -617.2024392645218,
                    973.0523395585559,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0});

  m1.SetRows(11);
  m1.SetCols(5);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 1) {
  S21Matrix m1({3, 3, 844594.8447302084, 1892019047.4503596,
                -2464290.9168441496, 57819527.12627928, 975.5660877653007,
                -63020632.04216852, -648698.3885664422, 8823.094764342815,
                -153224.07723598674});
  S21Matrix m1_res({3, 3, 844594.8447302084, 1892019047.4503596,
                    -2464290.9168441496, 57819527.12627928, 975.5660877653007,
                    -63020632.04216852, -648698.3885664422, 8823.094764342815,
                    -153224.07723598674});

  m1.SetRows(3);
  m1.SetCols(3);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 2) {
  S21Matrix m1({7,
                7,
                0.8869366907093454,
                0.2994455115994482,
                22796740.304488283,
                0.014725678527282016,
                -22482.026129505284,
                -58514.28664719538,
                -6732.927907132149,
                625669.3671076243,
                4777.911122776259,
                -0.9212117348614672,
                -30503516.09219426,
                -0.24301507964674185,
                5005336245.916434,
                0.33810953680351363,
                -845994.5961775562,
                -0.8714220055965478,
                -77072447.0696601,
                -642583781.2105244,
                25898.635748216013,
                -87.4120514067494,
                -0.164597148832199,
                206834080.98865518,
                3814.426140443927,
                636.1064143343756,
                6970964678.180641,
                -0.560478472210742,
                102871546.97671075,
                -0.8872313799935927,
                434676.75942888105,
                -577143.6261142538,
                367102651.74352485,
                -5612623236.82357,
                -6597.013239262961,
                0.4319222899473466,
                90342518.9022196,
                -69.39794902836508,
                0.7119834901202985,
                -26560701.07213897,
                -0.40863183524904323,
                -7869774697.565188,
                6607565.191688292,
                99844607.89557119,
                90035.6350512209,
                -0.5365752666744765,
                -0.36355688001635245,
                4580.551649568407,
                85186.37161107404,
                -9797769.302890878,
                966141.7782171051});
  S21Matrix m1_res({11,
                    3,
                    0.8869366907093454,
                    0.2994455115994482,
                    22796740.304488283,
                    625669.3671076243,
                    4777.911122776259,
                    -0.9212117348614672,
                    -845994.5961775562,
                    -0.8714220055965478,
                    -77072447.0696601,
                    206834080.98865518,
                    3814.426140443927,
                    636.1064143343756,
                    434676.75942888105,
                    -577143.6261142538,
                    367102651.74352485,
                    -69.39794902836508,
                    0.7119834901202985,
                    -26560701.07213897,
                    90035.6350512209,
                    -0.5365752666744765,
                    -0.36355688001635245,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0});

  m1.SetRows(11);
  m1.SetCols(3);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 3) {
  S21Matrix m1({7,
                8,
                7868935869.253254,
                -887.5927866980578,
                -3432.807142964531,
                -44.867722461910596,
                0.9431813639400524,
                905837.625630102,
                -0.8642721183230878,
                22197.239766675426,
                6.3513150409718016,
                1916010.917907932,
                -0.9467154718264206,
                4.342763661131466,
                4.55944118354481,
                0.9410529913279145,
                -2.1970733171323964,
                4.33121148516677,
                94.25574991981563,
                -785434.2056073499,
                690.6760028566744,
                -9612.927496113323,
                -0.6857725942987102,
                -85438.42567232868,
                769484.0455682634,
                0.40336227846666806,
                -45.90812616624237,
                36678.71358752876,
                -618891816.7835678,
                -71388.99822207612,
                615.1587371899935,
                2356916.663697837,
                402806.44290269853,
                6114429303.4283905,
                -9.034143486950532,
                0.4278116429425983,
                314828939.5609287,
                4.552878170001634,
                3366943223.9413686,
                478.0747007908931,
                0.9362240982620584,
                -6.221483070430175,
                6465224.970267558,
                -4539604778.248658,
                -590.7652650178312,
                -67899928.76918927,
                3.4255253751129864,
                1061489.1907889901,
                -2910310.251186452,
                27729059.824847326,
                0.6675506805103423,
                -0.6780757840327166,
                0.0620768153347544,
                6608383.301384122,
                59152411.33155984,
                -0.9215471535977825,
                0.5150901815639488,
                6.844999516088656});
  S21Matrix m1_res({7,
                    3,
                    7868935869.253254,
                    -887.5927866980578,
                    -3432.807142964531,
                    6.3513150409718016,
                    1916010.917907932,
                    -0.9467154718264206,
                    94.25574991981563,
                    -785434.2056073499,
                    690.6760028566744,
                    -45.90812616624237,
                    36678.71358752876,
                    -618891816.7835678,
                    -9.034143486950532,
                    0.4278116429425983,
                    314828939.5609287,
                    6465224.970267558,
                    -4539604778.248658,
                    -590.7652650178312,
                    0.6675506805103423,
                    -0.6780757840327166,
                    0.0620768153347544});

  m1.SetRows(7);
  m1.SetCols(3);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 4) {
  S21Matrix m1({1, 1, -1617807.8289370602});
  S21Matrix m1_res({1, 1, -1617807.8289370602});

  m1.SetRows(1);
  m1.SetCols(1);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 5) {
  S21Matrix m1({4, 4, -24.37215094086439, 2030076.9696891196, 861381.3488097747,
                -887212.4833383776, 35.25066449627481, 25.264017198189936,
                0.6514017177803256, 0.9312745372558089, -53347148.55521748,
                675431382.8244785, 20668424.89951882, 9.908556309796117,
                81.7029848945772, 4155852826.85441, 24.838624553901223,
                -74.89921409248065});
  S21Matrix m1_res({4,
                    7,
                    -24.37215094086439,
                    2030076.9696891196,
                    861381.3488097747,
                    -887212.4833383776,
                    0.0,
                    0.0,
                    0.0,
                    35.25066449627481,
                    25.264017198189936,
                    0.6514017177803256,
                    0.9312745372558089,
                    0.0,
                    0.0,
                    0.0,
                    -53347148.55521748,
                    675431382.8244785,
                    20668424.89951882,
                    9.908556309796117,
                    0.0,
                    0.0,
                    0.0,
                    81.7029848945772,
                    4155852826.85441,
                    24.838624553901223,
                    -74.89921409248065,
                    0.0,
                    0.0,
                    0.0});

  m1.SetRows(4);
  m1.SetCols(7);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 6) {
  S21Matrix m1({7,
                7,
                10.169227171681527,
                -966785.9358363695,
                46622.340686323274,
                -1.931186181619049,
                -0.4063030603989959,
                -24.811368344879337,
                -887.3870276546791,
                -0.07733996695670187,
                0.16579636631581418,
                7.7661886171235786,
                -484.7224532525998,
                -0.28368925332791894,
                -5.5223673892859795,
                1708380.0187385269,
                9018289789.498642,
                -7.508937352154779,
                -95115231.38678303,
                24025.78064269697,
                766941835.7617835,
                -8542.241960037347,
                66581.2444570347,
                57622167.0984004,
                2000199897.821401,
                10993.858249737421,
                5.636345282359012,
                13.399159844778929,
                -91.76530591695877,
                -242.83242257312588,
                -70350.5387584352,
                0.5824038519122627,
                -8527965568.487984,
                49333296.86012584,
                0.6585190123480122,
                -6481215985.902333,
                -757722.1402973786,
                -2915316.222803965,
                419985786.39688057,
                -687621.9862182129,
                5.5930445642508975,
                -81.08658432482244,
                700085.985367074,
                5403021.470740709,
                -0.5129232684397561,
                -0.7734141545036857,
                9026098.61907151,
                -127.22000351036323,
                -639354.5510900151,
                -9763.940534525607,
                -0.6196249042981816});
  S21Matrix m1_res({12,
                    2,
                    10.169227171681527,
                    -966785.9358363695,
                    -0.07733996695670187,
                    0.16579636631581418,
                    9018289789.498642,
                    -7.508937352154779,
                    57622167.0984004,
                    2000199897.821401,
                    -70350.5387584352,
                    0.5824038519122627,
                    -2915316.222803965,
                    419985786.39688057,
                    -0.5129232684397561,
                    -0.7734141545036857,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0,
                    0.0});

  m1.SetRows(12);
  m1.SetCols(2);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 7) {
  S21Matrix m1({1, 1, -56919508.42018362});
  S21Matrix m1_res({1, 1, -56919508.42018362});

  m1.SetRows(1);
  m1.SetCols(1);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 8) {
  S21Matrix m1({4, 4, -663.6337604932435, 581941317.7696437, -99388859.00223368,
                9872586556.659508, -0.2745961302668639, 182271223.55366087,
                9431512631.445509, -37712588.25536947, 9368.176027698095,
                -0.5324822465835025, 439333.10242999124, -278841.6409951282,
                -84054146.30642968, -3.159158381866204, -44540.90070761632,
                483589.39478622685});
  S21Matrix m1_res({4, 4, -663.6337604932435, 581941317.7696437,
                    -99388859.00223368, 9872586556.659508, -0.2745961302668639,
                    182271223.55366087, 9431512631.445509, -37712588.25536947,
                    9368.176027698095, -0.5324822465835025, 439333.10242999124,
                    -278841.6409951282, -84054146.30642968, -3.159158381866204,
                    -44540.90070761632, 483589.39478622685});

  m1.SetRows(4);
  m1.SetCols(4);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 9) {
  S21Matrix m1({6,
                6,
                4574.532991841202,
                -7839437365.696744,
                -4223.204615669104,
                6683600.705666765,
                55489.88626361007,
                -8280175.5443743495,
                -277055755.9090532,
                47.1041875831349,
                52283.275644122,
                -0.16890252006961726,
                0.406963659880354,
                -7.819335530127603,
                -0.13375311448318594,
                -587.2415123740318,
                50266.54075259539,
                6607.358392762165,
                1659826.8464846977,
                6567.681904525999,
                -15726.83919692297,
                -5.8234077822367,
                73801430.69455108,
                -2104.0966669071336,
                -48966.3050131934,
                -0.05926036156277015,
                -7910.645380229579,
                0.7964887615318973,
                -60.250573223409056,
                -0.06731704436310948,
                0.3126223789685173,
                -0.6599860994401497,
                -42598.30714680412,
                0.440710234470472,
                -17587.204764799368,
                -0.8816792649321147,
                419.8602428956332,
                -185.64007046355724});
  S21Matrix m1_res({6,
                    6,
                    4574.532991841202,
                    -7839437365.696744,
                    -4223.204615669104,
                    6683600.705666765,
                    55489.88626361007,
                    -8280175.5443743495,
                    -277055755.9090532,
                    47.1041875831349,
                    52283.275644122,
                    -0.16890252006961726,
                    0.406963659880354,
                    -7.819335530127603,
                    -0.13375311448318594,
                    -587.2415123740318,
                    50266.54075259539,
                    6607.358392762165,
                    1659826.8464846977,
                    6567.681904525999,
                    -15726.83919692297,
                    -5.8234077822367,
                    73801430.69455108,
                    -2104.0966669071336,
                    -48966.3050131934,
                    -0.05926036156277015,
                    -7910.645380229579,
                    0.7964887615318973,
                    -60.250573223409056,
                    -0.06731704436310948,
                    0.3126223789685173,
                    -0.6599860994401497,
                    -42598.30714680412,
                    0.440710234470472,
                    -17587.204764799368,
                    -0.8816792649321147,
                    419.8602428956332,
                    -185.64007046355724});

  m1.SetRows(6);
  m1.SetCols(6);
  EXPECT_TRUE(m1 == m1_res);
}

TEST(Mutators, 10) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetSize(-1, 5), std::invalid_argument);
}

TEST(Mutators, 11) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetSize(-1, 0), std::invalid_argument);
}

TEST(Mutators, 12) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetSize(-1, -2), std::invalid_argument);
}

TEST(Mutators, 13) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetSize(3, -2), std::invalid_argument);
}

TEST(Mutators, 14) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetSize(0, -2), std::invalid_argument);
}

TEST(Mutators, 15) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetSize(0, 0), std::invalid_argument);
}

TEST(Mutators, 16) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetRows(0), std::invalid_argument);
}

TEST(Mutators, 17) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetRows(-5), std::invalid_argument);
}

TEST(Mutators, 18) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetCols(0), std::invalid_argument);
}

TEST(Mutators, 19) {
  S21Matrix m1;
  EXPECT_THROW(m1.SetCols(-2), std::invalid_argument);
}
