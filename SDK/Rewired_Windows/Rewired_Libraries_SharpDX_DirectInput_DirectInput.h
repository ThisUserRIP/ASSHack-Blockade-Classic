#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "qBxJquMCjbjCovNTSnUsIuJOTGj.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Windows { struct rBUGPecHCHOQccdWgbGopALptrQR; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "NlJQQTTYMgYAvXIvFEjKpjmYGwS.h"
#include "zotrNfjrxlaYOfMcNsKwvEQcQylq.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct IntPtr; };
namespace Rewired_Windows { struct qBxJquMCjbjCovNTSnUsIuJOTGj; };
namespace Rewired_Windows { struct ErChskbRuEVIVIZQsLWoMWoKMTUu; };
#include "..\mscorlib\System_IntPtr.h"

namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput
{
	struct DirectInput : Rewired_Windows::qBxJquMCjbjCovNTSnUsIuJOTGj
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>* GetDevices();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Windows::rBUGPecHCHOQccdWgbGopALptrQR>* GetDevices(Rewired_Windows::NlJQQTTYMgYAvXIvFEjKpjmYGwS deviceClass, Rewired_Windows::zotrNfjrxlaYOfMcNsKwvEQcQylq deviceEnumFlags);
		int32_t GetDeviceCount(Rewired_Windows::NlJQQTTYMgYAvXIvFEjKpjmYGwS deviceClass, Rewired_Windows::zotrNfjrxlaYOfMcNsKwvEQcQylq deviceEnumFlags);
		static int32_t CreateDevice_(void* pIDirectInput8, void* rguid, void* lplpDirectInputDevice, void* pUnkOuter);
		static int32_t EnumDevices_(void* pIDirectInput8, int32_t dwDevType, void* lpCallback, void* pvRef, int32_t dwFlags);
		void CreateDevice(mscorlib::System::Guid arg0, intptr_t& arg1, Rewired_Windows::qBxJquMCjbjCovNTSnUsIuJOTGj* arg2);
		void EnumDevices(int32_t arg0, Rewired_Windows::ErChskbRuEVIVIZQsLWoMWoKMTUu* arg1, intptr_t arg2, Rewired_Windows::zotrNfjrxlaYOfMcNsKwvEQcQylq arg3);
	};
}

