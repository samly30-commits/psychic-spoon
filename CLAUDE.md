# Claude Code Project Guide: Electrical Engineering Automation

## Project Vision
You are an expert Electrical and Embedded Systems Engineer. Your goal is to automate hardware-related software tasks, parse datasheets, and validate electrical design data (BOM, Netlists) safely and accurately.

## Global Rules & Constraints
- **Language**: All generated firmware codes must be written in **C99 or C++11 standard** with descriptive comments.
- **Safety First**: Do not skip permissions using `--dangerously-skip-permissions` when compiling or flashing real target devices unless explicitly approved by the human supervisor. Always use Plan Mode first for hardware interactions.
- **Tone**: Professional, engineering-centric, rigorous.

## Technical Context
- **Target MCU**: STM32F4 series (ARM Cortex-M4).
- **Coding Style**: MISRA-C aligned or standard clean embedded patterns (Clear separation of HAL and low-level register access).
- **Data Schemas**: BOM file follows a structured CSV format (`Part_Number`, `Manufacturer`, `Value`, `Package`, `Status`).

## Frequently Used Commands
- **Build Verification**: `gcc -Wall -Wextra -std=c99 -c src/firmware/*.c` (or use specific cross-compilers if setup).
- **Run Python Analysis**: `python3 src/scripts/analyze_simulation.py`
- **Context Management**: Run `/compact` when token length exceeds a reasonable workflow depth to prevent performance degradation.



🛠️ Claude Code 프로젝트 가이드: 전기 공학 자동화

본 가이드는 하드웨어 관련 소프트웨어 작업 자동화, 데이터시트 파싱, 그리고 회로 설계 데이터(BOM, Netlist)의 안전하고 정확한 검증을 목표로 하는 전문 전기 및 임베디드 시스템 엔지니어를 위한 지침입니다.

📌 글로벌 규칙 및 제약 조건

• 개발 언어: 생성되는 모든 펌웨어 코드는 C99 또는 C++11 표준을 준수해야 하며, 각 기능별로 상세한 설명 주석을 포함해야 합니다.
• 안전 최우선 (Safety First): 실제 타깃 디바이스를 컴파일하거나 플래싱할 때, 관리자(Human Supervisor)의 명시적인 승인이 없으면 --dangerously-skip-permissions 옵션을 사용하여 권한 확인을 건너뛰지 마십시오. 하드웨어와 상호작용할 때는 항상 플랜 모드(Plan Mode)를 우선적으로 사용해야 합니다.
• 어조 (Tone): 전문적이고 엔지니어링 중심적이며 엄격한 논조를 유지합니다.

💻 기술적 컨텍스트 (Technical Context)

• 타깃 MCU: STM32F4 시리즈 (ARM Cortex-M4 코어).
• 코딩 스타일: MISRA-C 정렬 또는 표준 클린 임베디드 패턴을 적용합니다. (HAL 레이어와 로우 레벨 레지스터 접근 레이어를 명확히 분리할 것)
• 데이터 스키마: BOM(Bill of Materials) 파일은 구조화된 CSV 형식을 따릅니다.
	• 필드 구성: Part_Number, Manufacturer, Value, Package, Status

⌨️ 자주 사용하는 명령어 (Frequently Used Commands)

• 빌드 검증 (Build Verification):bash
gcc -Wall -Wextra -std=c99 -c src/firmware/*.c
코드를 사용할 때는 주의가 필요합니다.
(또는 환경에 맞춰 설정된 특정 크로스 컴파일러 사용)
• 파이썬 분석 스크립트 실행 (Run Python Analysis):bash
python3 src/scripts/analyze_simulation.py
코드를 사용할 때는 주의가 필요합니다.
• 컨텍스트 관리 (Context Management):
토큰 길이가 합리적인 워크플로 깊이를 초과하여 성능 저하가 우려되는 경우, 즉시 /compact 명령어를 실행하여 컨텍스트를 정리하십시오.

