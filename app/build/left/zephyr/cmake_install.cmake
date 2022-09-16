# Install script for directory: /home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/zephyr

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/opt/zephyr-sdk/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/arch/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/lib/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/soc/arm/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/boards/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/subsys/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/drivers/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/CANopenNode/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/civetweb/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/cmsis/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/fatfs/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/atmel/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/espressif/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/hal_gigadevice/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/hal_nordic/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/nuvoton/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/quicklogic/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/hal_rpi_pico/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/stm32/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/telink/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/libmetal/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/littlefs/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/lvgl/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/lz4/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/mbedtls/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/mipi-sys-t/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/nanopb/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/nrf_hw_models/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/open-amp/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/segger/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/tflite-micro/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/tinycbor/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/tinycrypt/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/TraceRecorder/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/zscilib/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/modules/drivers/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/kernel/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/cmake/flash/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/cmake/usage/cmake_install.cmake")
  include("/home/gibbz/projects/under-construction/borne-keyboard/firmware/zmk/app/build/left/zephyr/cmake/reports/cmake_install.cmake")

endif()

