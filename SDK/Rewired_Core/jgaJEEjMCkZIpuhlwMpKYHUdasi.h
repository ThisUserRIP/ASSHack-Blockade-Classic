#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "FEiBDoFUdZlvtAemNbWuqFrnaKO.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct ZIAAVUtCRuggKkjYOeCeJntDlQmQ; };
namespace Rewired_Core { struct spZDJRewmbxAsUKXRWZDtdnqsYI; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "auwvIvcBDbhOhmuldPTxydeShmq.h"

namespace Rewired_Core
{
	struct jgaJEEjMCkZIpuhlwMpKYHUdasi : Rewired_Core::FEiBDoFUdZlvtAemNbWuqFrnaKO
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(Rewired_Core::ZIAAVUtCRuggKkjYOeCeJntDlQmQ* nativeGameController, Rewired_Core::spZDJRewmbxAsUKXRWZDtdnqsYI* joystickInfo);
		bool IsAttached();
		Rewired_Core::auwvIvcBDbhOhmuldPTxydeShmq get_DeviceType();
		void InitializeHaptic();
		void CloseDevice();
	};
}

