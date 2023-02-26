/****************************************************************************/
/*! @file
@brief 

-----------------------------------------------------------------------------
	Copyright (C) 2008 Takenori Imoto. All rights reserved.
	( http://www.kaede-software.com/ )
-----------------------------------------------------------------------------
@author		T.Imoto
@date		2008/01/21
@note

ソースコード形式であれバイナリ形式であれ、変更の有無に関わらず、以下の条件を満
たす限りにおいて、再配布および使用を許可します:

   1. ソースコード形式で再配布する場合、上記著作権表示、本条件書および下記責任
      限定規定を必ず含めてください。
   2. バイナリ形式で再配布する場合、上記著作権表示、本条件書および下記責任限定
      規定を、配布物とともに提供される文書および他の資料に必ず含めてください。

本ソフトウェアは著作権者によって、”現状のまま”提供されるものとします。本ソフ
トウェアについては、明示黙示を問わず、商用品として通常そなえるべき品質をそなえ
ているとの保証も、特定の目的に適合するとの保証を含め、何の保証もなされません。
事由のいかんを問わず、損害発生の原因いかんを問わず、且つ、責任の根拠が契約であ
るか厳格責任であるか (過失その他) 不法行為であるかを問わず、著作権者は仮にその
ような損害が発生する可能性を知らされていたとしても、本ソフトウェアの使用から発
生した直接損害、間接損害、偶発的な損害、特別損害、懲罰的損害または結果損害のい
ずれに対しても (代替品または サービスの提供;使用機会、データまたは利益の損失の
補償; または、業務の中断に対する補償を含め)責任をいっさい負いません。

*****************************************************************************/

#ifndef __GAME_PAD_NULL_INPUT_DEVICE_H__
#define __GAME_PAD_NULL_INPUT_DEVICE_H__

#include "GamePadInputDeviceBase.h"

namespace gamepad {

class CNullInputDevice : public CInputDeviceBase
{
public:
	CNullInputDevice(CInputDevicePort* port) : CInputDeviceBase(port) {}
	virtual ~CNullInputDevice() {}

	virtual bool Initialize( HWND hWnd ) { return true; }

	virtual void Update() {}

	virtual long GetTypeOfDevice() const { return IDT_Null; }

	virtual unsigned long GetKeyState() const { return 0; }
	virtual double GetLeftTrigger() const { return 0.0; }
	virtual double GetRightTrigger() const { return 0.0; }
	virtual double GetLeftThumbStickX() const { return 0.0; }
	virtual double GetLeftThumbStickY() const { return 0.0; }
	virtual double GetRightThumbStickX() const { return 0.0; }
	virtual double GetRightThumbStickY() const { return 0.0; }

	virtual void SetLeftVibration( double val ) {}
	virtual void SetRightVibration( double val ) {}

	virtual unsigned long Sensing() const { return 0; }
};

}; // namespace gamepad


#endif // __GAME_PAD_NULL_INPUT_DEVICE_H__

