#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Platforms_XboxOne_XboxOneGamepadExtension.h"
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct XboxOneGamepadExtension; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UTsiDltkMfrsEEHHJEydOZPBsEE.h"
namespace Rewired_Core { struct UTsiDltkMfrsEEHHJEydOZPBsEE; };
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct IXboxOneInputSource; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	struct XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::UTsiDltkMfrsEEHHJEydOZPBsEE oqglkpWRsdNrfurKrChCKXAXziOV;
		Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* KUzVIZDtxkQBKPHUxdJauGnMfQN;
		bool JqJfvFKwCJdgbpLKBLFxBdJLzWz;
		struct StaticFields
		{
			int32_t SRtINdmUAFeXLoAzPazrbCefxK;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(bool supportsVibration, Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* xboxOneInputSource, Rewired_Core::UTsiDltkMfrsEEHHJEydOZPBsEE vibrationData);
	};
}

