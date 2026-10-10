# BookPageNumber

양면 인쇄로 한 장에 네 페이지를 배치하는 책자용 페이지 순서를 계산하는 C++ 콘솔 프로그램입니다.

## 사용 흐름

1. 전체 페이지 수를 입력합니다.
2. 네 페이지 단위로 맞추기 위한 빈 페이지와 필요한 종이 장수를 계산합니다.
3. 인쇄할 페이지의 배치 순서를 출력합니다. 빈 페이지는 `0`으로 표시합니다.

## 프로젝트 열기

Visual Studio에서 [PamphletPage.sln](PamphletPage/PamphletPage.sln)을 열고 콘솔 프로젝트를 빌드·실행합니다. 프로젝트 설정은 v142 도구 집합을 사용합니다.

핵심 계산 로직은 [PamphletPage.cpp](PamphletPage/PamphletPage/PamphletPage.cpp)에 있습니다. 학습용 구현으로, 입력 범위와 예외 처리는 별도 검토가 필요합니다.
