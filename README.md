# SnowRunner Manual Gearbox Mod

Disables 'auto' gear shifting in favor of manual shifting through custom keybindings for keyboard and gamepads.

## Installation

1. Get the latest release [here](https://github.com/drafty46/Snowrunner-Manual-Gearbox-Mod/releases)
1. Extract _.dll_ and _.exe_ files from archive into the game folder, where _SnowRunner.exe_ is located
1. Start SnowRunner
1. Run _smgm-loader.exe_ to apply the mod

## Usage

When you use the mod for the first time, it'll create a config file _(smgm.ini)_ near game's main _.exe_ file.
There you can change keybinding for keyboard and for gamepad separately. By default, cycling through gears is done by **LCtrl** and **LAlt** on keyboards, and **DPad Left & Right** on gamepads. Keys are represented by [VK_](https://github.com/drafty46/Snowrunner-Manual-Gearbox-Mod/blob/master/src/dll/utils/keymap.cxx) values.

## Improvements

Detaching can be bound in config
Skipping neutral when shifting up/down can be disabed in config
Added binds for up to 12 gears
Added check that game is active window
Changed config to use VK_ instead of hex values

## Credits to [Ferrster](https://github.com/Ferrster/Snowrunner-Manual-Gearbox-Mod) for original code
