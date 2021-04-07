/***************************************************************************//**
* @file
*
*   This file contains deprecated dmp defintions for the DFR related properties.
*   These properties have been updated in Dino to remove the large amount of
*   duplication and redundancy related to the structuring of the properties
*   around DFR and FILTER indexes, and this file remains to support legacy code
*   which has not been updated to support these new structures.
*
*******************************************************************************/
#ifndef DMP_DEPRECATED_DFR_ADDR_DEFINITIONS_H
#define DMP_DEPRECATED_DFR_ADDR_DEFINITIONS_H

/**
 * @addtogroup DMP_defs    DMP address definitions
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif

// Properties included by mask DMP_GENERIC_DFR1_CONFIG_ADDR_MASK
#define DMP_GENERIC_DFR1_CONFIG_ADDR_MASK                                                0x0106201F

#define DMP_GENERIC_DFR1_ASSIGNED_CHAN                                                   0x01062010
#define DMP_GENERIC_DFR1_LOCK                                                            0x01062011
#define DMP_GENERIC_DFR1_BYPASS_EN                                                       0x01062012
#define DMP_GENERIC_DFR1_NUM_FILTERS                                                     0x01062014
#define DMP_GENERIC_DFR1_NUM_FIXED_FILTERS                                               0x01062015
#define DMP_GENERIC_DFR1_CLEAR_ALL_FILTERS                                               0x01062016
#define DMP_GENERIC_DFR1_NEW_FILTER_Q_DEPLOY_TYPE                                        0x01062017
#define DMP_GENERIC_DFR1_AUTO_CLEAR_FILTERS_EN                                           0x0106201A
#define DMP_GENERIC_DFR1_FILTER_CLEAR_TIMEOUT_EN                                         0x0106201B
#define DMP_GENERIC_DFR1_FILTER_CLEAR_TIMEOUT                                            0x0106201C


// Properties included by mask DMP_GENERIC_DFR2_CONFIG_ADDR_MASK
#define DMP_GENERIC_DFR2_CONFIG_ADDR_MASK                                                0x0106202F

#define DMP_GENERIC_DFR2_ASSIGNED_CHAN                                                   0x01062020
#define DMP_GENERIC_DFR2_LOCK                                                            0x01062021
#define DMP_GENERIC_DFR2_BYPASS_EN                                                       0x01062022
#define DMP_GENERIC_DFR2_NUM_FILTERS                                                     0x01062024
#define DMP_GENERIC_DFR2_NUM_FIXED_FILTERS                                               0x01062025
#define DMP_GENERIC_DFR2_CLEAR_ALL_FILTERS                                               0x01062026
#define DMP_GENERIC_DFR2_NEW_FILTER_Q_DEPLOY_TYPE                                        0x01062027
#define DMP_GENERIC_DFR2_AUTO_CLEAR_FILTERS_EN                                           0x0106202A
#define DMP_GENERIC_DFR2_FILTER_CLEAR_TIMEOUT_EN                                         0x0106202B
#define DMP_GENERIC_DFR2_FILTER_CLEAR_TIMEOUT                                            0x0106202C


// Properties included by mask DMP_GENERIC_DFR1_FILTER_ADDR_MASK
#define DMP_GENERIC_DFR1_FILTER_ADDR_MASK                                                0x010621FF

#define DMP_GENERIC_DFR1_FILTER0_TYPE                                                    0x01062100
#define DMP_GENERIC_DFR1_FILTER0_ACTIVE                                                  0x01062101
#define DMP_GENERIC_DFR1_FILTER0_CLEAR                                                   0x01062102
#define DMP_GENERIC_DFR1_FILTER0_FREQ                                                    0x01062103
#define DMP_GENERIC_DFR1_FILTER0_DEPTH                                                   0x01062104
#define DMP_GENERIC_DFR1_FILTER0_Q_FACTOR                                                0x01062105
#define DMP_GENERIC_DFR1_FILTER1_TYPE                                                    0x01062110
#define DMP_GENERIC_DFR1_FILTER1_ACTIVE                                                  0x01062111
#define DMP_GENERIC_DFR1_FILTER1_CLEAR                                                   0x01062112
#define DMP_GENERIC_DFR1_FILTER1_FREQ                                                    0x01062113
#define DMP_GENERIC_DFR1_FILTER1_DEPTH                                                   0x01062114
#define DMP_GENERIC_DFR1_FILTER1_Q_FACTOR                                                0x01062115
#define DMP_GENERIC_DFR1_FILTER2_TYPE                                                    0x01062120
#define DMP_GENERIC_DFR1_FILTER2_ACTIVE                                                  0x01062121
#define DMP_GENERIC_DFR1_FILTER2_CLEAR                                                   0x01062122
#define DMP_GENERIC_DFR1_FILTER2_FREQ                                                    0x01062123
#define DMP_GENERIC_DFR1_FILTER2_DEPTH                                                   0x01062124
#define DMP_GENERIC_DFR1_FILTER2_Q_FACTOR                                                0x01062125
#define DMP_GENERIC_DFR1_FILTER3_TYPE                                                    0x01062130
#define DMP_GENERIC_DFR1_FILTER3_ACTIVE                                                  0x01062131
#define DMP_GENERIC_DFR1_FILTER3_CLEAR                                                   0x01062132
#define DMP_GENERIC_DFR1_FILTER3_FREQ                                                    0x01062133
#define DMP_GENERIC_DFR1_FILTER3_DEPTH                                                   0x01062134
#define DMP_GENERIC_DFR1_FILTER3_Q_FACTOR                                                0x01062135
#define DMP_GENERIC_DFR1_FILTER4_TYPE                                                    0x01062140
#define DMP_GENERIC_DFR1_FILTER4_ACTIVE                                                  0x01062141
#define DMP_GENERIC_DFR1_FILTER4_CLEAR                                                   0x01062142
#define DMP_GENERIC_DFR1_FILTER4_FREQ                                                    0x01062143
#define DMP_GENERIC_DFR1_FILTER4_DEPTH                                                   0x01062144
#define DMP_GENERIC_DFR1_FILTER4_Q_FACTOR                                                0x01062145
#define DMP_GENERIC_DFR1_FILTER5_TYPE                                                    0x01062150
#define DMP_GENERIC_DFR1_FILTER5_ACTIVE                                                  0x01062151
#define DMP_GENERIC_DFR1_FILTER5_CLEAR                                                   0x01062152
#define DMP_GENERIC_DFR1_FILTER5_FREQ                                                    0x01062153
#define DMP_GENERIC_DFR1_FILTER5_DEPTH                                                   0x01062154
#define DMP_GENERIC_DFR1_FILTER5_Q_FACTOR                                                0x01062155
#define DMP_GENERIC_DFR1_FILTER6_TYPE                                                    0x01062160
#define DMP_GENERIC_DFR1_FILTER6_ACTIVE                                                  0x01062161
#define DMP_GENERIC_DFR1_FILTER6_CLEAR                                                   0x01062162
#define DMP_GENERIC_DFR1_FILTER6_FREQ                                                    0x01062163
#define DMP_GENERIC_DFR1_FILTER6_DEPTH                                                   0x01062164
#define DMP_GENERIC_DFR1_FILTER6_Q_FACTOR                                                0x01062165
#define DMP_GENERIC_DFR1_FILTER7_TYPE                                                    0x01062170
#define DMP_GENERIC_DFR1_FILTER7_ACTIVE                                                  0x01062171
#define DMP_GENERIC_DFR1_FILTER7_CLEAR                                                   0x01062172
#define DMP_GENERIC_DFR1_FILTER7_FREQ                                                    0x01062173
#define DMP_GENERIC_DFR1_FILTER7_DEPTH                                                   0x01062174
#define DMP_GENERIC_DFR1_FILTER7_Q_FACTOR                                                0x01062175
#define DMP_GENERIC_DFR1_FILTER8_TYPE                                                    0x01062180
#define DMP_GENERIC_DFR1_FILTER8_ACTIVE                                                  0x01062181
#define DMP_GENERIC_DFR1_FILTER8_CLEAR                                                   0x01062182
#define DMP_GENERIC_DFR1_FILTER8_FREQ                                                    0x01062183
#define DMP_GENERIC_DFR1_FILTER8_DEPTH                                                   0x01062184
#define DMP_GENERIC_DFR1_FILTER8_Q_FACTOR                                                0x01062185
#define DMP_GENERIC_DFR1_FILTER9_TYPE                                                    0x01062190
#define DMP_GENERIC_DFR1_FILTER9_ACTIVE                                                  0x01062191
#define DMP_GENERIC_DFR1_FILTER9_CLEAR                                                   0x01062192
#define DMP_GENERIC_DFR1_FILTER9_FREQ                                                    0x01062193
#define DMP_GENERIC_DFR1_FILTER9_DEPTH                                                   0x01062194
#define DMP_GENERIC_DFR1_FILTER9_Q_FACTOR                                                0x01062195
#define DMP_GENERIC_DFR1_FILTER10_TYPE                                                   0x010621A0
#define DMP_GENERIC_DFR1_FILTER10_ACTIVE                                                 0x010621A1
#define DMP_GENERIC_DFR1_FILTER10_CLEAR                                                  0x010621A2
#define DMP_GENERIC_DFR1_FILTER10_FREQ                                                   0x010621A3
#define DMP_GENERIC_DFR1_FILTER10_DEPTH                                                  0x010621A4
#define DMP_GENERIC_DFR1_FILTER10_Q_FACTOR                                               0x010621A5
#define DMP_GENERIC_DFR1_FILTER11_TYPE                                                   0x010621B0
#define DMP_GENERIC_DFR1_FILTER11_ACTIVE                                                 0x010621B1
#define DMP_GENERIC_DFR1_FILTER11_CLEAR                                                  0x010621B2
#define DMP_GENERIC_DFR1_FILTER11_FREQ                                                   0x010621B3
#define DMP_GENERIC_DFR1_FILTER11_DEPTH                                                  0x010621B4
#define DMP_GENERIC_DFR1_FILTER11_Q_FACTOR                                               0x010621B5
#define DMP_GENERIC_DFR1_FILTER12_TYPE                                                   0x010621C0
#define DMP_GENERIC_DFR1_FILTER12_ACTIVE                                                 0x010621C1
#define DMP_GENERIC_DFR1_FILTER12_CLEAR                                                  0x010621C2
#define DMP_GENERIC_DFR1_FILTER12_FREQ                                                   0x010621C3
#define DMP_GENERIC_DFR1_FILTER12_DEPTH                                                  0x010621C4
#define DMP_GENERIC_DFR1_FILTER12_Q_FACTOR                                               0x010621C5
#define DMP_GENERIC_DFR1_FILTER13_TYPE                                                   0x010621D0
#define DMP_GENERIC_DFR1_FILTER13_ACTIVE                                                 0x010621D1
#define DMP_GENERIC_DFR1_FILTER13_CLEAR                                                  0x010621D2
#define DMP_GENERIC_DFR1_FILTER13_FREQ                                                   0x010621D3
#define DMP_GENERIC_DFR1_FILTER13_DEPTH                                                  0x010621D4
#define DMP_GENERIC_DFR1_FILTER13_Q_FACTOR                                               0x010621D5
#define DMP_GENERIC_DFR1_FILTER14_TYPE                                                   0x010621E0
#define DMP_GENERIC_DFR1_FILTER14_ACTIVE                                                 0x010621E1
#define DMP_GENERIC_DFR1_FILTER14_CLEAR                                                  0x010621E2
#define DMP_GENERIC_DFR1_FILTER14_FREQ                                                   0x010621E3
#define DMP_GENERIC_DFR1_FILTER14_DEPTH                                                  0x010621E4
#define DMP_GENERIC_DFR1_FILTER14_Q_FACTOR                                               0x010621E5
#define DMP_GENERIC_DFR1_FILTER15_TYPE                                                   0x010621F0
#define DMP_GENERIC_DFR1_FILTER15_ACTIVE                                                 0x010621F1
#define DMP_GENERIC_DFR1_FILTER15_CLEAR                                                  0x010621F2
#define DMP_GENERIC_DFR1_FILTER15_FREQ                                                   0x010621F3
#define DMP_GENERIC_DFR1_FILTER15_DEPTH                                                  0x010621F4
#define DMP_GENERIC_DFR1_FILTER15_Q_FACTOR                                               0x010621F5


// Properties included by mask DMP_GENERIC_DFR2_FILTER_ADDR_MASK
#define DMP_GENERIC_DFR2_FILTER_ADDR_MASK                                                0x010622FF

#define DMP_GENERIC_DFR2_FILTER0_TYPE                                                    0x01062200
#define DMP_GENERIC_DFR2_FILTER0_ACTIVE                                                  0x01062201
#define DMP_GENERIC_DFR2_FILTER0_CLEAR                                                   0x01062202
#define DMP_GENERIC_DFR2_FILTER0_FREQ                                                    0x01062203
#define DMP_GENERIC_DFR2_FILTER0_DEPTH                                                   0x01062204
#define DMP_GENERIC_DFR2_FILTER0_Q_FACTOR                                                0x01062205
#define DMP_GENERIC_DFR2_FILTER1_TYPE                                                    0x01062210
#define DMP_GENERIC_DFR2_FILTER1_ACTIVE                                                  0x01062211
#define DMP_GENERIC_DFR2_FILTER1_CLEAR                                                   0x01062212
#define DMP_GENERIC_DFR2_FILTER1_FREQ                                                    0x01062213
#define DMP_GENERIC_DFR2_FILTER1_DEPTH                                                   0x01062214
#define DMP_GENERIC_DFR2_FILTER1_Q_FACTOR                                                0x01062215
#define DMP_GENERIC_DFR2_FILTER2_TYPE                                                    0x01062220
#define DMP_GENERIC_DFR2_FILTER2_ACTIVE                                                  0x01062221
#define DMP_GENERIC_DFR2_FILTER2_CLEAR                                                   0x01062222
#define DMP_GENERIC_DFR2_FILTER2_FREQ                                                    0x01062223
#define DMP_GENERIC_DFR2_FILTER2_DEPTH                                                   0x01062224
#define DMP_GENERIC_DFR2_FILTER2_Q_FACTOR                                                0x01062225
#define DMP_GENERIC_DFR2_FILTER3_TYPE                                                    0x01062230
#define DMP_GENERIC_DFR2_FILTER3_ACTIVE                                                  0x01062231
#define DMP_GENERIC_DFR2_FILTER3_CLEAR                                                   0x01062232
#define DMP_GENERIC_DFR2_FILTER3_FREQ                                                    0x01062233
#define DMP_GENERIC_DFR2_FILTER3_DEPTH                                                   0x01062234
#define DMP_GENERIC_DFR2_FILTER3_Q_FACTOR                                                0x01062235
#define DMP_GENERIC_DFR2_FILTER4_TYPE                                                    0x01062240
#define DMP_GENERIC_DFR2_FILTER4_ACTIVE                                                  0x01062241
#define DMP_GENERIC_DFR2_FILTER4_CLEAR                                                   0x01062242
#define DMP_GENERIC_DFR2_FILTER4_FREQ                                                    0x01062243
#define DMP_GENERIC_DFR2_FILTER4_DEPTH                                                   0x01062244
#define DMP_GENERIC_DFR2_FILTER4_Q_FACTOR                                                0x01062245
#define DMP_GENERIC_DFR2_FILTER5_TYPE                                                    0x01062250
#define DMP_GENERIC_DFR2_FILTER5_ACTIVE                                                  0x01062251
#define DMP_GENERIC_DFR2_FILTER5_CLEAR                                                   0x01062252
#define DMP_GENERIC_DFR2_FILTER5_FREQ                                                    0x01062253
#define DMP_GENERIC_DFR2_FILTER5_DEPTH                                                   0x01062254
#define DMP_GENERIC_DFR2_FILTER5_Q_FACTOR                                                0x01062255
#define DMP_GENERIC_DFR2_FILTER6_TYPE                                                    0x01062260
#define DMP_GENERIC_DFR2_FILTER6_ACTIVE                                                  0x01062261
#define DMP_GENERIC_DFR2_FILTER6_CLEAR                                                   0x01062262
#define DMP_GENERIC_DFR2_FILTER6_FREQ                                                    0x01062263
#define DMP_GENERIC_DFR2_FILTER6_DEPTH                                                   0x01062264
#define DMP_GENERIC_DFR2_FILTER6_Q_FACTOR                                                0x01062265
#define DMP_GENERIC_DFR2_FILTER7_TYPE                                                    0x01062270
#define DMP_GENERIC_DFR2_FILTER7_ACTIVE                                                  0x01062271
#define DMP_GENERIC_DFR2_FILTER7_CLEAR                                                   0x01062272
#define DMP_GENERIC_DFR2_FILTER7_FREQ                                                    0x01062273
#define DMP_GENERIC_DFR2_FILTER7_DEPTH                                                   0x01062274
#define DMP_GENERIC_DFR2_FILTER7_Q_FACTOR                                                0x01062275
#define DMP_GENERIC_DFR2_FILTER8_TYPE                                                    0x01062280
#define DMP_GENERIC_DFR2_FILTER8_ACTIVE                                                  0x01062281
#define DMP_GENERIC_DFR2_FILTER8_CLEAR                                                   0x01062282
#define DMP_GENERIC_DFR2_FILTER8_FREQ                                                    0x01062283
#define DMP_GENERIC_DFR2_FILTER8_DEPTH                                                   0x01062284
#define DMP_GENERIC_DFR2_FILTER8_Q_FACTOR                                                0x01062285
#define DMP_GENERIC_DFR2_FILTER9_TYPE                                                    0x01062290
#define DMP_GENERIC_DFR2_FILTER9_ACTIVE                                                  0x01062291
#define DMP_GENERIC_DFR2_FILTER9_CLEAR                                                   0x01062292
#define DMP_GENERIC_DFR2_FILTER9_FREQ                                                    0x01062293
#define DMP_GENERIC_DFR2_FILTER9_DEPTH                                                   0x01062294
#define DMP_GENERIC_DFR2_FILTER9_Q_FACTOR                                                0x01062295
#define DMP_GENERIC_DFR2_FILTER10_TYPE                                                   0x010622A0
#define DMP_GENERIC_DFR2_FILTER10_ACTIVE                                                 0x010622A1
#define DMP_GENERIC_DFR2_FILTER10_CLEAR                                                  0x010622A2
#define DMP_GENERIC_DFR2_FILTER10_FREQ                                                   0x010622A3
#define DMP_GENERIC_DFR2_FILTER10_DEPTH                                                  0x010622A4
#define DMP_GENERIC_DFR2_FILTER10_Q_FACTOR                                               0x010622A5
#define DMP_GENERIC_DFR2_FILTER11_TYPE                                                   0x010622B0
#define DMP_GENERIC_DFR2_FILTER11_ACTIVE                                                 0x010622B1
#define DMP_GENERIC_DFR2_FILTER11_CLEAR                                                  0x010622B2
#define DMP_GENERIC_DFR2_FILTER11_FREQ                                                   0x010622B3
#define DMP_GENERIC_DFR2_FILTER11_DEPTH                                                  0x010622B4
#define DMP_GENERIC_DFR2_FILTER11_Q_FACTOR                                               0x010622B5
#define DMP_GENERIC_DFR2_FILTER12_TYPE                                                   0x010622C0
#define DMP_GENERIC_DFR2_FILTER12_ACTIVE                                                 0x010622C1
#define DMP_GENERIC_DFR2_FILTER12_CLEAR                                                  0x010622C2
#define DMP_GENERIC_DFR2_FILTER12_FREQ                                                   0x010622C3
#define DMP_GENERIC_DFR2_FILTER12_DEPTH                                                  0x010622C4
#define DMP_GENERIC_DFR2_FILTER12_Q_FACTOR                                               0x010622C5
#define DMP_GENERIC_DFR2_FILTER13_TYPE                                                   0x010622D0
#define DMP_GENERIC_DFR2_FILTER13_ACTIVE                                                 0x010622D1
#define DMP_GENERIC_DFR2_FILTER13_CLEAR                                                  0x010622D2
#define DMP_GENERIC_DFR2_FILTER13_FREQ                                                   0x010622D3
#define DMP_GENERIC_DFR2_FILTER13_DEPTH                                                  0x010622D4
#define DMP_GENERIC_DFR2_FILTER13_Q_FACTOR                                               0x010622D5
#define DMP_GENERIC_DFR2_FILTER14_TYPE                                                   0x010622E0
#define DMP_GENERIC_DFR2_FILTER14_ACTIVE                                                 0x010622E1
#define DMP_GENERIC_DFR2_FILTER14_CLEAR                                                  0x010622E2
#define DMP_GENERIC_DFR2_FILTER14_FREQ                                                   0x010622E3
#define DMP_GENERIC_DFR2_FILTER14_DEPTH                                                  0x010622E4
#define DMP_GENERIC_DFR2_FILTER14_Q_FACTOR                                               0x010622E5
#define DMP_GENERIC_DFR2_FILTER15_TYPE                                                   0x010622F0
#define DMP_GENERIC_DFR2_FILTER15_ACTIVE                                                 0x010622F1
#define DMP_GENERIC_DFR2_FILTER15_CLEAR                                                  0x010622F2
#define DMP_GENERIC_DFR2_FILTER15_FREQ                                                   0x010622F3
#define DMP_GENERIC_DFR2_FILTER15_DEPTH                                                  0x010622F4
#define DMP_GENERIC_DFR2_FILTER15_Q_FACTOR                                               0x010622F5

#ifdef __cplusplus
}
#endif


/*! @} */

#endif //DMP_DEPRECATED_DFR_ADDR_DEFINITIONS_H
