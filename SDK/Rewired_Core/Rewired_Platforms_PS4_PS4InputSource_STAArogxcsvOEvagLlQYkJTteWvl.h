#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_PS4_PS4InputSource_pmJEKRUMgpBHuzJpSxLkWahmEdu.h"
#include "Rewired_Platforms_PS4_PS4InputSource.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct PS4InputSource; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4InputSource_STAArogxcsvOEvagLlQYkJTteWvl : Rewired_Core::Rewired::Platforms::PS4::PS4InputSource_pmJEKRUMgpBHuzJpSxLkWahmEdu
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t HQGwtFkfrtpKCnZthIopFyqUkW;
			int32_t NFDrpyMSEQSmoWpJHEcLgpMdakK;
			float TBTMXIlhgXPpqKLuRbzcszGbike;
			int32_t JLeWdfQaMGiMHUkbmIfbrpIXRIu;
			int32_t hvQHupeVwYPMWShqgMjgISOSBGZ;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* name, int32_t playerId, int32_t unityJoystickId, int32_t handle);
		void UpdateElementValues();
	};
}

