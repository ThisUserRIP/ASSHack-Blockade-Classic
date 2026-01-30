#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "QzbgFpetBSEDhenswDkRQpQemqEf.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
namespace Rewired_Core::Rewired { struct ButtonLoopSet; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct SKrrZjnCrwAmuNrKjpiWkZtnRmf; };
namespace Rewired_Core { struct spZDJRewmbxAsUKXRWZDtdnqsYI; };
#include "yzACPDDxGCtCXzPebQMkoQYswDi.h"
namespace Rewired_Core { struct KVBYRrMkCsEDijOnPrfyxmKdjWB; };
#include "OzkBgRAmkWuaJLDyDJYRRUBYDNFT.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "Rewired_UpdateLoopType.h"
#include "Rewired_InputSource.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core
{
	struct FEiBDoFUdZlvtAemNbWuqFrnaKO : Rewired_Core::QzbgFpetBSEDhenswDkRQpQemqEf
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t lWxfoImINHDLmgyViyOPVNWRSpQL;
		int32_t yfOhRmaMWsOeEwaeWgrVbJjzyRKM;
		int32_t ZEVvlTebRkyILgSIbrIgMQTzNae;
		int32_t NTynfXMkRiDkmucTxYUcapbMjXAc;
		IL2CPP::Array<int16_t>* YvuxnPrsLahwcdEkyvqKCKPQmUT;
		Rewired_Core::Rewired::ButtonLoopSet* aLVbBiaINWgSwgUpCxgrnexMRdUC;
		IL2CPP::Array<int16_t>* xMWdFrqyfCsjDiiPXGtWWoKuVPe;
		IL2CPP::Array<int16_t>* uQybZhNHgMAqYEfCQoviTrBRbjqI;
		bool eRuLTolGdaQCeEkpKsgaoKXYdid;
		IL2CPP::Array<bool>* get_ButtonValues();
		void _ctor(Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* nativeJoystick, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo);
		void _ctor(Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* nativeJoystick, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo, Rewired_Core::yzACPDDxGCtCXzPebQMkoQYswDi type);
		void _ctor(Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB* nativeDevice, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo, Rewired_Core::yzACPDDxGCtCXzPebQMkoQYswDi type, int32_t buttonCount, int32_t axisCount, int32_t hatCount, int32_t ballCount);
		void pFqEeNdzCVoYGNaBpkbkVXEGNDNa(Rewired_Core::OzkBgRAmkWuaJLDyDJYRRUBYDNFT A_1, uint8_t A_2, int16_t A_3, double A_4);
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void UpdateFinished();
		int32_t get_JoystickId();
		int32_t get_ButtonCount();
		int32_t get_AxisCount();
		int32_t get_HatCount();
		int32_t get_BallCount();
		bool get_HasElements();
		Rewired_Core::Rewired::InputSource get_InputSource();
		bool get_HasEverReceivedInput();
		float GetAxisValue(int32_t A_1);
		int32_t GetAxisRawValue(int32_t A_1);
		bool GetButtonValue(int32_t A_1);
		int32_t GetHatValue(int32_t A_1);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetBallValue(int32_t A_1);
		void jtplUNfWoyXSJUktOfDKlfcvHpG(Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* A_1);
		void InitializeHaptic();
		void CloseDevice();
		float manmAjofTbuGOiPNYnAusGfryPW(int32_t A_1);
		int32_t uuOAwWNURXyKroJTXqNkrDlVfmj(int16_t A_1);
	};
}

