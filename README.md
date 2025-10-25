# The Legend of Zelda: Ocarina of Time

## OoT-DX

This is a modding fork of https://github.com/zeldaret/oot, which includes many QoL changes and improvements.

**Features:**
- Advanced debug features
- Alternative dungeon layouts (Master Quest)
- Child Quest (Experience the entirety of OoT as Young Link)
- Difficulty settings
- Extended viewport options (Widescreen 16:9, 21:9 and Hires modes)
- Language options
- Mirror mode
- Quality of life improvements
- Toggle extra save slots with Z

### Credits

**Brought to you by:**
- **Admentus:** Lead development
- **GhostlyDark:** Ideas, quality assurance and co-development

**Help and code snippets from:**
- [Decomp Discord](https://discord.zelda.deco.mp)
- [HackerOoT](https://github.com/HackerN64/HackerOoT)
- [Hylian Modding Discord](http://discord.gg/qQqDsM8)

**Acknowledgements and contributions:**
- **Aegiker:** Mirror mode concept
- **CYB3RTR0N & ShadowOne333:** JPEG widescreen backgrounds
- **LeSéducteur:** Buff Scrub actor
- **Nicko (Airi):** DK64 Expansion Pak warning display
- **Nokaubure:** autosave concept
- **OoT Randomizer:** Key chest textures
- **Skawo:** Font preloading, Fixes: Kakariko Gate Guard, Stalfos lag, Ingo text
- **spaztron64:** Hires mode concept
- **Syeo:** Deluxe chest textures
- **Syeo & Trueffel:** Molmauk actor

### Instructions

#### 1. Install build dependencies

Under Debian / Ubuntu (native or using WSL), install dependencies:

```bash
sudo apt-get update
sudo apt-get install git build-essential binutils-mips-linux-gnu curl python3 python3-pip python3-venv libpng-dev libxml2-dev
```

#### 2. Clone the repository

Clone using git:

```bash
git clone https://github.com/N64DX/oot-dx
```

Change directory:

```bash
cd oot-dx
```

#### 3. Prepare base ROMs

Place copies of your ROMs inside the `baseroms` folder. The file name for each ROM should be `baserom.z64`.
By default, `ntsc-1.0` is built. Additionally, `pal-1.0` is required for `ntsc-1.x` ROMs to be **built first**.

```
baseroms/pal-1.0/baserom.z64
baseroms/ntsc-1.0/baserom.z64
```

#### 4. Setup the ROM and build process

Setup and build `pal-1.0` and `ntsc-1.0` subsequently:

```bash
make setup -j VERSION=pal-1.0 && make setup -j VERSION=ntsc-1.0
make -j VERSION=pal-1.0 && make -j VERSION=ntsc-1.0
```

After doing so, you may also build a different ROM, e.g. `ique-cn`:

```bash
make setup -j VERSION=ique-cn
make -j VERSION=ique-cn
```

#### 5. Advanced building notes

Continue to build as much as possible if errors are encountered:

```bash
make -j -k VERSION=ntsc-1.0
```

Perform `clean` (remove build files of one ROM), `assetclean` (remove extracted files of one ROM) or `distclean` (remove all files inside the build, extracted and tools directories):

```bash
make clean VERSION=ntsc-1.0
make assetclean VERSION=ntsc-1.0
make distclean
```

Update and reset local git repository:

```bash
git fetch
git reset --hard origin/master
```

Clean local git repository:

```bash
git clean -df
```

#### 6. Batch build

Build all ROMs, which requires all `baseroms` to be present:

```
baseroms/ique-cn/baserom.z64
baseroms/gc-us/baserom.z64
baseroms/gc-us-mq/baserom.z64
baseroms/gc-eu/baserom.z64
baseroms/gc-eu-mq/baserom.z64
baseroms/gc-eu-mq-dbg/baserom.z64
baseroms/gc-jp/baserom.z64
baseroms/gc-jp-ce/baserom.z64
baseroms/gc-jp-mq/baserom.z64
baseroms/ntsc-1.0/baserom.z64
baseroms/ntsc-1.1/baserom.z64
baseroms/ntsc-1.2/baserom.z64
baseroms/pal-1.0/baserom.z64
baseroms/pal-1.1/baserom.z64
```

Setup all:

```bash
make setup -j VERSION=pal-1.0 && make setup -j VERSION=ntsc-1.0 && make setup -j VERSION=gc-eu && make setup -j VERSION=gc-eu-mq && make setup -j VERSION=gc-eu-mq-dbg && make setup -j VERSION=gc-jp && make setup -j VERSION=gc-jp-ce && make setup -j VERSION=gc-jp-mq && make setup -j VERSION=gc-us && make setup -j VERSION=gc-us-mq && make setup -j VERSION=ique-cn && make setup -j VERSION=ntsc-1.1 && make setup -j VERSION=ntsc-1.2 && make setup -j VERSION=pal-1.1 -j
```

Build all:

```bash
make -j VERSION=pal-1.0 && make -j VERSION=ntsc-1.0 && make -j VERSION=gc-eu && make -j VERSION=gc-eu-mq && make -j VERSION=gc-eu-mq-dbg && make -j VERSION=gc-jp && make -j VERSION=gc-jp-ce && make -j VERSION=gc-jp-mq && make -j VERSION=gc-us && make -j VERSION=gc-us-mq && make -j VERSION=ique-cn && make -j VERSION=ntsc-1.1 && make -j VERSION=ntsc-1.2 && make -j VERSION=pal-1.1 -j
```

#### 7. Debug features

To activate a stripped down debug mode in release builds, go into the vanilla options menu in the file select screen and press L. This mode offers:
- Change language: `L + D-Pad Left`
- Frame advance: `L + D-Pad Down`
- No clip: `L + D-Pad Right`
- Gain control during a cutscene: `D-Pad Right`
- Inventory editor: `L` (in pause screen)
- Map select: `L + R + Z`
- Save flag editing: Load a save file normally, open the map select and press `START`

Alternatively, it's possible to build any ROM with virtually all debug features:

```bash
make -j VERSION=ntsc-1.0 DEBUG_FEATURES=1
```

## Original README

[![Build Status][jenkins-badge]][jenkins] [![Decompilation Progress][progress-badge]][progress] [![Contributors][contributors-badge]][contributors] [![Discord Channel][discord-badge]][discord]

[jenkins]: https://jenkins.deco.mp/job/OOT/job/main
[jenkins-badge]: https://img.shields.io/jenkins/build?jobUrl=https%3A%2F%2Fjenkins.deco.mp%2Fjob%2FOOT%2Fjob%2Fmain

[progress]: https://zelda.deco.mp/games/oot
[progress-badge]: https://img.shields.io/endpoint?url=https://zelda.deco.mp/assets/csv/progress-oot-shield.json

[contributors]: https://github.com/zeldaret/oot/graphs/contributors
[contributors-badge]: https://img.shields.io/github/contributors/zeldaret/oot

[discord]: https://discord.zelda.deco.mp
[discord-badge]: https://img.shields.io/discord/688807550715560050?color=%237289DA&logo=discord&logoColor=%23FFFFFF

```diff
- WARNING! -

This repository is a work in progress, and while it can be used to make certain changes, it's still
constantly evolving. If you use it for modding purposes in its current state, please be aware that
the codebase can drastically change at any time. Also note that some parts of the ROM may not be
'shiftable' yet, so modifying them could be difficult at this point.
```

This is a WIP **decompilation** of ***The Legend of Zelda: Ocarina of Time***. The purpose of the project is to recreate a source code base for the game from scratch, using information found inside the game along with static and/or dynamic analysis. **It is not producing a PC port.** For more information you can get in touch with the team on our [Discord server][discord].

It builds the following versions:

| Name         | Build timestamp   | Description                               | MD5 hash of input ROM(s) |
|--------------|-------------------|-------------------------------------------|--------------------------|
| ntsc-1.0     | 98-10-21 04:56:31 | NTSC 1.0 (Japan/US)                       | `9f04c8e68534b870f707c247fa4b50fc`<br>`5bd1fe107bf8106b2ab6650abecd54d6` |
| ntsc-1.1     | 98-10-26 10:58:45 | NTSC 1.1 (Japan/US)                       | `1bf5f42b98c3e97948f01155f12e2d88`<br>`721fdcc6f5f34be55c43a807f2a16af4` |
| pal-1.0      | 98-11-10 14:34:22 | PAL 1.0 (Europe)                          | `e040de91a74b61e3201db0e2323f768a` |
| ntsc-1.2     | 98-11-12 18:17:03 | NTSC 1.2 (Japan/US)                       | `2258052847bdd056c8406a9ef6427f13`<br>`57a9719ad547c516342e1a15d5c28c3d` |
| pal-1.1      | 98-11-18 17:36:49 | PAL 1.1 (Europe)                          | `d714580dd74c2c033f5e1b6dc0aeac77` |
| gc-jp        | 02-10-29 23:49:53 | GameCube Japan                            | `33fb7852c180b18ea0b9620b630f413f` |
| gc-jp-mq     | 02-10-30 00:15:15 | GameCube Japan Master Quest               | `69895c5c78442260f6eafb2506dc482a` |
| gc-us        | 02-12-19 13:28:09 | GameCube US                               | `cd09029edcfb7c097ac01986a0f83d3f` |
| gc-us-mq     | 02-12-19 14:05:42 | GameCube US Master Quest                  | `da35577fe54579f6a266931cc75f512d` |
| gc-eu-mq-dbg | 03-02-21 00:16:31 | GameCube Europe/PAL Master Quest Debug    | `75e344f41c26ec2ec5ad92caa9e25629`<br>`8ca71e87de4ce5e9f6ec916202a623e9`<br>`f751d1a097764e2337b1ac9ba1e27699`<br>`dde376d47187b931820d5b2957cded14` |
| gc-eu        | 03-02-21 20:12:23 | GameCube Europe/PAL                       | `2c27b4e000e85fd78dbca551f1b1c965` |
| gc-eu-mq     | 03-02-21 20:37:19 | GameCube Europe/PAL Master Quest          | `1618403427e4344a57833043db5ce3c3` |
| gc-jp-ce     | 03-10-08 21:53:00 | GameCube Japan (Collector's Edition Disc) | `0c13e0449a28ea5b925cdb8af8d29768` |
| ique-cn      | 03-10-22 16:23:19 | iQue Player (Simplified Chinese)          | `0ab48b2d44a74b3bb2d384f6170c2742` |

The default version is `gc-eu-mq-dbg`, i.e. the GameCube Europe/PAL Master Quest Debug ROM.

**Note: This repository does not include any of the assets necessary to build the ROM. A prior copy of the game is required to extract the needed assets.**

**Website:** <https://zelda.deco.mp>

**Discord:** <https://discord.zelda.deco.mp>

## Installation

We recommend using WSL on Windows, or native Linux, which the rest of this readme describes. We currently have instructions for

* [Windows](#Windows), with and without WSL
* [macOS](docs/BUILDING_MACOS.md)
* [Linux](#Linux-Native-or-under-WSL--VM), natively or using WSL / VM
* [Docker](docs/BUILDING_DOCKER.md)

(These will also depend on the Linux instructions.)
Some of these may also be out of date or unmaintained; usually our contributors use WSL, Linux, and macOS, so these instructions should be up to date.

### Windows

For Windows 10 or 11, install WSL and a distribution by following this
[WSL Installation Guide](https://docs.microsoft.com/en-us/windows/wsl/install).
We recommend using Ubuntu 20.04 as the Linux distribution.

For older versions of Windows, install a Linux VM or refer to [Docker](docs/BUILDING_DOCKER.md) instructions.


### Linux (Native or under WSL / VM)

#### 1. Install build dependencies

The build process has the following package requirements:

* git
* build-essential
* binutils-mips-linux-gnu
* curl
* python3
* python3-pip
* python3-venv
* libpng-dev
* libxml2-dev

Under Debian / Ubuntu (which we recommend using), you can install them with the following commands:

```bash
sudo apt-get update
sudo apt-get install git build-essential binutils-mips-linux-gnu curl python3 python3-pip python3-venv libpng-dev libxml2-dev
```

If you are using GCC as the compiler for Ocarina of Time, you will also need:

* gcc-mips-linux-gnu

#### 2. Clone the repository

**N.B.** If using WSL, we strongly encourage you to clone into WSL's Linux filesystem using Linux's `git`.
Cloning into the Windows filesystem will result in much slower read/write speeds, and often causes issues when Windows copies the files with the wrong line endings, which the compiler IDO cannot handle correctly.

Clone `https://github.com/zeldaret/oot.git` where you wish to have the project, with a command such as:

```bash
git clone https://github.com/zeldaret/oot.git
```

This will copy the GitHub repository contents into a new folder in the current directory called `oot`. Change into this directory before doing anything else:

```bash
cd oot
```

#### 3. Prepare a base ROM

Place a copy of the Master Quest (Debug) ROM inside the `baseroms/gc-eu-mq-dbg/` folder.
If you are under WSL, you can run the command `explorer.exe .` to open the current directory in the Windows file explorer.

Rename the file to `baserom.z64`, `baserom.n64` or `baserom.v64`, depending on the original extension.

#### 4. Setup the ROM and build process

Setup and extract everything from your ROM with the following command:

```bash
make setup
```

This downloads some dependencies (from pip), and compiles tools for the build process.
Then it generates a new ROM `baseroms/gc-eu-mq-dbg/baserom-decompressed.z64` that will have the overdump removed and the header patched.
It will also extract the individual assets from the ROM.

#### 5. Build the ROM

Run make to build the ROM.
Make sure your path to the project is not too long, otherwise this process may error.

```bash
make
```

If all goes well, a new ROM should be built at `build/gc-eu-mq-dbg/oot-gc-eu-mq-dbg.z64`, and the following text printed:

```bash
build/gc-eu-mq-dbg/oot-gc-eu-mq-dbg.z64: OK
```

If you instead see the following:

```bash
build/gc-eu-mq-dbg/oot-gc-eu-mq-dbg.z64: FAILED
md5sum: WARNING: 1 computed checksum did NOT match
```

This means that the built ROM isn't the same as the base one, so something went wrong or some part of the code doesn't match.

**NOTE:** to speed up the build, you can either:

* pass `-jN` to `make setup` and `make`, where N is the number of threads to use in the build. The generally-accepted wisdom is to use the number of virtual cores your computer has.
* pass `-j` to `make setup` and `make`, to use as many threads as possible, but beware that this can use too much memory on lower-end systems.

Both of these have the disadvantage that the ordering of the terminal output is scrambled, so for debugging it is best to stick to one thread (i.e. not pass `-j` or `-jN`).

## Changing build options

The project Makefile is fairly configurable and can be used to build other versions of the game or prepare the repo for modding.
See the options outlined at the top of the Makefile for more information.

## Contributing

All contributions are welcome. This is a group effort, and even small contributions can make a difference.
Some tasks also don't require much knowledge to get started.

Most discussions happen on our [Discord Server][discord], where you are welcome to ask if you need help getting started, or if you have any questions regarding this project and other decompilation projects.
