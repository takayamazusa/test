/**
 * RunNormal.cpp
 * 通常走行クラス
 */

#include "RunNormal.h"
#include "RunMain.h"
#include "ev3api.h"

/**
 * コンストラクタ
 */
RunNormal::RunNormal()
{
}

/**
*処理開始
*/
void RunNormal::run() {
	move(50);
}

