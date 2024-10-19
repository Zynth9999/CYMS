<h1 align="center">CYMS - Cheap Yellow Menu System</h1>


<h1 align="center">CYMS Project started 19/10/2024 Written by Jan Dróżdż</h1>

<h1 align="center">Made with the CYD and Ease in mind</h1>

![GitHub Repo stars](https://img.shields.io/github/stars/Zynth9999/CYMS?style=for-the-badge) ![GitHub forks](https://img.shields.io/github/forks/Zynth9999/CYMS?style=for-the-badge) ![GitHub followers](https://img.shields.io/github/followers/zynth9999?style=for-the-badge) ![Static Badge](https://img.shields.io/badge/release-v0.01.0-brightgreen?style=for-the-badge) ![GitHub last commit](https://img.shields.io/github/last-commit/Zynth9999/CYMS?display_timestamp=author&style=for-the-badge) ![GitHub contributors](https://img.shields.io/github/contributors/Zynth9999/CYMS?style=for-the-badge)

## Table of Contents
- [Overview](#overview)
- [Some information](#some-information)
- [Contributing](#contributing)
- [Features](#features)
- [Installation](#Installation)
- [License](#license)
- [Acknowledgements](#acknowledgements)
- [Contact](#contact)

# Overview

**CYMS** is designed for effortless creation of menus on the **Cheap Yellow Display (CYD)**, offering a rich set of functions and an easy-to-use API.
Built on top of the high-performance **bb_spi_lcd** display driver, CYMS takes advantage of **bb_spi_lcd's** optimizations, making it ideal for the **CYD**.
This library has all the features of **bb_spi_lcd** like:
- displaying **Windows format BMP files**
- **built-in touch** support for the CYD
- **backbuffer (RAM) operations** for smooth UI renering

# Some information

CYMS provides a good looking and snappy interface for various functions for the CYD.

Check out the Wiki for more documentation

The FAQ can be accessed on the Wiki.

Feel free to post any issues if any arise.

# Contributing
Contributions are welcome, not just in the form of code but also with regards to the Wiki.

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/your-feature`).
3. Make your changes.
4. Commit your changes (`git commit -m 'Add some feature'`).
5. Push to the branch (`git push origin feature/your-feature`).
6. Open a pull request.

If you think something is bad about CYMS or its Wiki, feel free to send a PR, this project is Open Source after all.

## Features:
- **Supports most CYD variants** (All the 2.8" boards with resistive touch)
- **Easy to use API** for menu creation
- **Styling widgets**
- **Rich library of widgets** including
   - **Buttons**
   - **Labels**
   - **Sliders**
   - **Counters**
   - **Linear graphs**

- Specifically made for the CYD and CYD2USB
- Built-in **16x16 monochrome** icons for common use cases such as:
   - ``Back arrow``
   - ``Home icon``
   - ``Reboot icon``
   - ``WiFi icon``
   - ``No WiFi icon``
   - ``BT icon``
   - ``No BT icon``

# Installation

Simply, download the latest release, then import as zip library in Arduino IDE, no PIO support YET

# License

CYMS is **Free Software** and released under the [**GNU Affero General Public License v3.0**](https://www.gnu.org/licenses/agpl-3.0.html).

# Acknowledgements

- Thanks to Laurence Bank for his amazing [**bb_spi_lcd**](https://github.com/bitbank2/bb_spi_lcd) library on which this project is based on

# Contact
- Discord: @zynthrodak
- E-mail: janekboxs@outlook.com + jasiek.drozdz12@gmail.com
