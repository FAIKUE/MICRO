/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*! @name PORTA15 (number 45), LED_RED_R_R
  @{ */
#define BOARD_INITPINS_LED_RED_R_R_GPIO GPIOA /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITPINS_LED_RED_R_R_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_LED_RED_R_R_PIN 15U    /*!<@brief PORTA pin index: 15 */
                                              /* @} */

/*! @name PORTA17 (number 47), LED_RED_R_L
  @{ */
#define BOARD_INITPINS_LED_RED_R_L_GPIO GPIOA /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITPINS_LED_RED_R_L_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_LED_RED_R_L_PIN 17U    /*!<@brief PORTA pin index: 17 */
                                              /* @} */

/*! @name PORTC10 (number 82), LED_BLUE_F_L
  @{ */
#define BOARD_INITPINS_LED_BLUE_F_L_GPIO GPIOC /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_BLUE_F_L_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_BLUE_F_L_PIN 10U    /*!<@brief PORTC pin index: 10 */
                                               /* @} */

/*! @name PORTC8 (number 80), LED_GREEN_F_L
  @{ */
#define BOARD_INITPINS_LED_GREEN_F_L_GPIO GPIOC /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_GREEN_F_L_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_GREEN_F_L_PIN 8U     /*!<@brief PORTC pin index: 8 */
                                                /* @} */

/*! @name PORTC9 (number 81), LED_RED_F_L
  @{ */
#define BOARD_INITPINS_LED_RED_F_L_GPIO GPIOC /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_RED_F_L_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_RED_F_L_PIN 9U     /*!<@brief PORTC pin index: 9 */
                                              /* @} */

/*! @name PORTC11 (number 83), LED_GREEN_F_R
  @{ */
#define BOARD_INITPINS_LED_GREEN_F_R_GPIO GPIOC /*!<@brief GPIO device name: GPIOC */
#define BOARD_INITPINS_LED_GREEN_F_R_PORT PORTC /*!<@brief PORT device name: PORTC */
#define BOARD_INITPINS_LED_GREEN_F_R_PIN 11U    /*!<@brief PORTC pin index: 11 */
                                                /* @} */

/*! @name PORTD2 (number 95), LED_RED_F_R
  @{ */
#define BOARD_INITPINS_LED_RED_F_R_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LED_RED_F_R_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LED_RED_F_R_PIN 2U     /*!<@brief PORTD pin index: 2 */
                                              /* @} */

/*! @name PORTD3 (number 96), LED_BLUE_F_R
  @{ */
#define BOARD_INITPINS_LED_BLUE_F_R_GPIO GPIOD /*!<@brief GPIO device name: GPIOD */
#define BOARD_INITPINS_LED_BLUE_F_R_PORT PORTD /*!<@brief PORT device name: PORTD */
#define BOARD_INITPINS_LED_BLUE_F_R_PIN 3U     /*!<@brief PORTD pin index: 3 */
                                               /* @} */

/*! @name PORTA16 (number 46), LED_RED_R_R_BREAK
  @{ */
#define BOARD_INITPINS_LED_RED_R_R_BREAK_GPIO GPIOA /*!<@brief GPIO device name: GPIOA */
#define BOARD_INITPINS_LED_RED_R_R_BREAK_PORT PORTA /*!<@brief PORT device name: PORTA */
#define BOARD_INITPINS_LED_RED_R_R_BREAK_PIN 16U    /*!<@brief PORTA pin index: 16 */
                                                    /* @} */

/*! @name PORTB0 (number 53), JS_RIGHT
  @{ */
#define BOARD_INITPINS_JS_RIGHT_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_JS_RIGHT_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_JS_RIGHT_PIN 0U     /*!<@brief PORTB pin index: 0 */
                                           /* @} */

/*! @name PORTB1 (number 54), JS_DOWN
  @{ */
#define BOARD_INITPINS_JS_DOWN_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_JS_DOWN_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_JS_DOWN_PIN 1U     /*!<@brief PORTB pin index: 1 */
                                          /* @} */

/*! @name PORTB2 (number 55), JS_UP
  @{ */
#define BOARD_INITPINS_JS_UP_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_JS_UP_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_JS_UP_PIN 2U     /*!<@brief PORTB pin index: 2 */
                                        /* @} */

/*! @name PORTB3 (number 56), JS_PUSH
  @{ */
#define BOARD_INITPINS_JS_PUSH_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_JS_PUSH_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_JS_PUSH_PIN 3U     /*!<@brief PORTB pin index: 3 */
                                          /* @} */

/*! @name PORTB9 (number 57), JS_LEFT
  @{ */
#define BOARD_INITPINS_JS_LEFT_GPIO GPIOB /*!<@brief GPIO device name: GPIOB */
#define BOARD_INITPINS_JS_LEFT_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_INITPINS_JS_LEFT_PIN 9U     /*!<@brief PORTB pin index: 9 */
                                          /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
