#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Dev_Tools_DebugInformation.h"
namespace Rewired_Core::Rewired::Dev::Tools { struct DebugInformation; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Dev::Tools
{
	struct DebugInformation_gaztEGNmJMQcxrCfdyNIrBywHLb : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float dapArqRhhDkaxApVBZIWactTHLn;
			float xyFMkMPaSjzQeBitiyiVlhigoUd;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float get_labelWidth();
		static void set_labelWidth(float value);
		static float get_fieldWidth();
		static void set_fieldWidth(float value);
	};
}

