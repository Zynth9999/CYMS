<h1 align="center">CYMS - Cheap Yellow Menu System</h1>


<h1 align="center">CYMS Project started 19/10/2024 Written by Jan Dróżdż</h1>

<h1 align="center">Made with the CYD and Ease in mind</h1>

![GitHub Repo stars](https://img.shields.io/github/stars/Zynth9999/CYMS?style=for-the-badge) ![GitHub forks](https://img.shields.io/github/forks/Zynth9999/CYMS?style=for-the-badge) ![GitHub followers](https://img.shields.io/github/followers/zynth9999?style=for-the-badge) ![Static Badge](https://img.shields.io/badge/release-v0.01.2-brightgreen?style=for-the-badge) ![GitHub last commit](https://img.shields.io/github/last-commit/Zynth9999/CYMS?display_timestamp=author&style=for-the-badge) ![GitHub contributors](https://img.shields.io/github/contributors/Zynth9999/CYMS?style=for-the-badge)

<p align="center">
  <img src="https://raw.githubusercontent.com/Zynth9999/CYMS/refs/heads/main/cyms240.png" alt="CYMS display GIF" width="400">
</p>
---

# 👀 Overview

CYMS (Cheap Yellow Menu System) is an open-source library tailored for creating highly customizable menu systems on the **Cheap Yellow Display (CYD)**. Designed with **ease of use** and **performance** in mind, CYMS allows developers to rapidly design intuitive, responsive UIs for embedded systems using the ESP32.

Built on top of the **bb_spi_lcd** driver, CYMS takes advantage of its low-level optimizations for fast and smooth rendering, while offering an easy-to-use API for crafting menu systems and widgets.

This library has all the features of **bb_spi_lcd** like:
- **Backbuffer operations** for smoother UI.
- Built-in **touch support** for enhanced interaction.
- Support for displaying **Windows format BMP files**.

---

<p align="center">
  <img src="https://private-user-images.githubusercontent.com/1562562/239638619-76c3d481-2523-4b6f-881c-2e29f9368cd0.png?jwt=eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3Mjk0Mjk1NDAsIm5iZiI6MTcyOTQyOTI0MCwicGF0aCI6Ii8xNTYyNTYyLzIzOTYzODYxOS03NmMzZDQ4MS0yNTIzLTRiNmYtODgxYy0yZTI5ZjkzNjhjZDAucG5nP1gtQW16LUFsZ29yaXRobT1BV1M0LUhNQUMtU0hBMjU2JlgtQW16LUNyZWRlbnRpYWw9QUtJQVZDT0RZTFNBNTNQUUs0WkElMkYyMDI0MTAyMCUyRnVzLWVhc3QtMSUyRnMzJTJGYXdzNF9yZXF1ZXN0JlgtQW16LURhdGU9MjAyNDEwMjBUMTMwMDQwWiZYLUFtei1FeHBpcmVzPTMwMCZYLUFtei1TaWduYXR1cmU9ZDY2NTQ2MWRmODMzNjA5MjBiMmU0NTE4MzEzNzI5MTJkZWJlMWVmZTVjNDZhZGM2MmJhNzM3YWU2ZTZjMWQ4ZCZYLUFtei1TaWduZWRIZWFkZXJzPWhvc3QifQ.h88TV0Mk_K-P-inbWKVOfc0egXX86wR1v09zWbLPjM4" alt="CYMS Widgets GIF" width="400">
</p>

---

# 🔧 Features:

CYMS comes packed with features that make creating menus easy and fast.

- **Supports all boards that bb_spi_lcd supports**
- **Easy to use API** for menu creation
- **Styling widgets**, a lot of ways to style your widgets
- **Widget library**, Build interfaces using:
  - Buttons
  - Labels
  - Sliders
  - Counters
  - Linear graphs
    
- **Fast UI's** leveraging bb_spi_lcd for high-speed rendering
- **Built-in 16x16 monochrome icons** for:
  - Back arrow
  - Home
  - WiFi / No WiFi
  - Bluetooth / No Bluetooth
  - Reboot
    
- **Lightweight and modular** design, allowing flexible inclusion widgets as needed

Stay tuned for future updates! 🎉

---

<p align="center">
  <img src="https://github.com/Zynth9999/CYMS/blob/main/20241020_133250.jpg?raw=true" alt="CYMS Widgets GIF" width="400">
</p>

---

# 📥 Installation

Currently, **CYMS** is designed for use with **Arduino IDE**. Simply follow these steps to get started:

1. **Download the latest release** from the [GitHub releases page](https://github.com/Zynth9999/CYMS/releases).
2. In Arduino IDE, go to **Sketch → Include Library → Add .ZIP Library...**.
3. Select the downloaded `.zip` file and click **Open**.
4. You are ready to start building menus with CYMS!

> **Note:** PlatformIO support is coming soon! 🚀

<p align="center">
  <img src="https://via.placeholder.com/400x200?text=Installation+gif" alt="CYMS Widgets GIF" width="400">
</p>

---

# 🤝 Contributing

Contributions are welcome!

To contribute:
1. **Fork** the repository.
2. Create a new branch: `git checkout -b feature/your-feature`.
3. Make your changes and **commit**: `git commit -m 'Add feature'`.
4. Push your changes: `git push origin feature/your-feature`.
5. Open a **pull request**.

Check out the **Wiki** for guidelines on contributing code or improving the documentation.

---

---

# 💡 Some Information

For additional documentation and FAQs, visit the **[CYMS Wiki](https://github.com/Zynth9999/CYMS/wiki)**.

Feel free to submit issues if you encounter any bugs or need assistance.

---

# 📝 License

CYMS is licensed under the [**GNU Affero General Public License v3.0**](https://www.gnu.org/licenses/agpl-3.0.html), ensuring it remains free and open for everyone to use and modify.


---

# 🙏 Acknowledgements

- Thanks to Laurence Bank for his amazing [**bb_spi_lcd**](https://github.com/bitbank2/bb_spi_lcd) library on which this project is based on

---

# 📞 Contact

For any questions, suggestions, or issues, feel free to reach out via:

- **Discord**: @zynthrodak
- **Email**: janekboxs@outlook.com, jasiek.drozdz12@gmail.com

Stay connected for more updates and features! 🎉

---
