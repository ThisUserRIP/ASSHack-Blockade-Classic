#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UnityUnifiedMouseSource.h"
namespace Rewired_Core::Rewired { struct UnityUnifiedMouseSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };

namespace Rewired_Core::Rewired
{
	struct UnityUnifiedMouseSource_dMqhublJhoOKjWsEwLhLJfXEEitH : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<float>* ATNJOeCRRwkBbFcHuvPQpniMdaC;
		IL2CPP::Array<bool>* qREBHYFwnzPpbbxtUSUlUtDwbcXS;
		void _ctor(int32_t buttonCount, int32_t axisCount);
		void qRAJlAiijPDGYnhEJwCItiiccBH(IL2CPP::Array<bool>* A_1, IL2CPP::Array<float>* A_2);
		void mzFaKTeDwcQiZDjmoXjXnLysDPNJ(Rewired_Core::Rewired::ControllerDataUpdater* A_1);
		void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
		void NLurAsDPJpjERcnchwdzWKcYlZEA();
	};
}

