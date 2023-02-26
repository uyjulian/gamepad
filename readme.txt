 1 : A
 2 : B
 3 : X
 4 : Y
 5 : Left Shoulder
 6 : Right Shoulder
 7 : Left Trigger
 8 : Right Trigger
 9 : back
10 : start
11 : Left thumb
12 : right thumb

デジタル十時キー
ハットスイッチ


Left X X軸
Left Y Y軸
Right X Z軸
Right Y Z軸回転


軸がない場合はハットスイッチが左に割り当てられる



class GamepadPort
{
	function initialize( hWnd : HWND );
	function getController( index : int ) : Gamepad
	property count : int {getter}
};

class Gamepad
{
	function update();

	property name : string {getter}
	property type : int {getter}

	// アナログ値 0.0 〜 1.0
	property leftTrigger : real {getter}
	property rightTrigger : real {getter}
	property leftThumbStickX : real {getter}
	property leftThumbStickY : real {getter}
	property rightThumbStickX : real {getter}
	property rightThumbStickY : real {getter}
	property leftVibration : real {setter}
	property rightVibration : real {setter}

	// ボタンの押下状態
	property keyState : int {getter}

	// エッジ検出用カウンタ値
	// 押され続けているかどうか gpTouchDown より大きいかどうかで判定
	// 0 の時 離された瞬間、1の時押された瞬間、押されている時間が長いほど値は大きくなる
	// また、押されていない時間が長いほど、負の値で値が小さくなる
	// val >= gpTouchDown : 押されている (値が大きいほど長く押されている
	// val <= gpTouchNo : 押されていない (値が小さいほど長く離されている
	// val == gpTouchDown 押された瞬間
	// val == gpTouchLiftoff : 離された瞬間
	property analogLeftUpCount : int {getter}
	property analogLeftDownCount : int {getter}
	property analogLeftLeftCount : int {getter}
	property analogLeftRightCount : int {getter}
	property analogRightUpCount : int {getter}
	property analogRightDownCount : int {getter}
	property analogRightLeftCount : int {getter}
	property analogRightRightCount : int {getter}
	property degitalUpCount : int {getter}
	property degitalDownCount : int {getter}
	property degitalLeftCount : int {getter}
	property degitalRightCount : int {getter}
	property buttonStartCount : int {getter}
	property buttonBackCount : int {getter}
	property buttonLeftThumbCount : int {getter}
	property buttonRightThumbCount : int {getter}
	property buttonLeftShoulderCount : int {getter}
	property buttonLeftTriggerCount : int {getter}
	property buttonRightShoulderCount : int {getter}
	property buttonRightTriggerCount : int {getter}
	property buttonACount : int {getter}
	property buttonBCount : int {getter}
	property buttonXCount : int {getter}
	property buttonYCount : int {getter}
}:
// 定義済み定数値
const gpDInput = 3, gpFFDInput = 2, gpXInput = 1,
	gpButtonDpadUp = 0x00000001, gpButtonDpadDown = 0x00000002, gpButtonDpadLeft = 0x00000004,
	gpButtonDpadRight = 0x00000008, gpButtonStart = 0x00000010, gpButtonBack = 0x00000020,
	gpButtonLeftThumb = 0x00000040, gpButtonRightThumb = 0x00000080, gpButtonLeftShoulder = 0x00000100,
	gpButtonRightShoulder = 0x00000200, gpButtonA = 0x00001000, gpButtonB = 0x00002000,
	gpButtonX = 0x00004000, gpButtonY = 0x00008000, gpLeftAxisX = 0x00010000, gpLeftAxisY = 0x00020000,
	gpRightAxisX = 0x00040000, gpRightAxisY = 0x00080000, gpLeftTrigger = 0x00100000, gpRightTrigger = 0x00200000,

	gpDIAxisX = 0, gpDIAxisY = 1, gpDIAxisZ = 2, gpDIAxisRotX = 3, gpDIAxisRotY = 4, gpDIAxisRotZ = 5,
	gpDISlider_0 = 6, gpDISlider_1 = 7, gpDIPOV_0 = 8, gpDIPOV_1 = 9, gpDIPOV_2 = 10, gpDIPOV_3 = 11,
	gpDIButton1 = 12, gpDIButton2 = 13, gpDIButton3 = 14, gpDIButton4 = 15, gpDIButton5 = 16,
	gpDIButton6 = 17, gpDIButton7 = 18, gpDIButton8 = 19, gpDIButton9 = 20, gpDIButton10 = 21,
	gpDIButton11 = 22, gpDIButton12 = 23, gpDIButton13 = 24, gpDIButton14 = 25, gpDIButton15 = 26,
	gpDIButton16 = 27, gpDIButton17 = 28, gpDIButton18 = 29, gpDIButton19 = 30, gpDIButton20 = 31,
	gpDIButton21 = 32, gpDIButton22 = 33, gpDIButton23 = 34, gpDIButton24 = 35, gpDIButton25 = 36,
	gpDIButton26 = 37, gpDIButton27 = 38, gpDIButton28 = 39, gpDIButton29 = 40, gpDIButton30 = 41,
	gpDIButton31 = 42, gpDIButton32 = 43, gpDIDisable = 44,

	gpTouchNo = 0, gpTouchDown = 1, gpTouchLiftoff = 0;


