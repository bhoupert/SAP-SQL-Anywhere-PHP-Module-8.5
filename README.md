> [!WARNING]
> **Unofficial AI-Assisted Build**
>
> This project provides unofficial builds of the SAP SQL Anywhere PHP extension for PHP 8.5.
>
> The binaries were produced from SAP's publicly available source code using an AI-assisted ("vibe coded") porting and compilation process. While basic testing has been performed, these builds have **not** undergone comprehensive validation.
>
> **Stability, reliability, performance, and security are not guaranteed.**
>
> Use of these binaries in production environments may expose you to compatibility issues, unexpected behavior, crashes, or data integrity risks.
>
> **Use at your own risk.** Thorough testing and independent validation are strongly recommended before any production deployment.


# SAP SQL Anywhere PHP Module for PHP 8.5 (Unofficial Build)

## Overview

This repository contains unofficial builds of the SAP SQL Anywhere PHP extension for PHP 8.5.

The extension was compiled from the original **SAP SQL Anywhere PHP Module** source code, obtained from SAP's official distribution. The original source code is released under the **Apache License, Version 2.0**.

The goal of this project is to provide experimental binaries compatible with PHP 8.5, as official builds are not currently available.

## Contents

### 32-bit Builds (`Compilation 8.5/bin32`)

* `php-8.5.6_sqlanywhere.dll` — Thread Safe (TS)
* `php-8.5.6_sqlanywhere_nts.dll` — Non Thread Safe (NTS)

### 64-bit Builds (`Compilation 8.5/bin64`)

* `php-8.5.6_sqlanywhere.dll` — Thread Safe (TS)
* `php-8.5.6_sqlanywhere_nts.dll` — Non Thread Safe (NTS)

## Origin of the Source Code

The source code used for these builds was downloaded from SAP's official documentation and support resources:

* SAP SQL Anywhere PHP Module source package (https://help.sap.com/docs/SUPPORT_CONTENT/sqlany/3362971282.html?locale=en-US)
* Licensed under the Apache License, Version 2.0

All copyrights and intellectual property rights remain the property of their respective owners.

This repository only provides rebuilt binaries based on the publicly available source code.

## Build Process

These binaries were produced using an AI-assisted development workflow ("vibe coding").

The original SAP source code was adapted and compiled with the assistance of OpenAI Codex in order to restore compatibility with PHP 8.5.

Because the work was largely AI-assisted and has not undergone extensive validation, users should consider these builds experimental.

## Testing Status

At the time of writing:

* The 64-bit builds have been successfully tested on a local CodeIgniter application running PHP 8.5.
* Basic connectivity and usage scenarios worked as expected during limited testing.

However, no exhaustive test suite has been executed.

## Important Disclaimer

⚠️ **These binaries are unofficial and experimental.**

⚠️ **They were generated through an AI-assisted ("vibe coded") porting effort.**

⚠️ **Stability, reliability, correctness, performance, and security are NOT guaranteed.**

The extension may contain:

* Undiscovered bugs
* Compatibility issues
* Memory management problems
* Thread-safety issues
* Runtime crashes
* Data corruption risks

## Production Usage Warning

**Use at your own risk.**

These binaries should be considered suitable for:

* Development environments
* Personal projects
* Testing and evaluation purposes

They are **not recommended for production environments** unless you have performed your own thorough validation, testing, code review, and risk assessment.

Neither SAP nor the maintainer of this repository provides any warranty regarding these builds.

## License

The original SAP SQL Anywhere PHP Module source code is licensed under the Apache License, Version 2.0.

This repository distributes compiled binaries derived from that source code and any accompanying build scripts or modifications under the same license unless otherwise stated.

See the LICENSE file for details.
