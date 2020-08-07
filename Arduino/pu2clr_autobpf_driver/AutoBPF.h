/**
 * @file AutoBPF.h
 * @author Ricardo LIma Caratti (pu2clr@gmail.com)
 * @brief It is an Arduino Library to control the Auto Bandpass filter
 * @see Band Pass Filter circuit on https://github.com/pu2clr/auto_bpf_arduino
 * @version 1.0.1
 * @date 2020-08-07
 * 
 * This library can be freely distributed using the MIT Free Software model.
 * 
 * @copyright Copyright (c) 2020 Ricardo Lima Caratti
 */

#include <Arduino.h>

/**
 * @brief Auto banpass filter class (AutoBPF)
 * @details This class implements the functions to help you to control the Bandpass filter circuit.
 * @details to know more about the Auto bandpass filter see: https://github.com/pu2clr/auto_bpf_arduino
 * 
 */
class AutoBPF {

   protected:

    uint8_t s0;
    uint8_t s1;

    public:

    void setup(uint8_t pin_s0, uint8_t pin_s1);
    void setFilter(uint8_t filter);
    uint8_t getCurrentFilter();

};
