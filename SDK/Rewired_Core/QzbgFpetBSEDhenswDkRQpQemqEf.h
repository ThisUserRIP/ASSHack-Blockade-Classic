#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core { struct KVBYRrMkCsEDijOnPrfyxmKdjWB; };
#include "yzACPDDxGCtCXzPebQMkoQYswDi.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core { struct spZDJRewmbxAsUKXRWZDtdnqsYI; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core { struct ZFkSPoRrPhTkgsPEScxHeDYfXDJB; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct SKrrZjnCrwAmuNrKjpiWkZtnRmf; };
namespace mscorlib::System { struct String; };
#include "Rewired_PidVid.h"
namespace Rewired_Core::Rewired { struct PidVid; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "auwvIvcBDbhOhmuldPTxydeShmq.h"
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core { struct qrIgtFyfVqiafzdViaksiFSzgeuQ; };

namespace Rewired_Core
{
	struct QzbgFpetBSEDhenswDkRQpQemqEf : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB* gBQYmjMDqTpXXqTMmitUIaOlxol;
		Rewired_Core::yzACPDDxGCtCXzPebQMkoQYswDi gPZxLtehLWSVXzAHRLMCniULExP;
		int32_t yCzBHTKhlZgsPlfPwfEULvyglBG;
		Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* lqfiScNvcmcKZSGKtQdyeFKmJWF;
		bool vtEkrkiAJjtqwXZCBkcBARNZaxUi;
		bool TIsvieQfRDuXmeiDRsCofRJrVpN;
		Rewired_Core::ZFkSPoRrPhTkgsPEScxHeDYfXDJB* bquImjLXcrgcaMtdisFwKczTtrE;
		bool APsCXcnEEDdLHbbaBLZWdtCWntA;
		int32_t SRtINdmUAFeXLoAzPazrbCefxK;
		IL2CPP::Array<float>* PdrkDiEWpGeFVlgvcHkSKJuwxqB;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		bool get_IsValid();
		void _ctor(Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB* nativeDevice, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* info, Rewired_Core::yzACPDDxGCtCXzPebQMkoQYswDi type);
		void pKLNoWCgVUqlRfCsOXaDmHUNbICB();
		void AyLOGbRzXjeFHCVKGWpggclDAqab();
		void NcCYuPzshdawNtGFUlKjtlExoqI();
		Rewired_Core::SKrrZjnCrwAmuNrKjpiWkZtnRmf* get_NativeJoystick();
		mscorlib::System::String* get_SystemName();
		mscorlib::System::String* get_FriendlyName();
		int32_t get_VendorId();
		int32_t get_ProductId();
		Rewired_Core::Rewired::PidVid get_PidVid();
		mscorlib::System::Guid get_InstanceGuid();
		Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq get_DeviceType();
		bool get_IsBluetoothDevice();
		Rewired_Core::Rewired::Controller_Extension* get_ControllerExtension();
		bool get_SupportsVibration();
		int32_t get_VibrationMotorCount();
		void Update(Rewired_Core::Rewired::UpdateLoopType A_1);
		void UpdateFinished();
		void Acquire();
		void Unacquire();
		bool IsAttached();
		bool Matches(Rewired_Core::qrIgtFyfVqiafzdViaksiFSzgeuQ* A_1);
		void SetVibration(int32_t A_1, float A_2, bool A_3);
		void StopVibration();
		void Dispose();
		void Finalize();
		void snZhCwQAgWjYPcOgscQYoAtKPcNi(bool A_1);
		void InitializeHaptic();
		void CloseDevice();
	};
}

