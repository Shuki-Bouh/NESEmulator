# NESEmu

NESEmu is an easy implamentation of an emulator of a NES. It is an educative project and aims to understand the principe of emulation.

## Table of content
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation
### 1. Clone the repository:
```bash
 git clone https://github.com/Shuki-Bouh/NESEmulator.git
```

### 2. Install dependencies:
```bash
 sudo apt update && sudo apt upgrade
 sudo apt install cmake
 sudo apt install g++ 
 sudo apt install catch2
 ```

### 3. Compile the project:
In the root of the project (./NESEmu/):
 ```
    mkdir build
    cd build
    cmake ..
 ```

## Usage
To run the project, use the following command:
```bash
  ./NESEmu
```

## Contributing
1. Fork the repository.
2. Create a new branch: `git checkout -b feature-name`.
3. Make your changes.
4. Please make sure you have used the linter.xml file
5. Push your branch: `git push origin feature-name`. 
6. Create a pull request.

## License
This project is licensed under the [GPL License](LICENSE).
